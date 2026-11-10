/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00254590; name: FUN_00254590
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00254590(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_60;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  long lStack_40;
  ulong local_38;
  ulong uStack_30;
  undefined8 local_28;
  
  lVar4 = param_3[1] - *param_3;
  if (lVar4 == 0) {
    return *param_3;
  }
  uVar1 = lVar4 + 1;
  local_60 = param_2;
  if (uVar1 == 0) {
    uStack_50 = _UNK_03cab358;
    local_58 = _DAT_03cab350;
    lStack_40 = 2;
    local_48 = 2;
    local_28 = 0xffffffffffffffff;
    uStack_30 = _UNK_03cabcd8;
    local_38 = _DAT_03cabcd0;
    lVar4 = FUN_00b56e5c(&local_60);
    return lVar4;
  }
  lVar4 = 0x3f;
  if ((uVar1 << (LZCOUNT(uVar1) & 0x3fU) & 0x7fffffffffffffff) != 0) {
    lVar4 = 0x40;
  }
  local_58 = lVar4 - LZCOUNT(uVar1);
  local_48 = local_58 >> 5;
  if ((local_58 & 0x1f) != 0) {
    local_48 = local_48 + 1;
  }
  uStack_50 = 0;
  if (local_48 != 0) {
    uStack_50 = local_58 / local_48;
  }
  local_38 = -1L << (uStack_50 & 0x3f) & 0x100000000;
  if (0x3f < uStack_50) {
    local_38 = 0;
  }
  uVar5 = 0;
  if (local_48 != 0) {
    uVar5 = local_38 / local_48;
  }
  if (uVar5 < 0x100000000 - local_38) {
    local_48 = local_48 + 1;
    uStack_50 = 0;
    if (local_48 != 0) {
      uStack_50 = local_58 / local_48;
    }
    if (0x3f < uStack_50) {
      lStack_40 = local_48 + (uStack_50 * local_48 - local_58);
      uStack_30 = 0;
      local_38 = 0;
      goto LAB_002546c0;
    }
    local_38 = -1L << (uStack_50 & 0x3f) & 0x100000000;
  }
  uVar5 = 0;
  if (local_48 != 0) {
    uVar5 = local_58 / local_48;
  }
  lStack_40 = local_48 + (uVar5 * local_48 - local_58);
  if (uStack_50 < 0x3f) {
    uStack_30 = -1L << (uStack_50 + 1 & 0x3f) & 0x100000000;
  }
  else {
    uStack_30 = 0;
  }
LAB_002546c0:
  uVar2 = 0;
  if (uStack_50 != 0) {
    uVar2 = 0xffffffff >> (ulong)(-(int)uStack_50 & 0x1f);
  }
  uVar3 = 0xffffffff >> (ulong)(0x1fU - (int)uStack_50 & 0x1f);
  if (0x1e < uStack_50) {
    uVar3 = 0xffffffff;
  }
  local_28 = CONCAT44(uVar3,uVar2);
  do {
    uVar5 = FUN_00b56e5c(&local_60);
  } while (uVar1 <= uVar5);
  return *param_3 + uVar5;
}


