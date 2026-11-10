/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02bb9a48; name: FUN_02bb9a48
 */


void FUN_02bb9a48(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_20 = *param_3;
  local_18 = *(undefined4 *)(param_3 + 1);
  uStack_14 = 0x3f800000;
  (**(code **)(*param_1 + 0x98))(param_1,param_2,&local_20);
  return;
}


