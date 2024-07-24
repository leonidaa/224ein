/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aganea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:14:56 by aganea            #+#    #+#             */
/*   Updated: 2024/07/17 21:28:54 by aganea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);
void	ft_is_negative(int n)
{
		if (n<0)
			write(1,"N",1);
		else
			write(1,"P",1);

}
/*
int main(void)
{
	ft_is_negative(-5);
	ft_is_negative(1);
	ft_is_negative(0);
	return(0);
}
*/
