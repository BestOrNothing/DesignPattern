//��̬̬�����ָ�������һ��ʹ��ǰ��������Ƿ�ΪNULL���б�
#include <malloc.h>
int main(void) 
{  
    int *x = (int *)malloc(sizeof(int));
    *x = 1;                      //Υ��1
    return (0);
}
