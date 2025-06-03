#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;

    //a : 교환 필요한 개수
    //b : 받는 수
    //n : 내가 가지고 있는 수

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