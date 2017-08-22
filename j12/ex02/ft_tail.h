/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 10:56:35 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/21 18:32:09 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <errno.h>

void	ft_putchar_error(char c);
void	ft_putstr_error(char *str);
void	ft_putchar(char str);
void	ft_putstr(char *str);
int		str_len(char *str);
char	*ft_strdup(char *str);
int		str_len_total(char *str);
char	*concat_str(char *old, char *n);
int		ft_atoi(char *str);
void	ft_putnbr(int str);

#endif
