/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keroglu <keroglu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:44:20 by keroglu           #+#    #+#             */
/*   Updated: 2023/10/30 17:44:21 by keroglu          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n){
		if (str1[i] != str2[i])
			return (str1[i]- str2[i]);
		i++;
	}
	return(0);
}
// #include "stdio.h"

// int main(){
// 	int dizi1[] = {1, 2, 3, 4, 5};
// 	int dizi2[] = {1, 2, 3, 7, 5};
// 	printf("%d\n", ft_memcmp(dizi1,dizi2,12));
// 	printf("%d\n", ft_memcmp(dizi1,dizi2,13));
// }
