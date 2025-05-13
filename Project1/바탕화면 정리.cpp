#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper)
{
    vector<int> answer;

    //wallpaper 배치도
    // 시작지점과 끝지점 찾아야함

    //y,x y,x



    int x = wallpaper[0].size();
    int y = wallpaper.size();

    int iMinX = x;
    int iMaxX = 0;

    int iMinY = y;
    int iMaxY = 0;



    //y찾기
    for (int i = 0; i < wallpaper.size(); ++i)
    {
        //x찾기
        for (int j = 0; j < wallpaper[i].size(); ++j)
        {
            if (wallpaper[i][j] == '#')
            {
                if (j < iMinX)
                {
                    iMinX = j;
                }

                if (j > iMaxX)
                {
                    iMaxX = j;
                }

                if (i < iMinY)
                {
                    iMinY = i;
                }

                if (i > iMaxY)
                {
                    iMaxY = i;
                }

            }

        }
    }

    answer.push_back(iMinY);
    answer.push_back(iMinX);
    answer.push_back(iMaxY + 1);
    answer.push_back(iMaxX + 1);

    return answer;
}