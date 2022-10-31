# Brainstorming
Pascal Case will be used for Classes
MACRO_CASE will be used for variables/properties with inexact numbers 
cameCase will be used for the rest of variables

1. Have a class called **Formicidae (or Ants)**
    - Morphology (Class):
	    - Exoskeleton (Class): I am unsure if exoskeleton should be considered as a "global" class that covers the whole body, or make it specific to each body segment.
            - doesHave (Bool)
            - THICKNESS (float)
            - state/condition (property/method): state/condition could be a method that ranges from 0 - 100, indicating the current "health" of the property
        - Head (Class)
            - doesHave (Bool)
            - state/condition (property/method)
            - Geniculate antennae (Class)
                -howMany (int)
                -
                
            - Compound eyes
            - Mandibles
            - Ocelli
        - Mesosoma
            - Alitrunk
            - Metapleural glands, glands that secrete antibiotics
            - Six jointed legs
            - Wings
        - Metasoma
            - Petiole
            - Post-petiole
            - Gaster
            - Sting
2. Have a class called **Species**
    - Although there are different categories, I will be skipping straight into species.
    - Category groups: Subfamilies > Tribes > Genus > Subgenus > Species
    - There are around 14000 different species of ants. For the initial iteration of this program I will be focusing only on one (possibly three) species, but set-up for possible expansion.
    - Depending on the species, the properties for allometry and castes vary.
    - Have a **Name** field, to specify the different species.
3. Have a species called **Camponotus Pennsylvanicus (or Black Carpenter)**
    - Camponotus polymorphism encompasses four distinct forms of allometry, ranging from monophasic allometry, to complete dimorphism.
    - The most common are monophasic (bimodal) and triphasic. I will be focusing on triphasic.
    - Allometry dictates the different sizes between the castes and subcastes
    - Triphasic allometry indicates that there are three distinct sizes of worker ants: minor, medias, and majors.
    - Black carpenter ants are monogynous, which means only one queen per colony.
4. Have a class called **Brood**
    - Brood consists of 3 stages (methods), **egg, larvae, and pupa**
    - An ant could take from 6 – 10 weeks to develop (or up to 60 days)
    - **Egg stage**, eggs hatch in a period of one to two weeks (7-14 days)
    - **Larvae stage**, larva grow rapidly developing into pupae in 6 – 12 days
    - **Pupae stage**, final gestation period takes 6-10 weeks (9 – 30 days most species)
    - **Adult Stage**, Pupa emerge as an adult. Changes class.
    - Ant’s sex and castes are mostly determined by nutrition and genetics.
5. Have a class called **Adult**
    - **Adult Stage**, Roles depend on subcaste and age. Have a property called age.
6. Have a class called **Sex**
    - Females are diploid (two sets of chromosomes), hatched from fertilized eggs.
    - Females are haploid (one set of chromosomes), hatched from unfertilized eggs.
7. Have a class called **Castes**
    - Castes and subcastes depend on how much nutrition the larvae receive during development
        - Starved larvae hatch into **Workers**
        - Well fed larvae hatch into **Queen**
        - The other castes and subcastes fall in-between these two.
    - Depending on nutrition, pupation could be pre-matured or prolonged
    - Worker < Male < Queen
    - Nanitics < Minors < Medias < Majors/Soldiers < Males < Queen
8. Have a class called **Queen (or gyne)**
    - Queens could live up to 15 years
    - Queen ants are alate/dealate
9. Have a subqueen class called **Ergatoid (helper Queen)**
    - Queens that have no wings, they remain virgin and function as laborers
10. Have a class called **Workers (or ergates)**
    - The first two generations of workers are called Nanitics. Nanitics are smaller, paler, and transparent; this is due to starvation, since the Queen is only using the reserved nutrition in her body to feed the brood.
    - Workers could live 4-5 years
    - Roles depend on size and age.
    - Younger ants are nurses and they tend to not leave the colony.
    - Young-adult ants are Queen Attendants.
    - Middle-age ants are foragers and maintain the nest. Tend to start leaving the colony
    - Elder ants serve as foragers, nest builders, soldiers, and transporters.
11. Have a subcaste called **Nanitics**
    - First and second generation of workers
12. Have a subcaste called **Minor**
    - Gardener, nurses, foragers
13. Have a subcaste called **Media**
    - Are excavators, foragers, garbage collectors
14. Have a subcaste called **Majors**
    - All majors are workers, but not all workers are soldiers.
    - Soldiers defend the colony.
    - Major workers serve as protein foragers and “tankers”, as they could carry heavier loads.
15. Have a class called **Males (or drones)**
    - Males have neither roles nor tasks within a colony, their purpose is to reproduce and then die one hour after mating.
