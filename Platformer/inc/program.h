#pragma once

class Program {
public:
	Program() {}
	virtual ~Program() {}

	virtual void Start() = 0;
	virtual void Run() = 0;
	virtual void Close() = 0;
};
