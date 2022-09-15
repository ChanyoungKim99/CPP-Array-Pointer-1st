#include <iostream>

int main()
{
	int array[10]{ };

	for (int i = 0; i < 10; i++)
	{
		std::cout << &array[i] << std::endl;
	}

	// 4byte 단위로 이어져있다.

	std::cout << "---------" << std::endl;

	std::cout << array << std::endl;
	// 위의 표기는 밑과 같은 의미다
	std::cout << &array[0] << std::endl;

	// 배열은 내부적으로 주소를 저장하는 포인터와 같다.
	// 그렇다. 이미 배열은 포인터 개념을 사용하고 있는 것이다.


	int* p;

	p = &array[0];
	*p = 1;
	// 배열의 이름(식별자)은 배열의 0번 원소의 주소와 같다.
	p = array;
	*p = 1;

	p = array + 0; // p = &array[0];	// 100번지
	p = array + 1; // p = &array[1];	// 104번지 (크기인 4만큼 증가)
	p = array + 2; // p = &array[2];    // 108번지 (크기인 4만큼 증가)

	// 배열은 포인터 그 자체다 !!!!

}