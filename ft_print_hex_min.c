/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_min.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <mavellan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:33:08 by mavellan          #+#    #+#             */
/*   Updated: 2024/10/10 13:40:49 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        hex[i++] = "0123456789abcdef"[num % 16];
        num /= 16;
    }
    while (--i >= 0)
        len += write(1, &hex[i], 1);
    return (len);
}