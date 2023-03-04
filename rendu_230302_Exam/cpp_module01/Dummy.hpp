/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:24:27 by pwolff            #+#    #+#             */
/*   Updated: 2023/03/01 09:24:31 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class ATarget;

#include <string>
#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget
{
public:
	Dummy();
	~Dummy();

	Dummy	*clone() const;


};


