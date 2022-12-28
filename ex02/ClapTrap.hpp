/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:33:30 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/27 17:33:30 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    int _Hit_points;
    int _Energy_points;
    int _Attac_damage;

public:
    ClapTrap();                             /*Default constructor*/
    ClapTrap(std::string name);             /*parammeters constructor*/
    ClapTrap(const ClapTrap &copy);         /*copy constructor*/
    ClapTrap &operator=(const ClapTrap &C); /*copy asigemment operator*/
    ~ClapTrap();                            /*Destructor*/
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif