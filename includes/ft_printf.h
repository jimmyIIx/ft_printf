/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nippolit <nippolit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:28:07 by nippolit          #+#    #+#             */
/*   Updated: 2024/05/17 19:12:35 by nippolit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <stddef.h>

int		ft_printf(const char *print, ...);

// process

void	process_d(int arg, int *index);
void	process_i(int arg, int *index);
void	process_c(char arg, int *index);
void	process_s(char *arg, int *index);
void	process_u(unsigned int arg, int *index);
void	process_p(void *arg, int *index);
void	process_x(unsigned int arg, int *index);
void	process_xx(unsigned int arg, int *index);

// output

void	output_char(char c, int *index);
void	output_nbr(long long nbr, int *index);
void	output_str(char *str, int *index);
void	convert_exa(unsigned long arg, char *address);

#endif
