/*
* Copyright 2020 The casbin Authors. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include <string>

bool Enforcer::enforce(string sub, string obj, string act) {
	return false;
}

Enforcer NewEnforcer(string params ...) {
	Enforcer* e;

	int parsedParamLen = 0;
	int paramLen = params.size();
	if (paramLen >= 1) {
		
	}

}


//DAY2
Enforcer* NewEnforcer(int params, ...) {  //params is no. of arguments
	Enforcer* e;

	va_list args;
	va_start(args, params);

	int parsedParamLen = 0;
	for(int i = 0; i < params; i++){
		if(params > 1 && i == params-1){
			bool enableLog;
			if (typeid(va_arg(args,bool)).name() == "bool")
				//e.EnableLog(enableLog);
		}

	}
}