#pragma once
#pragma once
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_Comp_Data
{
	ref class CLCAD//donne accès aux données sql 
	{
	private://en privé, les attributs composants d'accès aux donnés
		System::String^ sSql;
		System::String^ sCnx;//pour stocker la chaîne de connexion
		System::Data::SqlClient::SqlConnection^ oCnx;
		System::Data::SqlClient::SqlCommand^ oCmd;
		System::Data::SqlClient::SqlDataAdapter^ oDA;
		System::Data::DataSet^ oDs;
	public:
		CLCAD(void);//constructeur
		System::Data::DataSet^ getRows(System::String^, System::String^);//récupère des enregistrements

		String^ actionRows(System::String^);//exécuter les enregistrements(sans récupéere)
		void setSQL(System::String^);
	};
}
