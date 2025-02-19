/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_gnl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 22:24:52 by joan              #+#    #+#             */
/*   Updated: 2025/02/18 19:51:34 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "./libft/libft.h"

int	main(int ac, char **av)
{
//	if (ac == 4)
	if (ac == 2)
	{
		int		i;
		int		fd1 = open(av[1], O_RDONLY);
		// int		fd2 = open(av[2], O_RDONLY);
		// int		fd3 = open(av[3], O_RDONLY);
		char	*line1;
		// char	*line2;
		// char	*line3;

		i = 10;
		while (i > 0)
		{
			line1 = get_next_line(fd1);
			// line2 = get_next_line(fd2);
			// line3 = get_next_line(fd3);
//			printf("%s%s%s", line1, line2, line3);
			printf("%s", line1);
			free(line1);
			// free(line2);
			// free(line3);
			i--;
		}
		close(fd1);
		// close(fd2);
		// close(fd3);
	}
	return (0);
}
