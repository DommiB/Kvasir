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
#pragma once
#include "Register/Register.hpp"

namespace Kvasir{
namespace System{
namespace SysCon{
constexpr int baseAddress = 									0x40074000;
struct SysMemReMap		{using address =	Register::Address<baseAddress+	0x000,
											Register::maskFromRange(31,2)>;};
struct AhbBufEn0		{using address =	Register::Address<baseAddress+	0x00C,
											Register::maskFromRange(4,3,9,6,13,12,21,21,28,23,31,30)>;};
struct AhbBufEn1		{using address = 	Register::Address<baseAddress+  0x010,
											Register::maskFromRange(7,1,12,12,27,17,29,29)>;};
struct SysTckCal		{using address = 	Register::Address<baseAddress+  0x018,
											Register::maskFromRange(31,26)>;};
struct NmiSrc			{using address = 	Register::Address<baseAddress+  0x01C,
											Register::maskFromRange(30,6)>;};
struct SysRstStat		{using address = 	Register::Address<baseAddress+  0x040,
											Register::maskFromRange(31,5)>;};
struct PResetCtrl0		{using address = 	Register::Address<baseAddress+  0x044,
											Register::maskFromRange(6,0,8,8,10,10,12,12,17,14,26,22,29,29,31,31)>;};
struct PResetCtrl1		{using address = 	Register::Address<baseAddress+  0x048,
											Register::maskFromRange(8,8,12,11,16,14,20,20,22,22,27,24,31,29)>;};
struct PioPorCap0		{using address = 	Register::Address<baseAddress+  0x04C>;};
struct PioPorCap1		{using address = 	Register::Address<baseAddress+  0x050>;};
struct PioPorCap2		{using address = 	Register::Address<baseAddress+  0x054,
											Register::maskFromRange(31,12)>;};
struct MainClkSelA		{using address = 	Register::Address<baseAddress+  0x080,
											Register::maskFromRange(31,2)>;};
struct MainClkSelB		{using address = 	Register::Address<baseAddress+  0x084,
											Register::maskFromRange(31,2)>;};
struct UsbClkSel		{using address = 	Register::Address<baseAddress+  0x088,
											Register::maskFromRange(31,2)>;};
struct AdcAsyncClkSel	{using address = 	Register::Address<baseAddress+  0x08C,
											Register::maskFromRange(31,2)>;};
struct ClkOutSelA		{using address = 	Register::Address<baseAddress+  0x094,
											Register::maskFromRange(31,2)>;};
struct ClkOutSelB		{using address = 	Register::Address<baseAddress+  0x098,
											Register::maskFromRange(31,2)>;};
struct SysPllClkSel		{using address = 	Register::Address<baseAddress+  0x0A0,
											Register::maskFromRange(31,2)>;};
struct UsbPllClkSel		{using address = 	Register::Address<baseAddress+  0x0A4,
											Register::maskFromRange(31,2)>;};
struct SctPllClkSel		{using address = 	Register::Address<baseAddress+  0x0A8,
											Register::maskFromRange(31,2)>;};
struct SysAhbClkDiv		{using address = 	Register::Address<baseAddress+  0x0C0,
											Register::maskFromRange(31,8)>;};
struct SysAhbClkCtrl0	{using address = 	Register::Address<baseAddress+  0x0C4,
											Register::maskFromRange(0,0,2,2,6,5,8,8,10,10,17,17,26,24,31,31)>;};
struct SysAhbClkCtrl1	{using address = 	Register::Address<baseAddress+  0x0C8,
											Register::maskFromRange(8,8,12,11,16,14,20,20,22,22,31,24)>;};
struct SysTickClkDiv	{using address = 	Register::Address<baseAddress+  0x0CC,
											Register::maskFromRange(31,8)>;};
struct UartClkDiv		{using address = 	Register::Address<baseAddress+  0x0D0,
											Register::maskFromRange(31,8)>;};
struct IoConClkDiv		{using address = 	Register::Address<baseAddress+  0x0D4,
											Register::maskFromRange(31,8)>;};
struct TraceClkDiv		{using address = 	Register::Address<baseAddress+  0x0D8,
											Register::maskFromRange(31,8)>;};
struct UsbClkDiv		{using address = 	Register::Address<baseAddress+  0x0EC,
											Register::maskFromRange(31,8)>;};
struct AdcAsyncClkDiv	{using address = 	Register::Address<baseAddress+  0x0F0,
											Register::maskFromRange(31,8)>;};
struct ClkOutDiv		{using address = 	Register::Address<baseAddress+  0x0F8,
											Register::maskFromRange(31,8)>;};
struct FreqMeCtrl		{using address = 	Register::Address<baseAddress+  0x120,
											Register::maskFromRange(30,14)>;};
struct FlashCfg			{using address = 	Register::Address<baseAddress+  0x124>;};
struct FrgCtrl			{using address = 	Register::Address<baseAddress+  0x128,
											Register::maskFromRange(31,16)>;};
struct UsbClkCtrl		{using address = 	Register::Address<baseAddress+  0x12C,
											Register::maskFromRange(31,2)>;};
struct UsbClkSt			{using address =	Register::Address<baseAddress+	0x130,
											Register::maskFromRange(31,1)>;};
struct BodCtrl			{using address =	Register::Address<baseAddress+	0x180,
											Register::maskFromRange(31,5)>;};
struct IrcCtrl			{using address =	Register::Address<baseAddress+	0x184,
											Register::maskFromRange(31,8)>;};
struct SysOscCtrl		{using address =	Register::Address<baseAddress+	0x188,
											Register::maskFromRange(31,2)>;};
struct RtcOscCtrl		{using address =	Register::Address<baseAddress+	0x190,
											Register::maskFromRange(31,1)>;};
struct SysPllCtrl		{using address =	Register::Address<baseAddress+	0x198,
											Register::maskFromRange(31,8)>;};
struct SysPllStat		{using address =	Register::Address<baseAddress+	0x19C,
											Register::maskFromRange(31,1)>;};
struct UsbPllCtrl		{using address =	Register::Address<baseAddress+	0x1A0,
											Register::maskFromRange(31,8)>;};
struct UsbPllStat		{using address =	Register::Address<baseAddress+	0x1A4,
											Register::maskFromRange(31,1)>;};
struct SctPllCtrl		{using address =	Register::Address<baseAddress+	0x1A8,
											Register::maskFromRange(31,8)>;};
struct SctPllStat		{using address =	Register::Address<baseAddress+	0x1AC,
											Register::maskFromRange(31,1)>;};
struct PdaWakeCfg		{using address =	Register::Address<baseAddress+	0x204,
											Register::maskFromRange(2,0,7,7,31,25)>;};
struct PdRunCfg			{using address =	Register::Address<baseAddress+	0x208,
											Register::maskFromRange(2,0,7,7,31,25)>;};
struct StartErp0		{using address =	Register::Address<baseAddress+	0x218,
											Register::maskFromRange(4,2,20,15,29,27,31,31)>;};
struct StartErp1		{using address =	Register::Address<baseAddress+	0x218,
											Register::maskFromRange(7,0,31,15)>;};
struct Jtag_IDCode		{using address = 	Register::Address<baseAddress+  0x3F4>;};
struct Device_ID0		{using address = 	Register::Address<baseAddress+  0x3F8>;};
struct Device_ID1		{using address = 	Register::Address<baseAddress+  0x3FC>;};

struct SysMemReMap{
	enum class Map {	BootLoaderMode,
						UserRamMode,
						UserFlashMode,
						DoNotUse};
	static constexpr Register::RWFieldLocT<address, 1, 0, Map>	map{};
	template<Map M>
	static constexpr decltype(write(map,Register::value<Map,M>())) writeMap(){ return{}; };
};
struct AhbBufEn0{
	static constexpr Register::RWBitLocT<address, 0>		adc0AhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address, 1>		dacAhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address, 2>		acmpAhbApbWriteEnabled{};
	static constexpr Register::RWBitLocT<address, 5>		inputMuxAhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address,10>		rtcAhbApbWriteBufferingEnabeld{};
	static constexpr Register::RWBitLocT<address,11>		wwdtAhbApbWriteBufferingEnabeld{};
	static constexpr Register::RWBitLocT<address,14>		swmAhbApbWriteBufferingEnabeld{};
	static constexpr Register::RWBitLocT<address,15>		pmuAhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address,16>		uart0AhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address,17>		uart1AhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address,18>		spi0AhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address,19>		spi1AhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address,20>		i2c0AhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address,22>		qeiAhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address,29>		sysconAhbApbWriteBufferingEnabled{};
};
struct AhbBufEn1{
	static constexpr Register::RWBitLocT<address, 0>		adc1AhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address, 8>		mrtAhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address, 9>		pintAhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address,10>		gint0AhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address,11>		gint1AhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address,13>		ritAhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address,14>		sctipuAhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address,15>		fmcAhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address,16>		uart2AhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address,28>		cCanAhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address,30>		ioconAhbApbWriteBufferingEnabled{};
	static constexpr Register::RWBitLocT<address,31>		eepromAhbApbWriteBufferingEnabled{};
};
struct SysTckCal{
	static constexpr Register::RWFieldLocT<address,25,0>		systemTickTimerCalibrationValue{};
};
struct NmiSrc{
	static constexpr Register::RWFieldLocT<address,5,0>		selectedNMINumber{};
	static constexpr Register::RWBitLocT<address,31>		nonMaskableInterruptEnabeld{};
};
struct SysRstStat{
	static constexpr Register::RSTCBitLocT<address,0>			porResetDetected{};
	static constexpr Register::RSTCBitLocT<address,1>			extResetDetected{};
	static constexpr Register::RSTCBitLocT<address,2>			wdtResetDetected{};
	static constexpr Register::RSTCBitLocT<address,3>			bodResetDetected{};
	static constexpr Register::RSTCBitLocT<address,4>			softwareSystemResetDetected{};
};
struct PResetCtrl0{
	static constexpr Register::RWBitLocT<address, 7>		flashResetAsserted{};
	static constexpr Register::RWBitLocT<address, 9>		eepromResetAsserted{};
	static constexpr Register::RWBitLocT<address,11>		muxResetAsserted{};
	static constexpr Register::RWBitLocT<address,13>		ioconResetAsserted{};
	static constexpr Register::RWBitLocT<address,18>		pintResetAsserted{};
	static constexpr Register::RWBitLocT<address,19>		gintResetAsserted{};
	static constexpr Register::RWBitLocT<address,20>		dmaResetAsserted{};
	static constexpr Register::RWBitLocT<address,21>		crcGeneratorReset{};
	static constexpr Register::RWBitLocT<address,27>		adc0Reset{};
	static constexpr Register::RWBitLocT<address,28>		adc1Reset{};
	static constexpr Register::RWBitLocT<address,30>		acmpResetAsserted{};
};
struct PResetCtrl1{
	static constexpr Register::RWBitLocT<address, 0>		mrtResetAsserted{};
	static constexpr Register::RWBitLocT<address, 1>		ritResetAsserted{};
	static constexpr Register::RWBitLocT<address, 2>		sct0ResetAsserted{};
	static constexpr Register::RWBitLocT<address, 3>		sct1ResetAsserted{};
	static constexpr Register::RWBitLocT<address, 4>		sct2ResetAsserted{};
	static constexpr Register::RWBitLocT<address, 5>		sct3ResetAsserted{};
	static constexpr Register::RWBitLocT<address, 6>		sctipuResetAsserted{};
	static constexpr Register::RWBitLocT<address, 7>		cCanResetAsserted{};
	static constexpr Register::RWBitLocT<address, 9>		spi0ResetAsserted{};
	static constexpr Register::RWBitLocT<address,10>		spi1ResetAsserted{};
	static constexpr Register::RWBitLocT<address,13>		i2c0ResetAsserted{};
	static constexpr Register::RWBitLocT<address,17>		uart0ResetAsserted{};
	static constexpr Register::RWBitLocT<address,18>		uart1ResetAsserted{};
	static constexpr Register::RWBitLocT<address,19>		uart2ResetAsserted{};
	static constexpr Register::RWBitLocT<address,21>		qeiResetAsserted{};
	static constexpr Register::RWBitLocT<address,23>		usbResetAsserted{};
	static constexpr Register::RWBitLocT<address,28>		pvtResetAsserted{};
};
struct PioPorCap0{
	static constexpr Register::RWFieldLocT<address,31,0>		stateOfPio0_31to0_0AtPowerOn{};
};
struct PioPorCap1{
	static constexpr Register::RWFieldLocT<address,31,0>		stateOfPio1_31to1_0AtPowerOn{};
};
struct PioPorCap2{
	static constexpr Register::RWFieldLocT<address,11,0>		stateOfPio2_11to2_0AtPowerOn{};
};
struct MainClkSelA{
	enum class Sel {	ircOscillator,
						systemOscilaltor,
						watchdogOscillator,
						DoNotUse};
	static constexpr Register::RWFieldLocT<address, 1, 0, Sel>	sel{};
	template<Sel S>
	static constexpr decltype(write(sel,Register::value<Sel,S>())) writeMainClockSourceSelectorA(){ return{}; };
};
struct MainClkSelB{
	enum class Sel {	mainClkSelA,
						systemPllInput,
						systemPllOutput,
						rtcOscillator32khzOutput};
	static constexpr Register::RWFieldLocT<address, 1, 0, Sel>	sel{};
	template<Sel S>
	static constexpr decltype(write(sel,Register::value<Sel,S>())) writeMainClockSourceSelectorB(){ return{}; };
};
struct UsbClkSel{
	enum class Sel {	ircOscillator,
						systemOscillator,
						usbPllOut,
						mainClock};
	static constexpr Register::RWFieldLocT<address, 1, 0, Sel>	sel{};
	template<Sel S>
	static constexpr decltype(write(sel,Register::value<Sel,S>())) writeUsbClockSource(){ return{};};
};
struct AdcAsyncClkSel{
		enum class Sel {	ircOscillator,
							systemOscillator,
							usbPllOut,
							mainClock};
	static constexpr Register::RWFieldLocT<address, 1, 0, Sel>	sel{};
	template<Sel S>
	static constexpr decltype(write(sel,Register::value<Sel,S>())) writeAdcAsyncClockSource(){ return{}; };
};
struct ClkOutSelA{
		enum class Sel {	ircOscillator,
							crystalOscillator,
							watchdogOscillator,
							mainClock};
	static constexpr Register::RWFieldLocT<address, 1, 0, Sel>	sel{};
	template<Sel S>
	static constexpr decltype(write(sel,Register::value<Sel,S>())) writeClockOutSourceSelectA(){ return{}; };
};
struct ClkOutSelB{
		enum class Sel {	clkOutSelA,
							usbPll,
							sctPll,
							rtc32khzOutput};
	static constexpr Register::RWFieldLocT<address, 1, 0, Sel>	sel{};
	template<Sel S>
	static constexpr decltype(write(sel,Register::value<Sel,S>())) writeClockOutSourceSelectB(){ return{};};
};
struct SysPllClkSel{
	enum class Sel {	irc,
						crystalOscillator,
						doNotUse,
						dontYouUseThisOneEither};
	static constexpr Register::RWFieldLocT<address, 1, 0, Sel>	sel{};
	template<Sel S>
	static constexpr decltype(write(sel,Register::value<Sel,S>())) writeSystemPllClockSource(){ return{};};
};
struct UsbPllClkSel{
	enum class Sel {	ircButNotRecommended,
						systemOscillator,
						doNotUseAs,
						doNotUsePartII};
	static constexpr Register::RWFieldLocT<address, 1, 0, Sel>	sel{};
	template<Sel S>
	static constexpr decltype(write(sel,Register::value<Sel,S>())) writeUsbPllClockSource(){ return{};};
};
struct SctPllClkSel{
	enum class Sel {	irc,
						crystalOscillator,
						doNotUse,
						dontYouUseThisOneEither};
	static constexpr Register::RWFieldLocT<address, 1, 0, Sel>	sel{};
	template<Sel S>
	static constexpr decltype(write(sel,Register::value<Sel,S>())) writeSystemSctClockSource(){ return{};};
};
struct SysAhbClkDiv{
	static constexpr Register::RWFieldLocT<address,7,0>			systemClockDividerValue{};
};
struct SysAhbClkCtrl0{
	static constexpr Register::RWBitLocT<address,1>				clockForRomEnabled{};
	static constexpr Register::RWBitLocT<address,3>				clockForSram1Enabled{};
	static constexpr Register::RWBitLocT<address,4>				clockForSram2Enabled{};
	static constexpr Register::RWBitLocT<address,7>				clockForFlashEnabled{};
	static constexpr Register::RWBitLocT<address,9>				clockForEepromEnabled{};
	static constexpr Register::RWBitLocT<address,11>			clockForMuxEnabled{};
	static constexpr Register::RWBitLocT<address,12>			clockForSwmEnabled{};
	static constexpr Register::RWBitLocT<address,13>			clockForIoconEnabled{};
	static constexpr Register::RWBitLocT<address,14>			clockForGpio0Enabled{};
	static constexpr Register::RWBitLocT<address,15>			clockForGpio1Enabled{};
	static constexpr Register::RWBitLocT<address,16>			clockForGpio2Enabled{};
	static constexpr Register::RWBitLocT<address,18>			clockForPintEnabled{};
	static constexpr Register::RWBitLocT<address,19>			clockForGintEnabled{};
	static constexpr Register::RWBitLocT<address,20>			clockForDmaEnabled{};
	static constexpr Register::RWBitLocT<address,21>			clockForCrcEnabled{};
	static constexpr Register::RWBitLocT<address,22>			clockForWwdtEnabled{};
	static constexpr Register::RWBitLocT<address,23>			clockForRtcEnabled{};
	static constexpr Register::RWBitLocT<address,27>			clockForAdc0Enabled{};
	static constexpr Register::RWBitLocT<address,28>			clockForAdc1Enabled{};
	static constexpr Register::RWBitLocT<address,29>			clockForDacEnabled{};
	static constexpr Register::RWBitLocT<address,30>			clockForAcmpEnabled{};
};
struct SysAhbClkCtrl1{
	static constexpr Register::RWBitLocT<address,0>				clockForMrtEnabled{};
	static constexpr Register::RWBitLocT<address,1>				clockForRitEnabled{};
	static constexpr Register::RWBitLocT<address,2>				clockForSct0Enabled{};
	static constexpr Register::RWBitLocT<address,3>				clockForSct1Enabled{};
	static constexpr Register::RWBitLocT<address,4>				clockForSct2Enabled{};
	static constexpr Register::RWBitLocT<address,5>				clockForSct3Enabled{};
	static constexpr Register::RWBitLocT<address,6>				clockForSctipuEnabled{};
	static constexpr Register::RWBitLocT<address,7>				clockForCcanEnabled{};
	static constexpr Register::RWBitLocT<address,9>				clockForSpi0Enabled{};
	static constexpr Register::RWBitLocT<address,10>			clockForSpi1Enabled{};
	static constexpr Register::RWBitLocT<address,13>			clockForI2c0Enabled{};
	static constexpr Register::RWBitLocT<address,17>			clockForUart0Enabled{};
	static constexpr Register::RWBitLocT<address,18>			clockForUart1Enabled{};
	static constexpr Register::RWBitLocT<address,19>			clockForUart2Enabled{};
	static constexpr Register::RWBitLocT<address,21>			clockForQeiEnabled{};
	static constexpr Register::RWBitLocT<address,23>			clockForUsbEnabled{};
};
struct SysTickClkDiv{
	static constexpr Register::RWFieldLocT<address,7,0>			systickClockDivider{};
};
struct UartClkDiv{
	static constexpr Register::RWFieldLocT<address,7,0>			uartClockDivider{};
};
struct IoConClkDiv{
	static constexpr Register::RWFieldLocT<address,7,0>			ioconClockDivider{};
};
struct TraceClkDiv{
	static constexpr Register::RWFieldLocT<address,7,0>			traceClockDivider{};
};
struct UsbClkDiv{
	static constexpr Register::RWFieldLocT<address,7,0>			usbClockDivider{};
};
struct AdcAsyncClkDiv{
	static constexpr Register::RWFieldLocT<address,7,0>			adcasyncClockDivider{};
};
struct ClkOutDiv{
	static constexpr Register::RWFieldLocT<address,7,0>			clockoutClockDivider{};
};
struct FreqMeCtrl{
	static constexpr Register::ROFieldLocT<address,13,0>		capturedValue{};
	static constexpr Register::RWBitLocT<address,31>			startMeasurmentCycle_bitIsClearedBySystem{};
};
struct FlashCfg			{constexpr int address = baseAddress+ 	0x124;/*here is an error not yet erased*/};
struct FrgCtrl{
	static constexpr Register::RWFieldLocT<address,7,0>			denominatorOfUsartFractionalBaudGenerator{};
	static constexpr Register::RWFieldLocT<address,15,8>		numeratorOFUsartFractionalBaudGenerator{};
};
struct UsbClkCtrl{
	static constexpr Register::RWBitLocT<address,0>		forceUsbNeedClockSignalEnabled{};
	static constexpr Register::RWBitLocT<address,1>		risingEdgeTriggersUsbWakeInsteadOfFallingEnabled{};
};
struct UsbClkSt{
	static constexpr Register::ROBitLocT<address,0>		usbNeedClockSignalStatus{};
};
struct BodCtrl{
	enum class Level {	DoNotUse,
						DoNotUseNeither,
						Level2,
						Level3};
	static constexpr Register::RWFieldLocT<address, 1, 0, Map>	bodRsLevel{};
	static constexpr Register::RWFieldLocT<address, 3, 2, Level>bodIntLevel{};
	template<Level L>
	static constexpr decltype(write(bodRsLevel,Register::value<Level,L>())) writeBodRsLevel(){ return{}; };

