alert("Задача 2");
while(true){

	var podezd = prompt("Введите число подъездов (от 1 до 10): ");
	var floor = prompt("Введите этажность (от 1 до 25): ");								  //ввод данных
	var room = prompt("Введите число квартир на лестничной площадке (от 1 до 20): ");

	if (podezd >= 1 && podezd <= 10 && floor >= 1 && floor <= 25 && room >= 1 && room <= 20){  //находятся ли значения в диапозоне
		alert("Всего " + (podezd*floor*room) + " квартир");                   				//подсчёт общего кол-ва кв.
		var n = prompt("№ кв");											 		//ввод № кв.
		
		if ((podezd*floor*room) < n){
			alert("Некорректный ввод данных! Попробуйте ещё!");                 //№ кв должен быть < общ. числа кв-р
			continue;
		}

		alert("кв-ра в подъезде № " + Math.ceil(n/(floor*room)));				  //делим № кв. на кол-во кв. в подъезде и округ-
		break;                                                            //ляем в большую сторону (в 1-м подъезде 5 кв. 
	}                                                                     // => 6-я кв. во 2-м под-е)
	else {
		alert("Некорректный ввод данных! Попробуйте ещё!");
	}
}

	
	



