#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//SPI master 1.
    namespace Spi1EventsReady{    ///<TXD byte sent and RXD byte received.
        using Addr = Register::Address<0x40004108,0xffffffff,0x00000000,unsigned>;
    }
    namespace Spi1Intenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40004304,0xfffffffb,0x00000000,unsigned>;
        ///Enable interrupt on READY event.
        enum class ReadyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ReadyVal> ready{}; 
        namespace ReadyValC{
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::set> set{};
        }
    }
    namespace Spi1Intenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40004308,0xfffffffb,0x00000000,unsigned>;
        ///Disable interrupt on READY event.
        enum class ReadyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ReadyVal> ready{}; 
        namespace ReadyValC{
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::clear> clear{};
        }
    }
    namespace Spi1Enable{    ///<Enable SPI.
        using Addr = Register::Address<0x40004500,0xfffffff8,0x00000000,unsigned>;
        ///Enable or disable SPI.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Spi1Pselsck{    ///<Pin select for SCK.
        using Addr = Register::Address<0x40004508,0xffffffff,0x00000000,unsigned>;
    }
    namespace Spi1Pselmosi{    ///<Pin select for MOSI.
        using Addr = Register::Address<0x4000450c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Spi1Pselmiso{    ///<Pin select for MISO.
        using Addr = Register::Address<0x40004510,0xffffffff,0x00000000,unsigned>;
    }
    namespace Spi1Rxd{    ///<RX data.
        using Addr = Register::Address<0x40004518,0xffffff00,0x00000000,unsigned>;
        ///RX data from last transfer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxd{}; 
    }
    namespace Spi1Txd{    ///<TX data.
        using Addr = Register::Address<0x4000451c,0xffffff00,0x00000000,unsigned>;
        ///TX data for next transfer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txd{}; 
    }
    namespace Spi1Frequency{    ///<SPI frequency
        using Addr = Register::Address<0x40004524,0x00000000,0x00000000,unsigned>;
        ///SPI data rate.
        enum class FrequencyVal {
            k125=0x02000000,     ///<125kbps.
            k250=0x04000000,     ///<250kbps.
            k500=0x08000000,     ///<500kbps.
            m1=0x10000000,     ///<1Mbps.
            m2=0x20000000,     ///<2Mbps.
            m4=0x40000000,     ///<4Mbps.
            m8=0x80000000,     ///<8Mbps.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,FrequencyVal> frequency{}; 
        namespace FrequencyValC{
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::k125> k125{};
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::k250> k250{};
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::k500> k500{};
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::m1> m1{};
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::m2> m2{};
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::m4> m4{};
            constexpr Register::FieldValue<decltype(frequency)::Type,FrequencyVal::m8> m8{};
        }
    }
    namespace Spi1Config{    ///<Configuration register.
        using Addr = Register::Address<0x40004554,0xfffffff8,0x00000000,unsigned>;
        ///Bit order.
        enum class OrderVal {
            msbfirst=0x00000000,     ///<Most significant bit transmitted out first.
            lsbfirst=0x00000001,     ///<Least significant bit transmitted out first.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,OrderVal> order{}; 
        namespace OrderValC{
            constexpr Register::FieldValue<decltype(order)::Type,OrderVal::msbfirst> msbfirst{};
            constexpr Register::FieldValue<decltype(order)::Type,OrderVal::lsbfirst> lsbfirst{};
        }
        ///Serial clock (SCK) phase.
        enum class CphaVal {
            leading=0x00000000,     ///<Sample on leading edge of the clock. Shift serial data on trailing edge.
            trailing=0x00000001,     ///<Sample on trailing edge of the clock. Shift serial data on leading edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CphaVal> cpha{}; 
        namespace CphaValC{
            constexpr Register::FieldValue<decltype(cpha)::Type,CphaVal::leading> leading{};
            constexpr Register::FieldValue<decltype(cpha)::Type,CphaVal::trailing> trailing{};
        }
        ///Serial clock (SCK) polarity.
        enum class CpolVal {
            activehigh=0x00000000,     ///<Active high.
            activelow=0x00000001,     ///<Active low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CpolVal> cpol{}; 
        namespace CpolValC{
            constexpr Register::FieldValue<decltype(cpol)::Type,CpolVal::activehigh> activehigh{};
            constexpr Register::FieldValue<decltype(cpol)::Type,CpolVal::activelow> activelow{};
        }
    }
    namespace Spi1Power{    ///<Peripheral power control.
        using Addr = Register::Address<0x40004ffc,0xfffffffe,0x00000000,unsigned>;
        ///Peripheral power control.
        enum class PowerVal {
            disabled=0x00000000,     ///<Module power disabled.
            enabled=0x00000001,     ///<Module power enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PowerVal> power{}; 
        namespace PowerValC{
            constexpr Register::FieldValue<decltype(power)::Type,PowerVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(power)::Type,PowerVal::enabled> enabled{};
        }
    }
}
