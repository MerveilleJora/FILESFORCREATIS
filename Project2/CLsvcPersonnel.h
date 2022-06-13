#include "CLTBPersonne.h"
#include "CLCAD.h"

namespace NS_Comp_Svc
{
	ref class CLsvcPersonnel//service gestion de clients 
	{
	private:
		//Objet de composant 
		NS_Comp_Data::CLCAD^ oCad;
		NS_Comp_Mappage::CLPersonne^ oPersonnel;
		DataSet^ oDs;

	public:
		CLsvcPersonnel(void);//constructeur int IdPersonne;
		System::Data::DataSet^ afficherPersonnel(System::String^);
		//les autres m�thodes
		/*
		void creerPersonnel(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerPersonnel(int);
		void modifierPersonnel(int);*/
	};
}