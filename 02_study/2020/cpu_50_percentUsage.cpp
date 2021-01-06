#include <stdio.h>
#include <windows.h>

int main(void)
{

    int busyTime = 10;
    int idleTime = busyTime;

    long int startTime = 0;
    while(1)
    {
        startTime = GetTickCount();

        //busy loop
        while ((GetTickCount() - startTime) <= busyTime);

        //idle loop
        Sleep(idleTime);
    }
    return 0;
}