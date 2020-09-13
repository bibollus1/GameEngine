#include "Application.h"
#include <iostream>

#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace GameEngine
{

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		GE_TRACE(e);
		//std::cout << "Application running" << std::endl;
		while (true);
	}

}