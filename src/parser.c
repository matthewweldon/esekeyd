/* autogenerated by mkparser - DO NOT EDIT */

#include "esekey.h"

char*
parse(struct input_event ev)
{

	if (ev.type == EV_KEY && ev.value == 1) {

		switch (ev.code) {

			/* Keys with keykodes < 111 are useless for Funkey
			   because they are present on all keyboards
			   (e.g. letters, numbers, ENTER, SHIFT, other) */

			case 111:
				return "DELETE";
			case 112:
				return "MACRO";
			case 113:
				return "MUTE";
			case 114:
				return "VOLUMEDOWN";
			case 115:
				return "VOLUMEUP";
			case 116:
				return "POWER";
			case 117:
				return "KPEQUAL";
			case 118:
				return "KPPLUSMINUS";
			case 119:
				return "PAUSE";
			case 120:
				return "F21";
			case 121:
				return "F22";
			case 122:
				return "F23";
			case 123:
				return "F24";
			case 124:
				return "KPCOMMA";
			case 125:
				return "LEFTMETA";
			case 126:
				return "RIGHTMETA";
			case 127:
				return "COMPOSE";
			case 128:
				return "STOP";
			case 129:
				return "AGAIN";
			case 130:
				return "PROPS";
			case 131:
				return "UNDO";
			case 132:
				return "FRONT";
			case 133:
				return "COPY";
			case 134:
				return "OPEN";
			case 135:
				return "PASTE";
			case 136:
				return "FIND";
			case 137:
				return "CUT";
			case 138:
				return "HELP";
			case 139:
				return "MENU";
			case 140:
				return "CALC";
			case 141:
				return "SETUP";
			case 142:
				return "SLEEP";
			case 143:
				return "WAKEUP";
			case 144:
				return "FILE";
			case 145:
				return "SENDFILE";
			case 146:
				return "DELETEFILE";
			case 147:
				return "XFER";
			case 148:
				return "PROG1";
			case 149:
				return "PROG2";
			case 150:
				return "WWW";
			case 151:
				return "MSDOS";
			case 152:
				return "COFFEE";
			case 153:
				return "DIRECTION";
			case 154:
				return "CYCLEWINDOWS";
			case 155:
				return "MAIL";
			case 156:
				return "BOOKMARKS";
			case 157:
				return "COMPUTER";
			case 158:
				return "BACK";
			case 159:
				return "FORWARD";
			case 160:
				return "CLOSECD";
			case 161:
				return "EJECTCD";
			case 162:
				return "EJECTCLOSECD";
			case 163:
				return "NEXTSONG";
			case 164:
				return "PLAYPAUSE";
			case 165:
				return "PREVIOUSSONG";
			case 166:
				return "STOPCD";
			case 167:
				return "RECORD";
			case 168:
				return "REWIND";
			case 169:
				return "PHONE";
			case 170:
				return "ISO";
			case 171:
				return "CONFIG";
			case 172:
				return "HOMEPAGE";
			case 173:
				return "REFRESH";
			case 174:
				return "EXIT";
			case 175:
				return "MOVE";
			case 176:
				return "EDIT";
			case 177:
				return "SCROLLUP";
			case 178:
				return "SCROLLDOWN";
			case 179:
				return "KPLEFTPAREN";
			case 180:
				return "KPRIGHTPAREN";
			case 181:
				return "INTL1";
			case 182:
				return "INTL2";
			case 183:
				return "INTL3";
			case 184:
				return "INTL4";
			case 185:
				return "INTL5";
			case 186:
				return "INTL6";
			case 187:
				return "INTL7";
			case 188:
				return "INTL8";
			case 189:
				return "INTL9";
			case 190:
				return "LANG1";
			case 191:
				return "LANG2";
			case 192:
				return "LANG3";
			case 193:
				return "LANG4";
			case 194:
				return "LANG5";
			case 195:
				return "LANG6";
			case 196:
				return "LANG7";
			case 197:
				return "LANG8";
			case 198:
				return "LANG9";
			case 200:
				return "PLAYCD";
			case 201:
				return "PAUSECD";
			case 202:
				return "PROG3";
			case 203:
				return "PROG4";
			case 205:
				return "SUSPEND";
			case 206:
				return "CLOSE";
			case 207:
				return "PLAY";
			case 208:
				return "FASTFORWARD";
			case 209:
				return "BASSBOOST";
			case 210:
				return "PRINT";
			case 211:
				return "HP";
			case 212:
				return "CAMERA";
			case 213:
				return "SOUND";
			case 214:
				return "QUESTION";
			case 215:
				return "EMAIL";
			case 216:
				return "CHAT";
			case 217:
				return "SEARCH";
			case 218:
				return "CONNECT";
			case 219:
				return "FINANCE";
			case 220:
				return "SPORT";
			case 221:
				return "SHOP";
			case 222:
				return "ALTERASE";
			case 223:
				return "CANCEL";
			case 224:
				return "BRIGHTNESSDOWN";
			case 225:
				return "BRIGHTNESSUP";
			case 226:
				return "MEDIA";
			case 240:
				return "UNKNOWN";
			case 352:
				return "OK";
			case 353:
				return "SELECT";
			case 354:
				return "GOTO";
			case 355:
				return "CLEAR";
			case 356:
				return "POWER2";
			case 357:
				return "OPTION";
			case 358:
				return "INFO";
			case 359:
				return "TIME";
			case 360:
				return "VENDOR";
			case 361:
				return "ARCHIVE";
			case 362:
				return "PROGRAM";
			case 363:
				return "CHANNEL";
			case 364:
				return "FAVORITES";
			case 365:
				return "EPG";
			case 366:
				return "PVR";
			case 367:
				return "MHP";
			case 368:
				return "LANGUAGE";
			case 369:
				return "TITLE";
			case 370:
				return "SUBTITLE";
			case 371:
				return "ANGLE";
			case 372:
				return "ZOOM";
			case 373:
				return "MODE";
			case 374:
				return "KEYBOARD";
			case 375:
				return "SCREEN";
			case 376:
				return "PC";
			case 377:
				return "TV";
			case 378:
				return "TV2";
			case 379:
				return "VCR";
			case 380:
				return "VCR2";
			case 381:
				return "SAT";
			case 382:
				return "SAT2";
			case 383:
				return "CD";
			case 384:
				return "TAPE";
			case 385:
				return "RADIO";
			case 386:
				return "TUNER";
			case 387:
				return "PLAYER";
			case 388:
				return "TEXT";
			case 389:
				return "DVD";
			case 390:
				return "AUX";
			case 391:
				return "MP3";
			case 392:
				return "AUDIO";
			case 393:
				return "VIDEO";
			case 394:
				return "DIRECTORY";
			case 395:
				return "LIST";
			case 396:
				return "MEMO";
			case 397:
				return "CALENDAR";
			case 398:
				return "RED";
			case 399:
				return "GREEN";
			case 400:
				return "YELLOW";
			case 401:
				return "BLUE";
			case 402:
				return "CHANNELUP";
			case 403:
				return "CHANNELDOWN";
			case 404:
				return "FIRST";
			case 405:
				return "LAST";
			case 406:
				return "AB";
			case 407:
				return "NEXT";
			case 408:
				return "RESTART";
			case 409:
				return "SLOW";
			case 410:
				return "SHUFFLE";
			case 411:
				return "BREAK";
			case 412:
				return "PREVIOUS";
			case 413:
				return "DIGITS";
			case 414:
				return "TEEN";
			case 415:
				return "TWEN";
			case 448:
				return "DEL_EOL";
			case 449:
				return "DEL_EOS";
			case 450:
				return "INS_LINE";
			case 451:
				return "DEL_LINE";
			case 511:
				return "MAX";

		}

	}

	return NULL;

}

