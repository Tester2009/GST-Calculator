/*
	GST Calculator.
	Proudly coded by Muhammad Aliff Muazzam (Tester2009).
	<3 Katze xD
	From German-Malaysian Institute (GMI). Training for Advanced Technology.
	Date: March 11, 2015

	http://aliff.muazzam.my/
	https://www.facebook.com/Tester2009
	https://github.com/alepcat1710
	Feel free to use. Do not change copyright, mastah !

	Written in Sublime Text (UNREGISTERED)
	Run in Microsoft Visual C++ 2010 Express
*/
/*
The MIT License (MIT)
Copyright (c) [2015] [Muhammad Aliff Muazzam]
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include "stdafx.h"
#define GST_percent 0.06 // to calculate GST. ( (6/100) == (6%) )

int _tmain(int argc, _TCHAR* argv[])
{
	int input; float calculate, calculate_2;
	printf("\n\t  GST Calculator\n");
	printf("\n\t  Enter value:\n");
	scanf("%d", &input);
	calculate = GST_percent*input;
	calculate_2 = input+calculate;
	printf("\n\t  Price before GST: RM %d", input);
	printf("\n\t  GST: RM %.2f", calculate);
	printf("\n\t  Price after GST: RM %.2f\n\n", calculate_2);
	return 0;
}

