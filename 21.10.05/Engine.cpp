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
	cout << "�Է¹޴´�." << endl;
}

void Engine::Process()
{
	cout << "ó���Ѵ�." << endl;
}

void Engine::Render()
{
	cout << "�������Ѵ�." << endl;
}
