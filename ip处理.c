#include <stdio.h>

#pragma warning(disable:4996)

void ip2s(int n)
{
	unsigned char *p = &n;
	printf("%u.%u.%u.%u\n", *p, *(p + 1), *(p + 2), *(p + 3));
}

int s2ip(char s[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	sscanf(s, "%d.%d.%d.%d", &a, &b, &c, &d);

	int ip = 0;
	char *p = &ip;
	*p = a;
	p++;
	*p = b;
	p++;
	*p = c;
	p++;
	*p = d;
	return ip;
}



int main()//IP地址的保存方法,通过一个int传递IPv4的地址，可以保证4个字节足够了
{

	//"192.168.6.252"
	int ip = 0;
	unsigned char *p1 = &ip;
	*p1 = 192;
	p1++;
	*p1 = 168;
	p1++;
	*p1 = 6;
	p1++;
	*p1 = 252;

	printf("ip = %d\n", ip);

	ip2s(ip);

	char s[100] = "192.168.2.3";
	int my_ip = s2ip(s);
	ip2s(my_ip);


	return 0;

}
