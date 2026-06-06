#include <stdio.h>

int fh;
int hun;
int fifty;
int tenn;
int five;
int one;

int exchange(int value)
{
    fh = value / 500;
	value = value % 500;
	hun = value / 100;
	value = value % 100;
	fifty = value / 50;
	value = value % 50;
	tenn = value / 10;
	value = value % 10;
	five = value / 5;
	value = value % 5;
    one = value / 1;
	value = value % 1;
}

void exresult()
{
	if (0 != fh)
	{
		printf("500‰~‹Ê‚Í %d–‡ ‚Å‚·", fh);
	}
	if (0 != hun)
	{
		printf("100‰~‹Ê‚Í %d–‡ ‚Å‚·", hun);
	}
	if (0 != fifty)
	{
		printf("50‰~‹Ê‚Í %d–‡ ‚Å‚·", fifty);
	}
	if (0 != tenn)
	{
		printf("10‰~‹Ê‚Í %d–‡ ‚Å‚·", tenn);
	}
	if (0 != one)
	{
		printf("1‰~‹Ê‚Í %d–‡ ‚Å‚·", one);
	}
}
