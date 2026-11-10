/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0344132c; name: FUN_0344132c
 */


void FUN_0344132c(long param_1,ulong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  
LAB_03441334:
  uVar5 = param_2 & 0xffffffff;
  do {
    piVar3 = (int *)(param_1 + uVar5 * 0x18);
    piVar7 = piVar3 + 4;
    piVar8 = *(int **)piVar7;
    if (piVar8 == (int *)0x0 || param_3 < piVar8) {
      piVar4 = (int *)0x0;
      piVar9 = piVar8;
    }
    else {
      piVar9 = piVar8;
      do {
        piVar4 = piVar9;
        piVar9 = *(int **)piVar4;
      } while (piVar9 != (int *)0x0 && piVar9 <= param_3);
    }
    if (*(int *)(param_1 + 0x318) - 1 <= uVar5) {
      piVar10 = piVar9;
LAB_034414a4:
      if (piVar4 != (int *)0x0) {
        piVar7 = piVar4;
      }
      *(int **)param_3 = piVar9;
      *(int **)piVar7 = param_3;
      if (piVar10 == (int *)0x0) {
        *(int **)(param_1 + (uVar5 & 0xffffffff) * 0x18 + 8) = param_3;
      }
      *piVar3 = *piVar3 + 1;
      return;
    }
    iVar1 = *(int *)(param_1 + 0x314);
    param_2 = uVar5 + 1;
    iVar2 = 1 << (ulong)(iVar1 + (int)param_2 & 0x1f);
    if (((piVar4 != (int *)0x0) && ((iVar2 - 1U & (int)piVar4 - *(int *)(param_1 + 0x300)) == 0)) &&
       ((long)param_3 - (long)piVar4 == (ulong)(uint)(1 << (ulong)(iVar1 + (int)uVar5 & 0x1f))))
    break;
    if (piVar9 == (int *)0x0) {
      piVar10 = (int *)0x0;
      goto LAB_034414a4;
    }
    piVar10 = (int *)0x1;
    if (((iVar2 - 1U & (int)param_3 - *(int *)(param_1 + 0x300)) != 0) ||
       ((long)piVar9 - (long)param_3 != (ulong)(uint)(1 << (ulong)(iVar1 + (int)uVar5 & 0x1f))))
    goto LAB_034414a4;
    if (piVar9 != piVar8) {
      piVar7 = piVar4;
    }
    *(undefined8 *)piVar7 = *(undefined8 *)piVar9;
    puVar6 = (undefined8 *)(param_1 + uVar5 * 0x18 + 8);
    if ((int *)*puVar6 == piVar9) {
      *puVar6 = piVar4;
    }
    *piVar3 = *piVar3 + -1;
    uVar5 = param_2;
  } while( true );
  piVar9 = (int *)0x0;
  if ((piVar8 == (int *)0x0) || (piVar8 == piVar4)) {
    piVar10 = piVar8;
  }
  else {
    piVar10 = piVar8;
    do {
      piVar9 = piVar10;
      piVar10 = *(int **)piVar9;
    } while (piVar10 != (int *)0x0 && piVar10 != piVar4);
  }
  param_3 = piVar4;
  if (piVar10 != (int *)0x0) {
    if (piVar10 != piVar8) {
      piVar7 = piVar9;
    }
    *(undefined8 *)piVar7 = *(undefined8 *)piVar10;
    puVar6 = (undefined8 *)(param_1 + (uVar5 & 0xffffffff) * 0x18 + 8);
    if ((int *)*puVar6 == piVar10) {
      *puVar6 = piVar9;
    }
    *piVar3 = *piVar3 + -1;
  }
  goto LAB_03441334;
}


