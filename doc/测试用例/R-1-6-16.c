//��ֹʹ���ѱ��ͷ��˵��ڴ�ռ䡣
#include <stdlib.h>
#include <malloc.h>
int main(void) 
{  
    int *x = (int *)malloc(sizeof(int));
    int y;
    int *p;
    p=NULL;
    if(NULL != x)
    {
        *x = 1;  
        //����
        free(x);
        x = NULL;
    }
    else
    {
        return (-1);
    }
    y = (*x);                     //Υ��1
    return (0);
}
