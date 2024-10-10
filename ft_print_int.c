/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:02:56 by mavellan          #+#    #+#             */
/*   Updated: 2024/10/10 18:17:50 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft/libft.h" 

int	ft_print_int(va_list args)
{
	int		len;
	int		num;
	char	*str;

	num = va_arg(args, int);
	str = ft_itoa(num);
	len = 0;
	if (!str)
		return (0);
	while (str[len])
	{
		if (write(1, &str[len], 1))
			return (-1);
		len++;
	}
	free(str);
	return (len);
}
