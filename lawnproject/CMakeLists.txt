project(LawnProject)


file(GLOB_RECURSE ALL_FILES CONFIGURE_DEPENDS
    "*.cpp" "*.c"
    "*.h" "*.hpp"
)

set(FILTERED_FILES "")
foreach(FILE_PATH ${ALL_FILES})
    file(RELATIVE_PATH REL_PATH "${CMAKE_CURRENT_SOURCE_DIR}" "${FILE_PATH}")
    string(REPLACE "\\" "/" REL_PATH "${REL_PATH}") # normalize for Windows
    list(APPEND FILTERED_FILES "${FILE_PATH}")
endforeach()

set(ALL_FILES ${FILTERED_FILES})

set(SOURCE_FILES "")
set(HEADER_FILES "")

foreach(FILE_PATH ${ALL_FILES})
    get_filename_component(EXT "${FILE_PATH}" EXT)
    string(TOLOWER "${EXT}" EXT)

    if(EXT STREQUAL ".cpp" OR EXT STREQUAL ".c" OR EXT STREQUAL ".cxx")
        list(APPEND SOURCE_FILES "${FILE_PATH}")
    elseif(EXT STREQUAL ".h" OR EXT STREQUAL ".hpp")
        list(APPEND HEADER_FILES "${FILE_PATH}")
    endif()
endforeach()

function(capitalize_path INPUT OUTPUT)
    set(RESULT "")
    string(REPLACE "\\" "/" INPUT_PATH "${INPUT}")
    string(REPLACE "/" ";" PATH_PARTS "${INPUT_PATH}")
    foreach(PART ${PATH_PARTS})
        # handle exceptions
        string(TOLOWER "${PART}" LOWER_PART)
        string(SUBSTRING "${PART}" 0 1 FIRST_CHAR)
        string(SUBSTRING "${PART}" 1 -1 REST_CHARS)
        string(TOUPPER "${FIRST_CHAR}" FIRST_CHAR)
        set(PART "${FIRST_CHAR}${REST_CHARS}")
        string(APPEND RESULT "${PART}/")
    endforeach()
    string(REGEX REPLACE "/$" "" RESULT "${RESULT}")
    set(${OUTPUT} "${RESULT}" PARENT_SCOPE)
endfunction()

# group source files
foreach(FILE_PATH ${SOURCE_FILES})
    file(RELATIVE_PATH REL_PATH "${CMAKE_CURRENT_SOURCE_DIR}" "${FILE_PATH}")
    get_filename_component(DIR_PATH "${REL_PATH}" PATH)
    capitalize_path("${DIR_PATH}" CAPITALIZED_GROUP)
    source_group("Source Files/${CAPITALIZED_GROUP}" FILES "${FILE_PATH}")
endforeach()

# group header files
foreach(FILE_PATH ${HEADER_FILES})
    file(RELATIVE_PATH REL_PATH "${CMAKE_CURRENT_SOURCE_DIR}" "${FILE_PATH}")
    get_filename_component(DIR_PATH "${REL_PATH}" PATH)
    capitalize_path("${DIR_PATH}" CAPITALIZED_GROUP)
    source_group("Header Files/${CAPITALIZED_GROUP}" FILES "${FILE_PATH}")
endforeach()

set(ALL_GROUPED_FILES ${SOURCE_FILES} ${HEADER_FILES})

add_executable(${PROJECT_NAME} ${ALL_GROUPED_FILES})

target_link_libraries(${PROJECT_NAME} PUBLIC PopLib TodLib)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)


set_target_properties(${PROJECT_NAME}
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/out"
    RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_SOURCE_DIR}/out"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_SOURCE_DIR}/out"
    RUNTIME_OUTPUT_NAME ${PROJECT_NAME}
)

include(${CMAKE_SOURCE_DIR}/engine/cmake/CopyDLLPost.cmake)
copy_dll_post(${PROJECT_NAME} ${BASS_PATH})