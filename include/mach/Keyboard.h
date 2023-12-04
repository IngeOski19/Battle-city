#ifndef ___Keyboard_h___
#define ___Keyboard_h___
#include "Key.h"

class Keyboard
{
public:
	static bool isDown(int k);
	static bool isPressed(int k);
	static bool isReleased(int k);
	static bool isRepeated(int k);
};

#endif