/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:36:11 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/10 18:05:00 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour > 0 && hour < 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 AM and %d.00 AM\n",\
				hour, hour + 1);
	else if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 PM AND 1.00 PM\n");
	else if (hour > 12 && hour < 23)
	{
		hour = hour - 12;
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 PM and %d.00 PM\n",\
				hour, hour + 1);
	}
	else if (hour == 24 || hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 AM AND 1.00 AM\n");
	else if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 AM AND 12.00 PM\n");
	else if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 PM AND 12.00 AM\n");
}

int	main()
{
	ft_takes_place(10);
	ft_takes_place(11);
	ft_takes_place(12);
	ft_takes_place(22);
	ft_takes_place(23);
	ft_takes_place(24);
}
