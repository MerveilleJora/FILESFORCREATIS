<?php 
$truc = isset($_POST['truc']) ? $_POST['truc'] : NULL;
//ini_set( 'display_errors', 1 ); fonction php pour voir les erreurs
//error_reporting( E_ALL ); 
//civilite
$civilite = isset($_POST['S']) ? $_POST['S']: NULL;
$nom = $_POST['nom'];
$prenom = $_POST['prenom'];
//date de naissance
$jour = $_POST['JJ'];
$mois = $_POST['MM'];
$annee = $_POST['AAAA'];
//date de naissance
$telephone = $_POST['numero'];
$mail = $_POST['mail'];
//localisation
$villeN = $_POST['villeN'];
$villeNI = $_POST['villeNI'];
$villeA = $_POST['villeA'];
$villeAI = $_POST['villeAI'];
//année scolaire
//2021-2022
$sco1 = $_POST['scolarite0'];
$Etablissement1 = isset($_POST['Ename0']) ?$_POST['Ename0']: NULL;
$diplome1 =isset( $_POST['Dname0']) ? $_POST['Dname0']: NULL;
$specialite1 = isset($_POST['Sname0']) ?$_POST['Sname0']: NULL;
//année scolaire
//2019-2020
$sco3 = $_POST['scolarite2'];
$Etablissement3 = isset($_POST['Ename2']) ?$_POST['Ename2']: NULL;
$diplome3 =isset( $_POST['Dname2']) ? $_POST['Dname2']: NULL;
$specialite3 = isset($_POST['Sname2']) ?$_POST['Sname2']: NULL;
//année scolaire
//2018-2019
$sco4 = $_POST['scolarite3'];
$Etablissement4 = isset($_POST['Ename3']) ?$_POST['Ename3']: NULL;
$diplome4 =isset( $_POST['Dname3']) ? $_POST['Dname3']: NULL;
$specialite4 = isset($_POST['Sname3']) ?$_POST['Sname3']: NULL;
//année scolaire
//2020-2021
$sco2 = $_POST['scolarite1'];
$Etablissement2 = isset($_POST['Ename']) ?$_POST['Ename']: NULL;
$diplome2 =isset( $_POST['Dname']) ? $_POST['Dname']: NULL;
$specialite2 = isset($_POST['Sname']) ?$_POST['Sname']: NULL;
//année supp
$anneesupp = $_POST['anneesupp'];
//formation souhaitée
$fs = $_POST['FS'];
//Niveau 
$lvl = $_POST['lvl'];
$lvlo = isset($_POST['lvlother']) ? $_POST['lvlother']: NULL;
$l1 = $_POST['licence1'];
$l2 = $_POST['licence2'];
$l3 = $_POST['licence3'];
$master = $_POST['master'];
//motivation
$motivation = $_POST['motivation'];
//mail
$from = "no-reply@issec-ic.com";
$to = "inscriptionissec@gmail.com";
$to2 = $mail;
$subject = "Nouvelle inscription";
$subject2 = "Confirmation d'inscription";
$message = "Bonjour, " . "\n" .
            "un(e) étudiant(e) vient de postuler. Veuillez trouver ci-dessus l'ensemble de ses données" . "\n" 
              . "Nom et prénom: " . $nom ." ". $prenom . "\n"
              . "Sexe: " . $civilite. "\n"
              . "Date de naissance: " . $jour . "-" . $mois . "-" . $annee . "\n"
              . "Cordonnée: "
              . "- Tel: " . $telephone . "\n"
              . "- Mail: " . $mail . "\n"
              . "Réside à: " . $villeA ." || ". $villeAI . "\n"
              . "Née à: " . $villeN ." || ". $villeNI . "\n"
              . "\n"
              . "Cursus: " 
              . "2021-2022: " . "\n"
              ."Activité:  ". $sco1 . "\n"
              ."Etablissement:  ". $Etablissement1 . "\n"
              ."Diplôme:  ". $diplome1 . "\n"
              ."Spécialité:  ". $specialite1 . "\n"
              . "\n"
              . "Cursus: " 
              . "2020-2021: " . "\n"
              ."Activité:  ". $sco2 . "\n"
              ."Etablissement:  ". $Etablissement2 . "\n"
              ."Diplôme:  ". $diplome2 . "\n"
              ."Spécialité:  ". $specialite2 . "\n"
              . "\n"
              . "Cursus: " 
              . "2019-2020: " . "\n"
              ."Activité:  ". $sco3 . "\n"
              ."Etablissement:  ". $Etablissement3 . "\n"
              ."Diplôme:  ". $diplome3 . "\n"
              ."Spécialité:  ". $specialite3 . "\n"
              . "\n"
              . "Cursus: " 
              . "2019-2018: " . "\n"
              ."Activité:  ". $sco4 . "\n"
              ."Etablissement:  ". $Etablissement4 . "\n"
              ."Diplôme:  ". $diplome4 . "\n"
              ."Spécialité:  ". $specialite4 . "\n"
              . "\n"
              . "\n"
              ."En plus:  ". $anneesupp . "\n"
              ."Formation souhaitée:  ". $fs . "\n"
              ."Niveau:  ". $lvl . "\n"
              ."||". $lvlo . "\n"
              .$l1. $l2 . $l3 . $master . "\n"
              . "\n"
              ."Motivation en quelques lignes:" . "\n"
              ."||". $motivation . "\n";
