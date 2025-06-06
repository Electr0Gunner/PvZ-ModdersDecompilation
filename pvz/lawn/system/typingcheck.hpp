#ifndef __TYPINGCHECK_H__
#define __TYPINGCHECK_H__

#include <string>
#include <Poplib/misc/keycodes.hpp>

class TypingCheck
{
protected:
	std::string		mPhrase;
	std::string		mRecentTyping;

public:
	TypingCheck() : mPhrase() { }
	TypingCheck(const std::string& thePhrase);

	void			SetPhrase(const std::string& thePhrase);
	/*inline*/ void	AddKeyCode(PopLib::KeyCode theKeyCode);
	void			AddChar(char theChar);
	/*inline*/ bool	Check();
	bool			Check(PopLib::KeyCode theKeyCode);
};

#endif
