/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 21:54:14 by aganea            #+#    #+#             */
/*   Updated: 2024/07/14 18:03:55 by aganea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char i;

		i = 'z';
		while (i >= 'a') {
			write(1, &i, 1);
			i--;
	}
//write(1, "\n", 1);
}
/*
int main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
*/

