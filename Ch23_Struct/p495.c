#include <stdio.h>

typedef enum syllable
{
	Do = 1, Re = 2, Mi = 3, Fa = 4, So = 5, La = 6, Ti = 7
}Syllable;

void Sound(Syllable sy)
{
	switch (sy)
	{
	case Do:
		puts("���� ���̴�ī ��ȭ��"); return;
	case Re:
		puts("���� ���ݵ�����Ű �౸ŷ�౸��"); return;
	case Mi:
		puts("�̴� �̳��̳� �� ���Ƶ���"); return;
	case Fa:
		puts("�Ĵ� ����縣 ��¥ �����Ԥ�"); return;
	case So:
		puts("���� �ַθ��� ����"); return;
	case La:
		puts("��� ��ŰƼġ.. "); return;
	case Ti:
		puts("�ô� �ñ�â ����~"); return;
	}
	puts("�̻� ���߾�"); return;
}
void p495()
{
	Syllable tone;
	for (tone = Do; tone <= Ti; tone++)
		Sound(tone);
}

void main()
{
	p495();
}