#include <iostream>
using namespace std;

int solution(int n)
{
    //Kĭ�� �����ϰų�, �� �Ÿ� x2 �����̵�
    //������ �۵� -> �����̵��� �� �پ���.
    // kĭ �����ϸ� k��ŭ ������ ���
    ///�ּ����� ������ n���� �̵��ϱ�


    int battery = 0;

    while (n > 0) 
    {
        if (n % 2 == 0) 
        {
            n /= 2;  // �����̵� (��¥)
        }
        else 
        {
            n -= 1;  // ���� (���͸� +1)
            battery++;
        }
    }

    return battery;

}