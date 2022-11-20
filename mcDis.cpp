#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include "math.h"

int main() {
    while (true) {
        int f;
        printf("1：计算两点间距离\n2：根据两点计算挂机点\n3：结束\n");
        scanf("%d", &f);
        if (f == 1) {
            float x1, y1, z1, x2, y2, z2;
            double x, y, z, dis;
            printf("输入坐标1:\n");
            scanf("%f %f %f", &x1, &y1, &z1);
            printf("输入坐标2:\n");
            scanf("%f %f %f", &x2, &y2, &z2);
            x = pow(x2 - x1, 2);
            y = pow(y2 - y1, 2);
            z = pow(z2 - z1, 2);
            dis = pow(x + y + z, 0.5);
            printf("距离为：%.1f", dis);
        }
        else if (f == 2) {
            float x1, y1, z1, x2, y2, z2;
            double x, y, z, dis;
            printf("输入坐标1:\n");
            scanf("%f %f %f", &x1, &y1, &z1);
            printf("输入坐标2:\n");
            scanf("%f %f %f", &x2, &y2, &z2);
            float min_y = y1 > y2 ? y2 : y1;
            x = pow(x2 - x1, 2);
            z = pow(z2 - z1, 2);
            dis = pow(x + z, 0.5) / 2;
            double h = pow(pow(126, 2) - pow(dis, 2), 0.5);
            printf("挂机点为：%.1f %.1f %.1f\n", (x1 + x2) / 2, min_y + h, (z1 + z2) / 2);
        }
        else
        {
            break;
        }
    }
    return 0;
}
