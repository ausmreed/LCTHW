#include <stdio.h>

int main(int argc, char *argv[])
{
  int areas[] = {10, 12, 13, 14, 20};
  char name[] = "Zed";
  char full_name[] = {
    'Z', 'e','d', ' ', 'S', 'h', 'a', 'w', '\0'
  };
  printf("The size of an int is %ld \n", sizeof(int));
  printf("The size of areas (int[0]) is: %ld \n", sizeof(areas));
  printf("The number of ints in areas is: %ld \n", sizeof(areas)/sizeof(int));
  printf("The first area is: %d , the second area is: %d \n", areas[0], areas[1]);

  printf("The size of a char is: %ld \n", sizeof(char));
  printf("The size of name (char[]) is: %ld \n", sizeof(name));
  printf("The number of chars: %ld \n", sizeof(name)/sizeof(char));

  printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

  char austin[] = {
    'A','u','s','t','i','n','\0'
  };
  printf("We will print the name 'Austin' vertically \n");
  int i = 0;
  while (i < 6) {
    printf("The next letter is: %c \n", austin[i]);
    i++;
  }
  printf("The number of characters in the name is %ld \n", sizeof(austin)/sizeof(char));


  printf("Now do this with a for loop \n");
  for (i = 0; i < 6; i++) {
    printf("The next character is: \"%c\" \n", austin[i]);
  }
  return 0;

}
