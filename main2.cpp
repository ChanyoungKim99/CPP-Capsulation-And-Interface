#include <iostream>

class Dog
{
public:
	enum Color
	{
		WHITE = 0xF0F0F0,
		BROWN = 0xFFF8DC
	};

	Color mColor;
};

class Cat
{
public:
	enum Color
	{
		WHITE = 0xFFFFFF,
		BLACK = 0xFFFFFF
	};

	Color mColor;
};


int main()
{
	Dog mimi;
	mimi.mColor = Dog::WHITE;

	Cat gnar;
	gnar.mColor = Cat::BLACK;
}								// ĸ��ȭ�� �̿��� ���� �ٸ� ���� ǥ��