#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char*s1_c;
    unsigned char*s2_c;
    size_t i;

    s1_c = (unsigned char *)s1;
    s2_c = (unsigned char *)s2;

    s1 = "Hello";
    s2 = "Hillo";
    i = 0;
    while (i < n)
    {
        if (s1_c[i] != s2_c[i])
        return (s1_c[i] - s2_c[i]);
        i++;
    }
    return (0);
}

int main(void)
{
    const void *str1;
    const void *str2;

    printf("%d\n", ft_memcmp(str1, str2, -3));
    printf("|%d|\n", memcmp(str1, str2, -3));
    



}



