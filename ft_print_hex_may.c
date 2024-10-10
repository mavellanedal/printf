#include "printf.h"

int ft_print_hex_min(va_list args)
{
    unsigned int num;
    int len;
    char hex[8];
    int i;

    i = 0;
    len = 0;
    if (num == 0)
    {
        write(1, "0", 1);
        return (1);
    }
    while (num > 0)
    {
        hex[i++] = "0123456789ABCDEF"[num % 16];
        num /= 16;
    }
    while (--i >= 0)
        len += write(1, &hex[i], 1);
    return (len);
}