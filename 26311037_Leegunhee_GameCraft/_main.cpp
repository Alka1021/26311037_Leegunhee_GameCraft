#include <iostream>
#include "App.h"
using namespace std;

App* g_app;

int main(int argc, char** argv)
{
	App g_app;
	g_pApp = &app;

	if (0 > g_pApp->Init())
		return 0;

	auto r = g_pApp->Run();
	// hr
	{

	}

	return 0;
}