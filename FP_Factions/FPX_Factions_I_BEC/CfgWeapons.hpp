// TODO: scope=1 all of the entries here
class UniformItem;
class InventoryItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryFlashLightItem_Base_F;
class InventoryOpticsItem_Base_F;
class GrenadeLauncher;

class FPX_I_BEC_arifle_Cyrus : srifle_DMR_05_blk_F {
  scope = 1;
  class LinkedItems { //key: LinkedItemsOptic(CowsSlot), LinkedItemsUnder(UnderBarrelSlot), LinkedItemsAcc(PointerSlot), -->BarrelSlot???<--
    class LinkedItemsOptic {
      item = "optic_DMS";
      slot = "CowsSlot";
    };
    class LinkedItemsUnder {
      item = "RH_HBLM";
      slot = "UnderBarrelSlot";
    };
  };
  displayName = "Cyrus (Black)";
};
/*class FPX_I_BEC_uniform_Functionary : CUP_U_C_Suit_01 {
	scope = 1;
	side = 2;
	displayName = "Black Element Suit";
	class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="FPX_I_BEC_Soldier_Func";
            containerClass="Supply40";
            mass=40;
        };
};*/