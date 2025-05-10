#include <string>
#include <xstring>
#include <vector>
#include <stdlib.h>
using namespace std;

vector<int> solution(string s)
{
    vector<int> answer;

    //���� ��ȯ �ݺ�
    //x�� ��� 01 ����
    //x�� ���̸� c����ϸ� x�� "c�� 2�������� ǥ���� ���ڿ�" �� ����


    int iZeroCount = 0;
    int iLoopCount = 0;

    int iarray = 0;
    while (true)
    {
        if (s == "1")
        {
            break;
        }
        else
        {
            iLoopCount++;
        }

        string strTemp;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] != '0')
            {
                strTemp += s[i];
            }
            else
            {
                iZeroCount++;
            }

        }

        int a = strTemp.size();
        string res;

        while (a > 0)
        {
            res = to_string(a % 2) + res;
            a /= 2;
        }
        s = res;



    }

    answer.push_back(iLoopCount);
    answer.push_back(iZeroCount);

    return answer;
}