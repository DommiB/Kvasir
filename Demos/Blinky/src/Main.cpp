/**************************************************************************
Copyright 2015 Odin Holmes
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
****************************************************************************/
#include "Hardware.h"
#include "Timer/Timer.hpp"
#include "StartUp/StartUp.hpp"

using namespace Hardware;
using Kvasir::Register::value;

class Led {
public:
	static constexpr auto init = makeOutput(ledPin);  //init can be a single action or a list of actions
	static void toggle(){
		apply(makeToggle(ledPin));
	}
};

struct TimerConfig : TimerDefaultConfig {
	static constexpr auto userInit = list(
			write(MatchRegister::select(match0),value<10000u>()),
			set(MatchControl::interruptOnMatch(match0)),
			set(MatchControl::resetOnMatch(match0)));
};

class Timer : public Kvasir::Timer::Base<Timer,TimerConfig>{
public:
	static void onMatch(decltype(Config::match0)){
		Led::toggle();
	}
};

int main(){
	Led::toggle();
	Led::toggle();
	while(1);
	return 0;
}
KVASIR_START(Timer,Led)



