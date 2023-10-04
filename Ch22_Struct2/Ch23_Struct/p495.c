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
		puts("도는 도미니카 공화국"); return;
	case Re:
		puts("레는 레반도프스키 축구킹축구신"); return;
	case Mi:
		puts("미는 미나미노 폼 미쳤따이"); return;
	case Fa:
		puts("파는 파페사르 진짜 개잘함ㅋ"); return;
	case So:
		puts("솔은 솔로몬영입 개꿀"); return;
	case La:
		puts("라는 라키티치.. "); return;
	case Ti:
		puts("시는 시궁창 맨유~"); return;
	}
	puts("이상 축잘알"); return;
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