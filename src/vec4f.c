/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 07:29:46 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/11 07:29:46 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec4f.h"

t_vec4f	vec4f(void)
{
	t_vec4f	q;

	q.w = 0;
	q.x = 0;
	q.y = 0;
	q.z = 0;
	return (q);
}
