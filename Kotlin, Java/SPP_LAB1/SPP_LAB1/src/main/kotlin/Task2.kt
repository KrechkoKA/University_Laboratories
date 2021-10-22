fun doubleRandomValue(max: Double, min: Double) = min + Math.random()*(max-min)

fun task2(max: Double, min: Double, size: Int ){
    val table: Array<Array<Double>> = Array(size, { Array(size, {doubleRandomValue(max, min)}) })

    for(row in table) {
        for (cell in row)
            print("$cell \t")
        println()
    }
}