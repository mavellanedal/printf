/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:15:55 by mavellan          #+#    #+#             */
/*   Updated: 2024/10/09 16:32:20 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
int		ft_printf(const char *format, ...);
int		ft_print_string(va_list args);
int		ft_print_char(va_list args);
int		ft_print_int(va_list args);
void	ft_putnbr_unsigned(unsigned int n);
int		ft_print_unsigned(va_list args);

#endif
