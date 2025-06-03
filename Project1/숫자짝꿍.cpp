#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y)
{
    string answer = "";

    vector<int> vecX(10, 0);
    vector<int> vecY(10, 0);

    for (char ch : X)
    {
        vecX[ch - '0']++;

    }

    for (char ch : Y)
    {
        vecY[ch - '0']++;
    }

    for (int i = 9; i >= 0; --i)
    {
        int loop = min(vecX[i], vecY[i]);
        answer += string(loop, i + '0');

    }

    if (answer.empty()) return "-1";
    if (answer[0] == '0') return "0";


    return answer;
}