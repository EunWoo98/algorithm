#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(long long n)
{
    vector<int> answer;

    while (n >= 10)
    {

        answer.push_back(n % 10);

        n /= 10;
    }
    answer.push_back(n);

    return answer;
}