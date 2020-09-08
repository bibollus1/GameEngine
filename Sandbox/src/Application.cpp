
namespace GameEngine
{
	//export data, functions, classes, or class member functions from a DLL
	__declspec(dllimport) void Print();
}


void main()
{
	GameEngine::Print();
}