fun main(args: Array<String>) {
    // A list to store the five times table.
    var fivesTimesTables = mutableListOf<Int>()

    // Gets Fives Times Table from 0 to 100.
    for(i in 0..100 step(5))
    {
        fivesTimesTables.add(i)
    }

    // Gets all the numbers that contains a 5.
    var allTheFives = fivesTimesTables.filter { it.toString().contains("5") }

    //Prints a list of all these numbers.
    println(allTheFives)
}