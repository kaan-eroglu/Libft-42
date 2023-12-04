/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keroglu <keroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:41:58 by keroglu           #+#    #+#             */
/*   Updated: 2023/10/30 18:30:41 by keroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*buffer;
	int		area;

	area = (size * count);
	buffer = (char *)malloc(sizeof(char) * area);
	if (!buffer)
		return (NULL);
	while (--area >= 0)
		buffer[area] = '\0';
	return ((void *)buffer);
}

// #include "stdio.h"

// int main(){

// 	size_t	*arr;

// 	size_t n = 5;
// 	arr = (size_t *)ft_calloc(n, sizeof(size_t));
// 	size_t	i = 0;
// 	while (i < n)
// 	{
// 		arr[i] = i * 10;
// 		i++;
// 	}
// 	i = 0;
// 	while(i < n){
// 		printf("dizi[%zu] = %zu\n", i, arr[i]);
// 		i++;
// 	}
// 	free(arr);
// }

