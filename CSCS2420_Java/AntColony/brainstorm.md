# Brainstorming
<p>
PascalCase will be used for Classes<br>
MACRO_CASE will be used for variables/properties with inexact numbers<br>
camelCase will be used for the rest of variables and methods<br>
</p>

1. Have a class called **Formicidae (or Ants)**
    - Morphology (Class):
        - exosk_Exists (Bool): Default is True.
        - head_Exists (Bool): Default is True. Will remain True while head_health != 0.
        - alitrunk_Exists (Bool) Default is True. Will remain True while alitrunk_health != 0.
        - metasoma_Exists (Bool) Default is True. Will remain True while metasoma_health != 0.
        - body_health (float): Is the overal health calculated from the condition of each body segment.
	    - Exoskeleton (Class): I am unsure if exoskeleton should be considered as a "global" class that covers the whole body, or make it specific to each body segment.
            - EXO_THICKNESS (float): Thinkness depends on species, measured in micrometers.
            - exo_health (float/method): health could be a method that ranges from 0 - 100, indicating the current status of ant's limbs.
            - EXO_PROTECTION (float): The protection level depends on the thickness of the exoskeleton and it's condition.
        - Head (Class)
            - head_health (float/method): This is the health of the head not including the eyes, antennae, and madible. When the health reaches 0, the head is lost or not functional.
            - total_head_health (float/method): Depends on the health of all other head components. When the health reaches 0, the head is lost or not functional.
            - HEAD_SIZE (float): Measured in micrometers.
            - antannae_Exist (Bool): Default is True, and will remain True until howMany == 0.
            - howManyAntennae (int): Default value is 2.
            - TOTAL_SENCE (float): Stores the calculated total percentage of the ant's sensing hability from all the antennae left.
            - comp_Eye_Exist (Bool): Default is True, and will remain True until howMany == 0.
            - howManyEyes (int): Defaut value is 2.
            - mandible_Exist (Bool): Default is True, and will remain True while condition != 0.
            - ocelli_Exist (Bool): Default is True, and will remain True until howMany == 0.
            - howManyEyespot (int): Default value is 3.
            - TOTAL_SIGHT (float): Stores the calculated total percentage of the ant's eye sight from all the eyes left, compound eyes and ocelli.
            - Antenna (Class): The ant could have 0 or more. Default is 2. Ants use their antenna to touch, smell, and communitace.
                - ANTENNA_LENGTH (float): measured in micrometers.
                - antenna_health (float/method): when the health reaches 0, the antenna is lost or not functional.
                - ANTENNA_SENTIVITY (float): The capacity of the antenna to touch and smell.
            - Comp_Eye (Class): The ant could have 0 or more. Default is 2. Eyes allows ants to see.
                - EYE_DIAMETER (float): measured in micrometers.
                - eye_health (float/method): when the health reaches 0, the eye is lost or not functional.
                - EYE_SIGHT (float): The capacity of the eye to see.
            - Mandible (Class): Ants use their mandibles to eat, carry, and/or fight.
                - MANDIBLE_LENGTH (float): Measured in micrometers
                - mandible_health: when the health reaches 0 the ant will lose strength to carry or fight, but will still be capable to eat.
                - MANDIBLE_STRENGTH (float): The strength depends on the caste and the length of the manidibles.
            - Eyespot (Class): The ant could have 0 or more. Default is 3. Eyes allows ants to see. Not all species have Ocelli. Ocelli have limited sight, they can only sense movement.
                - EYES_DIAMETER (float): measured in micrometers.
                - eyeS_health (float/method): when the health reaches 0, the eye is lost or not functional.
                - EYES_SIGHT (float): The capacity for the eye to sense movement.
        - Alitrunk (Class)
            - alitrunk_health (float/method): This is the health of the mesosoma, not including the legs and/or wings.
            - total_alitrunk_health (float/method): Depends of the health of all other Alitrunk components.
            - ALITRUNK_SIZE (float): Measured in micrometers.
            - glands_Exists (Bool): Ants use their glands to communicate and heal themselves. E.G. the metapleural gland is a gland that secrete antibiotics.
            - legs_Exists (Bool): Default is True, and will remain True until howMany == 0.
            - howManyLegs (int): Default value is 6.
            - wings_Exists (Bool): Default for Workers is False. Default for Queen is True.
            - howManyWings (int): Default for Workers if 0. Default for Queen is 2.
            - Leg (Class): The ant could have 0 or more. Default is 6. Ants use their legs to walk.
                - LEG_LENGTH (float): measured in micrometers
                - leg_health (float/method): when the health reaches 0, the leg is lost or not functional.
            - Wings (Class): The and could have 0 or more, depending on the Caste. Ants use their wings to fly.
                - WING_LENGTH (float): measured in micrometer
                - wing_health (float/method): when the health reaches 0, the wing is lost or not functional.
        - Metasoma
            - metasoma_health (float/method): Depends on the health of all the other metasoma components. When the health reaches 0, the metasoma is lost or not functional.
            - METASOMA_SIZE (float): Measured in micrometers.
            - petiole_Exists (Bool): Default is True, will remain True while health != 0. 
            - post-pet_Exists (Bool): Default is False. If it exists, it will remain true while health != 0.
            - gaster_Exists (Bool): Default is True, will remain True while health != 0. 
            - Petiole (Class): The ant could have 0 or more. Default is 1. The petiole is the "waist" of the Ant that connects the allitrunk with the gaster.
                - PETIOLE_SIZE (float): measured in micrometers.
                - petiole_health (float): when the health reaches 0, the petiole is lost or not functional.
            - Post-pet (Class): The ant could have 0 or more. Default is 1. Post petiole is a chained petiole, that links the previous petiole with the gaster. The existence of the post petiole depends on the ants species.
                - POST-PET_SIZE (float): measured in micrometers.
                - post-pet_health (float): when the health reaches 0, the post-petiole is lost or not functional.
            - Gaster (Class):
                - GASTER_SIZE (float): measured in micrometers.
                - gaster_health (float): when the health reaches 0, the gaster is lost or not functional.
                - sting_Exists (Bool): Default is False. If it exists, it will remain true while health != 0. The existence of the sting depends on the ants species.
                - STING_STRENGTH (float): Ants use their sting to inject a paralyzing agent. This is the strength of the paralyzing agent. The higher the strength the most likely it will paralyze.
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
    - Males are haploid (one set of chromosomes), hatched from unfertilized eggs.
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
