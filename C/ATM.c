#include<stdio.h>

int withdraw() {
    printf("test");
}

int deposit() {
    printf("test");
}
int check_balance() {
    printf("test");
}
int out() {
    printf("ATM sewa prayog garnu vayako ma yekdamai dhanyabad");
}
int main() {
int choice;
printf("ATM ma hajur lai swagat cha\n");
printf("Aja Tapai k garne chanu hunxa\n");
printf("[1] Withdraw\n");
printf("[2] Deposit\n");
printf("[3] Check Balance\n");
printf("[4] Exit\n");
scanf("%d", &choice);

switch (choice) {
case 1:
 withdraw();
 break;
case 2:
 deposit();
 break;
case 3:
 check_balance();
 break; 
case 4:
 out();
}
}


