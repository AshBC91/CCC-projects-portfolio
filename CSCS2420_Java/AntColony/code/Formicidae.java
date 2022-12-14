class Formicidae {
    
    String species;
    String name;
    Sex_Select sex;
    Life_Stage stage;
    Caste caste;
    Subcaste subcaste;

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
            float howManyAntennae;
            float TOTAL_SENSE;

            Bool mandible_Exists;

            Bool comp_Eye_Exists;
            float howManyEyes;

            Bool ocelli_Exists;
            float howManyEyespots;

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
            float howManyLegs;

            Bool wings_Exists;
            float howManyWings;

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
            float metasoma_health;
            float METASOMA_SIZE;
            
            Bool petiole_Exists;
            Bool postpetiole_Exists;
            Bool gaster_Exists;
            
            class Petiole {
                float PETIOLE_SIZE;
                float petiole_health;
            }

            class PostPet {
                float POSTPET_SIZE;
                float postpet_health;
            }

            class Gaster {
                float GASTER_SIZE;
                float gaster_health;

                Bool sting_Exists;
                float STING_STRENGTH;

                public Gaster ( String species ) {
                    switch (species) {
                        case "Black Carpenter":
                            this.GASTER_SIZE = 0.9;
                            this.gaster_health = 100.00; // Out of a 100

                            this.sting_Exists = false;
                            this.STING_STRENGTH = 0;

                            break;
                        
                        case "Fire":
                            this.GASTER_SIZE = 0.3;
                            this.gaster_health = 100.00; // Out of a 100

                            this.sting_Exists = true;
                            this.STING_STRENGTH = 100; // Out of a 100

                            break;

                        default:
                            this.GASTER_SIZE = 0.6;
                            this.gaster_health = 100.00; // Out of a 100

                            this.sting_Exists = false;
                            this.STING_STRENGTH = 0; // Out of a 100
                            break;
                    }
                }
            }
        }
    }

    public Formicidae 
}
