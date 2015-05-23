/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scope_default.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 19:03:31 by bsautron          #+#    #+#             */
/*   Updated: 2015/05/23 19:28:42 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_minishell.h>

void	ft_scope_default(char c)
{
	if (c == '"')
		ft_scope_push(&g_env.scope, SCOPE_DQUOTE);
	(void)c;
}
