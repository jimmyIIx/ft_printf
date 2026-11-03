/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:02:22 by nippolit          #+#    #+#             */
/*   Updated: 2024/05/20 15:18:41 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	process(int *index, va_list list, char print);

int	ft_printf(const char *print, ...)
{
	int		index;
	va_list	list;

	index = 0;
	va_start(list, print);
	while (*print)
	{
		if (*print != '%')
		{
			output_char(*print, &index);
			print++;
		}
		else
		{
			process(&index, list, *(print + 1));
			print = print + 2;
		}
	}
	va_end(list);
	return (index);
}

static void	process(int *index, va_list list, char print)
{
	if (print == 'd')
		return (process_d(va_arg(list, int), index));
	if (print == 'i')
		return (process_i(va_arg(list, int), index));
	if (print == 'c')
		return (process_c(va_arg(list, int), index));
	if (print == 's')
		return (process_s(va_arg(list, char *), index));
	if (print == 'u')
		return (process_u(va_arg(list, unsigned int), index));
	if (print == 'p')
		return (process_p(va_arg(list, void *), index));
	if (print == 'x')
		return (process_x(va_arg(list, unsigned int), index));
	if (print == 'X')
		return (process_xx(va_arg(list, unsigned int), index));
	if (print == '%')
		return (output_char('%', index));
}
/*
int	main()
{
	int i;
	i = 0;
	int j;
	i = 0;

	unsigned int teste_u =  4294967295;
	int teste_p = 123;

	printf("\n\n--> teste ft_printf <--\n\n");

	ft_printf("teste 'd' : %d \n", 333);
	ft_printf("teste 'i' : %i \n", 222);
	ft_printf("teste 'c' : %c \n", 'g');
	ft_printf("teste 's' : %s \n", "salut");
	ft_printf("teste 'u' : %u \n", teste_u);
	i = ft_printf("teste 'p' : %p \n", (void *)&teste_p);
	ft_printf("teste 'x' : %x \n", 123456);
	ft_printf("teste 'X' : %X \n", 789456);
 	ft_printf("teste %% \n");

	printf("\n\n--> teste printf <--\n\n");

	printf("teste 'd' : %d \n", 333);
	printf("teste 'i' : %i \n", 222);
	printf("teste 'c' : %c \n", 'g');
	printf("teste 's' : %s \n", "salut");
	printf("teste 'u' : %u \n", teste_u);
	j = printf("teste 'p' : %p \n", (void *)&teste_p);
	printf("teste 'x' : %x \n", 123456);
	printf("teste 'X' : %X \n", 789456);
	printf("teste %% \n");

	printf("\n");

	printf("valeur de ft_printf = %i \n", i);
	printf("valeur de printf = %i \n", j);

	printf("\n");
}
*/
