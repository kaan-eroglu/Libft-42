/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keroglu <keroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:14:04 by keroglu           #+#    #+#             */
/*   Updated: 2023/10/30 17:50:05 by keroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	len;

	i = 0;
	if (s && f)
	{
		len = ft_strlen(s);
		while (i < len)
		{
			(*f)(i, s);
			s++;
			i++;
		}
	}
}
void function(unsigned int index, char *c){
     *c = (char)ft_toupper((int)(*c));
}


// #include "stdio.h"
// int main(){
// 	char s[] = "abcde";
// 	ft_striteri(s,&function);
// 	printf("%s",s);
// }

