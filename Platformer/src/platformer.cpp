#include "platformer.h"

#include <cstdio>
#include <cstring>

#define FILE (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__)
#define DebugWarning(message) std::printf("%s(%i): " message "\n", FILE, __LINE__)
#define DebugLog(message) std::puts(message)

Platformer::Platformer() {}
Platformer::~Platformer() {}

void Platformer::Start() {
	DebugLog("Starting up the platformer");
}

void Platformer::Run() {
	DebugLog("Running");
}

void Platformer::Close() {
	DebugLog("Closing platformer");
	std::getchar();
}
