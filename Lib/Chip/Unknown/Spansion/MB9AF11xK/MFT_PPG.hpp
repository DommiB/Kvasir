#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//PPG Configuration
    namespace MftPpgTtcr0{    ///<PPG Start Trigger Control Register 0
        using Addr = Register::Address<0x40024000,0xffff00ff,0x00000000,unsigned>;
        ///PPG6 trigger stop bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> trg6o{}; 
        ///PPG4 trigger stop bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> trg4o{}; 
        ///PPG2 trigger stop bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> trg2o{}; 
        ///PPG0 trigger stop bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> trg0o{}; 
        ///8-bit UP counter clock select bits for comparison
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cs0{}; 
        ///8-bit UP counter operation state monitor bit for comparison
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moni0{}; 
        ///8-bit UP counter operation enable bit for comparison
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> str0{}; 
    }
    namespace MftPpgComp0{    ///<PPG Compare Register 0
        using Addr = Register::Address<0x40024008,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgComp2{    ///<PPG Compare Register 2
        using Addr = Register::Address<0x4002400c,0xffffffff,0x00000000,unsigned char>;
    }
    namespace MftPpgComp4{    ///<PPG Compare Register 4
        using Addr = Register::Address<0x40024010,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgComp6{    ///<PPG Compare Register 6
        using Addr = Register::Address<0x40024014,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgTrg{    ///<PPG Start Register 0
        using Addr = Register::Address<0x40024100,0xffffff00,0x00000000,unsigned>;
        ///PPG7 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pen07{}; 
        ///PPG6 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pen06{}; 
        ///PPG5 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pen05{}; 
        ///PPG4 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pen04{}; 
        ///PPG3 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pen03{}; 
        ///PPG2 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pen02{}; 
        ///PPG1 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pen01{}; 
        ///PPG0 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pen00{}; 
    }
    namespace MftPpgRevc{    ///<Output Reverse Register 0
        using Addr = Register::Address<0x40024104,0xffffff00,0x00000000,unsigned>;
        ///PPG7 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rev07{}; 
        ///PPG6 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rev06{}; 
        ///PPG5 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rev05{}; 
        ///PPG4 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rev04{}; 
        ///PPG3 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rev03{}; 
        ///PPG2 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rev02{}; 
        ///PPG1 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rev01{}; 
        ///PPG0 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rev00{}; 
    }
    namespace MftPpgPpgc0{    ///<PPG Operation Mode Control Register 0
        using Addr = Register::Address<0x40024201,0xffffff00,0x00000000,unsigned char>;
        ///PPG Interrupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pie{}; 
        ///PPG Counter Underflow bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> puf{}; 
        ///Interrupt Mode Select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intm{}; 
        ///PPG DOWN Counter Operation Clock Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> pcs{}; 
        ///PPG Operation Mode Set bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> md{}; 
        ///PPG start trigger select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ttrg{}; 
    }
    namespace MftPpgPpgc1{    ///<PPG Operation Mode Control Register 1
        using Addr = Register::Address<0x40024200,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc2{    ///<PPG Operation Mode Control Register 2
        using Addr = Register::Address<0x40024205,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc3{    ///<PPG Operation Mode Control Register 3
        using Addr = Register::Address<0x40024204,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc4{    ///<PPG Operation Mode Control Register 4
        using Addr = Register::Address<0x40024241,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc5{    ///<PPG Operation Mode Control Register 5
        using Addr = Register::Address<0x40024240,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc6{    ///<PPG Operation Mode Control Register 6
        using Addr = Register::Address<0x40024245,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc7{    ///<PPG Operation Mode Control Register 7
        using Addr = Register::Address<0x40024244,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh0{    ///<PPG0 Reload Registers High
        using Addr = Register::Address<0x40024209,0xffffff00,0x00000000,unsigned char>;
        ///Reload Registers High
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prlh{}; 
    }
    namespace MftPpgPrll0{    ///<PPG0 Reload Registers Low
        using Addr = Register::Address<0x40024208,0xffffff00,0x00000000,unsigned char>;
        ///Reload Registers Low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prll{}; 
    }
    namespace MftPpgPrlh1{    ///<PPG1 Reload Registers High
        using Addr = Register::Address<0x4002420d,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll1{    ///<PPG1 Reload Registers Low
        using Addr = Register::Address<0x4002420c,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh2{    ///<PPG2 Reload Registers High
        using Addr = Register::Address<0x40024211,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll2{    ///<PPG2 Reload Registers Low
        using Addr = Register::Address<0x40024210,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh3{    ///<PPG3 Reload Registers High
        using Addr = Register::Address<0x40024215,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll3{    ///<PPG3 Reload Registers Low
        using Addr = Register::Address<0x40024214,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh4{    ///<PPG4 Reload Registers High
        using Addr = Register::Address<0x40024249,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll4{    ///<PPG4 Reload Registers Low
        using Addr = Register::Address<0x40024248,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh5{    ///<PPG5 Reload Registers High
        using Addr = Register::Address<0x4002424d,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll5{    ///<PPG5 Reload Registers Low
        using Addr = Register::Address<0x4002424c,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh6{    ///<PPG6 Reload Registers High
        using Addr = Register::Address<0x40024251,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll6{    ///<PPG6 Reload Registers Low
        using Addr = Register::Address<0x40024250,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh7{    ///<PPG7 Reload Registers High
        using Addr = Register::Address<0x40024255,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll7{    ///<PPG7 Reload Registers Low
        using Addr = Register::Address<0x40024254,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgGatec0{    ///<PPG Gate Function Control Registers 0
        using Addr = Register::Address<0x40024218,0xffffffcc,0x00000000,unsigned char>;
        ///Select a trigger for PPG2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg2{}; 
        ///Select Start Effective Level for PPG2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge2{}; 
        ///Select a trigger for PPG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg0{}; 
        ///Select Start Effective Level for PPG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge0{}; 
    }
    namespace MftPpgGatec4{    ///<PPG Gate Function Control Registers 4
        using Addr = Register::Address<0x40024258,0xffffffcc,0x00000000,unsigned char>;
        ///Select a trigger for PPG6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg6{}; 
        ///Select Start Effective Level for PPG6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge6{}; 
        ///Select a trigger for PPG4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg4{}; 
        ///Select Start Effective Level for PPG4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge4{}; 
    }
}
