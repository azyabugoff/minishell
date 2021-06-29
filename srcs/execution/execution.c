/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execution.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 14:35:40 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/06/29 22:01:54 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void	execution(t_mini *mini)
{
	while (mini->els)
	{
		if (!mini->els->redir_type)//заменю на проверку на налл в пуш елемент из викиной структуры
			exec_cmd(mini);
		else
			exec_redir(mini);
		mini->els = mini->els->next;
	}
	free_mini_strct(mini, 0);
}