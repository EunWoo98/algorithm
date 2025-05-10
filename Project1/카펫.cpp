#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) 
{
    vector<int> answer;

    //けけけけけけけけ
    //けいいいいいいけ
    //けいいいいいいけ
    //けいいいいいいけ
    //けいいいいいいけ
    //けけけけけけけけ

    //葛空 慎蝕 = (x-2) * (y -2 )
    //哀事 牒 呪 = 穿端 - 葛空事 = 亜稽 * 室稽 - yellow

    int total = brown + yellow;


    for (int height = 3; height <= total / 3; ++height) 
    {
        if (total % height != 0)
        {
            continue;
        }

        int width = total / height;

        if ((width - 2) * (height - 2) == yellow) 
        {
            return { width, height }; 
        }
    }




    
    return answer;
}