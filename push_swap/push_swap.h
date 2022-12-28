/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltopluog <ltopluog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:05:37 by ltopluog          #+#    #+#             */
/*   Updated: 2022/12/04 14:05:37 by ltopluog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "stdio.h"

typedef struct t_list
{
	int					content;
	int					index;
	struct t_list		*next;
}	t_numberlist;

/* ------------------------------ RULES ------------------------------*/

void			pa(t_numberlist **lstb, t_numberlist **lsta);
void			pb(t_numberlist **lsta, t_numberlist **lstb);
void			sa(t_numberlist **lst);
void			sb(t_numberlist **lst);
void			ss(t_numberlist *lista, t_numberlist*listb);
void			rr(t_numberlist **lista, t_numberlist **listb);
void			ra(t_numberlist **lsta);
void			rb(t_numberlist **lstb);
void			rra(t_numberlist **lsta);
void			rrb(t_numberlist **lstb);
void			rrr(t_numberlist **lista, t_numberlist **listb);

/* ------------------------------ MAIN FUNC -----------------------------*/
t_numberlist	*push_swap(char **args, int acc);
/* ------------------------------ UTILS ------------------------------*/

int				ft_atoi(char *argv);
void			ft_listadd_front(t_numberlist **lst, t_numberlist *new);
t_numberlist	*ft_lstlast(t_numberlist *lst);
int				ft_lstsize(t_numberlist *lst);
int				ft_lstdata(t_numberlist *lst, int c);
t_numberlist	*ft_lstlast(t_numberlist *lst);
t_numberlist	*ft_lsthere(t_numberlist *lst, int c);
void			index_push(t_numberlist *stack);
int				different(t_numberlist *stack);
void			five_arr(t_numberlist **stack, t_numberlist **b);
int				min_index(t_numberlist *stack);
void			three_arr(t_numberlist **stack);
void			big_arr(t_numberlist **a, t_numberlist **b, int acc, int i);
int				check_arr(t_numberlist *stack);
int				big_index(t_numberlist *stack);
void			addlist(t_numberlist **stack, int data);
char			*ft_strdup(const char *src);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_wordcounter(const char *str, char c);
int				ft_charcounter(const char *str, char c);
char			**ft_split(char const *str, char c);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *str);
/* ------------------------------ HELPERS -----------------------------*/
int				checkargs(char **args, int acc);
t_numberlist	*chartoint(char **str, int ac);
t_numberlist	*reverseList(t_numberlist *lst, int acc);
void			ft_free_double(char **str);
void			free_stack(t_numberlist *stack);

#endif