/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:30:43 by mavellan          #+#    #+#             */
/*   Updated: 2024/10/10 18:10:26 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_string(va_list args)
{
	char	*str;
	int		len;

	str = va_arg(args, char *);
	len = 0;
	if (!str)
		return (0);
	while (str[len])
	{
		if (write(1, &str[len], 1))
			return (-1);
		len++;
	}
	return (len);
}
