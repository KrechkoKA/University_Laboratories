fun String.swapCase(): String {

    val array = this.toCharArray()
    if(this == "null")
        return "null"

    else {
        this.forEachIndexed { index, element ->
            when {
                element.isUpperCase() -> array[index] = element.toLowerCase()
                element.isLowerCase() -> array[index] = element.toUpperCase()
            }
        }
    return (String(array))
    }
}

