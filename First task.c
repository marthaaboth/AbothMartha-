#include <stdio.h>

int main() {
	int account = 50000;
	int withdraw =20000;
	int balance = 50000;//count balance before withdraw
	balance =account-withdraw;
	printf("The balance after withdraw%d/n",balance);
	return 0;
	
