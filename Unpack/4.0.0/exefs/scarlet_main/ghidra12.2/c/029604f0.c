/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029604f0; name: FUN_029604f0
 */


void FUN_029604f0(undefined8 param_1,long *param_2,long *param_3)

{
  undefined4 local_30;
  undefined4 uStack_2c;
  ulong local_28;
  
  local_30 = (**(code **)(*param_2 + 0x98))(param_2);
  uStack_2c = 0x1a;
  local_28 = (**(code **)(*param_3 + 0x98))(param_3);
  local_28 = local_28 & 0xffffffff;
  FUN_0193f070(param_1,&local_30);
  return;
}


