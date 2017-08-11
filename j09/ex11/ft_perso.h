/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:27:44 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/11 16:23:59 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

typedef struct	s_perso
{
	char	*name;
	int		life;
	int		age;
	char	profession[18];
}				t_perso;
# define SAVE_THE_WORLD "Niquer des mères\0"

#endif
