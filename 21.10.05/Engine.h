#pragma once

class Player;
class Map;

//������ ������ �Է��� �ް� ó���ϰ� ȭ�鿡 �׸���.
//�츮 ������ �ÿ��̾ ������ �ְ� �ʵ� ������ �ִ�.(has a)
//0.������ �ʱ�ȭ �Ѵ� Initialize();
//1.������ �Է��� �޴´� Input();
//2.������ ������ ó���Ѵ� Process();
//3.������ ȭ�鿡 �׸���. Render();
//4.������ �����Ѵ�.(�����Ѵ�) Terminalize();

class Engine
{
public:
	Engine(); //Default Constructor 
	~Engine(); //Detructor

	class Player player;
	class Map map;

	void Run();


private: 
	void Initialize();
	void Terminalize();

	void Input();
	void Process();
	void Render();
	
};

