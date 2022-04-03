#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include<stdio.h>
#include<string.h>

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

struct Peoinfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
//通讯录类型
struct Contact
{
	struct Peoinfo data[MAX];  /* 存放一个信息*/
	int size;    /*记录当前已有的元素个数*/
};

//声明函数
//初始化通讯录中的函数
void InitContact(struct Contact* ps);
//增加一个函数到通讯录
void AddContact(struct Contact* ps);
//打印通讯中的信息
void ShowContact( struct Contact* ps);
//删除信息
void DelContact(struct Contact* ps);
//查找联系人
void SearchContact(struct Contact* ps);
//修改指定联系人
void Modifycontact(structn Contact* ps);