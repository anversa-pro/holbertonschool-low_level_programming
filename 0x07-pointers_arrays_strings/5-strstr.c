#include "holberton.h"

/**
 * *_strstr - locates a substring
 * *@haystack: pointer to a string
 * *@needle: pointer to a substring
 * Return: a pointer to the first occurrence
 */

char *_strstr(char *haystack, char *needle)                                     
{                                                                               
        int i;                                                                  
        int j, k, l; 

        for (i = 0; needle[i] != '\0'; i++)                                     
        {                                                                       
                for (j = 0; haystack[j] != '\0'; j++)                           
                {                                                               
                        if (needle[i] == haystack[j])
                        {
                              for (k = i + 1, l = j + 1; needle[k] != '\0'; k++, l++)
                              {
                                    if (needle[k] != haystack[l])
                                        return (NULL);                                                
                              }
                                return (&haystack[j]);                          
                        }
                }                                                               
        }                                                                       
        return (NULL);                                                          
}
