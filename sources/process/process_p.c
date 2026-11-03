/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:24:46 by nippolit          #+#    #+#             */
/*   Updated: 2024/05/17 19:12:15 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	process_p(void *arg, int *index)
{
	char	address[20];

	if (!arg)
		return (output_str("(nil)", index));
	convert_exa((unsigned long)arg, address);
	output_str("0x", index);
	output_str(address, index);
}
