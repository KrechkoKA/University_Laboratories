alert("Задача 1");
while(true){

	let a = Number(prompt("Введите первое число: "));       //ввод 1-го числа
	if ( isNaN(a) ) {								//проверка на числовое значение (true если не число)
		alert("Первый ввод - не число!");
		break;
	}

	let b = Number(prompt("Введите второе число: "));		//ввод 2-го числа
	if ( isNaN(b) ) {                               //проверка на числовое значение (true если не число)
		alert("Второй ввод - не число!");
		break;
	}

	if(a > b){										
		alert("Первое число больше!");
	} else if (a < b){								//сравнение чисел	
		alert("Второе число больше!");
	} else{
		alert("Числа равны!");
	}
}
