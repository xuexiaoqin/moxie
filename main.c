#include <stdio.h>
#include <math.h>

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
            printf("请输入车辆坐标\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);
            arr[index].x = x;
            arr[index].y = y;
            index++;

            printf("添加成功，点击回车继续\n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);
        }
        if (code == 2)
        {
            if (index > 0)
            {
                index--;
                printf("删除成功，点击回车继续\n");
                char m;
                scanf("%c", &m);
                scanf("%c", &m);
            }
            else
            {
                printf("无车辆信息，点击回车继续\n");
                char m;
                scanf("%c", &m);
                scanf("%c", &m);
            }
        }
        if (code == 3)
        {
            printf("显示所有车辆位置\n");

            for (int i = 0; i < index; i++)
            {
                printf("车辆位置信息如下(%d,%d)\n", arr[i].x, arr[i].y);
            }
            printf("显示成功，点击回车继续\n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);
        }
        if (code == 4)
        {
            printf("请输入当前位置\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);

            double min = 10000;
            int car = 0;

            for (int i = 0; i < index; i++)
            {
                int dx = x - arr[i].x;
                int dy = y - arr[i].y;
                double l = sqrt(dx * dx + dy * dy);

                if (min > l)
                {
                    min = l;
                    car = i;
                }
            }
            printf("当前位置与第%d个车最近，距离为%lf\n", car + 1, min);

            printf("点击回车继续\n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);
        }
        if (code == 5)
        {
            break;
        }
    }

    return 0;
}