#include <Thiast.h>

class Sandbox : public Thiast::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Thiast::Application* Thiast::CreateApplication()
{
	return new Sandbox();
}