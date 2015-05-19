/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfriot <cfriot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 13:36:26 by cfriot            #+#    #+#             */
/*   Updated: 2015/05/19 13:38:00 by cfriot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isnum(char *str)
{
	int		i;

	i = 0;
	if (str)
	{
		while (str[i] >= '0' && str[i] <= '9')
			i++;
	}
	if (i == ft_strlen(str))
		return (0);
	return (1);
}