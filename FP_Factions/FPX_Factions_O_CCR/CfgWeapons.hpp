// TODO: scope=1 all of the entries here
class FPX_O_CCR_rifle_Nugget : str_3xlin_sn {
	scope = 1;
	displayName = "Mosin Nagant";
	class LinkedItems {
		class LinkedItemsOptic {
			item = "optic_str_pb";
			slot = "CowsSlot";
		};
	};
};
class FPX_O_CCR_srifle_SVD : CUP_srifle_SVD {
	scope = 1;
	displayName = "SVD";
	class LinkedItems {
		class LinkedItemsOptic {
			item = "CUP_optic_PSO_3";
			slot = "CowsSlot";
		};
		class LinkedItemsAcc {
			item = "CUP_SVD_camo_g";
			slot = "PointerSlot";
		};
	};
};
class FPX_O_CCR_srifle_LLR : srifle_LRR_F {
	scope = 1;
	displayName = "Alejandro SR"
	class LinkedItems {
		class LinkedItemsOptic {
			item = "RH_m3lr";
			slot = "CowsSlot";
		};
	};
};
/*class FPX_I_BEC_arifle_Cyrus : srifle_DMR_05_blk_F {
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
};*/