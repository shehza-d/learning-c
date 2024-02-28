int passThePillow(int n, int time)
{
	if (n > time)
		return time + 1;

	int cyclesCompleted = time / (n - 1);
	int jumpsLeft = time % (n - 1);

	if (cyclesCompleted % 2 == 0)
		return 1 + jumpsLeft;
	else
		return n - jumpsLeft;
}