#pragma once

#ifdef PN_PLATAFORM_WINDOWS

extern Penuria::Application* Penuria::CreateApplication();

int main(int argc,char** argv)
{
	
	auto app = Penuria::CreateApplication();
	app->Run();
	delete app;
}

#endif // PN_PLATFORM_WINDOWS
