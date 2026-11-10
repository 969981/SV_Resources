/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0089a3dc; name: FUN_0089a3dc
 */


void FUN_0089a3dc(long param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  
  if (*(int *)(param_1 + 0x48) == 0) {
LAB_0089a434:
    plVar7 = (long *)0x0;
  }
  else {
    plVar8 = (long *)(param_1 + 0x40);
    do {
      lVar6 = *plVar8;
      if (lVar6 == param_1 + 0x38) goto LAB_0089a434;
      plVar7 = (long *)(lVar6 + -0x20);
      plVar8 = (long *)(lVar6 + 8);
      iVar2 = strcmp(param_2,*(char **)(*plVar7 + 0x10));
    } while (iVar2 != 0);
  }
  piVar3 = (int *)FUN_008b4fd0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(*plVar7 + 0x10));
  lVar6 = *(long *)(param_1 + 0x18) + (ulong)(uint)piVar3[1];
  piVar9 = *(int **)(param_1 + 0x28);
  if ((piVar9 != (int *)0x0) && (0 < *piVar9)) {
    lVar11 = 0;
    lVar10 = 0x1c;
    do {
      uVar4 = FUN_0088fc10(lVar6,*(long *)(piVar9 + 2) + lVar10 + -0x1c);
      if ((uVar4 & 1) != 0) {
        piVar5 = (int *)0x0;
        if (*(long *)(piVar9 + 2) == 0) goto LAB_0089a4a4;
        uVar1 = *(uint *)(*(long *)(piVar9 + 2) + lVar10);
        if (uVar1 != 0) {
          piVar9 = (int *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + (ulong)uVar1);
          piVar5 = (int *)0x0;
          if (*piVar9 == 0x31747063) {
            piVar5 = piVar9 + 0x15;
          }
          goto LAB_0089a4a4;
        }
        break;
      }
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x28;
    } while (lVar11 < *piVar9);
  }
  piVar5 = (int *)0x0;
LAB_0089a4a4:
  if (piVar5 != (int *)0x0) {
    piVar3 = piVar5;
  }
  plVar7[1] = (long)piVar3;
  plVar7[3] = lVar6;
  return;
}


