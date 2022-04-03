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
//ͨѶ¼����
struct Contact
{
	struct Peoinfo data[MAX];  /* ���һ����Ϣ*/
	int size;    /*��¼��ǰ���е�Ԫ�ظ���*/
};

//��������
//��ʼ��ͨѶ¼�еĺ���
void InitContact(struct Contact* ps);
//����һ��������ͨѶ¼
void AddContact(struct Contact* ps);
//��ӡͨѶ�е���Ϣ
void ShowContact( struct Contact* ps);
//ɾ����Ϣ
void DelContact(struct Contact* ps);
//������ϵ��
void SearchContact(struct Contact* ps);
//�޸�ָ����ϵ��
void Modifycontact(structn Contact* ps);