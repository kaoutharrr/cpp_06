/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 22:56:02 by kkouaz            #+#    #+#             */
/*   Updated: 2023/12/06 00:00:46 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Serializer.hpp"

int main()
{

    Data *ptr = new Data;
    uintptr_t iptr;

    ptr->a = 133456454;
    ptr->c = 'A';
    ptr->x = 78987;
    ptr->y = 3745654;

    iptr = Serializer :: serialize(ptr);

    std :: cout << ptr << "\n";
    Data* AFTER = Serializer :: deserialize(iptr);
    std :: cout << AFTER << "\n";
    std :: cout << AFTER->x << "\n\n\n" << AFTER->y <<"\n";
}