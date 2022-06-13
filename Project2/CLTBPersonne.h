#pragma once
namespace NS_Comp_Mappage
{
	ref class CLPersonne
	{
	private:
		System::String^ sSql;
		int IdPersonne;
		System::String^ Nom;
		System::String^ Prenom;
		System::String^ AdressePersonnelle;
		System::String^ CPAdressePersonnelle;
		System::String^ VilleAdressePersonnelle;
		System::String^ AdresseFacturation;
		int CPAdresseFacturation;
		System::String^ VilleAdresseFacturation;
		System::String^ AdresseLivraison;
		int CPAdresseLivraison;
		System::String^ VilleAdresseLivraison;
		System::String^ DateN;
		System::String^ DateA;
		System::String^ DateE;
		System::String^ TypePersonne;
	public:
		System::String^ SelectPersonnel(void);
		System::String^ SelectClient(void);
		/*System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);

		void setIdPersonne(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setAdressePersonnelle(System::String^);
		void setCPAdressePersonnelle(System::String^);
		void setVilleAdressePersonnelle(System::String^);
		void setAdresseFacturation(System::String^);
		void setCPAdresseFacturation(int);
		void setVilleAdresseFacturation(System::String^);
		void setAdresseLivraison(System::String^);
		void setCPAdresseLivraison(int);
		void setVilleAdresseLivraison(System::String^);
		void setDateN(System::String^);
		void setDateA(System::String^);
		void setDateE(System::String^);
		void setTypePersonne(System::String^);

		int getIdPersonne(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		System::String^ getAdressePersonnelle(void);
		System::String^ getCPAdressePersonnelle(void);
		System::String^ getVilleAdressePersonnelle(void);
		System::String^ getAdresseFacturation(void);
		int getCPAdresseFacturation(void);
		System::String^ getVilleAdresseFacturation(void);
		System::String^ getAdresseLivraison(void);
		int getCPAdresseLivraison(void);
		System::String^ getVilleAdresseLivraison(void);
		System::String^ getDateN(void);
		System::String^ getDateA(void);
		System::String^ getDateE(void);
		System::String^ getTypePersonne(void);*/
	};
}
