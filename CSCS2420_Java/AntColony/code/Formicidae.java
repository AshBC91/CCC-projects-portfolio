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

    String species;
    String name;
    Sex_Select sex;
    Life_Stage stage;
    Caste caste;
    Subcaste subcaste;

}
