#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo)
{
    vector<int> answer;
    //name 이름 명단
    //yearning 그리움 점수
    //photo 점수 산정

    unordered_map <string, int> mapTotal;

    for (int i = 0; i < name.size(); ++i)
    {
        mapTotal.insert(make_pair(name[i], yearning[i]));

    }




    for (int i = 0; i < photo.size(); ++i)
    {
        int iTotalScore = 0;
        for (int j = 0; j < photo[i].size(); ++j)
        {
            unordered_map <string, int>::iterator iter = mapTotal.find(photo[i][j]);

            if (iter != mapTotal.end())
            {
                iTotalScore += iter->second;
            }
            else
            {

            }
        }

        answer.push_back(iTotalScore);

    }



    return answer;

}