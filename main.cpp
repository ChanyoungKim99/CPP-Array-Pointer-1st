#include <iostream>

int main()
{
	int array[10]{ };

	for (int i = 0; i < 10; i++)
	{
		std::cout << &array[i] << std::endl;
	}

	// 4byte ������ �̾����ִ�.

	std::cout << "---------" << std::endl;

	std::cout << array << std::endl;
	// ���� ǥ��� �ذ� ���� �ǹ̴�
	std::cout << &array[0] << std::endl;

	// �迭�� ���������� �ּҸ� �����ϴ� �����Ϳ� ����.
	// �׷���. �̹� �迭�� ������ ������ ����ϰ� �ִ� ���̴�.


	int* p;

	p = &array[0];
	*p = 1;
	// �迭�� �̸�(�ĺ���)�� �迭�� 0�� ������ �ּҿ� ����.
	p = array;
	*p = 1;

	p = array + 0; // p = &array[0];	// 100����
	p = array + 1; // p = &array[1];	// 104���� (ũ���� 4��ŭ ����)
	p = array + 2; // p = &array[2];    // 108���� (ũ���� 4��ŭ ����)

	// �迭�� ������ �� ��ü�� !!!!

}