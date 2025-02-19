/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:59:29 by jocuni-p          #+#    #+#             */
/*   Updated: 2025/02/18 18:26:41 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"

int	main(void)
{
	int				r;
	int				t;
	// char			h = 'h';
	// char			k = 'k';
	// int				m = 1;
	char			s[] = "uno";
	char			w[] = "dos";
	char			*p = NULL;
	// unsigned int	x = 1234;
	
//	write(1, "   ===\n", 7);
//	ft_printf("-%c-%i-%c-\n", h, m, k);
//	printf("-%c-%i-%c-\n", h, m, k);
//	write(1, "   ===\n", 7);
	r = 0;
	t = 0;

	if (r == 0)
		r = ft_printf("ft_printf>-%s-%s-%s-\n", s, p, w);
//	r = ft_printf("ft_printf>-%s-%s-%s-\n", NULL);
	if (t == 0)
		t = printf("   printf>-%s-%s-%s-\n\n", s, p, w);
//	ft_printf("ft_printf>-%s-%s-\n", "holi", "bye");
//	printf("   printf>-%s-%s-\n\n", "holi", "bye");
//	ft_printf("ft_printf retorna >%d\n", r);
//	printf("   printf retorna >%d\n\n", r);
//	r = ft_printf("ft_printf>%c-%s-%i-%%-%p-\n", 'H', "string", 43, &r);
//	t = printf("   printf>%c-%s-%i-%%-%p-\n", 'H', "string", 43, &r);
//	ft_printf("ft_printf retorna >%d\n", r);
//	printf("   printf retorna >%d\n\n", r);
//	ft_printf("ft_printf retorna >%d\n", t);
//	printf("   printf retorna >%d\n\n", t);
//	r = ft_printf("ft_printf>%u-%x-%X\n", x, 87063, 54321);
//	t = printf("   printf>%u-%x-%X\n", x, 87063, 54321);
//	printf("ft_printf retorna >%d\n", r);
//	printf("   printf retorna >%d\n\n", t);
//	r = ft_printf("ft_printf>%%%%%%%u%i%%%c%medsu*-\n", x, 54321, 49);
//	ft_printf>%%%123454321%1edsu*-
//	t = printf("   printf>%%%%%%%u%i%%%c%medsu*-\n", x, 54321, 49);
//	   printf>%%%123454321%1medsu*-
//	printf("ft_printf retorna >%d\n", r);
//	printf("   printf retorna >%d\n\n", t);
//	r = ft_printf("ft_printf>%an%bn%cn%en%zed-\n", x, 54321, 49, 10, 5);
//	t = printf("   printf>%an%bn%cn%en%zed-\n", x, 54321, 49, 10, 5);
//	printf("ft_printf retorna >%d\n", r);
//	printf("   printf retorna >%d\n\n", t);
	return (0);
}
