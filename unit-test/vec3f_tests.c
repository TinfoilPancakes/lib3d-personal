/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3f_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:26:46 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/09 14:26:46 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "vec3f.h"

void	printvec3(t_vec3f v)
{
	printf("{x: %f, y: %f, z: %f}\n", v.x, v.y, v.z);
}

int		main(void)
{
	t_vec3f	a = vec3f_init(1, 0, 0);
	t_vec3f b = vec3f_init(0, 1.3, 0);
	t_vec3f c = vec3f_init(3.14, -2, -1);

	printf("a: ");
	printvec3(a);
	printf("b: ");
	printvec3(b);
	printf("c: ");
	printvec3(c);
	printf("Add(a, b): ");
	printvec3(VEC3F_ADD(a, b));
	printf("Sub(a, b): ");
	printvec3(VEC3F_SUB(a, b));
	printf("Mult(a, c): ");
	printvec3(VEC3F_MULT(a, c));
	printf("Div(b, c): ");
	printvec3(VEC3F_DIV(b, c));
	printf("Length(a): %f\n", VEC3F_LENGTH(a));
	printf("Length(b): %f\n", VEC3F_LENGTH(b));
	printf("Length(c): %f\n", VEC3F_LENGTH(c));
	printf("Dot(a, b): %f\n", VEC3F_DOT(a, b));
	printf("Dot(a, c): %f\n", VEC3F_DOT(a, c));
	printf("Cross(a, b): ");
	printvec3(vec3f_cross(a, b));
	printf("Cross(a, c): ");
	printvec3(vec3f_cross(a, c));
	printf("Length(a): %f\n", VEC3F_LENGTH(a));
	printf("Length(b): %f\n", VEC3F_LENGTH(b));
	printf("Length(c): %f\n", VEC3F_LENGTH(c));
	printf("Scale(b, 10.1): ");
	printvec3(VEC3F_SCALE(b, 10.1));
	printf("Normalized(b): ");
	printvec3(VEC3F_NORMALIZE(b));
	printf("Normalized(c): ");
	printvec3(VEC3F_NORMALIZE(c));
	return (0);
}