$message2 = "Bonjour, " . $nom ." ". $prenom ."\n" .
            "Nous confirmons réception de votre inscription." . "\n" 
            . "Vous serez recontacté(e) par les coordonnées renseignées dans votre candidature." . "\n" . "\n" . "\n"
            . "Ci-dessous, un résumé du formulaire soumis. En cas d'erreur, veuillez informer l'administration en appellant le 077 92 43 11 ou le 066 12 82 57 ou attendez notre appel." . "\n" 
              . "Nom et prénom: " . $nom ." ". $prenom . "\n"
              . "Sexe: " . $civilite. "\n"
              . "Date de naissance: " . $jour . "-" . $mois . "-" . $annee . "\n"
              . "Cordonnée: "
              . "- Tel: " . $telephone . "\n"
              . "- Mail: " . $mail . "\n"
              . "Réside à: " . $villeA ." || ". $villeAI . "\n"
              . "Née à: " . $villeN ." || ". $villeNI . "\n"
              . "\n"
              . "Cursus: " 
              . "2021-2022: " . "\n"
              ."Activité:  ". $sco1 . "\n"
              ."Etablissement:  ". $Etablissement1 . "\n"
              ."Diplôme:  ". $diplome1 . "\n"
              ."Spécialité:  ". $specialite1 . "\n"
              . "\n"
              . "Cursus: " 
              . "2020-2021: " . "\n"
              ."Activité:  ". $sco2 . "\n"
              ."Etablissement:  ". $Etablissement2 . "\n"
              ."Diplôme:  ". $diplome2 . "\n"
              ."Spécialité:  ". $specialite2 . "\n"
              . "\n"
              . "Cursus: " 
              . "2019-2020: " . "\n"
              ."Activité:  ". $sco3 . "\n"
              ."Etablissement:  ". $Etablissement3 . "\n"
              ."Diplôme:  ". $diplome3 . "\n"
              ."Spécialité:  ". $specialite3 . "\n"
              . "\n"
              . "Cursus: " 
              . "2019-2018: " . "\n"
              ."Activité:  ". $sco4 . "\n"
              ."Etablissement:  ". $Etablissement4 . "\n"
              ."Diplôme:  ". $diplome4 . "\n"
              ."Spécialité:  ". $specialite4 . "\n"
              . "\n"
              . "\n"
              ."En plus:  ". $anneesupp . "\n"
              ."Formation souhaitée:  ". $fs . "\n"
              ."Niveau:  ". $lvl . "\n"
              ."||". $lvlo . "\n"
              .$l1. $l2 . $l3 . $master . "\n"
              . "\n"
              ."Motivation en quelques lignes:" . "\n"
              ."||". $motivation . "\n". "\n"
  ." N'hésitez pas à recontacter le service en ligne en cas d'anormalité par mail: support@issec-ic.com \n"
  . "\n"
  . Cordialement."\n";
              
$headers = "From:" . $from;// on peut le personnaliser pour envoyer une page html
mail($to,$subject,$message, $headers);
mail($to2, $subject2, $message2, $headers);
?>
<!DOCTYPE html>
<!-- Déclarér que le doc est de type html -->
<html>

<head>
    <meta charset="utf-8" />
    <link rel="stylesheet" href="Styles/Souscategory.css" />
    <link rel="stylesheet" href="Styles/banners.css" />
    
    <!--Lien vers le doc css-->
    <title>Inscription confirmée</title>
    <!--Titre de l'onglet-->
</head>

<!-- Le body est la boite qui va contenir toute notre page-->

<body class="bodycandi">
<!-- Le header est l'en tête notre page-->
<?php include('header.php'); ?>
<section class="nav flex ipt" style="margin-top: 10rem;";>
        <a href="#"><h5 class="centre width-4rem" style="color:rgb(255, 255, 255);">Candidature envoyée</h5></a><br>
</section><br><br>
<section class="nav flex ipt">
        <a href="index.php"><h5 class="centre width-4rem" style="color:rgb(255, 255, 255);">Retour à l'accueil</h5></a><br>
</section><br><br>
<section>