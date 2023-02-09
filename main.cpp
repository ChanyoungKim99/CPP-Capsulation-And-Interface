#include <iostream>

class Character				// class 안에 열거형, 구조체 모두 넣을 수 있다
{							// 전역변수를 쓸 필요가 없어진다!
public:						// private으로 할시, 열거형, 구조체 숨겨짐
	enum Sex
	{
		Male,
		Female
	};

	struct Sword
	{
		int attackspeed;
		int attackpower;
	};


	int mHealth;
	int mAttack;
	int mDefense;
	Sword mWeapon;
	Sex mSex;
};

int main()
{
	Character warrior;
	warrior.mHealth = 100;
	warrior.mSex = Character::Female;	// enum이 class 안에 있으므로 :: 사용
	warrior.mWeapon.attackpower = 10;
	warrior.mWeapon.attackspeed = 4;
}