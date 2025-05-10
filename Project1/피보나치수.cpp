#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;

    //피보나치 수는 F(0) = 0, F(1) = 1일 때, 1 이상의 n에 대하여 F(n) = F(n - 1) + F(n - 2) 가 적용되는 수 입니다.

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