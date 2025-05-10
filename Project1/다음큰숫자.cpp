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

    //n�� ���� ū ���ڴ� n���� ū �ڿ���
    //n�� ���� ū ���ڿ� n�� 2���� ��ȯ���� �� 1�� ������ ����
    //n�� ���� ū ���ڴ� ���� 1,2�� �������ϴ� �������� ��

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