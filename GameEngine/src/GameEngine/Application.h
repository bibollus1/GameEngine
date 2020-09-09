#pragma once
#include "Core.h"

namespace GameEngine {

	class GAMEENGINE_API Application
	{
	public:
		void Run();
		
	};

	// To be defined in client
	Application* CreateApplication();

}