	template<Level L>
	static constexpr decltype(write(bodIntLevel,Register::value<Level,L>())) writeBodIntLevel(){ return{}; };

	static constexpr Register::RWBitLocT<address,4>				bodResetEnabled{};
};
struct IrcCtrl{
	static constexpr Register::RWFieldLocT<address,7,0>			ircTrimValue_WriteOnlyInBootCode{};
};
struct SysOscCtrl{
	static constexpr Register::RWBitLocT<address,0>				bypassSysOsciAndFeedPllFormXtalInEnabled{};
	static constexpr Register::RWBitLocT<address,1>				setHighFreqSysOsci_15MhzTo25Mhz{};
};
struct RtcOscCtrl{
	static constexpr Register::RWBitLocT<address,0>				rtc32kHzEnabled{};
};
struct SysPllCtrl{
	static constexpr Register::RWFieldLocT<address,5,0>			feedbackDivider{};

	enum class Divider{	postdivider1,
						postdivider2,
						postdivider4,
						postdivider8};
	static constexpr Register::RWFieldLocT<address, 7, 6, Divider> postDividerRatio{};
	template<Divider D>
	static constexpr decltype(write(postDividerRatio,Register::value<Divider,D>())) writePostDividerRatio(){ return{}; };
};
struct SysPllStat{
	static constexpr Register::ROBitLocT<address,0>			pllLockStatus{};
};
struct UsbPllCtrl{
	static constexpr Register::RWFieldLocT<address,5,0>			feedbackDivider{};

