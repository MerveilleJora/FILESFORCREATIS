document.querySelectorAll('.none').forEach((e) => {
        e.style.display = "none"
    })
    //=========================================
document.querySelector("#choice0").addEventListener('click', () => {
    if (document.querySelector('[value = "Scolarisé(e)"]').checked === true) {
        document.querySelector('#scoafter0').style.display = "block"
    } else document.querySelector('#scoafter0').style.display = "none"
});
document.querySelector("#choice1").addEventListener('click', () => {
    if (document.getElementById('sco').checked === true) {
        console.log(document.getElementById('sco').value)
        document.querySelector('#scoafter').style.display = "block"
    } else document.querySelector('#scoafter').style.display = "none"
});
document.querySelector("#choice2").addEventListener('click', () => {
    if (document.getElementById('sco2').checked === true) {
        document.querySelector('#scoafter2').style.display = "block"
    } else document.querySelector('#scoafter2').style.display = "none"
});
document.querySelector("#choice3").addEventListener('click', () => {
    if (document.getElementById('scola3').checked === true) {
        document.querySelector('#scoafter3').style.display = "block"
    } else document.querySelector('#scoafter3').style.display = "none"
});

//========================================


document.querySelectorAll('[name = "lvl"]').forEach(element => {
    element.addEventListener("click", (e) => {
        console.log(e.target.value)
        switch (e.target.value) {
            case "Prépa":
                console.log(document.querySelector(".prepa"))
                document.querySelector(".prepa").classList.add("displayinitial")
                document.querySelector(".other").classList.remove("displayinitial")
                document.querySelector(".l1").classList.remove("displayinitial")
                document.querySelector(".l3").classList.remove("displayinitial")
                document.querySelector(".l2").classList.remove("displayinitial")
                document.querySelector(".master").classList.remove("displayinitial")
                break
            case "License 1 professionnelle (tronc commun)":
                console.log(document.querySelector(".l1"))
                document.querySelector(".l1").classList.add("displayinitial")
                document.querySelector(".l2").classList.remove("displayinitial")
                document.querySelector(".l3").classList.remove("displayinitial")
                document.querySelector(".master").classList.remove("displayinitial")
                document.querySelector(".other").classList.remove("displayinitial")
                document.querySelector(".prepa").classList.remove("displayinitial")
                break
            case "License 2 professionnelle":
                console.log(document.querySelector(".l2"))
                document.querySelector(".l2").classList.add("displayinitial")
                document.querySelector(".l1").classList.remove("displayinitial")
                document.querySelector(".l3").classList.remove("displayinitial")
                document.querySelector(".master").classList.remove("displayinitial")
                document.querySelector(".other").classList.remove("displayinitial")
                document.querySelector(".prepa").classList.remove("displayinitial")


                break
            case "License 3 professionnelle":
                console.log(document.querySelector(".l3"))
                document.querySelector(".l3").classList.add("displayinitial")
                document.querySelector(".l1").classList.remove("displayinitial")
                document.querySelector(".l2").classList.remove("displayinitial")
                document.querySelector(".master").classList.remove("displayinitial")
                document.querySelector(".other").classList.remove("displayinitial")
                document.querySelector(".prepa").classList.remove("displayinitial")


                break
            case "Master professionnel":
                console.log(document.querySelector(".master"))
                document.querySelector(".master").classList.add("displayinitial")
                document.querySelector(".l1").classList.remove("displayinitial")
                document.querySelector(".l3").classList.remove("displayinitial")
                document.querySelector(".l2").classList.remove("displayinitial")
                document.querySelector(".other").classList.remove("displayinitial")
                document.querySelector(".prepa").classList.remove("displayinitial")
                break
            case "autre":
                console.log(document.querySelector(".other"))
                document.querySelector(".other").classList.add("displayinitial")
                document.querySelector(".l1").classList.remove("displayinitial")
                document.querySelector(".l3").classList.remove("displayinitial")
                document.querySelector(".l2").classList.remove("displayinitial")
                document.querySelector(".master").classList.remove("displayinitial")
                document.querySelector(".prepa").classList.remove("displayinitial")
                break
        }
    })
})