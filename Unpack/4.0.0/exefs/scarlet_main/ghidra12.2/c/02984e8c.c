/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02984e8c; name: FUN_02984e8c
 */


void FUN_02984e8c(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_01243584();
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_01636f5c(uVar2,uVar1,param_2,0xff);
  return;
}


