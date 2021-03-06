#pragma once

#include "Value.h"

#include <string>
#include <memory>

namespace Ccd {
namespace Json {

class JsonPP
{
	JsonPP();
	static Value arrayFromString(std::string jsonArrayString);
public:
	static Value objectFromString(std::string jsonString);
};

}
}