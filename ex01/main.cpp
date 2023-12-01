/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 22:56:02 by kkouaz            #+#    #+#             */
/*   Updated: 2023/12/01 23:08:11 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Serializer.hpp"

int main()
{

    Data *ptr = new Data;
    //ptr = NULL;
    uintptr_t iptr;

    ptr->a = 1;
    ptr->c = 'A';
    ptr->x = 13;
    ptr->y = 37;

    iptr = Serializer :: serialize(ptr);

    std :: cout << ptr << "\n";
    Data* AFTER = Serializer :: deserialize(iptr);
    std :: cout << AFTER << "\n";
    std :: cout << AFTER->x <<  AFTER->y<<"\n";
}