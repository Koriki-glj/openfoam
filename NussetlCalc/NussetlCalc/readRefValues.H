Info << "\nReading refValues" << endl; 
     IOdictionary refValues 
(
    IOobject 
    (
	"refValues",
	runTime.constant(),
	mesh,
	IOobject::MUST_READ, 
	IOobject::NO_WRITE
      )
);
	scalar k (readScalar(refValues.lookup("k")));
Info << "Conductivity is:"<< k << endl;
	
	scalar T_initial(readScalar(refValues.lookup("T_initial")));
Info << "Initial temperature is:"<< T_initial << endl; 

	scalar T_hot(readScalar(refValues.lookup("T_hot")));
Info << "Hot wall temperature:"<< T_hot << endl; 

	scalar length(readScalar(refValues.lookup("length")));
Info << "Length scale is set to:"<< T_hot << endl;
