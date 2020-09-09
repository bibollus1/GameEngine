#pragma once

//#include "Application.cpp"
//#include "Application.h"

#ifdef GE_PLATFORM_WINDOWS

extern GameEngine::Application* GameEngine::CreateApplication();

int main(int argc, char** argv)
{
	GameEngine::Log::Init();
	GE_CORE_WARN("Initalized core log");
	GE_INFO("Initalized app Log");

	auto app = GameEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif 
