#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int count = 0;


    for (int start = 1; start <= n; ++start) 
    {
        int sum = 0;

        for (int next = start; sum < n; ++next) 
        {
            sum += next;
            if (sum == n) 
            {
                count++;
                break;
            }
        }
    }

    return count;
}