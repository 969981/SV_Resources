/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01771f44; name: FUN_01771f44
 */


void FUN_01771f44(undefined8 param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 *local_60;
  undefined4 *puStack_58;
  undefined8 *local_50;
  undefined4 *puStack_48;
  undefined4 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = 2;
  uStack_14 = 10;
  local_38 = 0x3f800000;
  uStack_34 = 0x3f800000;
  FUN_00c850cc(param_2,1,0x22);
  uVar1 = (uint)*param_3;
  if ((uVar1 >> 1 & 1) != 0) {
    FUN_00c850cc(param_2,2,0x22);
    uVar1 = (uint)*param_3;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    FUN_00c850cc(param_2,0x1e,0x16);
  }
  FUN_00ebd51c(param_2,param_1,0x18,1);
  local_60 = &uStack_14;
  puStack_58 = &local_18;
  puStack_48 = &local_38;
  local_40 = &uStack_34;
  local_50 = param_3;
  FUN_01772010(*(undefined8 *)(param_2 + 0x38),&local_60);
  return;
}


