/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034411e4; name: FUN_034411e4
 */


int * FUN_034411e4(long param_1,uint param_2,long param_3,int param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  piVar1 = *(int **)(param_1 + 0x300);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)((long)piVar1 +
                    (ulong)((-1 << (ulong)(*(int *)(param_1 + 0x314) + param_2 + 1 & 0x1f) & param_5
                            ) + param_4));
    piVar1[0] = 0;
    piVar1[1] = 0;
  }
  if (param_3 != 0) {
    return piVar1;
  }
  if ((*(int *)(param_1 + 0x318) - 1U <= param_2) ||
     (param_5 <= (uint)(1 << (ulong)(*(int *)(param_1 + 0x314) + param_2 + 1 & 0x1f)))) {
    FUN_0344132c(param_1,param_2,piVar1);
    return (int *)0x0;
  }
  piVar2 = (int *)(param_1 + (ulong)param_2 * 0x18);
  piVar5 = piVar2 + 4;
  piVar8 = *(int **)piVar5;
  if (piVar8 == (int *)0x0) {
    piVar6 = (int *)0x0;
    piVar1[0] = 0;
    piVar1[1] = 0;
  }
  else {
    if (piVar1 < piVar8) {
      piVar7 = (int *)0x0;
      piVar6 = piVar8;
    }
    else {
      piVar6 = piVar8;
      do {
        piVar7 = piVar6;
        piVar6 = *(int **)piVar7;
        if (piVar6 == (int *)0x0) goto LAB_034412f0;
      } while (piVar6 <= piVar1);
    }
    if ((long)piVar6 - (long)piVar1 ==
        (ulong)(uint)(1 << (ulong)(*(int *)(param_1 + 0x314) + param_2 & 0x1f))) {
      if (piVar6 != piVar8) {
        piVar5 = piVar7;
      }
      *(undefined8 *)piVar5 = *(undefined8 *)piVar6;
      puVar4 = (undefined8 *)(param_1 + (ulong)param_2 * 0x18 + 8);
      if ((int *)*puVar4 == piVar6) {
        *puVar4 = piVar7;
      }
      iVar3 = *piVar2 + -1;
      goto LAB_0344131c;
    }
LAB_034412f0:
    if (piVar7 != (int *)0x0) {
      piVar5 = piVar7;
    }
    *(int **)piVar1 = piVar6;
  }
  *(int **)piVar5 = piVar1;
  if (piVar6 == (int *)0x0) {
    *(int **)(param_1 + (ulong)param_2 * 0x18 + 8) = piVar1;
  }
  iVar3 = *piVar2 + 1;
  piVar1 = (int *)0x0;
LAB_0344131c:
  *piVar2 = iVar3;
  return piVar1;
}


