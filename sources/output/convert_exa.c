/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_exa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:08:12 by nippolit          #+#    #+#             */
/*   Updated: 2024/05/17 19:11:39 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert_exa(unsigned long int arg, char *address)
{
	char	add[20];
	int		i;
	int		j;
	char	*type;

	type = "0123456789abcdef";
	j = 0;
	i = 0;
	while (arg > 15)
	{
		add[i++] = type[arg % 16];
		arg = arg / 16;
	}
	add[i++] = type[arg % 16];
	while (i--)
	{
		address[j] = add[i];
		j++;
	}
	address[j] = '\0';
}