	enum class Divider{	postdivider1,
						postdivider2,
						postdivider4,
						postdivider8};
	static constexpr Register::RWFieldLocT<address, 7, 6, Divider> postDividerRatio{};
	template<Divider D>
	static constexpr decltype(write(postDividerRatio,Register::value<Divider,D>())) writePostDividerRatio(){ return{}; };
};
struct UsbPllStat{
	static constexpr Register::ROBitLocT<address,0>			pllLockStatus{};
};
struct SctPllCtrl{
	static constexpr Register::RWFieldLocT<address,5,0>			feedbackDivider{};

	enum class Divider{	postdivider1,
						postdivider2,
						postdivider4,
						postdivider8};
	static constexpr Register::RWFieldLocT<address, 7, 6, Divider> postDividerRatio{};
	template<Divider D>
	static constexpr decltype(write(postDividerRatio,Register::value<Divider,D>())) writePostDividerRatio(){ return{}; };
};
struct SctPllStat{
	static constexpr Register::ROBitLocT<address,0>			pllLockStatus{};
};
struct PdaWakeCfg{
	static constexpr Register::RWBitLocT<address,3>		ircOsciOutputWakeUpPoweredDown{};
	static constexpr Register::RWBitLocT<address,4>		ircOsciWakeUpPoweredDown{};
	static constexpr Register::RWBitLocT<address,5>		flashWakeUpPoweredDown{};
	static constexpr Register::RWBitLocT<address,6>		eepromWakeUpPoweredDown{};
	static constexpr Register::RWBitLocT<address,8>		bodWakeUpPoweredDown{};
	static constexpr Register::RWBitLocT<address,9>		usbPhyWakeUpPoweredDown{};
	static constexpr Register::RWBitLocT<address,10>	adc0WakeUpPoweredDown{};
	static constexpr Register::RWBitLocT<address,11>	adc1WakeUpPoweredDown{};
	static constexpr Register::RWBitLocT<address,12>	dacWakeUpPoweredDown{};
	static constexpr Register::RWBitLocT<address,13>	acmp0WakeUpPoweredDown{};
	static constexpr Register::RWBitLocT<address,14>	acmp1WakeUpPoweredDown{};
	static constexpr Register::RWBitLocT<address,15>	acmp2WakeUpPoweredDown{};
	static constexpr Register::RWBitLocT<address,16>	acmp3WakeUpPoweredDown{};
	static constexpr Register::RWBitLocT<address,17>	irefWakeUpPoweredDown{};
	static constexpr Register::RWBitLocT<address,18>	tsWakeUpPoweredDown{};
	static constexpr Register::RWBitLocT<address,19>	vddaDivWakeUpPoweredDown{};
	static constexpr Register::RWBitLocT<address,20>	wdtOscWakeUpPoweredDown{};
	static constexpr Register::RWBitLocT<address,21>	sysOscWakeUpPoweredDown{};
	static constexpr Register::RWBitLocT<address,22>	sysPllWakeUpPoweredDown{};
	static constexpr Register::RWBitLocT<address,23>	usbPllWakeUpPoweredDown{};
	static constexpr Register::RWBitLocT<address,24>	sctPllWakeUpPoweredDown{};
};
struct PdRunCfg{
	static constexpr Register::RWBitLocT<address,3>		ircOsciOutputPoweredDown{};
	static constexpr Register::RWBitLocT<address,4>		ircOsciPoweredDown{};
	static constexpr Register::RWBitLocT<address,5>		flashPoweredDown{};
	static constexpr Register::RWBitLocT<address,6>		eepromPoweredDown{};
	static constexpr Register::RWBitLocT<address,8>		bodPoweredDown{};
	static constexpr Register::RWBitLocT<address,9>		usbPhyPoweredDown{};
	static constexpr Register::RWBitLocT<address,10>	adc0PoweredDown{};
	static constexpr Register::RWBitLocT<address,11>	adc1PoweredDown{};
	static constexpr Register::RWBitLocT<address,12>	dacPoweredDown{};
	static constexpr Register::RWBitLocT<address,13>	acmp0PoweredDown{};
	static constexpr Register::RWBitLocT<address,14>	acmp1PoweredDown{};
	static constexpr Register::RWBitLocT<address,15>	acmp2PoweredDown{};
	static constexpr Register::RWBitLocT<address,16>	acmp3PoweredDown{};
	static constexpr Register::RWBitLocT<address,17>	irefPoweredDown{};
	static constexpr Register::RWBitLocT<address,18>	tsPoweredDown{};
	static constexpr Register::RWBitLocT<address,19>	vddaDivPoweredDown{};
	static constexpr Register::RWBitLocT<address,20>	wdtOscPoweredDown{};
	static constexpr Register::RWBitLocT<address,21>	sysOscPoweredDown{};
	static constexpr Register::RWBitLocT<address,22>	sysPllPoweredDown{};
	static constexpr Register::RWBitLocT<address,23>	usbPllPoweredDown{};
	static constexpr Register::RWBitLocT<address,24>	sctPllPoweredDown{};
};

struct StartErp0{
	static constexpr Register::RWBitLocT<address,0>		wwdtInterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,1>		bodInterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,5>		gint0InterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,6>		gint1InterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,7>		pint0InterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,8>		pint1InterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,9>		pint2InterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,10>	pint3InterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,11>	pint4InterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,12>	pint5InterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,13>	pint6InterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,14>	pint7InterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,21>	usart0InterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,22>	usart1InterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,23>	usart2InterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,24>	i2cInterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,25>	spi0InterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,26>	spi1InterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,30>	usbNeedClockSignalWakeUp{};
};
struct StartErp1{
	static constexpr Register::RWBitLocT<address,8>		acmp0InterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,9>		acmp1InterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,10>	acmp2InterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,11>	acmp3InterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,13>	rtcAlarmInterruptWakeUpEnabeld{};
	static constexpr Register::RWBitLocT<address,14>	rtcWakeUpInterruptWakeUpEnabeld{};
};

struct Jtag_IDCode{
	static constexpr Register::ROFieldLocT<address,31,0>	jtagIdCode{};
};
struct Device_ID0{
	static constexpr Register::ROFieldLocT<address,31,0>	partId{};
};
struct Device_ID1{
	static constexpr Register::ROFieldLocT<address,31,0>	revisionId{};
};
}//end of SysCon
namespace PowerConfiguration {
	template<int I>
	using Helper = Register::RWLocation<0x40074208, (1u << I),unsigned(0x07 | (1 << 7) | (0x7F << 25))>;
	//bits 2:0 reserved
	static constexpr 	Helper<3>		ircOscillatorOutputPoweredDown{};
	static constexpr	Helper<4>		ircOscillatorPoweredDown{};
	static constexpr 	Helper<5>		flashPoweredDown{};
	static constexpr 	Helper<6>		eepromPoweredDown{};
	//bit 7 reserved
	static constexpr 	Helper<8>		brownOutDetectPoweredDown{};
	static constexpr 	Helper<9>		usbPhyPoweredDown{};
	static constexpr 	Helper<10>		adc0PoweredDown{};
	static constexpr 	Helper<11>		adc1PoweredDown{};
	static constexpr 	Helper<12>		dacPoweredDown{};
	static constexpr 	Helper<13>		analogComperator0PoweredDown{};
	static constexpr 	Helper<14>		analogComparator1PoweredDown{};
	static constexpr 	Helper<15>		analogComparator2PoweredDown{};
	static constexpr 	Helper<16>		analogComparator3PoweredDown{};
	static constexpr 	Helper<17>		internalVoltageRefPoweredDown{};
	static constexpr 	Helper<18>		temperaturSensorPoweredDown{};
	static constexpr 	Helper<19>		vddaDivPoweredDown{};
	static constexpr 	Helper<20>		watchdogOscillatorPoweredDown{};
	static constexpr 	Helper<21>		systemOscillatorPoweredDown{};
	static constexpr 	Helper<22>		systemPllPoweredDown{};
	static constexpr 	Helper<23>		usbPllPoweredDown{};
	static constexpr 	Helper<24>		sctPllPoweredDown{};
	//bits 31:25 reserved
}

namespace PowerControl {
	template<int I>
	using Helper = Register::RWLocation<0x4003C000, (1u << I),~unsigned((1 << 3) | (1 << 8) | (1 << 11))>;
	//bits 2:0 reserved
	static constexpr 	Helper<3>		noPowerDown{};
	//bits 7:4 reserved
	static constexpr	Helper<8>		ircOscillatorDisabled{};
	//bits 10:9 reserved
	static constexpr 	Helper<11>		flashDisabled{};
	//bits 31:12 reserved
}

namespace ClockSource{
	namespace Main{
		constexpr int address = 0x40074080;
		namespace Detail{
			using SourceAIrc = Register::BlindWriteActionT<address,0x03,0>;
			using SourceASystemOscillator = Register::BlindWriteActionT<address,0x03,1>;
			using SourceAWatchdogOscillator = Register::BlindWriteActionT<address,0x03,2>;
			using SourceBSourceA = Register::BlindWriteActionT<address+4,0x03,0>;
		}
		constexpr MPL::List<Detail::SourceAIrc,Detail::SourceBSourceA> irc{};
		constexpr MPL::List<Detail::SourceASystemOscillator,Detail::SourceBSourceA> systemOscillator{};
		constexpr MPL::List<Detail::SourceAWatchdogOscillator,Detail::SourceBSourceA> watchdogOscillator{};
		constexpr Register::BlindWriteActionT<address+4,0x03,1> pllInput{};
		constexpr Register::BlindWriteActionT<address+4,0x03,2> pllOutput{};
		constexpr Register::BlindWriteActionT<address+4,0x03,3> rtcOscillator{};
	}
	namespace Usb{
		enum class Source{ircOscillator,systemOscillator,usbPllOut,mainClock};
		constexpr Register::RWLocation<0x40074088,0x03,~0x03,Source> source;
	}
}

namespace ClockDivide{
	constexpr Register::RWLocation<0x400740CC,0xFF,~0xFF> systick;
	constexpr Register::RWLocation<0x400740D0,0xFF,~0xFF> usart;
	constexpr Register::RWLocation<0x400740D4,0xFF,~0xFF> ioconGlitchFilter;
	constexpr Register::RWLocation<0x400740D8,0xFF,~0xFF> armTrace;
	constexpr Register::RWLocation<0x400740EC,0xFF,~0xFF> usb;
	constexpr Register::RWLocation<0x400740F0,0xFF,~0xFF> adcSync;
	constexpr Register::RWLocation<0x400740F8,0xFF,~0xFF> clkOut;
}

namespace Pll{
	enum class PostDividerRatio {div1, div2, div4, div8};
	struct ClockSource{
		static constexpr int address{0x400740A0};
		static constexpr Register::WriteActionT<address,0x03,0x00> 		internalRc{};
		static constexpr Register::WriteActionT<address,0x03,0x01> 		systemOscillator{};
	};

