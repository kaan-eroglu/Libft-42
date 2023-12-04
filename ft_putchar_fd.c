/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keroglu <keroglu@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:45:06 by keroglu           #+#    #+#             */
/*   Updated: 2023/10/30 17:45:07 by keroglu          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include"unistd.h"
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main(){
// 	int fd;

// 	fd = open("Kaan.txt", O_WRONLY | O_CREAT| O_TRUNC , 0644);
// 	ft_putchar_fd('k',fd);
// 	ft_putchar_fd('a',fd);
// 	ft_putchar_fd('a',fd);
// 	ft_putchar_fd('n',fd);
// }