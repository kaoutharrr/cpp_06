/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:27:57 by kkouaz            #+#    #+#             */
/*   Updated: 2023/12/05 23:59:53 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Header.hpp"

int main ()
{
    Base *p = new A();
    identify(*p);
    identify(p);
}