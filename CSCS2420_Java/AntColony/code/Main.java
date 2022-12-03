public class Main {

    public static void main( String[] args ) {

        String [] Species = { "Black Carpenter", "Fire", "Generic" };


        Formicidae ant = new Formicidae();
        ant.species = Species[2];
        ant.name = "ANToinette";
        ant.sex = Formicidae.Sex_Select.Female;
        ant.stage = Formicidae.Life_Stage.Adult;
        ant.caste = Formicidae.Caste.Worker;
        ant.subcaste = Formicidae.Subcaste.Minor;

        System.out.println( "\nHello ant colony!!!" );
        System.out.println( "\nWe got ourselves a new ant called " + ant.name + "." );
        System.out.println( ant.name + "'s properties:" );
        System.out.println( "\tSpecies: " + ant.species );
        System.out.println ( "\tLife stage: " + ant.stage );
        System.out.println( "\tSex: " + ant.sex );
        System.out.println ( "\tCaste: " + ant.caste );
        System.out.println ( "\tSubCaste: " + ant.subcaste );
        System.out.println ( "" );



        Camponotus_Pennsylvanicus carpenter_ant = new Camponotus_Pennsylvanicus();
        carpenter_ant.species = Species[0];
        carpenter_ant.name = "BryANt";
        carpenter_ant.sex = Camponotus_Pennsylvanicus.Sex_Select.Male;
        carpenter_ant.stage = Camponotus_Pennsylvanicus.Life_Stage.Adult;
        carpenter_ant.caste = Camponotus_Pennsylvanicus.Caste.Male;
        carpenter_ant.subcaste = Camponotus_Pennsylvanicus.Subcaste.Drone;
        carpenter_ant.test1 = 8;

        System.out.println( "\nWe got ourselves a new ant called " + carpenter_ant.name + "." );
        System.out.println( carpenter_ant.name + "'s properties:" );
        System.out.println( "\tSpecies: " + carpenter_ant.species );
        System.out.println ( "\tLife stage: " + carpenter_ant.stage );
        System.out.println( "\tSex: " + carpenter_ant.sex );
        System.out.println ( "\tCaste: " + carpenter_ant.caste );
        System.out.println ( "\tSubcaste: " + carpenter_ant.subcaste );
        System.out.println ( "\tTest: " + carpenter_ant.test1 );
        System.out.println ( "" );



        Solenopsis_Geminata fire_ant = new Solenopsis_Geminata();
        fire_ant.species = Species[1];
        fire_ant.name = "DANTe";
        fire_ant.sex = Solenopsis_Geminata.Sex_Select.Female;
        fire_ant.stage = Solenopsis_Geminata.Life_Stage.Adult;
        fire_ant.caste = Solenopsis_Geminata.Caste.Queen;
        fire_ant.subcaste = Solenopsis_Geminata.Subcaste.Gyne;
        fire_ant.test2 = 16;

        System.out.println( "\nWe got ourselves a new ant called " + fire_ant.name + "." );
        System.out.println( fire_ant.name + "'s properties:" );
        System.out.println( "\tSpecies: " + fire_ant.species );
        System.out.println ( "\tLife stage: " + fire_ant.stage );
        System.out.println( "\tSex: " + fire_ant.sex );
        System.out.println ( "\tCaste: " + fire_ant.caste );
        System.out.println ( "\tSubcaste: " + fire_ant.subcaste );
        System.out.println ( "\tTest: " + fire_ant.test2 );
        System.out.println ( "" );

    }

}