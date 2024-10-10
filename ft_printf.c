/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <mavellan@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:32:17 by mavellan          #+#    #+#             */
/*   Updated: 2024/10/10 18:19:21 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		cont;

	va_start(args, format);
	cont = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_check_format (args, format, cont);
		}
		else
		{
			write(1, format, 1);
			cont++;
		}
		format++;
	}
	return (cont);
}

int	ft_check_format(va_list args, const char *format, int cont)
{
	if (*format == 's')
		cont += ft_print_string(args);
	else if (*format == 'c')
		cont += ft_print_char(args);
	else if (*format == 'd' || *format == 'i')
		cont += ft_print_int(args);
	else if (*format == 'u')
		cont += ft_print_unsigned(args);
	else if (*format == 'x')
		cont += ft_print_hex(args, 'x');
	else if (*format == 'X')
		cont += ft_print_hex(args, 'X');
	else if (*format == 'p')
		cont += ft_print_pointer(args);
	return (cont);
}
