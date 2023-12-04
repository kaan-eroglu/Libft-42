/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keroglu <keroglu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:45:16 by keroglu           #+#    #+#             */
/*   Updated: 2023/10/30 17:45:17 by keroglu          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include"unistd.h"
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
// int main(){
// 	int	fd;
// 	fd = open("Kaan.txt", O_WRONLY | O_CREAT| O_TRUNC , 0644);	
// 	ft_putendl_fd("asd", fd);
// }
