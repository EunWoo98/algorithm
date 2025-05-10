#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) 
{
    vector<int> answer;

    //����������������
    //����������������
    //����������������
    //����������������
    //����������������
    //����������������

    //��� ���� = (x-2) * (y -2 )
    //���� ĭ �� = ��ü - ����� = ���� * ���� - yellow

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