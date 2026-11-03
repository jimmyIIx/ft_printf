/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:53:22 by nippolit          #+#    #+#             */
/*   Updated: 2024/07/19 16:58:19 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	output_nbr(long long nbr, int *index)
{
	if (nbr < 0)
	{
		output_char('-', index);
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		output_nbr(nbr / 10, index);
	}
	output_char(nbr % 10 + '0', index);
}
