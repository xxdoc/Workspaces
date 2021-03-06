/*
 *  ISL29023.h - Linux kernel module for
 * 	Intersil ambient light & proximity sensors
 *
 *  Copyright (c) 2010 Jim Getchell <Jim.Getchell@yahoo.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#pragma once
#include "ISL29011.h"

class Cisl29023 : public Cisl29011
{
public:
	Cisl29023();
	~Cisl29023();

	// overrides
	virtual t_status initInputSelect();
	virtual t_status initIrdr();
	t_status initRegisters();
	t_status initAlsStateMachine();
	t_status getData(const uw,uw &);

	// removed
	virtual t_status getIrdr      (ul&);
	virtual t_status setIrdr      (const ul);
	virtual t_status getIrdrFreq  (ul&);
	virtual t_status setIrdrFreq  (const ul);
	virtual t_status getProxAmbRej(ul&);
	virtual t_status setProxAmbRej(const ul);

	t_status initProximityStateMachine();
};
