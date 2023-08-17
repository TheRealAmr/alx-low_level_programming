int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	\\ The line below me is causing the output to go into an infinite loop
	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
