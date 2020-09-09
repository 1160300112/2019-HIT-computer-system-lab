#include<stdio.h>

typedef struct comp

{

    int price;

}ls;

typedef union compu

{

    int amount;

    char app;

}yu;

enum DAY

{

    mon=1,tue,wed

}day;



typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start,size_t len)

{

    size_t i;

    for(i=0;i<len;i++)

    {

        printf(" %.2x",start[i]);

    }

    printf("\n");

}

void show_int(int x)

{

    show_bytes((byte_pointer) &x,sizeof(int));

}

void show_short(short x)

{

    show_bytes((byte_pointer) &x,sizeof(short));

}

void show_long(long x)

{

    show_bytes((byte_pointer) &x,sizeof(long));

}

void show_char(char x)

{

    show_bytes((byte_pointer) &x,sizeof(char));

}

void show_float(float x)

{
    show_bytes((byte_pointer) &x,sizeof(float));

}

void show_double(double x)

{
    show_bytes((byte_pointer) &x,sizeof(double));
}

void show_pointer(void *x)

{

    show_bytes((byte_pointer) &x,sizeof(void *));

}

int main()

{

    int a=465;

    int* a1=a;

    short b=1;

    long c=287788;

    char d='b';

    float e=3.46;

    double f=5.623;

    ls g;

    g.price=77;

    yu h;

    h.amount=76;

    h.app='B';

    day=wed;



    printf("int���ͱ�������    a        ���ݣ�%-8d  ��ַ��%p ��Ӧ16���Ƶ��ڴ���ֽڣ�",a,&a);

    show_int(a);

    printf("\n");



    printf("short���ͱ�������  b        ���ݣ�%-8d  ��ַ��%p ��Ӧ16���Ƶ��ڴ���ֽڣ�",b,&b);

    show_short(b);

    printf("\n");



    printf("long���ͱ�������   c        ���ݣ�%-8ld  ��ַ��%p ��Ӧ16���Ƶ��ڴ���ֽڣ�",c,&c);

    show_long(c);

    printf("\n");



    printf("char���ͱ�������   d        ���ݣ�%-8c  ��ַ��%p ��Ӧ16���Ƶ��ڴ���ֽڣ�",d,&d);

    show_char(d);

    printf("\n");



    printf("float���ͱ�������  e        ���ݣ�%f  ��ַ��%p ��Ӧ16���Ƶ��ڴ���ֽڣ�",e,&e);

    show_float(e);

    printf("\n");



    printf("double���ͱ������� f        ���ݣ�%f  ��ַ��%p ��Ӧ16���Ƶ��ڴ���ֽڣ�",f,&f);

    show_double(f);

    printf("\n");



    printf("pointer���ͱ�������a1       ���ݣ�%p  ��ַ��%p ��Ӧ16���Ƶ��ڴ���ֽڣ�",a1,&a1);

    show_pointer(a1);

    printf("\n");



    printf("struct���ͱ������� g.price  ���ݣ�%d        ��ַ��%p ��Ӧ16���Ƶ��ڴ���ֽڣ�",g.price,&g.price);

    show_int(g.price);

    printf("\n");



    printf("union���ͱ�������  h.amount ���ݣ�%d        ��ַ��%p ��Ӧ16���Ƶ��ڴ���ֽڣ�",h.amount,&h.amount);

    show_int(h.amount);

    printf("                   h.app    ���ݣ�%c         ��ַ��%p ��Ӧ16���Ƶ��ڴ���ֽڣ�",h.app,&h.app);

    show_char(h.app);

    printf("\n");



    printf("enum���ͱ�������   day      ���ݣ�%d         ��ַ��%p ��Ӧ16���Ƶ��ڴ���ֽڣ�",day,&day);

    show_int(day);

    printf("\n");


    printf("main�����ĵ�ַΪ %lx\n",main);
    printf("\n");

    printf("print�����ĵ�ַΪ %lx",printf);





}


