/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minishell.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 15:57:13 by bsautron          #+#    #+#             */
/*   Updated: 2015/02/25 10:32:41 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MINISHELL_H
# define FT_MINISHELL_H

# include "libft.h"
# include "libl.h"
# include <stdio.h>
# include <termios.h>
# include <term.h>

void	ft_tcg(char f);
char	*ft_get_env(char *var, t_lstl *env);
int		ft_outc(int c);
void	ft_make_instruction(char *id, char *area);
char	*ft_prompt(t_lstl *env);
void	ft_signal_handler(int sig);

#endif

