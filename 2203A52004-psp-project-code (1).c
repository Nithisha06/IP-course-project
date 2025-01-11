#include<stdio.h>
#include<string.h>

struct bank 
{
	int amt, acc;
	char name[20];
};

int main()
{
	int a, i, n, cuamt, j;
	char cuname[20]; 

	printf("Number of Customers: ");
	scanf("%d", &n);

	struct bank cu[100];

	printf("\n");
	for (i = 0; i < n; i++)
	{
		printf("\nEnter name of Account Holder: ");
		scanf("%s", cu[i].name);
		printf("Account Number is 00%d\n", i + 1);
		printf("Enter the Amount in it: ");
		scanf("%d", &cu[i].amt);
		cu[i].acc = i + 1;
	}

	printf("\n\t1. Create Account\n\t2. Credit Money\n\t3. Withdraw Money\n\t4. Debit Money\n\t5. Check Balance\n");
	printf("\t6. View The Customers List\n");

	do
	{
		printf("Enter your Choice: ");
		scanf("%d", &a);

		switch (a)
		{
		case 1:
		{
			printf("______");
			printf("\n\tCreating A New Account");
			printf("\nEnter the Customer name: ");
			scanf("%s", cu[n].name);
			printf("Account Number is : %d\n", n + 1);
			printf("Enter the Amount Want to credit: ");
			scanf("%d", &cu[n].amt);
			cu[n].acc = n + 1;
			n++;
			break;
		}
		case 2:
		{
			printf("______");
			printf("\n\tCrediting Money");
			printf("\nEnter the Account holder name: ");
			scanf("%s", cuname);

			for (i = 0; i < n; i++)
			{
				if (strcmp(cuname, cu[i].name) == 0) 
				{
					printf("ACCOUNT NUMBER IS: %d\n", cu[i].acc);
					printf("Amount in Your Account: %d\n", cu[i].amt);
					printf("Enter the Amount to be Credited: ");
					scanf("%d", &cuamt);
					cu[i].amt = cu[i].amt + cuamt;
					printf("%d is Credited into Your Bank Successfully\n", cuamt);
					printf("Your Bank Balance is: %d\n", cu[i].amt);
				}
			}
			break;
		}
		case 3:
		{
			printf("______");
			printf("\n\tWithdrawing Money");
			printf("\nEnter the Account holder name: ");
			scanf("%s", cuname);

			for (i = 0; i < n; i++)
			{
				if (strcmp(cuname, cu[i].name) == 0) 
				{
					printf("ACCOUNT NUMBER IS: %d\n", cu[i].acc);
					printf("Enter the Amount Less Than %d to be Withdrawn: ", cu[i].amt);
					scanf("%d", &cuamt);
					if (cuamt < cu[i].amt)
					{
						cu[i].amt = cu[i].amt - cuamt;
						printf("%d is Withdrawn from Your Bank Successfully\n", cuamt);
						printf("Your Bank Balance is: %d\n", cu[i].amt);
					}
					else
					{
						printf("Enter the Amount Less than Amount in Your Bank\n");
					}
				}
			}
			break;
		}
		case 4:
		{
			printf("______");
			printf("\n\tDebiting Money");
			printf("\nEnter the Account holder name: ");
			scanf("%s", cuname);

			for (i = 0; i < n; i++)
			{
				if (strcmp(cuname, cu[i].name) == 0)
				{
					printf("ACCOUNT NUMBER IS: %d\n", cu[i].acc);
					printf("Enter the Amount to be Debited: ");
					scanf("%d", &cuamt);
					cu[i].amt = cu[i].amt - cuamt;
					printf("%d is Debited From Your Bank Successfully\n", cuamt);
					printf("Your Bank Balance is: %d\n", cu[i].amt);
				}
			}
			break;
		}
		case 5:
		{
			printf("______");
			printf("\n\tChecking the Balance");
			printf("\nEnter your Name to Check the Balance: ");
			scanf("%s", cuname);

			for (i = 0; i < n; i++)
			{
				if (strcmp(cuname, cu[i].name) == 0)
				{
					printf("ACCOUNT NUMBER IS: %d\n", cu[i].acc);
					printf("Your Bank Balance is: %d\n", cu[i].amt);
				}
			}
			break;
		}
		case 6:
		{
			printf("\n\tViewing Bank Customers List\n");
			for (i = 0; i < n; i++)
			{
				printf("ACCOUNT NUMBER IS: %d\n", cu[i].acc);
				printf("Bank Balance is: %d\n", cu[i].amt);
			}
			break;
		}
		default:
		{
			printf("\nSelect A Valid Option\n");
			break;
		}
		}

		printf("Enter 1 TO REPEAT: ");
		scanf("%d", &j);
	} while (j == 1);

	return 0;
}
