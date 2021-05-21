#include <stdio.h>

char * s2 ="hallo";
char * s1 ="wereld";
char * s3 ="!";

void combineer(char * str1, char * str2, char * str3){
  printf("%s %s%s\n", str1, str2, str3);
}

int main(){
  combineer(s1,s2,s3);
  return 13;
}
