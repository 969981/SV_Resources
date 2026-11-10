/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01461b20; name: FUN_01461b20
 */


void FUN_01461b20(undefined8 param_1,long *param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_01243584();
  FUN_01243a30(uVar2,param_2,4,0);
  if (((param_3 & 1) == 0) || (uVar3 = (**(code **)(*param_2 + 0x200))(param_2), (uVar3 & 1) != 0))
  {
    return;
  }
  uVar2 = FUN_01243584(param_1);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_01681080(uVar2,uVar1,0);
  return;
}


