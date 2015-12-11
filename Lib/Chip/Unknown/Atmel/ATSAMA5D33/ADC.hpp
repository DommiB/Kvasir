#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-Digital Converter
    namespace AdcCr{    ///<Control Register
        using Addr = Register::Address<0xf8018000,0xfffffff0,0,unsigned>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
        ///Start Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
        ///Touchscreen Calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tscalib{}; 
        namespace TscalibValC{
        }
        ///Automatic Calibration of ADC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> autocal{}; 
        namespace AutocalValC{
        }
    }
    namespace AdcMr{    ///<Mode Register
        using Addr = Register::Address<0xf8018004,0x70400091,0,unsigned>;
        ///Trigger Selection
        enum class TrgselVal {
            adcTrig0=0x00000000,     ///<ADTRG
            adcTrig1=0x00000001,     ///<TIOA0
            adcTrig2=0x00000002,     ///<TIOA1
            adcTrig3=0x00000003,     ///<TIOA2
            adcTrig4=0x00000004,     ///<PWM event line 0
            adcTrig5=0x00000005,     ///<PWM_even line 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,TrgselVal> trgsel{}; 
        namespace TrgselValC{
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::adcTrig0> adcTrig0{};
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::adcTrig1> adcTrig1{};
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::adcTrig2> adcTrig2{};
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::adcTrig3> adcTrig3{};
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::adcTrig4> adcTrig4{};
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::adcTrig5> adcTrig5{};
        }
        ///Sleep Mode
        enum class SleepVal {
            normal=0x00000000,     ///<Normal Mode: The ADC Core and reference voltage circuitry are kept ON between conversions
            sleep=0x00000001,     ///<Sleep Mode: The wake-up time can be modified by programming FWUP bit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SleepVal> sleep{}; 
        namespace SleepValC{
            constexpr Register::FieldValue<decltype(sleep),SleepVal::normal> normal{};
            constexpr Register::FieldValue<decltype(sleep),SleepVal::sleep> sleep{};
        }
        ///Fast Wake Up
        enum class FwupVal {
            off=0x00000000,     ///<If SLEEP is 1 then both ADC Core and reference voltage circuitry are OFF between conversions
            on=0x00000001,     ///<If SLEEP is 1 then Fast Wake-up Sleep Mode: The Voltage reference is ON between conversions and ADC Core is OFF
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,FwupVal> fwup{}; 
        namespace FwupValC{
            constexpr Register::FieldValue<decltype(fwup),FwupVal::off> off{};
            constexpr Register::FieldValue<decltype(fwup),FwupVal::on> on{};
        }
        ///Prescaler Rate Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> prescal{}; 
        namespace PrescalValC{
        }
        ///Start Up Time
        enum class StartupVal {
            sut0=0x00000000,     ///<0 periods of ADCClock
            sut8=0x00000001,     ///<8 periods of ADCClock
            sut16=0x00000002,     ///<16 periods of ADCClock
            sut24=0x00000003,     ///<24 periods of ADCClock
            sut64=0x00000004,     ///<64 periods of ADCClock
            sut80=0x00000005,     ///<80 periods of ADCClock
            sut96=0x00000006,     ///<96 periods of ADCClock
            sut112=0x00000007,     ///<112 periods of ADCClock
            sut512=0x00000008,     ///<512 periods of ADCClock
            sut576=0x00000009,     ///<576 periods of ADCClock
            sut640=0x0000000a,     ///<640 periods of ADCClock
            sut704=0x0000000b,     ///<704 periods of ADCClock
            sut768=0x0000000c,     ///<768 periods of ADCClock
            sut832=0x0000000d,     ///<832 periods of ADCClock
            sut896=0x0000000e,     ///<896 periods of ADCClock
            sut960=0x0000000f,     ///<960 periods of ADCClock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,StartupVal> startup{}; 
        namespace StartupValC{
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut0> sut0{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut8> sut8{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut16> sut16{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut24> sut24{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut64> sut64{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut80> sut80{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut96> sut96{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut112> sut112{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut512> sut512{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut576> sut576{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut640> sut640{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut704> sut704{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut768> sut768{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut832> sut832{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut896> sut896{};
            constexpr Register::FieldValue<decltype(startup),StartupVal::sut960> sut960{};
        }
        ///Analog Settling Time
        enum class SettlingVal {
            ast3=0x00000000,     ///<3 periods of ADCClock
            ast5=0x00000001,     ///<5 periods of ADCClock
            ast9=0x00000002,     ///<9 periods of ADCClock
            ast17=0x00000003,     ///<17 periods of ADCClock
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,SettlingVal> settling{}; 
        namespace SettlingValC{
            constexpr Register::FieldValue<decltype(settling),SettlingVal::ast3> ast3{};
            constexpr Register::FieldValue<decltype(settling),SettlingVal::ast5> ast5{};
            constexpr Register::FieldValue<decltype(settling),SettlingVal::ast9> ast9{};
            constexpr Register::FieldValue<decltype(settling),SettlingVal::ast17> ast17{};
        }
        ///Analog Change
        enum class AnachVal {
            none=0x00000000,     ///<No analog change on channel switching: DIFF0, GAIN0 and OFF0 are used for all channels
            allowed=0x00000001,     ///<Allows different analog settings for each channel. See ADC_CGR and ADC_COR Registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,AnachVal> anach{}; 
        namespace AnachValC{
            constexpr Register::FieldValue<decltype(anach),AnachVal::none> none{};
            constexpr Register::FieldValue<decltype(anach),AnachVal::allowed> allowed{};
        }
        ///Tracking Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> tracktim{}; 
        namespace TracktimValC{
        }
        ///Use Sequence Enable
        enum class UseqVal {
            numOrder=0x00000000,     ///<Normal Mode: The controller converts channels in a simple numeric order depending only on the channel index.
            regOrder=0x00000001,     ///<User Sequence Mode: The sequence respects what is defined in ADC_SEQR1 and ADC_SEQR2 registers and can be used to convert several times the same channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,UseqVal> useq{}; 
        namespace UseqValC{
            constexpr Register::FieldValue<decltype(useq),UseqVal::numOrder> numOrder{};
            constexpr Register::FieldValue<decltype(useq),UseqVal::regOrder> regOrder{};
        }
    }
    namespace AdcSeqr1{    ///<Channel Sequence Register 1
        using Addr = Register::Address<0xf8018008,0x00000000,0,unsigned>;
        ///User Sequence Number 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> usch1{}; 
        namespace Usch1ValC{
        }
        ///User Sequence Number 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> usch2{}; 
        namespace Usch2ValC{
        }
        ///User Sequence Number 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> usch3{}; 
        namespace Usch3ValC{
        }
        ///User Sequence Number 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> usch4{}; 
        namespace Usch4ValC{
        }
        ///User Sequence Number 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> usch5{}; 
        namespace Usch5ValC{
        }
        ///User Sequence Number 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> usch6{}; 
        namespace Usch6ValC{
        }
        ///User Sequence Number 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> usch7{}; 
        namespace Usch7ValC{
        }
        ///User Sequence Number 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> usch8{}; 
        namespace Usch8ValC{
        }
    }
    namespace AdcSeqr2{    ///<Channel Sequence Register 2
        using Addr = Register::Address<0xf801800c,0xfffff000,0,unsigned>;
        ///User Sequence Number 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> usch9{}; 
        namespace Usch9ValC{
        }
        ///User Sequence Number 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> usch10{}; 
        namespace Usch10ValC{
        }
        ///User Sequence Number 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> usch11{}; 
        namespace Usch11ValC{
        }
    }
    namespace AdcCher{    ///<Channel Enable Register
        using Addr = Register::Address<0xf8018010,0xfffff000,0,unsigned>;
        ///Channel 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        namespace Ch0ValC{
        }
        ///Channel 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        namespace Ch1ValC{
        }
        ///Channel 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        namespace Ch2ValC{
        }
        ///Channel 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
        namespace Ch3ValC{
        }
        ///Channel 4 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch4{}; 
        namespace Ch4ValC{
        }
        ///Channel 5 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch5{}; 
        namespace Ch5ValC{
        }
        ///Channel 6 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6{}; 
        namespace Ch6ValC{
        }
        ///Channel 7 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7{}; 
        namespace Ch7ValC{
        }
        ///Channel 8 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ch8{}; 
        namespace Ch8ValC{
        }
        ///Channel 9 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ch9{}; 
        namespace Ch9ValC{
        }
        ///Channel 10 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ch10{}; 
        namespace Ch10ValC{
        }
        ///Channel 11 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ch11{}; 
        namespace Ch11ValC{
        }
    }
    namespace AdcChdr{    ///<Channel Disable Register
        using Addr = Register::Address<0xf8018014,0xfffff000,0,unsigned>;
        ///Channel 0 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        namespace Ch0ValC{
        }
        ///Channel 1 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        namespace Ch1ValC{
        }
        ///Channel 2 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        namespace Ch2ValC{
        }
        ///Channel 3 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
        namespace Ch3ValC{
        }
        ///Channel 4 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch4{}; 
        namespace Ch4ValC{
        }
        ///Channel 5 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch5{}; 
        namespace Ch5ValC{
        }
        ///Channel 6 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6{}; 
        namespace Ch6ValC{
        }
        ///Channel 7 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7{}; 
        namespace Ch7ValC{
        }
        ///Channel 8 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ch8{}; 
        namespace Ch8ValC{
        }
        ///Channel 9 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ch9{}; 
        namespace Ch9ValC{
        }
        ///Channel 10 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ch10{}; 
        namespace Ch10ValC{
        }
        ///Channel 11 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ch11{}; 
        namespace Ch11ValC{
        }
    }
    namespace AdcChsr{    ///<Channel Status Register
        using Addr = Register::Address<0xf8018018,0xfffff000,0,unsigned>;
        ///Channel 0 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        namespace Ch0ValC{
        }
        ///Channel 1 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        namespace Ch1ValC{
        }
        ///Channel 2 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        namespace Ch2ValC{
        }
        ///Channel 3 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
        namespace Ch3ValC{
        }
        ///Channel 4 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch4{}; 
        namespace Ch4ValC{
        }
        ///Channel 5 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch5{}; 
        namespace Ch5ValC{
        }
        ///Channel 6 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6{}; 
        namespace Ch6ValC{
        }
        ///Channel 7 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7{}; 
        namespace Ch7ValC{
        }
        ///Channel 8 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ch8{}; 
        namespace Ch8ValC{
        }
        ///Channel 9 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ch9{}; 
        namespace Ch9ValC{
        }
        ///Channel 10 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ch10{}; 
        namespace Ch10ValC{
        }
        ///Channel 11 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ch11{}; 
        namespace Ch11ValC{
        }
    }
    namespace AdcLcdr{    ///<Last Converted Data Register
        using Addr = Register::Address<0xf8018020,0xffff0000,0,unsigned>;
        ///Last Data Converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ldata{}; 
        namespace LdataValC{
        }
        ///Channel Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> chnb{}; 
        namespace ChnbValC{
        }
    }
    namespace AdcIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf8018024,0x980ff000,0,unsigned>;
        ///End of Conversion Interrupt Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        namespace Eoc0ValC{
        }
        ///End of Conversion Interrupt Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        namespace Eoc1ValC{
        }
        ///End of Conversion Interrupt Enable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        namespace Eoc2ValC{
        }
        ///End of Conversion Interrupt Enable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        namespace Eoc3ValC{
        }
        ///End of Conversion Interrupt Enable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        namespace Eoc4ValC{
        }
        ///End of Conversion Interrupt Enable 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        namespace Eoc5ValC{
        }
        ///End of Conversion Interrupt Enable 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        namespace Eoc6ValC{
        }
        ///End of Conversion Interrupt Enable 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        namespace Eoc7ValC{
        }
        ///End of Conversion Interrupt Enable 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eoc8{}; 
        namespace Eoc8ValC{
        }
        ///End of Conversion Interrupt Enable 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eoc9{}; 
        namespace Eoc9ValC{
        }
        ///End of Conversion Interrupt Enable 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eoc10{}; 
        namespace Eoc10ValC{
        }
        ///End of Conversion Interrupt Enable 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eoc11{}; 
        namespace Eoc11ValC{
        }
        ///Touchscreen Measure XPOS Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> xrdy{}; 
        namespace XrdyValC{
        }
        ///Touchscreen Measure YPOS Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> yrdy{}; 
        namespace YrdyValC{
        }
        ///Touchscreen Measure Pressure Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> prdy{}; 
        namespace PrdyValC{
        }
        ///End of Calibration Sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eocal{}; 
        namespace EocalValC{
        }
        ///Data Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> drdy{}; 
        namespace DrdyValC{
        }
        ///General Overrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> govre{}; 
        namespace GovreValC{
        }
        ///Comparison Event Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> compe{}; 
        namespace CompeValC{
        }
        ///Pen Contact Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pen{}; 
        namespace PenValC{
        }
        ///No Pen Contact Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nopen{}; 
        namespace NopenValC{
        }
    }
    namespace AdcIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf8018028,0x980ff000,0,unsigned>;
        ///End of Conversion Interrupt Disable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        namespace Eoc0ValC{
        }
        ///End of Conversion Interrupt Disable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        namespace Eoc1ValC{
        }
        ///End of Conversion Interrupt Disable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        namespace Eoc2ValC{
        }
        ///End of Conversion Interrupt Disable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        namespace Eoc3ValC{
        }
        ///End of Conversion Interrupt Disable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        namespace Eoc4ValC{
        }
        ///End of Conversion Interrupt Disable 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        namespace Eoc5ValC{
        }
        ///End of Conversion Interrupt Disable 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        namespace Eoc6ValC{
        }
        ///End of Conversion Interrupt Disable 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        namespace Eoc7ValC{
        }
        ///End of Conversion Interrupt Disable 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eoc8{}; 
        namespace Eoc8ValC{
        }
        ///End of Conversion Interrupt Disable 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eoc9{}; 
        namespace Eoc9ValC{
        }
        ///End of Conversion Interrupt Disable 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eoc10{}; 
        namespace Eoc10ValC{
        }
        ///End of Conversion Interrupt Disable 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eoc11{}; 
        namespace Eoc11ValC{
        }
        ///Touchscreen Measure XPOS Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> xrdy{}; 
        namespace XrdyValC{
        }
        ///Touchscreen Measure YPOS Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> yrdy{}; 
        namespace YrdyValC{
        }
        ///Touchscreen Measure Pressure Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> prdy{}; 
        namespace PrdyValC{
        }
        ///End of Calibration Sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eocal{}; 
        namespace EocalValC{
        }
        ///Data Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> drdy{}; 
        namespace DrdyValC{
        }
        ///General Overrun Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> govre{}; 
        namespace GovreValC{
        }
        ///Comparison Event Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> compe{}; 
        namespace CompeValC{
        }
        ///Pen Contact Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pen{}; 
        namespace PenValC{
        }
        ///No Pen Contact Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nopen{}; 
        namespace NopenValC{
        }
    }
    namespace AdcImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf801802c,0x980ff000,0,unsigned>;
        ///End of Conversion Interrupt Mask 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        namespace Eoc0ValC{
        }
        ///End of Conversion Interrupt Mask 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        namespace Eoc1ValC{
        }
        ///End of Conversion Interrupt Mask 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        namespace Eoc2ValC{
        }
        ///End of Conversion Interrupt Mask 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        namespace Eoc3ValC{
        }
        ///End of Conversion Interrupt Mask 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        namespace Eoc4ValC{
        }
        ///End of Conversion Interrupt Mask 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        namespace Eoc5ValC{
        }
        ///End of Conversion Interrupt Mask 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        namespace Eoc6ValC{
        }
        ///End of Conversion Interrupt Mask 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        namespace Eoc7ValC{
        }
        ///End of Conversion Interrupt Mask 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eoc8{}; 
        namespace Eoc8ValC{
        }
        ///End of Conversion Interrupt Mask 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eoc9{}; 
        namespace Eoc9ValC{
        }
        ///End of Conversion Interrupt Mask 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eoc10{}; 
        namespace Eoc10ValC{
        }
        ///End of Conversion Interrupt Mask 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eoc11{}; 
        namespace Eoc11ValC{
        }
        ///Touchscreen Measure XPOS Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> xrdy{}; 
        namespace XrdyValC{
        }
        ///Touchscreen Measure YPOS Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> yrdy{}; 
        namespace YrdyValC{
        }
        ///Touchscreen Measure Pressure Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> prdy{}; 
        namespace PrdyValC{
        }
        ///End of Calibration Sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eocal{}; 
        namespace EocalValC{
        }
        ///Data Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> drdy{}; 
        namespace DrdyValC{
        }
        ///General Overrun Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> govre{}; 
        namespace GovreValC{
        }
        ///Comparison Event Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> compe{}; 
        namespace CompeValC{
        }
        ///Pen Contact Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pen{}; 
        namespace PenValC{
        }
        ///No Pen Contact Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nopen{}; 
        namespace NopenValC{
        }
    }
    namespace AdcIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xf8018030,0x180ff000,0,unsigned>;
        ///End of Conversion 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        namespace Eoc0ValC{
        }
        ///End of Conversion 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        namespace Eoc1ValC{
        }
        ///End of Conversion 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        namespace Eoc2ValC{
        }
        ///End of Conversion 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        namespace Eoc3ValC{
        }
        ///End of Conversion 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        namespace Eoc4ValC{
        }
        ///End of Conversion 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        namespace Eoc5ValC{
        }
        ///End of Conversion 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        namespace Eoc6ValC{
        }
        ///End of Conversion 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        namespace Eoc7ValC{
        }
        ///End of Conversion 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> eoc8{}; 
        namespace Eoc8ValC{
        }
        ///End of Conversion 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> eoc9{}; 
        namespace Eoc9ValC{
        }
        ///End of Conversion 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eoc10{}; 
        namespace Eoc10ValC{
        }
        ///End of Conversion 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eoc11{}; 
        namespace Eoc11ValC{
        }
        ///Touchscreen XPOS Measure Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> xrdy{}; 
        namespace XrdyValC{
        }
        ///Touchscreen YPOS Measure Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> yrdy{}; 
        namespace YrdyValC{
        }
        ///Touchscreen Pressure Measure Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> prdy{}; 
        namespace PrdyValC{
        }
        ///End of Calibration Sequence
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eocal{}; 
        namespace EocalValC{
        }
        ///Data Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> drdy{}; 
        namespace DrdyValC{
        }
        ///General Overrun Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> govre{}; 
        namespace GovreValC{
        }
        ///Comparison Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> compe{}; 
        namespace CompeValC{
        }
        ///Pen contact
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pen{}; 
        namespace PenValC{
        }
        ///No Pen contact
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> nopen{}; 
        namespace NopenValC{
        }
        ///Pen detect Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pens{}; 
        namespace PensValC{
        }
    }
    namespace AdcOver{    ///<Overrun Status Register
        using Addr = Register::Address<0xf801803c,0xfffff000,0,unsigned>;
        ///Overrun Error 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovre0{}; 
        namespace Ovre0ValC{
        }
        ///Overrun Error 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ovre1{}; 
        namespace Ovre1ValC{
        }
        ///Overrun Error 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ovre2{}; 
        namespace Ovre2ValC{
        }
        ///Overrun Error 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovre3{}; 
        namespace Ovre3ValC{
        }
        ///Overrun Error 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovre4{}; 
        namespace Ovre4ValC{
        }
        ///Overrun Error 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre5{}; 
        namespace Ovre5ValC{
        }
        ///Overrun Error 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovre6{}; 
        namespace Ovre6ValC{
        }
        ///Overrun Error 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ovre7{}; 
        namespace Ovre7ValC{
        }
        ///Overrun Error 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovre8{}; 
        namespace Ovre8ValC{
        }
        ///Overrun Error 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ovre9{}; 
        namespace Ovre9ValC{
        }
        ///Overrun Error 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ovre10{}; 
        namespace Ovre10ValC{
        }
        ///Overrun Error 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ovre11{}; 
        namespace Ovre11ValC{
        }
    }
    namespace AdcEmr{    ///<Extended Mode Register
        using Addr = Register::Address<0xf8018040,0xfeffcd0c,0,unsigned>;
        ///Comparison Mode
        enum class CmpmodeVal {
            low=0x00000000,     ///<Generates an event when the converted data is lower than the low threshold of the window.
            high=0x00000001,     ///<Generates an event when the converted data is higher than the high threshold of the window.
            in=0x00000002,     ///<Generates an event when the converted data is in the comparison window.
            out=0x00000003,     ///<Generates an event when the converted data is out of the comparison window.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmpmodeVal> cmpmode{}; 
        namespace CmpmodeValC{
            constexpr Register::FieldValue<decltype(cmpmode),CmpmodeVal::low> low{};
            constexpr Register::FieldValue<decltype(cmpmode),CmpmodeVal::high> high{};
            constexpr Register::FieldValue<decltype(cmpmode),CmpmodeVal::in> in{};
            constexpr Register::FieldValue<decltype(cmpmode),CmpmodeVal::out> out{};
        }
        ///Comparison Selected Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> cmpsel{}; 
        namespace CmpselValC{
        }
        ///Compare All Channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cmpall{}; 
        namespace CmpallValC{
        }
        ///Compare Event Filtering
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> cmpfilter{}; 
        namespace CmpfilterValC{
        }
        ///TAG of the ADC_LDCR register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tag{}; 
        namespace TagValC{
        }
    }
    namespace AdcCwr{    ///<Compare Window Register
        using Addr = Register::Address<0xf8018044,0xf000f000,0,unsigned>;
        ///Low Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> lowthres{}; 
        namespace LowthresValC{
        }
        ///High Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> highthres{}; 
        namespace HighthresValC{
        }
    }
    namespace AdcCgr{    ///<Channel Gain Register
        using Addr = Register::Address<0xf8018048,0xff000000,0,unsigned>;
        ///Gain for channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> gain0{}; 
        namespace Gain0ValC{
        }
        ///Gain for channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> gain1{}; 
        namespace Gain1ValC{
        }
        ///Gain for channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> gain2{}; 
        namespace Gain2ValC{
        }
        ///Gain for channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> gain3{}; 
        namespace Gain3ValC{
        }
        ///Gain for channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> gain4{}; 
        namespace Gain4ValC{
        }
        ///Gain for channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> gain5{}; 
        namespace Gain5ValC{
        }
        ///Gain for channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> gain6{}; 
        namespace Gain6ValC{
        }
        ///Gain for channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> gain7{}; 
        namespace Gain7ValC{
        }
        ///Gain for channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> gain8{}; 
        namespace Gain8ValC{
        }
        ///Gain for channel 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> gain9{}; 
        namespace Gain9ValC{
        }
        ///Gain for channel 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> gain10{}; 
        namespace Gain10ValC{
        }
        ///Gain for channel 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> gain11{}; 
        namespace Gain11ValC{
        }
    }
    namespace AdcCor{    ///<Channel Offset Register
        using Addr = Register::Address<0xf801804c,0xf000f000,0,unsigned>;
        ///Offset for channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> off0{}; 
        namespace Off0ValC{
        }
        ///Offset for channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> off1{}; 
        namespace Off1ValC{
        }
        ///Offset for channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> off2{}; 
        namespace Off2ValC{
        }
        ///Offset for channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> off3{}; 
        namespace Off3ValC{
        }
        ///Offset for channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> off4{}; 
        namespace Off4ValC{
        }
        ///Offset for channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> off5{}; 
        namespace Off5ValC{
        }
        ///Offset for channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> off6{}; 
        namespace Off6ValC{
        }
        ///Offset for channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> off7{}; 
        namespace Off7ValC{
        }
        ///Offset for channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> off8{}; 
        namespace Off8ValC{
        }
        ///Offset for channel 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> off9{}; 
        namespace Off9ValC{
        }
        ///Offset for channel 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> off10{}; 
        namespace Off10ValC{
        }
        ///Offset for channel 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> off11{}; 
        namespace Off11ValC{
        }
        ///Differential inputs for channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> diff0{}; 
        namespace Diff0ValC{
        }
        ///Differential inputs for channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> diff1{}; 
        namespace Diff1ValC{
        }
        ///Differential inputs for channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> diff2{}; 
        namespace Diff2ValC{
        }
        ///Differential inputs for channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> diff3{}; 
        namespace Diff3ValC{
        }
        ///Differential inputs for channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> diff4{}; 
        namespace Diff4ValC{
        }
        ///Differential inputs for channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> diff5{}; 
        namespace Diff5ValC{
        }
        ///Differential inputs for channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> diff6{}; 
        namespace Diff6ValC{
        }
        ///Differential inputs for channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> diff7{}; 
        namespace Diff7ValC{
        }
        ///Differential inputs for channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> diff8{}; 
        namespace Diff8ValC{
        }
        ///Differential inputs for channel 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> diff9{}; 
        namespace Diff9ValC{
        }
        ///Differential inputs for channel 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> diff10{}; 
        namespace Diff10ValC{
        }
        ///Differential inputs for channel 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> diff11{}; 
        namespace Diff11ValC{
        }
    }
    namespace AdcCdr0{    ///<Channel Data Register
        using Addr = Register::Address<0xf8018050,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr1{    ///<Channel Data Register
        using Addr = Register::Address<0xf8018054,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr2{    ///<Channel Data Register
        using Addr = Register::Address<0xf8018058,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr3{    ///<Channel Data Register
        using Addr = Register::Address<0xf801805c,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr4{    ///<Channel Data Register
        using Addr = Register::Address<0xf8018060,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr5{    ///<Channel Data Register
        using Addr = Register::Address<0xf8018064,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr6{    ///<Channel Data Register
        using Addr = Register::Address<0xf8018068,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr7{    ///<Channel Data Register
        using Addr = Register::Address<0xf801806c,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr8{    ///<Channel Data Register
        using Addr = Register::Address<0xf8018070,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr9{    ///<Channel Data Register
        using Addr = Register::Address<0xf8018074,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr10{    ///<Channel Data Register
        using Addr = Register::Address<0xf8018078,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcCdr11{    ///<Channel Data Register
        using Addr = Register::Address<0xf801807c,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace AdcAcr{    ///<Analog Control Register
        using Addr = Register::Address<0xf8018094,0xfffffffc,0,unsigned>;
        ///Pen Detection Sensitivity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pendetsens{}; 
        namespace PendetsensValC{
        }
    }
    namespace AdcTsmr{    ///<Touchscreen Mode Register
        using Addr = Register::Address<0xf80180b0,0x0eb0f0cc,0,unsigned>;
        ///Touchscreen Mode
        enum class TsmodeVal {
            none=0x00000000,     ///<No Touchscreen
            v4WireNoPm=0x00000001,     ///<4-wire Touchscreen without pressure measurement
            v4Wire=0x00000002,     ///<4-wire Touchscreen with pressure measurement
            v5Wire=0x00000003,     ///<5-wire Touchscreen
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,TsmodeVal> tsmode{}; 
        namespace TsmodeValC{
            constexpr Register::FieldValue<decltype(tsmode),TsmodeVal::none> none{};
            constexpr Register::FieldValue<decltype(tsmode),TsmodeVal::v4WireNoPm> v4WireNoPm{};
            constexpr Register::FieldValue<decltype(tsmode),TsmodeVal::v4Wire> v4Wire{};
            constexpr Register::FieldValue<decltype(tsmode),TsmodeVal::v5Wire> v5Wire{};
        }
        ///Touchscreen Average
        enum class TsavVal {
            noFilter=0x00000000,     ///<No Filtering. Only one ADC conversion per measure
            avg2conv=0x00000001,     ///<Averages 2 ADC conversions
            avg4conv=0x00000002,     ///<Averages 4 ADC conversions
            avg8conv=0x00000003,     ///<Averages 8 ADC conversions
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,TsavVal> tsav{}; 
        namespace TsavValC{
            constexpr Register::FieldValue<decltype(tsav),TsavVal::noFilter> noFilter{};
            constexpr Register::FieldValue<decltype(tsav),TsavVal::avg2conv> avg2conv{};
            constexpr Register::FieldValue<decltype(tsav),TsavVal::avg4conv> avg4conv{};
            constexpr Register::FieldValue<decltype(tsav),TsavVal::avg8conv> avg8conv{};
        }
        ///Touchscreen Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tsfreq{}; 
        namespace TsfreqValC{
        }
        ///Touchscreen Switches Closure Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tssctim{}; 
        namespace TssctimValC{
        }
        ///No TouchScreen DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> notsdma{}; 
        namespace NotsdmaValC{
        }
        ///Pen Contact Detection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pendet{}; 
        namespace PendetValC{
        }
        ///Pen Detect Debouncing Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> pendbc{}; 
        namespace PendbcValC{
        }
    }
    namespace AdcXposr{    ///<Touchscreen X Position Register
        using Addr = Register::Address<0xf80180b4,0xf000f000,0,unsigned>;
        ///X Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> xpos{}; 
        namespace XposValC{
        }
        ///Scale of XPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> xscale{}; 
        namespace XscaleValC{
        }
    }
    namespace AdcYposr{    ///<Touchscreen Y Position Register
        using Addr = Register::Address<0xf80180b8,0xf000f000,0,unsigned>;
        ///Y Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ypos{}; 
        namespace YposValC{
        }
        ///Scale of YPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> yscale{}; 
        namespace YscaleValC{
        }
    }
    namespace AdcPressr{    ///<Touchscreen Pressure Register
        using Addr = Register::Address<0xf80180bc,0xf000f000,0,unsigned>;
        ///Data of Z1 Measurement
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> z1{}; 
        namespace Z1ValC{
        }
        ///Data of Z2 Measurement
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> z2{}; 
        namespace Z2ValC{
        }
    }
    namespace AdcTrgr{    ///<Trigger Register
        using Addr = Register::Address<0xf80180c0,0x0000fff8,0,unsigned>;
        ///Trigger Mode
        enum class TrgmodVal {
            noTrigger=0x00000000,     ///<No trigger, only software trigger can start conversions
            extTrigRise=0x00000001,     ///<External Trigger Rising Edge
            extTrigFall=0x00000002,     ///<External Trigger Falling Edge
            extTrigAny=0x00000003,     ///<External Trigger Any Edge
            penTrig=0x00000004,     ///<Pen Detect Trigger (shall be selected only if PENDET is set and TSAMOD = Touchscreen only mode)
            periodTrig=0x00000005,     ///<Periodic Trigger (TRGPER shall be initiated appropriately)
            continuous=0x00000006,     ///<Continuous Mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,TrgmodVal> trgmod{}; 
        namespace TrgmodValC{
            constexpr Register::FieldValue<decltype(trgmod),TrgmodVal::noTrigger> noTrigger{};
            constexpr Register::FieldValue<decltype(trgmod),TrgmodVal::extTrigRise> extTrigRise{};
            constexpr Register::FieldValue<decltype(trgmod),TrgmodVal::extTrigFall> extTrigFall{};
            constexpr Register::FieldValue<decltype(trgmod),TrgmodVal::extTrigAny> extTrigAny{};
            constexpr Register::FieldValue<decltype(trgmod),TrgmodVal::penTrig> penTrig{};
            constexpr Register::FieldValue<decltype(trgmod),TrgmodVal::periodTrig> periodTrig{};
            constexpr Register::FieldValue<decltype(trgmod),TrgmodVal::continuous> continuous{};
        }
        ///Trigger Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> trgper{}; 
        namespace TrgperValC{
        }
    }
    namespace AdcWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0xf80180e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        namespace WpenValC{
        }
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
        namespace WpkeyValC{
        }
    }
    namespace AdcWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0xf80180e8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        namespace WpvsValC{
        }
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
        namespace WpvsrcValC{
        }
    }
}