	struct Control{
		static constexpr unsigned address{0x40074198u};
		static constexpr unsigned writable{0xFFFFFF00u};
		static constexpr Register::RWLocation<address,0x3F,writable> feedbackDivider{};
		static constexpr Register::RWLocation<address,(3 << 6),writable,PostDividerRatio> postDivider{};
	};
	constexpr Register::ROLocation<0x4007419C,0x01> statusLocked{};

}

namespace UsbPll{
	struct ClockSource{
		static constexpr int address{0x400740A4};
		static constexpr Register::WriteActionT<address,0x03,0x00> 		internalRc{};
		static constexpr Register::WriteActionT<address,0x03,0x01> 		systemOscillator{};
	};
	struct Control{
		static constexpr int address{0x400741A0};
		static constexpr unsigned writable{0xFFFFFF00u};
		static constexpr Register::RWLocation<address,0x3F,writable> feedbackDivider{};
		static constexpr Register::RWLocation<address,(3 << 6),writable,Pll::PostDividerRatio> postDivider{};
	};
	constexpr Register::ROLocation<0x400741A4,0x01> statusLocked{};
}

struct AHBClock{
	struct Enabled{
		template<int Bit>
		using Helper1 = Register::RWLocation<0x400740C4,(1u << Bit),~unsigned((1<<0) | (1<<2) | (3<<5) | ( 1<<8) | (1<<10) | (1<<17) | (7<<24) | (1<<31))>;
		template<int Bit>
		using Helper2 = Register::RWLocation<0x400740C8,(1u << Bit),~unsigned((1<<8) | (3<<11) | (7<<14) | ( 1<<20) | (1<<22) | (0xFF<<24))>;

