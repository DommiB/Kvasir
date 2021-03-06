#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral BTIOSEL03 
    namespace Btiosel03Btsel0123{    ///< register BTSEL0123 
        using Addr = Register::Address<0x40025100,0xffff00ff,0x00000000,unsigned>;
        /// bitfield SEL23_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> sel23{}; 
        /// bitfield SEL01_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> sel01{}; 
    }
}
