/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00394870; name: FUN_00394870
 */


void FUN_00394870(undefined1 *param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  byte local_58;
  undefined8 local_57;
  undefined6 uStack_4f;
  undefined1 uStack_49;
  undefined1 uStack_48;
  undefined6 uStack_47;
  undefined1 uStack_41;
  long local_40;
  long lStack_38;
  undefined8 local_28;
  
  uStack_41 = 0;
  local_57 = *(undefined8 *)PTR_DAT_047cd020;
  uVar2 = *(undefined8 *)(PTR_DAT_047cd020 + 0xe);
  local_58 = 0x2c;
  uStack_4f = (undefined6)*(undefined8 *)(PTR_DAT_047cd020 + 8);
  uStack_49 = (undefined1)uVar2;
  uStack_48 = (undefined1)((ulong)uVar2 >> 8);
  uStack_47 = (undefined6)((ulong)uVar2 >> 0x10);
                    /* try { // try from 003948b0 to 0039498b has its CatchHandler @ 003949b8 */
  local_28 = FUN_00398ed0();
  if ((param_2 == 0x7fffffffffffffff) && (param_3 == 0xffffffff)) {
    *param_1 = 0x1e;
    *(ulong *)(param_1 + 8) =
         CONCAT71(s_infinite_future_03cdb8e0._8_7_,s_infinite_future_03cdb8e0[7]);
    *(ulong *)(param_1 + 1) =
         CONCAT17(s_infinite_future_03cdb8e0[7],s_infinite_future_03cdb8e0._0_7_);
    param_1[0x10] = 0;
  }
  else if ((param_2 == -0x8000000000000000) && (param_3 == 0xffffffff)) {
    *param_1 = 0x1a;
    *(ulong *)(param_1 + 6) =
         CONCAT53(s_infinite_past_03cdb8f0._8_5_,s_infinite_past_03cdb8f0._5_3_);
    *(ulong *)(param_1 + 1) =
         CONCAT35(s_infinite_past_03cdb8f0._5_3_,s_infinite_past_03cdb8f0._0_5_);
    param_1[0xe] = 0;
  }
  else {
    lVar1 = std::chrono::system_clock::from_time_t(0);
    lStack_38 = (ulong)param_3 * 250000;
    local_40 = lVar1 / 1000000 + param_2;
    FUN_00395f90(param_1,&local_58,&local_40,&lStack_38,&local_28);
    if ((local_58 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,CONCAT17(uStack_41,CONCAT61(uStack_47,uStack_48)));
    }
  }
  return;
}


