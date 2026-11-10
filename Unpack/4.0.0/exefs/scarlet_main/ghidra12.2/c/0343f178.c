/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0343f178; name: FUN_0343f178
 */


undefined8 FUN_0343f178(long param_1,long param_2,int param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + -0x70);
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  if (param_3 != 0) {
    if (param_3 == 2) {
      param_2 = **(long **)(param_1 + -0x50) + param_2;
    }
    else {
      if (param_3 != 1) {
        return 0x1f;
      }
      lVar1 = (**(code **)(*plVar4 + 200))(plVar4,0);
      param_2 = lVar1 + param_2;
    }
  }
  if (param_2 < 0) {
    return 0x1f;
  }
  uVar3 = (ulong)*(uint *)(param_1 + -0x10);
  lVar1 = 0;
  if (uVar3 != 0) {
    lVar1 = param_2 / (long)uVar3;
  }
  lVar1 = lVar1 * uVar3;
  if (param_4 != (long *)0x0) {
    if (param_3 == 2) {
      lVar2 = **(long **)(param_1 + -0x50);
    }
    else {
      if (param_3 != 1) {
        if (param_3 == 0) {
          *param_4 = lVar1;
        }
        goto LAB_0343f240;
      }
      lVar2 = (**(code **)(*plVar4 + 200))(plVar4,0);
    }
    *param_4 = lVar1 - lVar2;
  }
LAB_0343f240:
  FUN_0343f09c(plVar4,lVar1);
  return 1;
}


