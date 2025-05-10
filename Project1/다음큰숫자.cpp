#include <string>
#include <vector>

using namespace std;

string GetBit(int n)
{
    string strBit;
    while (n > 0)
    {
        strBit = to_string(n % 2) + strBit;
        n /= 2;

    }

    return strBit;

}

int CountOne(string str)
{
    int a = 0;
    for (int i = 0; i < str.size(); ++ i)
    {
        if (str[i] == '1')
        {
            a++;
        }
    }



    return a;
}

int solution(int n) 
{
    int answer = 0;

    //n의 다음 큰 숫자는 n보다 큰 자연수
    //n의 다음 큰 숫자와 n은 2진수 변환했을 때 1의 개수가 같다
    //n의 다음 큰 숫자는 조건 1,2를 ㄱ만족하는 가장작은 수

    string strFirstBit = GetBit(n);
    while (true)
    {
        n++;

        string strFindBit = GetBit(n);


        if (CountOne(strFirstBit) == CountOne(strFindBit))
        {
            break;
        }
        
    }



    return n;
}