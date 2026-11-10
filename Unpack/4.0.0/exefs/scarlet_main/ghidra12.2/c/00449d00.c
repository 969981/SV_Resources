/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00449d00; name: FUN_00449d00
 */


void FUN_00449d00(uint *param_1,uint *param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint local_18;
  uint local_14;
  
  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  local_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  if (param_4 == 0) {
    FUN_00448a20(&local_18,param_3);
  }
  else {
    FUN_004485e0();
  }
  uVar1 = (local_18 & 0xff00ff00) >> 8 | (local_18 & 0xff00ff) << 8;
  uVar2 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
  *param_2 = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[1] = uVar2 >> 0x10 | uVar2 << 0x10;
  return;
}


