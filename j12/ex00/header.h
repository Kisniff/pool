/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 16:33:23 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/21 10:22:57 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

void	ft_putchar_error(char c);
void	ft_putstr_error(char *c);
void	ft_putchar(char c);
void	ft_putstr(char *c);
char	*concat_str(char *old, char *n);
int		str_len_total(char *old, char *n);
char*	ft_strdup(char *old, char *n);
#endif
