#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;

    //a : ��ȯ �ʿ��� ����
    //b : �޴� ��
    //n : ���� ������ �ִ� ��

    int current = n;
    int count = 0;
    while (current < 2)
    {
         count += current / b;
         current = (current / b) + (current % b);

    }

    answer = count;

    return answer;
}