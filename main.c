#include "printf.h"
/*
int main(void)
{
    //int a = 34636626;
    //unsigned int c = -2444668;
    int b = 59;
    //int X = 34;
    //char *str = "why no";
    ft_printf("%d\n", b);
	//printf("\n");
    //printf("%d\n", b);
    return(0);
}*/

int main()
{
        //int             a = -4;
        //int             b = 0;
        char    c = 'a';
        //int             d = 2147483647;
        //int             e = -2147483648;
        //int             f = 42;
        //int             g = 25;
        //int             h = 4200;
        int             i = 8;
        int             j = -12;
        int             k = 123456789;
        int             l = 0;
        int             m = -12345678;
        char    *n = "abcdefghijklmnop";
        //char    *o = "-a";
        //char    *p = "-12";
        //char    *q = "0";
        //char    *r = "%%";
        //char    *s = "-2147483648";
        //char    *t = "0x12345678";
        //char    *u = "-0";

        ft_printf("Simple input test\n");
        ft_printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n", i, j, k, l, m, n, c, c, j, j, j); //T2
		printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X", i, j, k, l, m, n, c, c, j, j, j);
        //ft_printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d", i, j, k, l, m, c, e, d); //T3
        //ft_printf("%1i, %1d, %1d, %1d, %1d, %1d, %1d, %1d", i, j, k, l, m, c, e, d); //T4
        //ft_printf("%2i, %2d, %2d, %2d, %2d, %2d, %2d, %2d", i, j, k, l, m, c, e, d);

}




/*
int main(void)
{
	char *str = "fama";
	int i = 5;
	char *np = 0;
	int w = 12;
	char *ptr = "Hello world!";
    int p = 43;
	//printf("%s\n", ptr);
	//ft_printf("|%s|\n", ptr);
	//printf("printf test\n");
	//ft_printf("|printf test|\n");
	printf("|%d is null pointer|\n", 0);
	ft_printf("|%d is null pointer|\n", 0);
	//printf("%d = 5\n", i);
	//ft_printf("|%d = 5|\n", i);
//    printf("hello je bent %s en zou %d jaar en uw %p livelings letter is %c\n", "qwerty", 19, p, 'F');
	return(0);
}*/
		
//#ifdef TEST_PRINTF
/*
int main(void)
{
	char *ptr = "Hello world!";
	char *np = 0;
	int i = 5;
	unsigned int bs = sizeof(int)*8;
	int mi;
	char buf[80];

	mi = (1 << (bs-1)) + 1;
	printf("%s\n", ptr);
	ft_printf("|%s|\n", ptr);
	printf("printf test\n");
	ft_printf("|printf test|\n");
	printf("|%s is null pointer|\n", np);
	ft_printf("|%s is null pointer|\n", np);
	printf("%d = 5\n", i);
	ft_printf("|%d = 5|\n", i);
	printf("%d = - max int\n", mi);
	ft_printf("|%d = - max int|\n", mi);
	printf("|char %c = 'a'|\n", 'a');
	ft_printf("|char %c = 'a'|\n", 'a');
	printf("hex %x = ff\n", 0xff);
	ft_printf("|hex %x = ff|\n", 0xff);
	printf("hex %02x = 00\n", 1);
	ft_printf("|hex %02x = 00|\n", 1);
	printf("signed %d = unsigned %u = hex %x\n", -3, -3, -3);
	ft_printf("|signed %d = unsigned %u = hex %x|\n", -3, -3, -3);
	printf("%d %s(s)%|\n", 0, "message");
	ft_printf("|%d %s(s)%|\n", 0, "message");
	printf("\n");
	ft_printf("\n");
	printf("%d %s(s) with %%\n", 0, "message");
	ft_printf("|%d %s(s) with %%\n", 0, "message");
	*/
	/*sprintf(buf, "justif: \"%-10s\"\n", "left"); printf("%s", buf);
	sprintf(buf, "justif: \"%10s\"\n", "right"); printf("%s", buf);
	sprintf(buf, " 3: %04d zero padded\n", 3); printf("%s", buf);
	sprintf(buf, " 3: %-4d left justif.\n", 3); printf("%s", buf);
	sprintf(buf, " 3: %4d right justif.\n", 3); printf("%s", buf);
	sprintf(buf, "-3: %04d zero padded\n", -3); printf("%s", buf);
	sprintf(buf, "-3: %-4d left justif.\n", -3); printf("%s", buf);
	sprintf(buf, "-3: %4d right justif.\n", -3); printf("%s", buf);

	return 0;
}
*/