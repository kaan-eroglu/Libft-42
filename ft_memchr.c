/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keroglu <keroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:44:08 by keroglu           #+#    #+#             */
/*   Updated: 2023/10/30 18:17:02 by keroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((unsigned char *)&str[i]);
		i++;
	}
	return (0);
}
#include <stdio.h>

// int main() {
// 	int	nums[] = {1, 2, 3, 4, 50, 5, 6, 7, 8};
// 	int s = 50;
// 	void *result = ft_memchr(nums,s,17);
// 	if(result){
// 		int index = (int *)result - nums;
// 		printf("%d", index);
// 	}
// }
	
