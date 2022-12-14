class Formicidae {

    enum Sex_Select {
        Male,
        Female
    }

    enum Life_Stage {
        Egg,
        Larva,
        Pupa,
        Adult        
    }

    enum Caste {
        Worker,
        Male,
        Queen
    }

    // Not all species have all subcastes
    enum Subcaste {
        Nanitics,
        Minor,
        //Media,
        //Major,
        Soldier,
        Drone,
        //Ergatoid,
        Gyne
    }

    class Allometry {
        Bool exosK_Exists;
        Bool head_Exists;
        Bool alitrunk_Exists;
        Bool metasoma_Exists;

        float body_health;

        class Exoskeleton {
            float EXO_THICKNESS;
            float exo_healt;
            float EXO_PROTECTION;
        }

        class Head {
            float head_health;
            float total_head_health;
            float HEAD_SIZE;

            Bool antannae_Exists;
            int howManyAntennae;
            float TOTAL_SENSE;

            Bool mandible_Exists;

            Bool comp_Eye_Exists;
            int howManyEyes;

            Bool ocelli_Exists;
            int howManyEyespots;

            float TOTAL_SIGHT;

            class Antenna {
                float ANTENNA_LENGTH;
                float antenna_health;
                float ANETNNA_SENSITIVITY;
            }

            class Comp_Eye {
                float EYE_DIAMETER;
                float eye_health;
                float EYE_SIGHT;
            }

            class Mandible {
                float MANDIBLE_LENGTH;
                float mandible_health;
                float MANDIBLE_STRENGTH;
            }
            
            class Eyespot {
                float EYE_DIAMETER;
                float eye_health;
                float EYE_SIGHT;
            }
        }

        class Alitrunk {
            float alitrunk_health;
            float total_alitrunk_health;
            float ALITRUNK_SIZE;

            Bool glands_Exists;

            Bool legs_Exists;
            int howManyLegs;

            Bool wings_Exists;
            int howManyWings;

            class Leg {
                float LEG_LENGTH;
                float leg_health;
            }

            class Wing {
                float WING_LENGTH;
                float wing_health;
            }
        }

        class Metasoma {

            
        }
    }

    String species;
    String name;
    Sex_Select sex;
    Life_Stage stage;
    Caste caste;
    Subcaste subcaste;

}
