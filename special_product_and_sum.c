/*
Problem - Arrays Check Special Product vs Sum Condition
Platform - HackerRank
Summary - Checking if the product of the second largest and first smallest element is greater than the sum of the second smallest and first largest element.
*/

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);

/*
 * Complete the 'check_special_condition' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */
char* check_special_condition(int arr_count, int* arr) 
{
    int largest,secondlargest,smallest,secondsmallest;
    
    largest=secondlargest=smallest=secondsmallest=arr[0];
    
    if(arr_count>3)
    {
        for(int i=0;i<arr_count;i++)
        {
            if(largest<arr[i])
            {
                secondlargest=largest;
                largest=arr[i];
            }
            else if(secondlargest<arr[i] && largest!=arr[i])
            {
                secondlargest=arr[i];
            }

            if(smallest>arr[i])
            {
                secondsmallest=smallest;
                smallest=arr[i];
            }
            else if(secondsmallest>arr[i] && smallest!=arr[i])
            {
                secondsmallest=arr[i];
            }
        }

        int prod = secondlargest * smallest;
        int sum = secondsmallest + largest;

        if(prod>sum)
        {
            static char t[] = "True";
            return t;
        }
        else
        {
            static char f[] = "False";
            return f;
        }
    }
    static char invalid[] = "False";
    return invalid;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int N = parse_int(ltrim(rtrim(readline())));

    int* arr = malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        int arr_item = parse_int(ltrim(rtrim(readline())));

        *(arr + i) = arr_item;
    }

    char* result = check_special_condition(N, arr);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}
