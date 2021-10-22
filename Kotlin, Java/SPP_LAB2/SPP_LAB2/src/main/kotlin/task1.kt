import java.io.File

fun task1(){
    val input = File("text.txt")
    val array = countAndCreatingArrayOfPalindromes(input)

    sortingPalindromes(array)
    for(i in array)
        print("$i ")
}

fun istPalindrome(word: String): Boolean {
    word.toCharArray()
    if (word.length == 0)
        return false
    var i1 = 0
    var i2 = word.length - 1
    while(i2 > i1){
        if(word[i1] != word[i2]) return false
        ++i1
        --i2
    }
    return true
}

fun countAndCreatingArrayOfPalindromes (input: File): Array<String> {
    var count = 0
    var array = emptyArray<String>()

    for(line in input.readLines()) {
        for (word in line.split(" ")) {
            if (istPalindrome(word)) {
                count++
                array += word
            }
        }
    }
    print("Количество палиндромов= $count\n")
    return array
}

fun sortingPalindromes(array: Array<String>): Array<String>{
    for (i in array.indices) {
        for (j in i+1 until array.size) {
            val tempI = array[i]
            val tempJ = array[j]

            if (tempI.length<tempJ.length){
                array[i] = array[j]
                array[j] = tempI
            }
        }
    }
    return array
}

