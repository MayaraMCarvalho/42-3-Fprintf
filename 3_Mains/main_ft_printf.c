/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 01:15:22 by macarval          #+#    #+#             */
/*   Updated: 2022/06/03 16:42:19 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int	ft_printf(const char *str, ...);

int	main(void)
{
	printf("\nor: %i\n", printf(" %p ", (void *) -2));
	printf("\n");
	ft_printf("\nft: %i\n", ft_printf(" %p ", (void *) -2));
	printf("\n");

	printf("\nor: %i\n", printf(" %x ", -2));
	printf("\n");
	ft_printf("\nft: %i\n", ft_printf(" %x ", -2));
	printf("\n");
	
	return (0);
}
