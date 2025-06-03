#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) 
{
    int answer = 0;

    //number -> 1~ n ������ �� ����� ��� -> limit���� ������ power�� ���� -> 1�� 1

    for (int i = 1; i <= number; ++i)
    {
        int count = 0;
        for (int j = 1; j <= i; ++j)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count > limit)
        {
            count = limit;
        }


        answer += count;
    }

    return answer;
}

int solution(int number, int limit, int power)
{
    vector<int> divisorCount(number + 1, 0);
    int answer = 0;

    // ��� ���� �̸� ��� (1~number)
    for (int i = 1; i <= number; ++i)
    {
        for (int j = i; j <= number; j += i)
        {
            divisorCount[j]++;
        }
    }

    // ���� ����
    for (int i = 1; i <= number; ++i)
    {
        if (divisorCount[i] > limit)
            answer += power;
        else
            answer += divisorCount[i];
    }

    return answer;
}
