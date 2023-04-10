/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:38:13 by jgo               #+#    #+#             */
/*   Updated: 2023/04/10 17:21:52 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_arrlen(void **arr)
{
	int	i;

	i = 0;
	if (arr == NULL)
		return (0);
	while (arr[i])
		i++;
	return (i);
}
