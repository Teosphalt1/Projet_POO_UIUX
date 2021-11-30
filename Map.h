#pragma once
#include"pch.h"

namespace NS_Comp_Mappage
{
	ref class Map
	{
	public:
		virtual String^ SELECT(void) abstract;
		virtual String^ INSERT(void) abstract;
		virtual String^ DELETE(void) abstract;
		virtual String^ UPDATE(void) abstract;
	};
}