#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
using namespace std;

int ConvertDays(const string& date)
{
    int y, m, d;
    sscanf(date.c_str(), "%d.%d.%d", &y, &m, &d);
    return y * 12 * 28 + m * 28 + d;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies)
{
    vector<int> answer;
    unordered_map<string, int> termMap;

    // 약관 맵 구성
    for (const string& term : terms)
    {
        int pos = term.find(' ');
        string type = term.substr(0, pos);
        int months = stoi(term.substr(pos + 1));
        termMap[type] = months;
    }

    int todayDays = ConvertDays(today);

    for (int i = 0; i < privacies.size(); ++i)
    {
        // 공백 기준으로 날짜와 약관 나누기
        int spacePos = privacies[i].find(' ');
        string dateStr = privacies[i].substr(0, spacePos);
        string typeStr = privacies[i].substr(spacePos + 1);

        int expireDays = ConvertDays(dateStr) + termMap[typeStr] * 28;

        if (expireDays <= todayDays)
        {
            answer.push_back(i + 1);
        }
    }

    return answer;
}