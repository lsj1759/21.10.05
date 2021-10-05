#pragma once

class Player;
class Map;

//엔진은 유저의 입력을 받고 처리하고 화면에 그린다.
//우리 엔진은 플에이어를 가지고 있고 맵도 가지고 있다.(has a)
//0.엔진은 초기화 한다 Initialize();
//1.엔진은 입력을 받는다 Input();
//2.엔진은 정보를 처리한다 Process();
//3.엔진은 화면에 그린다. Render();
//4.엔진은 정리한다.(종료한다) Terminalize();

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

