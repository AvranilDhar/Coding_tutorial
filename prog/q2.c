//! important
// Write a program to take input of a string
// Then identity the characters
// Which occurrence is maximum

// Sample input
// india
// Output
// i
// Sample input
// baba 
// Output
// ba

#include <stdio.h>

void main()
{
    int i;
    scanf("%d", &n);
    char arr[10];
    fgets(arr, 10, stdin);
    int freq[26] = {0};
    for (i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            freq[arr[i] - 'a']++;
        }
        else if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            freq[arr[i] - 'A']++;
        }
    }
    int max = 0;
    for (i = 0; i < 26; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
        }
    }
    for (i = 0; i < 26; i++)
    {
        if ((arr[i] >= 'a' && arr[i] <= 'z') && freq[arr[i] - 'a'] == max)
        {
            printf("%c", arr[i]);
            freq[arr[i] - 'a'] = 0;
        }
        else if ((arr[i] >= 'A' && arr[i] <= 'Z') && freq[arr[i] - 'A'] == max)
        {
            printf("%c", arr[i]);
            freq[arr[i] - 'a'] = 0;
        }
    }
}