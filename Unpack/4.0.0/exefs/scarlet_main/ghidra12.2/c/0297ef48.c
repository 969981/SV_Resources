/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297ef48; name: FUN_0297ef48
 */


void FUN_0297ef48(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = (**(code **)(*param_3 + 0x98))(param_3);
  uVar3 = FUN_0297efec(param_4,uVar1);
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_01243584(param_1);
    uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
    FUN_0297f114(uVar4,uVar2,param_3);
  }
  else {
    FUN_0297f0a0(param_1,param_2,param_3);
  }
  FUN_0297f15c(param_1,uVar1);
  return;
}


