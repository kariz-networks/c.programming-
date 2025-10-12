/*
Name:joseph kariuki gichuhi
Reg:CT100/G/26129/25
Desription:correct password
DO WHILE LOOP
*/
#include <stdio.h>
int main () {

  char password=1234;
  
  //prompt the user to input password
  printf("SYSTEM IS LOCKED\n");
  printf("input four digits password\n");
  scanf("%s",&password);

  //check the password
  
  if(password<1234 &&password>1234)
   
  printf("\n incorrect password try again.\n");

  
  else
  printf("access granted\n");
  scanf("%s", &password);
   


return 0;
}
