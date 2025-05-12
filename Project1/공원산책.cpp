#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes)
{
    vector<int> answer;

    //park S 시작 O 이동 가능 X 이동 불가능 공원 길이 h, w
    //routes 이동 지시 N E S W 북 동 남 서

    int iPosX = 0;
    int iPosY = 0;

    int iMaxX = park[0].size();
    int iMaxY = park.size();
    for (int i = 0; i < park.size(); ++i)
    {
        if (park[i].find("S") != string::npos)
        {
            iPosX = park[i].find("S");
            iPosY = i;
            break;
        }

    }

    for (int i = 0; i < routes.size(); ++i)
    {

        int iPos = routes[i].find(" ");

        string czDirection = routes[i].substr(0, iPos);
        int iCount = stoi(routes[i].substr(iPos + 1));

        int h = 0;
        int w = 0;

        int dx = 0, dy = 0;
        if (czDirection == "N") dy = -1;
        else if (czDirection == "S") dy = 1;
        else if (czDirection == "W") dx = -1;
        else if (czDirection == "E") dx = 1;



        bool bResult = true;
        int nx = iPosX, ny = iPosY;

        for (int step = 0; step < iCount; ++step) {
            nx += dx;
            ny += dy;

            if (nx < 0 || ny < 0 || ny >= iMaxY || nx >= iMaxX || park[ny][nx] == 'X')
            {
                bResult = false;
                break;
            }
        }

        if (bResult == true)
        {
            iPosX = nx;
            iPosY = ny;
        }

    }

    answer.push_back(iPosX);
    answer.push_back(iPosY);

    return answer;
}