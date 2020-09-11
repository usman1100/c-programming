#include <stdio.h>

struct Point
{
    int x,y;
};

typedef struct 
{
    int height, width;
}Box;


void printPoint(struct Point p){
    printf("\nX = %d\tY = %d\n", p.x, p.y);
}

void printBox(Box p){
    printf("\nHeight = %d\tWidth = %d\n", p.height, p.width);
}

int main()
{
    struct Point p;
    p.x = 12;
    p.y = 32;
    printPoint(p);

    Box b;
    b.height = 20;
    b.width = 10;
    printBox(b);

}