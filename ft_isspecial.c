/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspecial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:29:34 by jgo               #+#    #+#             */
/*   Updated: 2023/02/09 17:37:20 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspecial(int c)
{
	if (ft_isspace(c))
		return (0);
	if ((32 <= c && c <= 47) || (58 <= c && c <= 64) \
		|| (91 <= c && c <= 96) || (123 <= c && c <= 126))
		return (0);
	return (1);
}
