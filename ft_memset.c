/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keroglu <keroglu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:44:47 by keroglu           #+#    #+#             */
/*   Updated: 2023/10/30 17:44:51 by keroglu          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}

// #include "stdio.h"
// int main()
// {
//     int k[] = {1,2,3,4,5};
// 	ft_memset(&k[3],1,2);
// 	ft_memset(&k[3],44,1);
// 	for(size_t i=0; i < 5 ; i++){
// 		printf("%d\n",k[i]);
// 	}
// }



