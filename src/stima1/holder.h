#ifndef _HOLDER_H
#define _HOLDER_H
#include "Graf.h"
#include "Player.h"

namespace stima1 {
	public class UnmanagedHolder {
	public:
		Graf levelfile;
		Player bot;
		Player human;

		UnmanagedHolder();
	};
}

#endif