/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keroglu <keroglu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:41:43 by keroglu           #+#    #+#             */
/*   Updated: 2023/10/30 17:47:47 by keroglu          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t				i;
	unsigned char		*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
#include <stdio.h>

// int main() {
// 	int buffer[] = {1,2,3,4,5};
// 	int	i = 0;
// 	for(int i = 0 ; i < 5 ; i++)
// 		printf("%d", buffer[i]);
// 	printf("\n");
// 	ft_bzero(buffer,sizeof(int) * 4);
// 	for(int i = 0 ; i < 5 ; i++)
// 		printf("%d", buffer[i]);
// 	}
