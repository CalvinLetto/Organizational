//简单计算器  加减乘除优先级相同
#include<stdio.h>
int add(int x,int y);
int sub(int x,int y);
int cel(int x,int y);
int div(int x,int y);
int s=0;
int main(void){
    int x;
    int y;
    char c;
    printf("请输入计算式子，以等于号结束(简单计算器  加减乘除优先级相同):\n");
    scanf("%d%c%d",&x,&c,&y);
    while(c!='='){
        switch(c){
        case '+':
            s=add(x,y);
            break;
        case '-':
            s=sub(x,y);
            break;
        case '*':
           s= cel(x,y);
            break;
        case '/':
            s=div(x,y);
            break;
        }
      scanf("%c",&c);
      if(c!='='){
      scanf("%d",&y);
      }
      x=s;
    }
    printf("%d",s);
}

int add(int x,int y){
    int result;
    result=x+y;
    return result;
}
int sub(int x,int y){
    int result;
    result=x-y;
    return result;
}
int cel(int x,int y){
    int result;
    result = x*y;
    return result;
}
int div(int x,int y){
    int result;
    result = x/y;
    return result;
}




