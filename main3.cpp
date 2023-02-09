#include <iostream>

class Inventory
{
private:
	int items[10];

public:
	int GetItem(int index)	// 사용자가 내가 만든 기능을 쉽게 사용할 수 있게 
	{						// 제공해주는 기능 =  Interface [인터페이스]
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
	// private으로 items를 숨겨놓으면서도 외부에서 접근할 수 있는 방법!
	// 편의성과 보안 모두 챙기는 방식

	// 필요한 것만 인터페이스로 노출
}