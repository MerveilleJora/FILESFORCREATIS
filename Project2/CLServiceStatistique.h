#pragma once
#pragma once
#include "CLCAD.h"
#include "CLTBStatistique.h"

namespace NS_Services
{
	ref class CLsvcStatistique
	{
	public:
		//revoir les valeurs en paramètre
		CLsvcStatistique(void);

		String^ calculChiffreAffaire(System::String^);
		System::Data::DataSet^ ArticleSousSeuil(System::String^);
		System::String^ calculPanierMoyen(System::String^);
		System::Data::DataSet^ AfficherArticlesmoinsvendus(System::String^);
		System::Data::DataSet^ AfficherArticlesplusvendus(System::String^);
		String^ calculvaleurachat(System::String^);
		System::Data::DataSet^ montanttotalparclient(System::String^);
		String^ Calculvaleurcommercial(System::String^);
		String^ NS_Services::CLsvcStatistique::simulationvaleurstock(int TauxTVA, int marge, int demarche)
		{
			int achat = Convert::ToInt32(oCAD->actionRows(oTBStatistique->Simulation()));
			float resultatsim = achat * ((TauxTVA + marge + 1 - demarche) / 100);
			return Convert::ToString(resultatsim);
		};

	private:
		NS_Comp_Data::CLCAD^ oCAD;
		NS_Composants::CLTBStatistique^ oTBStatistique;
	};


}
