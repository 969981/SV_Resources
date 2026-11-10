/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001227a0; name: FUN_001227a0
 */


undefined8 FUN_001227a0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = *param_3;
  uStack_38 = param_3[1];
  local_30 = param_3[2];
  uStack_28 = param_3[3];
  uVar1 = FUN_0012e090(param_1,param_2,&local_40);
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_0012ac30(param_1);
  }
  return uVar1;
}