		//bit 0 is sys which is always on
		static constexpr	Helper1<1>		rom{};
		//bit 2 reserved
		static constexpr	Helper1<3>		ram1{};
		static constexpr	Helper1<4>		ram2{};
		//bit 6:5 reserved
		static constexpr	Helper1<7>		flashReg{};
		//bit 8 reserved
		static constexpr 	Helper1<9>		eeprom{};
		//bit 10 reserved
		static constexpr	Helper1<11>		inputMux{};
		static constexpr	Helper1<12>		switchMatrix{};
		static constexpr	Helper1<13>		iocon{};
		static constexpr	Helper1<14>		gpio0{};
		static constexpr	Helper1<15>		gpio1{};
		static constexpr	Helper1<16>		gpio2{};
		//bit 17 reserved
		static constexpr	Helper1<18>		pinInt{};
		static constexpr	Helper1<19>		groupedPinInt{};
		static constexpr	Helper1<20>		dma{};
		static constexpr	Helper1<21>		crc{};
		static constexpr	Helper1<22>		wwdt{};
		static constexpr	Helper1<23>		rtc{};
		//bit 26:24 reserved
		static constexpr	Helper1<27>		adc0{};
		static constexpr	Helper1<28>		adc1{};
		static constexpr	Helper1<29>		dac{};
		static constexpr	Helper1<30>		analogComparator{};
		//bit 31 reserved

