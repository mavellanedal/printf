/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:26:29 by mavellan          #+#    #+#             */
/*   Updated: 2024/10/09 16:40:58 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int	main (void)
{
    printf("Test printf con char \n");
    printf("Mi funcion: \n");
    ft_printf("Hello %corld!\n", 'W');
    ft_printf("This is %c test char: printf \n", 'a');
    ft_printf("Origial: \n");
    printf("Hello %corld!\n", 'W');
    printf("This is %c test char: printf\n", 'a');

    printf("Test printf con strings \n");
	ft_printf("Hello, %s!\n", "world");
    ft_printf("This is a test string: %s\n", "printf");
    ft_printf("Origial: \n");
	printf("Hello, %s!\n", "world");
    printf("This is a test string: %s\n", "printf");
 
    printf("Test printf con int \n");
	ft_printf("Hello, %s today is day %d!\n", "world", 20);
    ft_printf("This is a test int: %d\n", 6);
    ft_printf("Origial: \n");
	printf("Hello, %s today is day %d!\n", "world", 20);
    printf("This is a test int: %d\n", 6);
 
    printf("Test printf con unsigend int \n");
	ft_printf("Hello, %s today is day %u!\n", "world", 4294957295);
    ft_printf("This is a test unsigned int: %u\n", 4294967293);
    ft_printf("Origial: \n");
	printf("Hello, %s today is day %lu!\n", "world", 4294957295);
    printf("This is a test int: %lu\n", 4294967293);
 

    return 0;
}
