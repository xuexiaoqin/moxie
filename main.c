#include <stdio.h>

struct Point
{
    int x;
    int y;
};
int index = 0;
struct Point arr[1000];
int main()
{

    while (1)
    {
        printf("1 -- 添加车辆位置\n");
        printf("2 -- 删除车辆位置\n");
        printf("3 -- 显示所有车辆位置信息\n");
        printf("4 -- 返回离我位置最近的车辆信息\n");
        printf("5 -- 退出系统\n");

        printf("请输入功能编号\n");
        int code;
        scanf("%d", &code);
        if (code == 1)
        {
        }
        if (code == 2)
        {
        }
        if (code == 3)
        {
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            break;
        }
    }

    return 0;
}