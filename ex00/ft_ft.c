/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momarumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 09:30:32 by momarumo          #+#    #+#             */
/*   Updated: 2020/07/16 12:11:02 by momarumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ft(int *nbr)
{
        int n;
	n = 42;
	nbr = &n;

	ft_putchar( (*nbr/10) + '0');
	ft_putchar( (*nbr % 10) + '0');
}

