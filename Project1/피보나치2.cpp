#include <string>
#include <vector>

using namespace std;

long long solution(int n)
{
    long long answer = 0;

    //피보나치
    int a = 0;
    int b = 1;

    for (int i = 2; i <= n; ++i)
    {
        int temp = (a + b) % 1234567;
        a = b;
        b = temp;

    }


    return (a + b) % 1234567;
}