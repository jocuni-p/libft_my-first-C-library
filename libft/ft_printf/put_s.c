/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_s.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 23:54:43 by joan              #+#    #+#             */
/*   Updated: 2025/02/18 17:21:40 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	put_s(char *s)
{
	int test;
	// write(1, "HOLA", 5);
	if (!s)
		test = write(1, "(null)", 6);
	else
		test = write(1, s, ft_strlen(s));
	return (test);
}
