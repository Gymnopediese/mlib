/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_apply.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:10:24 by albaud            #+#    #+#             */
/*   Updated: 2023/09/26 15:34:47 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlib.h"

void	m_apply(t_m *a, double (*f)(double))
{
	int		x;
	int		y;

	x = -1;
	while (++x < a->size)
	{
		y = -1;
		while (++y < a->arr[0].size)
			a->arr[x].arr[y] = f(a->arr[x].arr[y]);
	}
}
