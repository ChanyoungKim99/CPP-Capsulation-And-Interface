#include <iostream>

class Character				// class �ȿ� ������, ����ü ��� ���� �� �ִ�
{							// ���������� �� �ʿ䰡 ��������!
public:						// private���� �ҽ�, ������, ����ü ������
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
	warrior.mSex = Character::Female;	// enum�� class �ȿ� �����Ƿ� :: ���
	warrior.mWeapon.attackpower = 10;
	warrior.mWeapon.attackspeed = 4;
}