/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sel_fmt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 20:56:36 by joan              #+#    #+#             */
/*   Updated: 2025/02/18 17:23:23 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	sel_fmt(char *fmt, int i, va_list args)
{
	if (fmt[i + 1] == '%')
		return (put_c('%'));
	else if (fmt[i + 1] == 'c')
		return (put_c(va_arg(args, int)));
	else if (fmt[i + 1] == 's')
		return (put_s(va_arg(args, char *)));
	else if (fmt[i + 1] == 'd' || fmt[i + 1] == 'i')
		return (put_i(va_arg(args, int)));
	else if (fmt[i + 1] == 'p')
		return (put_p(va_arg(args, void *), "0123456789abcdef"));
	else if (fmt[i + 1] == 'x')
		return (put_hex(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (fmt[i + 1] == 'X')
		return (put_hex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (fmt[i + 1] == 'u')
		return (put_u(va_arg(args, unsigned int)));
	return (0);
}