		//SYSAHBCLKCTRL1
		static constexpr	Helper2<0>	mrt{};
		static constexpr	Helper2<1>	rit{};
		static constexpr	Helper2<2>	sct0{};
		static constexpr	Helper2<3>	sct1{};
		static constexpr	Helper2<4>	sct2{};
		static constexpr	Helper2<5>	sct3{};
		static constexpr 	Helper2<6>	sctIpu{};
		static constexpr	Helper2<7>	cCan{};
		//bit 8 is reserved
		static constexpr	Helper2<9>	spi0{};
		static constexpr	Helper2<10>	spi1{};
		//bit 12:11 are reserved
		static constexpr	Helper2<13>	i2c0{};
		//bit 16:14
		static constexpr	Helper2<17>	uart0{};
		static constexpr	Helper2<18>	uart1{};
		static constexpr 	Helper2<19>	uart2{};
		//bit 20 reserved
		static constexpr	Helper1<21>	qei{};
		//bit 22 reserved
		static constexpr	Helper2<23>	usb{};
		//bits 31:24 reserved
	};

	// SYSAHBCLKDIV
	static constexpr Register::RWLocation<0x400740C0,0xFF,~0xFF> divider{};
};

namespace Flash{
	static constexpr int address{0x40074124};
	template<int I>
	struct MakeAction : Register::WriteActionT<address,(0x0F << 12),(I << 12)>{};
	template<int I>
	using MakeActionT = typename MakeAction<I>::Type;
	static constexpr MakeActionT<0> oneSysclock{};		//up to 25mhz
	static constexpr MakeActionT<1> twoSysclock{};		//up to 55mhz
	static constexpr MakeActionT<2> threeSysclock{};	//up to 72mhz
};

namespace PeripheralResetEnabled{			//PRESETCTRL register actions
	constexpr int address{0x40074044};
	template<int Bit>
	using Helper1 = Register::RWLocation<0x40074044,(1u << Bit),~unsigned((7<<0) | (1<<8) | (1<<10) | ( 1<<12) | (0xF<<14) | (0x1F<<22) | (1<<29) | (1<<31))>;
	template<int Bit>
	using Helper2 = Register::RWLocation<0x40074048,(1u << Bit),~unsigned((1<<8) | (3<<11) | (7<<14) | ( 1<<20) | (1<<22) | (0xFF<<24))>;

