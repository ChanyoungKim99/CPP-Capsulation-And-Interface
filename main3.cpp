#include <iostream>

class Inventory
{
private:
	int items[10];

public:
	int GetItem(int index)	// ����ڰ� ���� ���� ����� ���� ����� �� �ְ� 
	{						// �������ִ� ��� =  Interface [�������̽�]
		if (index < 0 || index >= 10)
		{
			return -1;
		}
		return items[index];
	}
};


int main()
{
	Inventory myInven;

	std::cout << myInven.GetItem(20) << std::endl;
	// private���� items�� ���ܳ����鼭�� �ܺο��� ������ �� �ִ� ���!
	// ���Ǽ��� ���� ��� ì��� ���

	// �ʿ��� �͸� �������̽��� ����
}