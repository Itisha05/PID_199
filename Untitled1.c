#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int login(int name, int pwd);
int homepage();
int admin();
int varify();
int sceam();
int pay();

int login(int name, int pwd)
{
	int len, n=1;
	char ch;
	int a[10], b[10];
	printf("\nYou shoud enter same User ID and Password\n");
	printf("\nEnter Your User ID : \n");
	scanf("%s",&a);
	printf("\nEnter Your Password : \n");
	scanf("%s",&b);
	len=strcmp(a,b);
	do
	{
		if(len==0)
		{
			homepage();
			break;
		}
		else
		{
			printf("\nYoudidn't Enter correct User ID or Password; so, You cannot enter. Please try again...");
			break;
		}
	}
	while(ch=='Y' || ch=='y');
}

int homepage()
{
	int choice;
	printf("\n========================================================================================================================\n");
	printf("\nPress <1> for Admin File.\n");
	printf("Press <2> for Verify Your Details.\n");
	printf("Press <3> Solution.\n");
	printf("\nEnter Your Choice : ");
	scanf("%d",&choice);
	printf("\n========================================================================================================================\n");
	if(choice==1)
	{
		admin();
	}
	else if(choice==2)
	{
		varify();
	}
	else if(choice==3)
	{
		sceam();
	}
}

char i, details[20], name[20], email[20], mobile[20], out[10];
int admin()
{
	char ch;
     do{
		printf("\n==> Please Enter Your Valid Details...\n");
		gets(details);
		fflush;
	
		printf("\nEnter your Good Name : ");
		gets(name);
		fflush;
	
		printf("Enter your Email ID : ");
		gets(email);
		fflush;
	
		printf("Enter your Mobile No. : ");
		gets(mobile);
		fflush;
	    printf("Do you want to add another admin file ??");
	    printf("Press 'Y' for Yes and 'N' for No : ");
	    scanf("%c",&ch);
	}
	while(ch=='Y'||ch=='y');
	printf("\nPlease varify your details to press number two.\n");
	homepage();
}
 
int varify()
{
		printf("\nName : %s\n",&name[i]);
		fflush;
		printf("Email ID : %s\n",&email[i]);
		fflush;
		printf("Mobile No. : %s\n",&mobile[i]);
		fflush;
		homepage();
}

int pay()
{
	printf("\n**********************************************************************************************************************\n");
	printf("\nWe have to develop a material that can be easilyused for construction in the salty and sandy desert soils. Which is not affected by salts, which does not require as much maintenance as a regular bitumen mixture, which is strong enough to beused to withstand the pressure of vehicle movement and also could sustain the adverse impact of soil to last for a longer period and do not require much effort on maintainance, which is durable and affordable, which save man power, money and also geological soil, which does not affect BSF operational activities by maintaining the compound and which is affordable for BSF budget allocation.\n");
	printf("\n                                                    Thank You !!!                              \n");
	printf("\n**********************************************************************************************************************\n");
	printf("========================================================================================================================\n");
}

int sceam()
{
	pay();
}

int main()
{
	int x[10], y[10];
	printf("========================================================================================================================\n");
	printf("************************************************************************************************************************\n");
	printf("\n                                  PID - 199                                    \n");
	printf("                          Construction in Dessert Area                        \n");
	printf("                          Developed by : Itisha Desai                         \n");
	printf("                            For the Academic Year :                           \n");
	printf("                                  2022-2023                                   \n");
	printf("                            Branch : Cyber Security                           \n");
	printf("                             Enrollment No. : CS18                            \n");
	printf("\n************************************************************************************************************************\n");
	printf("========================================================================================================================\n");
	login(&x,&y);
	return 0;
}
