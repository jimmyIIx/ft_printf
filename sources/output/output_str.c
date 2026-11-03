/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:55:32 by nippolit          #+#    #+#             */
/*   Updated: 2024/05/17 18:46:24 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	output_str(char *str, int *index)
{
	if (!str)
		return (output_str("(null)", index));
	while (*str)
	{
		*index = *index + write(1, str, 1);
		str++;
	}
}
