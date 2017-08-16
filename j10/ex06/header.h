/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 10:08:09 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/16 15:21:42 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

int		ft_atoi(char *str);
char	*ft_itoa(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
int		addition(int nb1, int nb2);
int		soustraction(int nb1, int nb2);
int		multiplication(int nb1, int nb2);
int		division(int nb1, int nb2);
int		modulo(int nb1, int nb2);
#endif
