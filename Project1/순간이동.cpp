#include <iostream>
using namespace std;

int solution(int n)
{
    //K칸을 점프하거나, 온 거리 x2 순간이동
    //건전지 작동 -> 순간이동은 안 줄어든다.
    // k칸 점프하면 k만큼 건전지 사용
    ///최소한의 점프로 n까지 이동하기


    int battery = 0;

    while (n > 0) 
    {
        if (n % 2 == 0) 
        {
            n /= 2;  // 순간이동 (공짜)
        }
        else 
        {
            n -= 1;  // 점프 (배터리 +1)
            battery++;
        }
    }

    return battery;

}