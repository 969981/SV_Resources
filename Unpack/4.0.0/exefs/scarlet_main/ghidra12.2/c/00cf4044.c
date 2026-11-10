/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cf4044; name: FUN_00cf4044
 */


uint FUN_00cf4044(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ushort local_34 [2];
  
  local_34[0] = (ushort)*param_4;
  uVar2 = FUN_00cf40ac();
  uVar1 = FUN_00cf40b8(uVar2,local_34,param_4 + 1,param_1,param_3,param_2);
  *param_4 = (uint)local_34[0];
  return uVar1 & 1;
}


