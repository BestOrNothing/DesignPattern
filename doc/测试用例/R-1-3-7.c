//��̬�����ָ���������ʱ��δ������ռ�����ʼ��ΪNULL��
#include <stdlib.h>
#include <malloc.h>
int main(void) 
{  
    int *x;                 //Υ��1
    //...
    x = (int *)malloc(sizeof(int));
    if(NULL != x)                
    {
        *x = 1;                      
    }
    else
    {
        return (-1);
    }
    return (0);
}
