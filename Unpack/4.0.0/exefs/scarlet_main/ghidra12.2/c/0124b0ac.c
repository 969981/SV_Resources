/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124b0ac; name: FUN_0124b0ac
 */


undefined8 FUN_0124b0ac(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar2 = FUN_0124b1d4(param_3);
  uVar1 = FUN_0124b1f0(param_3);
  uVar5 = FUN_0124b1dc(param_3);
  uVar6 = FUN_0124b1fc(param_3);
  if ((uVar6 & 1) == 0) {
    iVar3 = FUN_0124b1e4(param_3);
    if (iVar3 == 2) {
      FUN_0124b210(param_1,param_2,uVar2,uVar1,uVar5);
    }
    else {
      if (iVar3 != 1) {
        return 0;
      }
      FUN_012501bc(param_1,param_2,uVar2,uVar1,uVar5);
    }
  }
  else {
    uVar4 = FUN_0124b208(param_3);
    iVar3 = FUN_0124b1e4(param_3);
    if (iVar3 == 2) {
      FUN_0298d7a8(param_1,param_2,uVar2,uVar4,uVar1,uVar5);
    }
    else {
      if (iVar3 != 1) {
        return 0;
      }
      FUN_01a609cc(param_1,param_2,uVar2,uVar4,uVar1,uVar5);
    }
  }
  return 1;
}


