/*In this question, you are tasked with taking two characters and an integer represents the key for Caesar Cipher and shows Encrypted characters with a given key value.
Caesar cipher is a basic encryption method where each letter in the plaintext is shifted a certain number of positions up or down the alphabet.
This numerical shift, known as the "key," is typically chosen by the user. For instance, with a key of 3:
- 'A' becomes 'D'
- 'B' becomes 'E'
- 'C' becomes 'F'
- ...
- 'X' becomes 'A'
- 'Y' becomes 'B'
- 'Z' becomes 'C'
While historically significant, the Caesar cipher is a straightforward and easily breakable encryption technique when confronted with modern cryptographic methods.*/

#include <stdio.h>

int main()
{
    int num ;
    char ch1, ch2;
    printf("Enter two characters and a key: ");
    scanf("%c %c %d",&ch1, &ch2 , &num);
    ch1 = (ch1 -97 + num);
    ch2 = (ch2 -97 + num);
    ch1 = (ch1%26)+97;
    ch2 = (ch2%26)+97;
    printf("Encrypted characters: %c %c",ch1, ch2);
    
    return 0;
}
