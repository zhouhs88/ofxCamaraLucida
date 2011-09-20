//	Cámara Lúcida
//	www.camara-lucida.com.ar
//
//	Copyright (C) 2011  Christian Parsons
//	www.chparsons.com.ar
//
//	This program is free software: you can redistribute it and/or modify
//	it under the terms of the GNU General Public License as published by
//	the Free Software Foundation, either version 3 of the License, or
//	(at your option) any later version.
//
//	This program is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//	GNU General Public License for more details.
//
//	You should have received a copy of the GNU General Public License
//	along with this program.  If not, see <http://www.gnu.org/licenses/>.


#pragma once

#include "ofVectorMath.h"

namespace cml
{
	class Calibration
	{
	public:
		float fx_d, fy_d, cx_d, cy_d;
		float fx_p, fy_p, cx_p, cy_p;
		float fx_rgb, fy_rgb, cx_rgb, cy_rgb;
		
		int depth_width, depth_height;
		int proj_width, proj_height;
		int rgb_width, rgb_height;
		
		float near, far;	
		
		ofMatrix4x4 RT_rgb;
	};
};