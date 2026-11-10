/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029602a0; name: FUN_029602a0
 */


void FUN_029602a0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  FUN_029604f0();
  FUN_02960560(param_1,param_3,param_2);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_01852230(param_1,uVar1);
  FUN_029605d0(param_1,param_2,param_3);
  FUN_029606e0(param_1,param_3);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_01852150(param_1,uVar1);
  return;
}


