#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Thiast::Application* Thiast::CreateApplication();

int main(int argc, char** argv) {
	printf("Thiast has successfully loaded!\n");
	auto app = Thiast::CreateApplication();
	app->Run();
	delete app;
}

#endif