#include <iostream>
#include<string>
using namespace std;

int solution(string s)
{
    int answer = 0;

    // 2�� �پ� �ִ� ���� ���� �� ���̱�
    // ��� ���� �� �� ������ 1

    while (true)
    {
        int a = 0;
        for (int i = 1; i < s.size(); ++i)
        {
            if (s[i - 1] == s[i])
            {
                a = i;
                break;
            }

        }

        
        if (a != 0)
        {
            s = s.substr(0, a - 1) + s.substr(a, s.size());


            if (s.size() == 0)
            {
                return 1;
            }
        }
        else
        {
            return 0;
        }

    }

}