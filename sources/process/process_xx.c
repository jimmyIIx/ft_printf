/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_XX.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:24:46 by nippolit          #+#    #+#             */
/*   Updated: 2024/05/17 18:53:05 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	process_xx(unsigned int arg, int *index)
{
	char	number[10000];
	int		i;

	i = 0;
	convert_exa(arg, number);
	while (number[i])
	{
		if ('a' <= number[i] && number[i] <= 'z')
			number[i] = number[i] - 32;
		i++;
	}
	output_str(number, index);
}
