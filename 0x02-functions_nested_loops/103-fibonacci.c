#include <stdio.h>
/**
 * main - prints fibonacci numbers starting from 1
 * Return: On successs (0)
 */
int main(void)
{
	long prev_num = 1;
	long current_num = 2;
	int sum = 0;

	while (current_num < 4000000)
	{
		prev_num = current_num;
		current_num += prev_num;
        printf("%li-",current_num);
		if (current_num < 4000000 && current_num % 2 == 0)
			sum += current_num;
	}
	printf("--%d\n", sum);
	return (0);
}