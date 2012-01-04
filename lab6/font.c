 
#include <stdlib.h>
#include "font.h"

/** borrowed from Figlet, http://www.figlet.org/, see LICENSE in Figlet distribution */

char *alphabet[][SYMBOL_HEIGHT] =
{
{ " ",
" ",
" ",
" ",
" ",
" "},
{" _ ",
" | |",
" | |",
" |_|",
" (_)",
" "},
{" _ _ ",
" ( | )",
" V V ",
" ",
" ",
" "},
{" _ _ ",
" _| || |_ ",
" |_ .. _|",
" |_ _|",
" |_||_| ",
" "},
{" _ ",
" | | ",
" / __)",
" \\__ \\",
" ( /",
" |_| "},
{" _ __",
" (_)/ /",
" / / ",
" / /_ ",
" /_/(_)",
" "},
{" ___ ",
" ( _ ) ",
" / _ \\/\\",
" | (_> <",
" \\___/\\/",
" "},
{" _ ",
" ( )",
" |/ ",
" ",
" ",
" "},
{" __",
" / /",
" | | ",
" | | ",
" | | ",
" \\_\\"},
{" __ ",
" \\ \\ ",
" | |",
" | |",
" | |",
" /_/ "},
{" ",
" __/\\__",
" \\ /",
" /_ _\\",
" \\/ ",
" "},
{" ",
" _ ",
" _| |_ ",
" |_ _|",
" |_| ",
" "},
{" ",
" ",
" ",
" _ ",
" ( )",
" |/ "},
{" ",
" ",
" _____ ",
" |_____|",
" ",
" "},
{" ",
" ",
" ",
" _ ",
" (_)",
" "},
{" __",
" / /",
" / / ",
" / / ",
" /_/ ",
" "},
{" ___ ",
" / _ \\ ",
" | | | |",
" | |_| |",
" \\___/ ",
" "},
{" _ ",
" / |",
" | |",
" | |",
" |_|",
" "},
{" ____ ",
" |___ \\ ",
" __) |",
" / __/ ",
" |_____|",
" "},
{" _____ ",
" |___ / ",
" |_ \\ ",
" ___) |",
" |____/ ",
" "},
{" _ _ ",
" | || | ",
" | || |_ ",
" |__ _|",
" |_| ",
" "},
{" ____ ",
" | ___| ",
" |___ \\ ",
" ___) |",
" |____/ ",
" "},
{" __ ",
" / /_ ",
" | '_ \\ ",
" | (_) |",
" \\___/ ",
" "},
{" _____ ",
" |___ |",
" / / ",
" / / ",
" /_/ ",
" "},
{" ___ ",
" ( _ ) ",
" / _ \\ ",
" | (_) |",
" \\___/ ",
" "},
{" ___ ",
" / _ \\ ",
" | (_) |",
" \\__, |",
" /_/ ",
" "},
{" ",
" _ ",
" (_)",
" _ ",
" (_)",
" "},
{" ",
" _ ",
" (_)",
" _ ",
" ( )",
" |/ "},
{" __",
" / /",
" / / ",
" \\ \\ ",
" \\_\\",
" "},
{" ",
" _____ ",
" |_____|",
" |_____|",
" ",
" "},
{" __ ",
" \\ \\ ",
" \\ \\",
" / /",
" /_/ ",
" "},
{" ___ ",
" |__ \\",
" / /",
" |_| ",
" (_) ",
" "},
{" ____ ",
" / __ \\ ",
" / / _` |",
" | | (_| |",
" \\ \\__,_|",
" \\____/ "},
{" _ ",
" / \\ ",
" / _ \\ ",
" / ___ \\ ",
" /_/ \\_\\",
" "},
{" ____ ",
" | __ ) ",
" | _ \\ ",
" | |_) |",
" |____/ ",
" "},
{" ____ ",
" / ___|",
" | | ",
" | |___ ",
" \\____|",
" "},
{" ____ ",
" | _ \\ ",
" | | | |",
" | |_| |",
" |____/ ",
" "},
{" _____ ",
" | ____|",
" | _| ",
" | |___ ",
" |_____|",
" "},
{" _____ ",
" | ___|",
" | |_ ",
" | _| ",
" |_| ",
" "},
{" ____ ",
" / ___|",
" | | _ ",
" | |_| |",
" \\____|",
" "},
{" _ _ ",
" | | | |",
" | |_| |",
" | _ |",
" |_| |_|",
" "},
{" ___ ",
" |_ _|",
" | | ",
" | | ",
" |___|",
" "},
{" _ ",
" | |",
" _ | |",
" | |_| |",
" \\___/ ",
" "},
{" _ __",
" | |/ /",
" | ' / ",
" | . \\ ",
" |_|\\_\\",
" "},
{" _ ",
" | | ",
" | | ",
" | |___ ",
" |_____|",
" "},
{" __ __ ",
" | \\/ |",
" | |\\/| |",
" | | | |",
" |_| |_|",
" "},
{" _ _ ",
" | \\ | |",
" | \\| |",
" | |\\ |",
" |_| \\_|",
" "},
{" ___ ",
" / _ \\ ",
" | | | |",
" | |_| |",
" \\___/ ",
" "},
{" ____ ",
" | _ \\ ",
" | |_) |",
" | __/ ",
" |_| ",
" "},
{" ___ ",
" / _ \\ ",
" | | | |",
" | |_| |",
" \\__\\_\\",
" "},
{" ____ ",
" | _ \\ ",
" | |_) |",
" | _ < ",
" |_| \\_\\",
" "},
{" ____ ",
" / ___| ",
" \\___ \\ ",
" ___) |",
" |____/ ",
" "},
{" _____ ",
" |_ _|",
" | | ",
" | | ",
" |_| ",
" "},
{" _ _ ",
" | | | |",
" | | | |",
" | |_| |",
" \\___/ ",
" "},
{" __ __",
" \\ \\ / /",
" \\ \\ / / ",
" \\ V / ",
" \\_/ ",
" "},
{" __ __",
" \\ \\ / /",
" \\ \\ /\\ / / ",
" \\ V V / ",
" \\_/\\_/ ",
" "},
{" __ __",
" \\ \\/ /",
" \\ / ",
" / \\ ",
" /_/\\_\\",
" "},
{" __ __",
" \\ \\ / /",
" \\ V / ",
" | | ",
" |_| ",
" "},
{" _____",
" |__ /",
" / / ",
" / /_ ",
" /____|",
" "},
{" __ ",
" | _|",
" | | ",
" | | ",
" | | ",
" |__|"},
{" __ ",
" \\ \\ ",
" \\ \\ ",
" \\ \\ ",
" \\_\\",
" "},
{" __ ",
" |_ |",
" | |",
" | |",
" | |",
" |__|"},
{" /\\ ",
" |/\\|",
" ",
" ",
" ",
" "},
{" ",
" ",
" ",
" ",
" _____ ",
" |_____|"},
{" _ ",
" ( )",
" \\|",
" ",
" ",
" "},
{" ",
" __ _ ",
" / _` |",
" | (_| |",
" \\__,_|",
" "},
{" _ ",
" | |__ ",
" | '_ \\ ",
" | |_) |",
" |_.__/ ",
" "},
{" ",
" ___ ",
" / __|",
" | (__ ",
" \\___|",
" "},
{" _ ",
" __| |",
" / _` |",
" | (_| |",
" \\__,_|",
" "},
{" ",
" ___ ",
" / _ \\",
" | __/",
" \\___|",
" "},
{" __ ",
" / _|",
" | |_ ",
" | _|",
" |_| ",
" "},
{" ",
" __ _ ",
" / _` |",
" | (_| |",
" \\__, |",
" |___/ "},
{" _ ",
" | |__ ",
" | '_ \\ ",
" | | | |",
" |_| |_|",
" "},
{" _ ",
" (_)",
" | |",
" | |",
" |_|",
" "},
{" _ ",
" (_)",
" | |",
" | |",
" _/ |",
" |__/ "},
{" _ ",
" | | __",
" | |/ /",
" | < ",
" |_|\\_\\",
" "},
{" _ ",
" | |",
" | |",
" | |",
" |_|",
" "},
{" ",
" _ __ ___ ",
" | '_ ` _ \\ ",
" | | | | | |",
" |_| |_| |_|",
" "},
{" ",
" _ __ ",
" | '_ \\ ",
" | | | |",
" |_| |_|",
" "},
{" ",
" ___ ",
" / _ \\ ",
" | (_) |",
" \\___/ ",
" "},
{" ",
" _ __ ",
" | '_ \\ ",
" | |_) |",
" | .__/ ",
" |_| "},
{" ",
" __ _ ",
" / _` |",
" | (_| |",
" \\__, |",
" |_|"},
{" ",
" _ __ ",
" | '__|",
" | | ",
" |_| ",
" "},
{" ",
" ___ ",
" / __|",
" \\__ \\",
" |___/",
" "},
{" _ ",
" | |_ ",
" | __|",
" | |_ ",
" \\__|",
" "},
{" ",
" _ _ ",
" | | | |",
" | |_| |",
" \\__,_|",
" "},
{" ",
" __ __",
" \\ \\ / /",
" \\ V / ",
" \\_/ ",
" "},
{" ",
" __ __",
" \\ \\ /\\ / /",
" \\ V V / ",
" \\_/\\_/ ",
" "},
{" ",
" __ __",
" \\ \\/ /",
" > < ",
" /_/\\_\\",
" "},
{" ",
" _ _ ",
" | | | |",
" | |_| |",
" \\__, |",
" |___/ "},
{" ",
" ____",
" |_ /",
" / / ",
" /___|",
" "},
{" __",
" / /",
" | | ",
" < < ",
" | | ",
" \\_\\"},
{" _ ",
" | |",
" | |",
" | |",
" | |",
" |_|"},
{" __ ",
" \\ \\ ",
" | | ",
" > >",
" | | ",
" /_/ "},
{" /\\/|",
" |/\\/ ",
" ",
" ",
" ",
" "},
{" _ _ ",
" (_)_(_)",
" /_\\ ",
" / _ \\ ",
" /_/ \\_\\",
" "},
{" _ _ ",
" (_)_(_)",
" / _ \\ ",
" | |_| |",
" \\___/ ",
" "},
{" _ _ ",
" (_) (_)",
" | | | |",
" | |_| |",
" \\___/ ",
" "},
{" _ _ ",
" (_)_(_)",
" / _` |",
" | (_| |",
" \\__,_|",
" "},
{" _ _ ",
" (_)_(_)",
" / _ \\ ",
" | (_) |",
" \\___/ ",
" "},
{" _ _ ",
" (_) (_)",
" | | | |",
" | |_| |",
" \\__,_|",
" "},
{" ___ ",
" / _ \\",
" | |/ /",
" | |\\ \\",
" | ||_/",
" |_| "},
{" ",
" ",
" ",
" ",
" ",
" "},
{" ",
" ",
" _____ ",
" |_____|",
" ",
" "},
{" _ _ ",
" (_)_(_)",
" /_\\ ",
" / _ \\ ",
" /_/ \\_\\",
" "},
{" _ _ ",
" (_)_(_)",
" / _ \\ ",
" | |_| |",
" \\___/ ",
" "},
{" _ _ ",
" (_) (_)",
" | | | |",
" | |_| |",
" \\___/ ",
" "},
{" ___ ",
" / _ \\",
" | |/ /",
" | |\\ \\",
" | ||_/",
" |_| "},
{" _ _ ",
" (_)_(_)",
" / _` |",
" | (_| |",
" \\__,_|",
" "},
{" _ _ ",
" (_)_(_)",
" / _ \\ ",
" | (_) |",
" \\___/ ",
" "},
{" _ _ ",
" (_) (_)",
" | | | |",
" | |_| |",
" \\__,_|",
" "},
{" __ __",
" \\ \\ / /",
" | V / ",
" | |\\ \\ ",
" |_| \\_\\",
" "},
{" ______ ",
" |____ | ",
" | | ",
" _____| |_",
" /________/",
" "},
{" ____ ",
" |__ | ",
" | | ",
" ____| | ",
" /____/\\_\\",
" "},
{" _______ ",
" |____ |",
" | | ",
" | | ",
" |_| ",
" "},
{" _______ ",
" |_____ |",
" _ | |",
" | | | |",
" |_| |_|",
" "},
{" ___ ",
" |_ |",
" | |",
" | |",
" |_|",
" "},
{" ________ ",
" \\__ __\\",
" | | ",
" | | ",
" |_| ",
" "},
{" _______ ",
" |. __ |",
" | | | |",
" | | | |",
" |_| |_|",
" "},
{" __ ___ ",
" |. | /_ |",
" | | | |",
" | |___| |",
" |_______|",
" "},
{" ___ ",
" |_ |",
" |_|",
" ",
" ",
" "},
{" _______ ",
" |____ .|",
" | | ",
" | | ",
" | | ",
" |_| "},
{" _____ ",
" |____ \\ ",
" | |",
" ____| |",
" |_____/ ",
" "},
{" |=|____ ",
" |____ |",
" / / ",
" / / ",
" /_/ ",
" "},
{" ________ ",
" |. ___ |",
" | | | |",
" | |___| |",
" |_______|",
" "},
{" _______ ",
" |. __ |",
" | | | |",
" | | _| |",
" |_||___|",
" "},
{" ___ ",
" |_ |",
" | |",
" | |",
" | |",
" |_|"},
{" ___ ",
" |_ |",
" | |",
" __| |",
" |____|",
" "},
{" _______ ",
" |. __ |",
" | | | |",
" | |__/ |",
" |_____/ ",
" "},
{" __ _ ",
" \\ \\ | |",
" \\ \\| |",
" __\\ ` |",
" |______|",
" "},
{" ______ ",
" | __ |",
" | |_ | |",
" |___|| |",
" | |",
" |_|"},
{" _______ ",
" | ___ |",
" \\_\\ | |",
" _____| |",
" |_______|",
" "},
{" __ _ ",
" |. | | |",
" | | // ",
" | |// ",
" | | ",
" |_| "},
{" __ __.",
" \\ \\ / / ",
" \\ V / ",
" ___\\ \\ ",
" |______| ",
" "},
{" ______ ",
" |____ |",
" _ | |",
" | | |_|",
" | | ",
" |_| "},
{" ______ ",
" |____ |",
" | |",
" | |",
" |_|",
" "},
{" _ _ _ ",
" | | | | | |",
" | | | | | |",
" | |/ /_/ / ",
" |_______/ ",
" "},
{" ______ ",
" | __ |",
" | | | |",
" _| | | |",
" |___| |_|",
" "},
{" ",
" __/\\__",
" \\ /",
" /_ _\\",
" \\/ ",
" "},
{NULL}};