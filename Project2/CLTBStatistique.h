#pragma once
namespace NS_Composants
{
	ref class CLTBStatistique
	{
	public:
		//Requête à effectuer 
		System::String^ SelectavgPanierAchat(void);
		System::String^ SelectchiffreAffaire(void);
		System::String^ Selectsousseuil(void);
		System::String^ SelectachatparClient(void);
		System::String^ Select10moinsvendus(void);
		System::String^ Select10plusvendus(void);
		System::String^ SelectValeurcommerciale(void);
		System::String^ SelectValeurAchat(void);
		System::String^ Simulation(void);

		void NS_Composants::CLTBStatistique::setTauxTVA(double TauxTVA)
		{
			if (TauxTVA < 0)
			{
				this->TauxTVA = TauxTVA;
			}
		}

		void NS_Composants::CLTBStatistique::setmarge(int marge)
		{
			if (marge < 0)
			{
				this->marge = marge;
			}
		}

		void NS_Composants::CLTBStatistique::setdemarche(int demarche)
		{
			if (demarche < 0)
			{
				this->demarche = demarche;
			}
		}

		int NS_Composants::CLTBStatistique::getTauxTVA(void)
		{
			return this->TauxTVA;
		}

		int NS_Composants::CLTBStatistique::getmarge(void)
		{
			return this->marge;
		}
		int NS_Composants::CLTBStatistique::getdemarche(void)
		{
			return this->demarche;
		}

	private:
		int TauxTVA;
		int marge;
		int demarche;
	};
}
