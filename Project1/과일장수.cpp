#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) 
{
    int answer = 0;

    //k  = 사과 최대값
    //m  = 상자당 사과 개수

    sort(score.begin(), score.end());
    

    int min = 0;
    int count = 1;
    for (int i = 0; i < score.size(); ++i)
    {
        if (min == 0)
        {
            min = score[i];
        }
        else if( min > score[i])
        {
            min = score[i];
        }
        count++;

        if (count >= m)
        {
            answer += (min * m);

            min = 0;
            count = 1;
        }


    }

    return answer;
}