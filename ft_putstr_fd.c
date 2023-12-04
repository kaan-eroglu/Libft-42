/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keroglu <keroglu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:45:40 by keroglu           #+#    #+#             */
/*   Updated: 2023/10/30 17:45:41 by keroglu          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	x;

	if (str)
	{
		x = 0;
		while (str[x])
		{
			ft_putchar_fd(str[x], fd);
			x++;
		}
	}
}
