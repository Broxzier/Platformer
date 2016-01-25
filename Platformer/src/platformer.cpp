#include "platformer.h"
#include <cstring>

bool g_LogVerbose = false;


Platformer::Platformer(int argc, char* argv[])
{
	for (int i = 0; i < argc; i++)
	{
		if (std::strcmp(argv[i], "-verbose") == 0)
		{
			// Enable verbose logging
			g_LogVerbose = true;
		}
	}
}


Platformer::~Platformer() {}


void Platformer::Start()
{
	// Start with empty line
	LogText("");
	// Log function name
	LogMessage("");
}


void Platformer::Run()
{
	// Log function name
	LogMessage("");

	for (size_t i = 0; i < 10; i++)
	{
		LogText("Running");
	}
}


void Platformer::Close()
{
	// Log function name
	LogMessage("");
	// Wait for user input
	std::getchar();
}
