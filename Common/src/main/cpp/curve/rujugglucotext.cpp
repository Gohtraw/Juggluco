#include "jugglucotext.hpp"
#ifndef WEAROS
constexpr static std::string_view rulabels[]={"Kopoтkuй",
"Yглeвoд",
"Сахар",
"Дoлгuй",
"Велик",
"Хoдьбa",
"Кровь"};




constexpr static Shortcut_t  rushortinit[]= { {"Хлеб",
        .48},
        {"Яблoкo",
        .165f},
        {"Фрукт",
        .058f},
        {"Рис",
        .75f},
        {"Makaрoны",
        .65f},
        {"Томат",
        .03f},
        {"Суп",
        .078f},
        {"Сок",
        .109f},
        {"Спорт",
        .873f},
        {"Грибы",
        .07300000f}};
#endif

jugglucotext rutext {
	.daylabel={"Вс",
	"Пн",
	"Вт",
	"Ср",
	"Чт",
	"Пт",
	"Сб"},
.speakdaylabel={ "Воскресенье","Понедельник","Вторник","Среда","Четверг","Пятница","Суббота"},
	.monthlabel={
      "Янв",
      "Фев",
      "Мар",
      "Апр",
      "Май"      ,             
      "Июн",
       "Июл",
       "Авг",
       "Сен",
      "Окт",
      "Ноя",
      "Дек"},

	.scanned="Сканирование",
	.readysecEnable="Датчик будет готов через %d минут. Повторите сканирование, чтобы включить потоковую передачу.",
	.readysec="Датчик будет готов через %d минут.",
.networkproblem="Нет данных глюкозы от зеркала",
.enablebluetooth="Вкл Bluetooth",
.useBluetoothOff="'Используйте Bluetooth' выкл.",
.noconnectionerror=": Нет соединения",
.stsensorerror=": Ошибка датчика",
.streplacesensor=": Заменить датчик?",
.endedformat="%s перестал работать. Состояние=%d",
.notreadyformat="%s не готов. Состояние=%d",
#ifndef WEAROS
	.median="Медиана",
	.middle="Средний",
#endif
	.history="История",
//	.historyinfo="Once per 15 minutes.\nRemembered on the sensor for 8 hours.\nScanning transfers them to this program.\nSensor: ", 
//	.history3info="Once per 5 minutes.\nRemembered on the sensor for 14 days.\nTransferred by Bluetooth to this program.\nSensor: ",
	.sensorstarted= "Начал работу:",
	.lastscanned="Последний скан:",
	.laststream="Последний поток:",
	.sensorends="Официально заканчивается: ",
    .sensorexpectedend="Ожидаемо заканчивается: ",
#ifndef WEAROS
	.newamount="Новая запись",
	.averageglucose="Средняя ГК: ",
	.duration="Продолжительность: %.1f день",
	.timeactive="%.1f%% активного времени",
	.nrmeasurement="Количество измерений: %d",
	.EstimatedA1C="Предполагаемый A1C: %.1f%% (%d mmol/mol)",
	.GMI="Индикатор уровня ГК: %.1f%% (%d mmol/mol)",
	.SD="SD: %.2f",
	.glucose_variability="Изменчивость уровня ГК: %.1f%%",
     .menustr0={
		"System UI        ",
		"Меню",
		"Часы",
		"Датчик",
		"Настройки",
#if defined(SIBIONICS)
"Sibionics",
#else
		"About",
#endif
		"Закрыть",
		"Стоп тревога"
		},
	.menustr1={
		"Экспорт",
		"Зеркало",
		"Новая запись",
		"Все записи",
		"Статистика",
		"Озвучка",
		"Плав. глюк.        "
		},
	.menustr2= {"Последний скан",
	"Сканирование        ",
	"Поток",
	"История",
	"Записи",
	"Еда",
	"Темная тема"},
	.menustr3= {hourminstr,
	"Поиск",
	"К дате",
	"День назад",
	"День вперед",
	"Неделя назад",
	"Неделя вперед"},
#else
 .amount="Значение",
 .menustr0= {
	"Зеркало",
	"Датчик",
	"    Темная тема      ",
        "Настройки",
	"Стоп тревога" },
.menustr2= {"К дате  ",
hourminstr,
"День назад                ",
rutext.amount},
#endif

	.scanerrors={
		{"Ошибка скана (%d)",
			"Попробуйте еще"},
		{"Ошибка установки",
			"?"},
		{"Ошибка при обработке данных",
			"Попробуйте еще"},
		{"Активированный датчик",
			""},
		{"Датчик определенно закончился",
			""},

		{"Датчик готов к работе через",
			"%d мин"},
		{"Ошибка датчика (373)",
			"Попробуйте позже"},
		{"Инициализирован новый датчик",
			"Скан еще раз, чтобы использовать его"},
		{"",
			"Блокирует касания во время скана"},
		{"",
			""},
		{"Ошибка инициализации библиотеки",
			"Отсутствуют общие библиотеки?"},
		{"Ошибка инициализации класса",
			"Сделай что-нибудь"},
		{"Процедура занимает слишком много времени",
			"Программа будет немеделено закрыта"},
		{"Заменить датчик (365)",
			"Ваш датчик не работает. Пожалуйста, снимите ваш датчик и установите новый."},
		{"Заменить датчик (368)",
			"Ваш датчик не работает. Пожалуйста, снимите ваш датчик и установите новый."},
		{"",
			""},
		{"Ошибка сканирования",
			"Попробуйте еще"}},

.libre3scanerror={"FreeStyle Libre 3, Ошибка сканирования",

			"Попробуйте еще"},
.libre3wrongID={"Ошибка, неверный ID аккаунта?",
	"Укажите в настройках -> Libreview ту же учетную запись, что использовалась для активации датчика"},
.libre3scansuccess= {"FreeStyle Libre 3 датчик", 
	"Значения уровня глюкозы теперь будет получать Juggluco"},
.unknownNFC={"Нераспознанная ошибка сканирования NFC", 

			"Попробуйте еще"},
.nolibre3={"FreeStyle Libre 3 датчик",
	"Загрузите правильную версию с сайта https://www.juggluco.nl/download.html"},
#ifndef WEAROS
	.advancedstart= R"(<h1>Модифицированное устройство, телефон с ROOT</h1>
<p>В одной из библиотек, используемых этим приложением, есть ошибка, которая приводит
к сбою при обнаружении определенных файлов. Некоторые из
этих файлов содержатся на вашем устройстве. Эта программа содержит способ обойти эту ошибку, но
, вероятно, лучше сделать эти файлы необнаруживаемыми каким-либо другим
способом. У Magisk, например, есть возможность скрыть root для определенных
приложений (Magisk hide или список запрещенных приложений) и изменить свое собственное имя,
необходимы оба варианта. В вашем случае у него проблемы со следующим файлом)",
	.add_s=true,
.shortinit=rushortinit,
.labels=rulabels,
.checked="Проверен",
.unchecked="Не проверен",
.Undetermined="Не определен",
.FallingQuickly="Быстро падает",
.Falling="Падает",
.Stable="Медленно меняется",
.Rising="Поднимается",
.RisingQuickly="Быстро растет",
#endif
.receivingpastvalues="Получение старых значений"

		}


		;

#include "logs.hpp"
extern void setuseru();
void setuseru() {
LOGAR("Использование rus");
 usedtext= &rutext;
 }
