/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lea <lea@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:52:18 by lbisson           #+#    #+#             */
/*   Updated: 2022/07/06 22:37:26 by lea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c % 256)
			return ((char *)str);
		str++;
	}
	if (*str == '\0' && c == '\0')
		return ((char *)str);
	return (NULL);
}