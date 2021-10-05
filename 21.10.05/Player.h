#pragma once

//플레이어가 2D 좌표를 가지고 있고 맵에서 이동한다.
class Player
{
public:
	Player();
	~Player();
	//Player(int HP);

	int X;
	int Y;

	void Move();	
};

