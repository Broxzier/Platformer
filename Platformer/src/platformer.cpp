#include "platformer.h"

#include <cstdio>
#include <cstring>

bool g_LogVerbose = true;

#define FILE (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__)
#define LogError(message)	if (g_LogVerbose) std::printf("  Error: %s:%i (%s): " message "\n", FILE, __LINE__, __FUNCTION__)
#define LogWarning(message) if (g_LogVerbose) std::printf("  Warning: %s:%i (%s): " message "\n", FILE, __LINE__, __FUNCTION__)
#define LogMessage(message) if (g_LogVerbose) std::printf("  %s:%i (%s): " message "\n", FILE, __LINE__, __FUNCTION__)
#define LogText(message)	std::printf("    "message"\n")

Platformer::Platformer() {}
Platformer::~Platformer() {}

void Platformer::Start()
{
	LogText("");
	LogMessage("");

}

void Platformer::Run()
{
	LogMessage("");
	for (size_t i = 0; i < 10; i++)
	{
		LogText("Running");
	}
}

void Platformer::Close()
{
	LogMessage("");
	std::getchar();
}
