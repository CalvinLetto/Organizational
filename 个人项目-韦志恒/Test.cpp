//�򵥼�����  �Ӽ��˳����ȼ���ͬ
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
    printf("���������ʽ�ӣ��Ե��ںŽ���(�򵥼�����  �Ӽ��˳����ȼ���ͬ):\n");
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




