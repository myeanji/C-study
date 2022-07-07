#include <stdio.h>

int main(void)
{
    char name[256];
    printf("이름이 뭐예요? ");
    scanf("%s",name,sizeof(name));

    int age;
    printf("몇살이예요? ");
    scanf("%d", &age);

    float height;
    printf("키가 어떻게 되나요? ");
    scanf("%f", &height);

    double weight;
    printf("몸무게가 어떻게 되나요? ");
    scanf("%lf",&weight);
    
    char what[256];
    printf("범죄명이 무엇인가요? ");
    scanf("%s",what,sizeof(what));

    //조사 내용 출력;
    printf("\n\n---범죄자 정보---\n\n");
    printf(" 이름      :%s\n", name);
    printf(" 나이      :%d\n", age);
    printf(" 키        :%.2f\n", height);
    printf(" 몸무게    :%.2lf\n", weight);
    printf(" 범죄명    :%s\n", what);

    return 0;
}