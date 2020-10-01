#include<stdio.h>

int main(int argc, char const *argv[])
{
    if(argc == 3){
        printf("Param1 is %s\n", argv[1]);
        printf("Param2 is %s\n", argv[2]);
    }else if (argc > 3)
    {
        printf("Many param !!!");
    }else
    {
        printf("No param !!!");
    }
    return 0;
}
