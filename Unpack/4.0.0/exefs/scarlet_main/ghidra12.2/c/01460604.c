/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01460604; name: FUN_01460604
 */


void FUN_01460604(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_01243584();
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_014606c4(uVar2,uVar1);
  uVar2 = FUN_01243584(param_1);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_01460728(uVar2,uVar1);
  uVar2 = FUN_01243584(param_1);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_0146078c(uVar2,uVar1);
  uVar2 = FUN_01243584(param_1);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_014607f0(uVar2,uVar1);
  return;
}


