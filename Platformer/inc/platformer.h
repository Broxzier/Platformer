#pragma once

#include <cstdio>
#include <cstring>

extern bool g_LogVerbose;

#define FILE (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__)
#define LogError(message)	if (g_LogVerbose) std::printf("  Error: %s:%i (%s): " message "\n", FILE, __LINE__, __FUNCTION__)
#define LogWarning(message) if (g_LogVerbose) std::printf("  Warning: %s:%i (%s): " message "\n", FILE, __LINE__, __FUNCTION__)
#define LogMessage(message) if (g_LogVerbose) std::printf("  %s:%i (%s): " message "\n", FILE, __LINE__, __FUNCTION__)
#define LogText(message)	std::printf("    " message "\n")

#include "program.h"

class Platformer : public Program {
public:
	Platformer(int argc, char* argv[]);
	virtual ~Platformer();

	virtual void Start() override;
	virtual void Run() override;
	virtual void Close() override;
};
