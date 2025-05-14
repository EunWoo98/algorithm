#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, const vector<int>& section) 
{
    int answer = 0;
    int i = 0;
    int len = section.size();

    while (i < len) {
        int start = section[i];
        int end = start + m - 1;
        answer++;



        while (i < len && section[i] <= end) 
        {
            i++;
        }
    }

    return answer;
}