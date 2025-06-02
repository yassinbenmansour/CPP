/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:41:53 by yabenman          #+#    #+#             */
/*   Updated: 2025/06/02 20:14:29 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name);

int main(void)
{
	Zombie *Horde = zombieHorde(7, "Pierre");

	for (int i = 0; i < 7; i++)
		Horde[i].announce();

	delete[] Horde;
	return (0);
}