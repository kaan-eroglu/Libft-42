/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keroglu <keroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:54:04 by keroglu           #+#    #+#             */
/*   Updated: 2023/10/30 20:38:18 by keroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
// #include "stdio.h"
// int main(){
// 	const char *s = "asdfghjklşi";
// 	int c = 'd'; 
// 	char *result = ft_strchr(s, c);
// 	printf("Character '%c' found at position: %ld\n",  c, result - s);
// }
