#include <stdio.h>
#include <string.h>

int add(int n1, int n2){
    return n1+n2;
}
int sub(int n1, int n2){
    return n1-n2;
}
int mul(int n1, int n2){
    return n1*n2;
}
int div(int n1, int n2){
    return n1/n2;
}
int sqr(int n1, int n2){
    int result = 1;
    for(int i=0; i<n2; i++){
        result = result*n1;
    }
    return result;
}
int main(){
    char cal[10];
    int num1,num2;

    printf("연산과 숫자 2개를 입력하시오 (add,sub,mul,div,sqr) : ");
    scanf("%s %d %d",cal, &num1, &num2);
    if(strcmp(cal,"add")==0)
        printf("연산 결과 : %d\n",add(num1,num2));
    else if(strcmp(cal,"sub")==0)
        printf("연산 결과 : %d\n",sub(num1,num2));
    else if(strcmp(cal,"mul")==0)
        printf("연산 결과 : %d\n",mul(num1,num2));
    else if(strcmp(cal,"div")==0){
        if(num1%num2==0){
            printf("연산 결과 : %d\n",div(num1,num2));
        }
        else{
            printf("불가능한 연산입니다.");
        }
    }
    else if(strcmp(cal,"sqr")==0)
        printf("연산 결과 : %d\n",sqr(num1,num2));

}