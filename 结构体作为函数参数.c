#include<stdio.h>
#include<string.h>

struct student {
	char name[10];
	int age;
}; 

void print_student(const struct student s) {
	
	printf("name = %s, age = %d\n", s.name, s.age);
}

void set_student(struct student s, const char *name, int age) {
	//һ��������Ҫ�ѽṹ������Ϊ�����������ݣ�ջ���ıȽϴ��ٶȽ��� 
	strcpy(s.name, name);
	s.age = age;
}
void set_student01(struct student *s, const char *name, int age) {
	strcpy(s->name, name);
	s->age = age;
}

int main() {
	
	struct student st = { "tom", 25 };
	print_student(st);
	set_student(st, "mike", 26);//ֵ���� 
	print_student(st);
	set_student01(&st, "mike", 26);//��ַ���� 
	print_student(st);
	
	return 0;
} 
