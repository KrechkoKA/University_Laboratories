fun sqr(x: Int) = x * x

fun createArray(N: Int): Array<Int> {
    var array = emptyArray<Int>()
    for(i in 1..N)
        array += (-10.. 10).random()
    return array
}

fun printArray(array: Array<Int>){
    print("Исходная последовательность: ")
    for (i in array)
        print("$i ")
    println("")
}

fun task1(array: Array<Int>) {
    printArray(array)
    var result = 0
    for(i in array)
        if(i < 0) result += sqr(i)
    println("Сумма квадратов всех отрицательных чисел равна: $result")
}