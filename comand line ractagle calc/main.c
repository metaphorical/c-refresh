#include <stdio.h>

int main(int argc, char *argv[])
{
    double height = atoi(argv[1]);
    double width = atoi(argv[2]);
    
    double area = height*width;
    double perimiter = 2.0 * (width + height);

    printf("Area = %.2f \n\n", area);
    printf("Perimiter = %.2f \n\n", perimiter);

    return 0;
}
