<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8" />
  	<meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="description" content="Inscrivez vous en ligne et rejoignez ISSEC-IC pour l'année 2022-2023."/>
    <link rel="stylesheet" href="Styles/Souscategory.css" />
    <link rel="stylesheet" href="Styles/banners.css" />
    <link rel="icon" href="Images/Logo.png"/>
    <!--Lien vers le doc css-->
    <title>Candidature ISSEC-IC</title>
    <!--Titre de l'onglet-->
</head>

<!-- Le body est la boite qui va contenir toute notre page-->

<body class="bodycandi">
<?php require "header.php"?>
<section id="Cantitre">
            <h1 class="ct1 ycolor">
                CANDIDATURE EN LIGNE
            </h1>
            <h2 class="ct2 ycolor">
                Formulaire à remplir
            </h2>
        </section>
        <section id="consignes">
            <p class="N1">Les éléments comportant un "<em>*</em>" sont obligatoires.</p>
            <p class="N2">Assurez vous que vos informations soient correctes avant de cliquer sur "envoyer".</p>
        </section>
<br><br>
        <section class="nav flex ipt">
        <a href="index.php"><h5 class="centre width-4rem" style="color:rgb(255, 255, 255);">Retour à l'accueil</h5></a><br>
</section><br><br>
    <section id="formulaire">
        <form method="POST" action="traitement.php">
            <fieldset class="Dperso">
            
                <legend class="bluecolor bold">Données personnelles</legend>
                    <fieldset class="CNP">
                        <legend class="bluecolor bold">Civilité<em>*</em></legend>
                        <p class="civilite">
                        <label for="F">Femme</label>
                        <input type="radio" name="S" id="F" value="Femme"/>
                        <label for="H">Homme</label>
                        <input type="radio" name="S" id="H" value="Homme"/>
                        <label for="A">Autre</label>
                        <input type="radio" name="S" id="A" value="Autre"/>
                        </p>
                        <label for="nom">Nom<em>*</em></label>
                        <input type="text" name="nom" id="nom" placeholder="votre nom" maxlength="20" required/>
                        <label for="prenom">Prénom<em>*</em></label>
                        <input type="text" name="prenom" id="prenom" placeholder="votre prénom" maxlength="20" required/>
                    </fieldset>
                        
                    <fieldset class="datenaissance">
                        <legend class="bluecolor bold">Date de naissance</legend>
                        <label for="JJ">Jour<em>*</em></label>
                        <input type="number" name="JJ" id="JJ" placeholder="JJ" maxlength="2" min="1" max="31" required/>
                        <label for="MM">Mois<em>*</em></label>
                        <input type="number" name="MM" id="MM" placeholder="MM" maxlength="2" min="1" max="12" required/>
                        <label for="AA">Année<em>*</em></label>
                        <input type="number" name="AAAA" id="AAAA" placeholder="AAAA" maxlength="4" min="1980" max="2021" required/>
                    </fieldset>

                    <fieldset class="coordonnees">
                        <legend class="bluecolor bold">Coordonnées</legend>
                        <label for="mail">Adresse mail<em>*</em></label>
                        <input type="email" name="mail" id="mail" placeholder="ex: XXXXXX@mail.com" maxlength="30" required/>
                        <label for="numero">Numéro de téléphone<em>*</em></label>
                        <input type="tel" name="numero" id="numero" placeholder="ex: 066 11 11 11" maxlength="9" required/>
                    </fieldset>

                    <fieldset class="localisation">
                        <legend class="bluecolor bold">Ville</legend>
                        <p class="naissance">
                            <label for="villeN">Ville de naissance<em>*</em></label>
                            <select class="select" name="villeN" id="villeN" required>
                                <option value="Libreville">Libreville</option>
                                <option value="Port-gentil">Port-gentil</option>
                                <option value="Franceville">Franceville</option>
                                <option value="Oyem">Oyem</option>
                                <option value="Moan">Moanda</option>
                                <option value="Mouila">Mouila</option>
                                <option value="Lambaréné">Lambaréné</option>
                                <option value="Tchibanga">Tchibanga</option>
                                <option value="Koulamoutou">Koulamoutou</option>
                                <option value="Bitam">Bitam</option>
                                <option value="autre">Autre</option>
                            </select>
                            <label for="villeNI">Précisez si autre</label>
                            <input type="text" name="villeNI" id="villeNI" placeholder="Autre ville" maxlength="20">
                        </p>
                        <p class="actuelle">
                            <label for="villeA">Ville actuelle<em>*</em></label>
                            <select class="select" name="villeA" id="villeA" required>
                                <option value="Libreville">Libreville</option>
                                <option value="Port-gentil">Port-gentil</option>
                                <option value="Franceville">Franceville</option>
                                <option value="Oyem">Oyem</option>
                                <option value="Moan">Moanda</option>
                                <option value="Mouila">Mouila</option>
                                <option value="Lambaréné">Lambaréné</option>
                                <option value="Tchibanga">Tchibanga</option>
                                <option value="Koulamoutou">Koulamoutou</option>
                                <option value="Bitam">Bitam</option>
                                <option value="autre">Autre</option>
                            </select>
                            <label for="villeAI">Précisez si autre</label>
                            <input type="text" name="villeAI" id="villeAI" placeholder="Autre ville" maxlength="20"/>
                        </p>
                    </fieldset>
            </fieldset>
            <fieldset>
                <legend class="bluecolor bold">Cursurs scolaire et universitaire du candidat</legend>
                <fieldset id="choice0">
                    <h4 class="bluecolor bold">Année scolaire 2021-2022<em>*</em></h4>
                    <input type="radio" name="scolarite0" id="sco0" value="Scolarisé(e)">Scolarisé(e)</input>
                    <input type="radio" name="scolarite0" id="Ab0" value="Année blanche">Année blanche</input>
                    <br>
                    <br>
                    <br>
                    <div id="scoafter0" class="none">
                        <label  for="Ename">Nom de dl'établissement</label>
                        <input type="text" name="Ename0"></input><br><br>
                        <label  for="FS">Diplôme obtenu</label>
                        <input type="text" name="Dname0"></input><br><br>
                        <label  for="FS">Spécialité</label>
                        <input type="text" name="Sname0"></input>
                    <div>
                </fieldset>
                <fieldset id="choice1">
                    <h4 class="bluecolor bold">Année scolaire 2020-2021<em>*</em></h4>
                    <input type="radio" name="scolarite1" id="sco" value="Scolarisé(e)">Scolarisé(e)</input>
                    <input type="radio" name="scolarite1" id="Ab" value="Année blanche">Année blanche</input>
                    <br>
                    <br>
                    <br>
                    <div id="scoafter" class="none">
                        <label  for="Ename">Nom de dl'établissement</label>
                        <input type="text" name="Ename"></input><br><br>
                        <label  for="FS">Diplôme obtenu</label>
                        <input type="text" name="Dname"></input><br><br>
                        <label  for="FS">Spécialité</label>
                        <input type="text" name="Sname"></input>
                    <div>
                </fieldset>
                <fieldset id="choice2">
                    <h4 class="bluecolor bold">Année scolaire 2019-2020<em>*</em></h4>
                    <input type="radio" name="scolarite2" id="sco2" value="Scolarisé(e)">Scolarisé(e)</input>
                    <input type="radio" name="scolarite2" id="Ab2" value="Année blanche">Année blanche</input>
                    <br>
                    <br>
                    <br>
                    <div id="scoafter2" class="none">
                        <label  for="Ename">Nom de dl'établissement</label>
                        <input type="text" name="Ename2"></input><br><br>
                        <label  for="FS">Diplôme obtenu</label>
                        <input type="text" name="Dname2"></input><br><br>
                        <label  for="FS">Spécialité</label>
                        <input type="text" name="Sname2"></input>
                    <div>
                </fieldset>
                <fieldset id="choice3">
                    <h4 class="bluecolor bold">Année scolaire 2018-2019<em>*</em></h4>
                    <input type="radio" name="scolarite3" id="scola3" value="Scolarisé(e)">Scolarisé(e)</input>
                    <input type="radio" name="scolarite3" id="Ab3" value="Année blanche">Année blanche</input>
                    <br>
                    <br>
                    <br>
                    <div id="scoafter3" class="none">
                        <label  for="Ename">Nom de dl'établissement</label>
                        <input type="text" name="Ename3"></input><br><br>
                        <label  for="FS">Diplôme obtenu</label>
                        <input type="text" name="Dname3"></input><br><br>
                        <label  for="FS">Spécialité</label>
                        <input type="text" name="Sname3"></input>
                    <div>
                </fieldset>
                <fieldset>
                <legend class="bold bluecolor">Ajouter un(ou plusieurs) parcour(s) en plus(facultatif)</legend>
                    <input name="anneesupp" class="area" type="textarea" maxlength="500" placeholder="Veuillez préciser l'année scolaire, le diplôme obtenu, la spécialité et l'établissement." require></input>
                </fieldset>
                <fieldset>
                    <legend class="bold bluecolor">Formation souhaitée<em>*</em></legend>
                    <label for="FS">Diplôme de technicien supérieur</label>
                    <input type="radio" name="FS" value="Diplôme de technicien supérieur"></input><br>
                    <label for="FS">Brevet de technicien Supérieur</label>
                    <input type="radio" name="FS" value="Brevet de technicien Supérieur"></input><br>
                    <label for="FS">Diplôme de Universitaire de Tchnologie</label>
                    <input type="radio" name="FS" value="Diplôme de Universitaire de Tchnologie"></input><br>
                </fieldset>
                <fieldset>
                    <legend class="bold bluecolor">Niveau d'étude<em>*</em></legend>
                    <label for="lvl">Prépa</label>
                    <input id="lvl1-p" type="radio" name="lvl" value="Prépa"></input><br>
                    <label for="lvl">License 1 professionnelle (tronc commun)</label>
                    <input id="lvl1-l" type="radio" name="lvl" value="License 1 professionnelle (tronc commun)"></input><br>
                    <label for="lvl">License 2 professionnelle</label>
                    <input id="lvl2" type="radio" name="lvl" value="License 2 professionnelle"></input><br>
                    <label for="lvl">License 3 professionnelle</label>
                    <input id="lvl3" type="radio" name="lvl" value="License 3 professionnelle"></input><br><br>
                    <label for="lvl">Master professionnel</label>
                    <input id="lvl4" type="radio" name="lvl" value="Master professionnel"></input><br><br>
                    <label for="lvl">Autre (préciser)</label>
                    <input id="lvl5" type="radio" name="lvl" id="lvl5" value="autre"></input><br><br>
                    <legend class="bold bluecolor">Inscription Sollicité<em>*</em></legend>
                    <div class="flex" id="formations">
                        <div class="other area formations">
                        <br><label for="autre">Précisez en quelques lignes la formation souhaitée</label><br>
                        <textarea class="area" type="textarea" name="lvlother" max="200" placeholder="formation souhaitée"></textarea>
                        </div>
                        <div class="formations l1">
                            <select class="select" name="licence1">
                                <option></option>
                                <option>Tronc commun</option>
                            </select>
                        </div>
                        <div class="formations prepa">
                            <select class="select" name="prepa">
                                    <option></option>
                                    <option>Maths-Physique-Chimie</option>
                                    <option>Chimie-Biologie-Géologie</option>
                                    <option>Journalisme</option>
                                    <option>Urbanisme</option>
                                    <option>Topographie</option>
                            </select>
                        </div>
                        <div class="formations l2">
                        <select class="select" name="licence2">
                                <option></option>
                                <option>Comptabilité Gestion</option>
                                <option>Action Commerciale</option>
                                <option>Commerce International</option>
                                <option>Gestion des Ressources Humaines</option>
                                <option>Gestion des Collectivités Locales</option>
                                <option>Communication d'Entreprise</option>
                                <option>Qualité Hygiène Sécurité Environnement</option>
                                <option>Tourisme</option>
                                <option>Topographie<option>
                        </select>
                        </div>
                        <div class="formations l3">
                            <select class="select" name="licence3">
                                <option></option>
                                <option>QHSE<option>
                                <option>MFD<option>
                                <option>MLD<option>
                                <option>GRH<option>
                                <option>DCA<option>
                                <option>MVPT<option>
                                <option>JMP<option>
                                <option>FC<option>
                                <option>Informatique Industrielle<option>
                                <option>Administration système et réseaux<option>
                                <option>TPG<option>
                                <option>cartographie<option>
                                <option>Urbanisme<option>
                            <select>
                        </div>
                        <div class="formations master">
                            <select class="select" name="master">
                                <option></option>
                                <option>QHSE<option>
                                <option>MFD<option>
                                <option>MLD<option>
                                <option>GRH<option>
                                <option>DCA<option>
                                <option>MVPT<option>
                                <option>JMP<option>
                            <select>
                        </div>
                    </div>
                    <br>
                </fieldset>
                <fieldset>
                    <legend class="bold bluecolor">Vos motivations en quelques lignes<em>*</em></legend>
                    <input class="area" name="motivation" type="textarea" maxlength="500" placeholder="maximum 200 caractères" required></input>
                </fieldset> 
            </fieldset>
            <div id="nav">
                <input class="ipt" type="submit" name="Envoyer_val" value="Postuler"/>
            </div>
        </form>
    </section>
    <section class="nav flex ipt">
        <a href="index.php"><h5 class="centre width-4rem" style="color:rgb(255, 255, 255);">Retour à l'accueil</h5></a><br>
</section><br><br>
<!--<div class="message" style="background-color: #1e7964; color: white; position: absolute; top: 7rem; width: 100%; margin: auto;"><h3 style="text-align: center;">Candidature envoyée. Vous serez recontactée pour la suite</h3></div>-->
    <?php require "footer.php"?> 
    <script src="candidature.js">
    </script>
    </body>
</html>