	//bit 6:0 reserved
	static constexpr	Helper1<7>		flash{};
	//bit 8 reserved
	static constexpr	Helper1<9>		eeprom{};
	//bit 10 reserved
	static constexpr	Helper1<11>		inputMux{};
	//bit 12 reserved
	static constexpr	Helper1<13>		ioCon{};
	//bit 17:14 reserved
	static constexpr	Helper1<18>		pinInterrupt{};
	static constexpr	Helper1<19>		groupedInterrupt{};
	static constexpr	Helper1<20>		dma{};
	static constexpr	Helper1<21>		crc{};
	//bit 26:22 reserved
	static constexpr	Helper1<27>		adc0{};
	static constexpr	Helper1<18>		adc1{};
	//bit 29 reserved
	static constexpr	Helper1<30>		analogComparator{};
	//bit 31 reserved

	static constexpr	Helper2<0>	multirateTimer{};
	static constexpr	Helper2<1>	rit{};
	static constexpr	Helper2<2>	sct0{};
	static constexpr	Helper2<3>	sct1{};
	static constexpr	Helper2<4>	sct2{};
	static constexpr	Helper2<5>	sct3{};
	static constexpr	Helper2<6>	sctInput{};
	static constexpr	Helper2<7>	cCan{};
	//bit 8 reserved
	static constexpr	Helper2<9>	spi0{};
	static constexpr	Helper2<10>	spi1{};
	//bit 12:11 reserved
	static constexpr	Helper2<13>	i2c0{};
	//bit 16:14 reserved
	static constexpr	Helper2<17>	uart0{};
	static constexpr	Helper2<18>	uart1{};
	static constexpr	Helper2<19>	uart2{};
	//bit 20 reserved
	static constexpr	Helper2<21>	qei{};
	//bit 22 reserved
	static constexpr	Helper2<23>	usb{};
	//bit 31:24 reserved

};



