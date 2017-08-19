/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 15:22:42 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/18 16:32:55 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	*begin_list = malloc(sizeof(t_list));
	element->data = data;
	element->next = NULL;
	while (*begin_list != NULL)
		*begin_list = *begin_list->next;
	*begin_list = element;
}
