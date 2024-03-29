/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_rand.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:15:33 by albaud            #+#    #+#             */
/*   Updated: 2023/10/24 12:36:11 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlib.h"

t_m	m_rand(int x, int y, double min, double max)
{
	t_m	res;

	res.size = x;
	res.arr = new(x, sizeof(t_v));
	if (res.arr == 0)
		v_error("malloc error");
	while (--x >= 0)
		res.arr[x] = v_rand(y, min, max);
	return (res);
}
