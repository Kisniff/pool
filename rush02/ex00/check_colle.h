/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_colle.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 18:55:48 by pleroux           #+#    #+#             */
/*   Updated: 2017/08/19 18:57:31 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHECK_COLLE_H
# define __CHECK_COLLE_H
# include <stdlib.h>
# include "gen_colle.h"
# include "print_colle.h"

void	check_num_colle(int x, int y, char *str);
char	*get_colle(int num, int x, int y, char *tab);

#endif
