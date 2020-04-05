#pragma once

#include "Core.h"

namespace Penuria {
	class PENURIA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in Client 
	Application* CreateApplication();

}