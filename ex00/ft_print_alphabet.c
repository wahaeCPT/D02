/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:45:03 by wkoela            #+#    #+#             */
/*   Updated: 2020/07/09 13:14:44 by wkoela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){
	write(1 ,&c, 1);
}
void ft_print_alphabet(void) {
	int c;
	c = 'a';
	while (c <= 'z'){
		ft_putchar(c);
		c++;
	}
}




