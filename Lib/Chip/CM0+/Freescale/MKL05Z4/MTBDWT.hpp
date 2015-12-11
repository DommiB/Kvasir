#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//MTB data watchpoint and trace
    namespace MtbdwtCtrl{    ///<MTB DWT Control Register
        using Addr = Register::Address<0xf0001000,0x00000000,0,unsigned>;
        ///DWT configuration controls
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dwtcfgctrl{}; 
        namespace DwtcfgctrlValC{
        }
        ///Number of comparators
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> numcmp{}; 
        namespace NumcmpValC{
        }
    }
    namespace MtbdwtComp0{    ///<MTB_DWT Comparator Register
        using Addr = Register::Address<0xf0001020,0x00000000,0,unsigned>;
        ///Reference value for comparison
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> comp{}; 
        namespace CompValC{
        }
    }
    namespace MtbdwtComp1{    ///<MTB_DWT Comparator Register
        using Addr = Register::Address<0xf0001030,0x00000000,0,unsigned>;
        ///Reference value for comparison
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> comp{}; 
        namespace CompValC{
        }
    }
    namespace MtbdwtMask0{    ///<MTB_DWT Comparator Mask Register
        using Addr = Register::Address<0xf0001024,0xffffffe0,0,unsigned>;
        ///MASK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> mask{}; 
        namespace MaskValC{
        }
    }
    namespace MtbdwtMask1{    ///<MTB_DWT Comparator Mask Register
        using Addr = Register::Address<0xf0001034,0xffffffe0,0,unsigned>;
        ///MASK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> mask{}; 
        namespace MaskValC{
        }
    }
    namespace MtbdwtFct0{    ///<MTB_DWT Comparator Function Register 0
        using Addr = Register::Address<0xf0001028,0xfeff02f0,0,unsigned>;
        ///Function
        enum class FunctionVal {
            v0000=0x00000000,     ///<Disabled.
            v0100=0x00000004,     ///<Instruction fetch.
            v0101=0x00000005,     ///<Data operand read.
            v0110=0x00000006,     ///<Data operand write.
            v0111=0x00000007,     ///<Data operand (read + write).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,FunctionVal> function{}; 
        namespace FunctionValC{
            constexpr Register::FieldValue<decltype(function),FunctionVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(function),FunctionVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(function),FunctionVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(function),FunctionVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(function),FunctionVal::v0111> v0111{};
        }
        ///Data Value Match
        enum class DatavmatchVal {
            v0=0x00000000,     ///<Perform address comparison.
            v1=0x00000001,     ///<Perform data value comparison.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,DatavmatchVal> datavmatch{}; 
        namespace DatavmatchValC{
            constexpr Register::FieldValue<decltype(datavmatch),DatavmatchVal::v0> v0{};
            constexpr Register::FieldValue<decltype(datavmatch),DatavmatchVal::v1> v1{};
        }
        ///Data Value Size
        enum class DatavsizeVal {
            v00=0x00000000,     ///<Byte.
            v01=0x00000001,     ///<Halfword.
            v10=0x00000002,     ///<Word.
            v11=0x00000003,     ///<Reserved. Any attempts to use this value results in UNPREDICTABLE behavior.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,DatavsizeVal> datavsize{}; 
        namespace DatavsizeValC{
            constexpr Register::FieldValue<decltype(datavsize),DatavsizeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(datavsize),DatavsizeVal::v01> v01{};
            constexpr Register::FieldValue<decltype(datavsize),DatavsizeVal::v10> v10{};
            constexpr Register::FieldValue<decltype(datavsize),DatavsizeVal::v11> v11{};
        }
        ///Data Value Address 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> datavaddr0{}; 
        namespace Datavaddr0ValC{
        }
        ///Comparator match
        enum class MatchedVal {
            v0=0x00000000,     ///<No match.
            v1=0x00000001,     ///<Match occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,MatchedVal> matched{}; 
        namespace MatchedValC{
            constexpr Register::FieldValue<decltype(matched),MatchedVal::v0> v0{};
            constexpr Register::FieldValue<decltype(matched),MatchedVal::v1> v1{};
        }
    }
    namespace MtbdwtFct1{    ///<MTB_DWT Comparator Function Register 1
        using Addr = Register::Address<0xf0001038,0xfefffff0,0,unsigned>;
        ///Function
        enum class FunctionVal {
            v0000=0x00000000,     ///<Disabled.
            v0100=0x00000004,     ///<Instruction fetch.
            v0101=0x00000005,     ///<Data operand read.
            v0110=0x00000006,     ///<Data operand write.
            v0111=0x00000007,     ///<Data operand (read + write).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,FunctionVal> function{}; 
        namespace FunctionValC{
            constexpr Register::FieldValue<decltype(function),FunctionVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(function),FunctionVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(function),FunctionVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(function),FunctionVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(function),FunctionVal::v0111> v0111{};
        }
        ///Comparator match
        enum class MatchedVal {
            v0=0x00000000,     ///<No match.
            v1=0x00000001,     ///<Match occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,MatchedVal> matched{}; 
        namespace MatchedValC{
            constexpr Register::FieldValue<decltype(matched),MatchedVal::v0> v0{};
            constexpr Register::FieldValue<decltype(matched),MatchedVal::v1> v1{};
        }
    }
    namespace MtbdwtTbctrl{    ///<MTB_DWT Trace Buffer Control Register
        using Addr = Register::Address<0xf0001200,0x0ffffffc,0,unsigned>;
        ///Action based on Comparator 0 match
        enum class Acomp0Val {
            v0=0x00000000,     ///<Trigger TSTOP based on the assertion of MTBDWT_FCT0[MATCHED].
            v1=0x00000001,     ///<Trigger TSTART based on the assertion of MTBDWT_FCT0[MATCHED].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Acomp0Val> acomp0{}; 
        namespace Acomp0ValC{
            constexpr Register::FieldValue<decltype(acomp0),Acomp0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(acomp0),Acomp0Val::v1> v1{};
        }
        ///Action based on Comparator 1 match
        enum class Acomp1Val {
            v0=0x00000000,     ///<Trigger TSTOP based on the assertion of MTBDWT_FCT1[MATCHED].
            v1=0x00000001,     ///<Trigger TSTART based on the assertion of MTBDWT_FCT1[MATCHED].
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Acomp1Val> acomp1{}; 
        namespace Acomp1ValC{
            constexpr Register::FieldValue<decltype(acomp1),Acomp1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(acomp1),Acomp1Val::v1> v1{};
        }
        ///Number of Comparators
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> numcomp{}; 
        namespace NumcompValC{
        }
    }
    namespace MtbdwtDevicecfg{    ///<Device Configuration Register
        using Addr = Register::Address<0xf0001fc8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> devicecfg{}; 
        namespace DevicecfgValC{
        }
    }
    namespace MtbdwtDevicetypid{    ///<Device Type Identifier Register
        using Addr = Register::Address<0xf0001fcc,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> devicetypid{}; 
        namespace DevicetypidValC{
        }
    }
    namespace MtbdwtPeriphid4{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0001fd0,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
        namespace PeriphidValC{
        }
    }
    namespace MtbdwtPeriphid5{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0001fd4,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
        namespace PeriphidValC{
        }
    }
    namespace MtbdwtPeriphid6{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0001fd8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
        namespace PeriphidValC{
        }
    }
    namespace MtbdwtPeriphid7{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0001fdc,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
        namespace PeriphidValC{
        }
    }
    namespace MtbdwtPeriphid0{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0001fe0,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
        namespace PeriphidValC{
        }
    }
    namespace MtbdwtPeriphid1{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0001fe4,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
        namespace PeriphidValC{
        }
    }
    namespace MtbdwtPeriphid2{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0001fe8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
        namespace PeriphidValC{
        }
    }
    namespace MtbdwtPeriphid3{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0001fec,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
        namespace PeriphidValC{
        }
    }
    namespace MtbdwtCompid0{    ///<Component ID Register
        using Addr = Register::Address<0xf0001ff0,0x00000000,0,unsigned>;
        ///Component ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> compid{}; 
        namespace CompidValC{
        }
    }
    namespace MtbdwtCompid1{    ///<Component ID Register
        using Addr = Register::Address<0xf0001ff4,0x00000000,0,unsigned>;
        ///Component ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> compid{}; 
        namespace CompidValC{
        }
    }
    namespace MtbdwtCompid2{    ///<Component ID Register
        using Addr = Register::Address<0xf0001ff8,0x00000000,0,unsigned>;
        ///Component ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> compid{}; 
        namespace CompidValC{
        }
    }
    namespace MtbdwtCompid3{    ///<Component ID Register
        using Addr = Register::Address<0xf0001ffc,0x00000000,0,unsigned>;
        ///Component ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> compid{}; 
        namespace CompidValC{
        }
    }
}