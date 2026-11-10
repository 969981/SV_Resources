/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f3cac8; name: FUN_02f3cac8
 */


void FUN_02f3cac8(long param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  int iVar1;
  ulong uVar2;
  uint local_28 [2];
  
  if (param_2 < 0) {
    local_28[0] = (uint)param_2;
  }
  else {
    uVar2 = FUN_00dbb6c8(param_1 + 0x948,param_2,local_28);
    if ((uVar2 & 1) == 0) {
      local_28[0] = 0xffffff;
    }
  }
  iVar1 = FUN_02f47550(param_1 + 0xb8,local_28[0] & 0xffffff,param_3,param_4,param_5);
  if (iVar1 == 1) {
    FUN_02f3ca0c(param_1 + 0x720,param_1 + -0x18,param_2,param_3);
  }
  return;
}


