/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:24:46 by nippolit          #+#    #+#             */
/*   Updated: 2024/05/17 18:49:49 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	process_x(unsigned int arg, int *index)
{
	char	number[10000];

	convert_exa(arg, number);
	output_str(number, index);
}
