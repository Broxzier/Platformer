#pragma once

#include "program.h"

class Platformer : public Program {
public:
	Platformer();
	virtual ~Platformer();

	virtual void Start();
	virtual void Run();
	virtual void Close();
};
