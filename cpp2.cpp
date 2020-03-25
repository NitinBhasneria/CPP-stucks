#include<iostream>

using namespace std;
// Variadic templates

// For knowing the type of variables with two arguments
template<typename R,typename T>
string typeInfo(R n, T args) {
    string S={};
    S = S+ typeid(n).name()[0] + typeid(args).name()[0];
    return S;
}

// For knowing the type of variables with one argument
template<typename R>
char typeInfo(R n) {
    return typeid(n).name()[0];
}

template<typename R,typename ... T>
void newEnforcer(R modelPath, T ... Q ){
    int p = sizeof...(Q);
    string params = {};
    // Enforcer e;

    // Knowing the type of variables and storing it in string.
    if (p > 0) {
        params = params + typeid(modelPath).name()[0] + typeInfo(Q ...);
    }
    else {
        params = params + typeid(modelPath).name()[0];    
    }

    int paramLen = params.size();
    int parsedParamLen = 0;

    if (paramLen >= 1) {
        if(params[paramLen-1] == 'b')
		{
		    // e.EnableLog(enableLog)
			parsedParamLen++;
		}
	}

    if( paramLen-parsedParamLen == 2) {
        char p0 = params[0];
        switch(p0) {
        case 'P': {
            char p1 = params[1];
            switch(p1) {
            case 'P': {
                // auto err = e.InitWithFile(p0, p1);
                // if(err != NULL) {
                //    return NULL, err;
            }
            default: {
                // auto err = e.InitWithAdapter(p0, p1.(persist.Adaptor));
                // if(err != NULL) {
                //    return NULL, err;
            }
            }
        }    
        default:
            switch(params[1]){
            case 'P':
                // return NULL, error.New("Invalid parameters for enforcer");
            default:{
                // auto err = e.InitWithModelAndAdapter(p0.(model.Model), params[1].(persist.Adapter));
		        // if err != NULL {
			    //     return NULL, err;
		        // }
            }          
            }
        }
    } else if(paramLen-parsedParamLen == 1) {
		char p0 = params[0];
        switch(p0){ 
		case 'P': {
			// auto err = e.InitWithFile(p0, "");
			// if err != NULL {
			//	return NULL, err;
			// }
        }
		default: {
			// auto err = e.InitWithModelAndAdapter(p0.(model.Model), nil);
			// if err != NULL {
			// 	return NULL, err
		    //}
        }
        }
	} else if (paramLen-parsedParamLen == 0) {
		// return e, NULL;
	} else {
		// return nil, errors.New("invalid parameters for enforcer");
	}

	// return e, NULL;
    cout<<params;
}

int main(){
    int m=5;
    newEnforcer("hhelo",false);
}


// -fpermissive. OK
// classes and object. OK
// pointer in classes and object. OK
// how to return two values. search