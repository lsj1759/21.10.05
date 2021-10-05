#include <iostream>

#include "Engine.h"
#include "Player.h"
#include "Map.h"

using namespace std;

Engine::Engine()
{
	cout << "������ ���� �Ǿ����ϴ�." << endl;
	Initialize();
}

Engine::~Engine()
{
	Terminalize();
	cout << "������ �ı� �Ǿ����ϴ�." << endl;
}

void Engine::Initialize()
{
	cout << "�ʱ�ȭ �Ǿ����ϴ�." << endl;
}

//1Frame ���� 1/144s
void Engine::Run()
{
	while (true)
	{
		Input();
		Process();
		Render();
	}
}

void Engine::Terminalize()
{
	cout << "���� �Ǿ����ϴ�." << endl;
}

void Engine::Input()
{
	std::cout << "�Է¹޴´�." << std::endl;
}

void Engine::Process()
{
	std::cout << "ó���Ѵ�." << std::endl;
}

void Engine::Render()
{
	//	system("cls");
	std::cout << "�������Ѵ�." << std::endl;
}