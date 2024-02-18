// Question:
/*https://www.codewars.com/kata/5865918c6b569962950002a1*/

// Explanation:
/*found out the length of str. kept on looping till its length. incremented the count when letter is found in any index of str*/

// Solution:
#include <stddef.h>
#include <string.h>

size_t str_count(const char *str, char letter) {
  int len = strlen(str), count = 0;
  for(int i = 0; i < len; i++)
  {
    if(str[i] == letter)
    {
        count++;
    }
  }
  return count;
  return 0;
}
