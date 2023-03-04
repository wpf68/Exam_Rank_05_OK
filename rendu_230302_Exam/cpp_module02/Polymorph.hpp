/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:24:27 by pwolff            #+#    #+#             */
/*   Updated: 2023/03/01 09:24:31 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class ASpell;

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Polymorph : public ASpell
{
public:
	Polymorph();
	~Polymorph();

	Polymorph	*clone() const;


};

