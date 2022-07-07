#include <stdio.h>
int main(void)
{
    float name = 10.8;
    printf("%.2f\n",name);

    double height = 180;
    printf("%.3lf\n",height);

    int age = 10;
    printf("%d\n",age);

    char c = 'A';
    printf("%c\n",c);

    int input;
    printf("숫자를 입력하시오");
    scanf("%d",&input);
    printf("%d\n",input);

    int one,two,three;
    printf("숫자 세개를 입력하시오");
    scanf("%d %d %d", &one, &two, &three);
    printf("1 : %d\n",one);
    printf("2 : %d\n",two);
    printf("3 : %d\n",three);

    char str[256];
    scanf("%s",str,sizeof(str));
    printf("%s\n",str);


    return 0;
}