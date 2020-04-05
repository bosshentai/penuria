#include <Penuria.h>

class SandBox : public Penuria::Application 
{
public:
	SandBox()
	{
	}

	virtual ~SandBox()
	{

	}

};

Penuria::Application* Penuria::CreateApplication() 
{
	return new SandBox();
}
