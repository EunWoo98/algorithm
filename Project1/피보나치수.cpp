#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;

    //�Ǻ���ġ ���� F(0) = 0, F(1) = 1�� ��, 1 �̻��� n�� ���Ͽ� F(n) = F(n - 1) + F(n - 2) �� ����Ǵ� �� �Դϴ�.

    int a = 0, b = 1;

    for (int i = 1; i < n; ++i) 
    {
        int temp = a + b;
        a = b;
        b = temp;
    }

    return b;


    return answer;
}