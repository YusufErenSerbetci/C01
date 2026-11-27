/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yserbetc <yserbetc@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 23:39:12 by yserbetc          #+#    #+#             */
/*   Updated: 2026/11/27 23:56:54 by yserbetc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	int	remainder;

	temp = *a / *b;
	remainder = *a % *b;
	*a = temp;
	*b = remainder;
}
