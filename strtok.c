#include <stdio.h>

char *strtok1(char *s1, char *s2);

int main()
{
    char str[50] = "sirw.p.gi";
    char delimeter[10] = ".";
    char *result;

    result = strtok1(str, delimeter);
    printf("%s\n", result);
 }

char *strtok1(char *s1, char *s2)
{
    int count = 0; /*문자열 포인터가 움직인 횟수*/
    while(*s1){    /*문자열이 끝날 때까지 반복*/
        if(*s1==*s2){
            *s1='\0';  /*토큰문자열과 가리키굈는 문자가 같으면 그 위치의 값을 NULL로 만든다*/
        }
        else{
            s1 = s1+1;  /*같지 않으면 포인터를 한칸씩 이동시킨다.*/
            count += 1;  /*움직인 횟수도 기억한다*/
        }
    }
    for(int i=count; i>0; i--){  /*다시 문자열 포힌터의 위치를 원래대로 돌려놓는다*/
        s1 = s1-1;
    }
    return s1;  /* NULL로 바뀐부분 전까지의 문자열을 리턴한다.*/
}
