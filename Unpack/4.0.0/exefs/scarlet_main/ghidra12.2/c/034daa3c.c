/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034daa3c; name: FUN_034daa3c
 */


void FUN_034daa3c(long *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  
  plVar3 = (long *)(**(code **)(*param_1 + 0x80))();
  if (plVar3 != (long *)0x0) {
    lVar7 = *plVar3;
    lVar6 = 0;
    do {
      lVar10 = lVar6;
      lVar6 = lVar7;
      if (lVar6 == 0) {
        return;
      }
      lVar7 = *(long *)(lVar6 + 0x10);
    } while (*(int *)(lVar6 + 0x38) != param_2);
    if (*plVar3 != lVar6) {
      plVar3 = (long *)(lVar10 + 0x10);
    }
    *plVar3 = *(long *)(lVar6 + 0x10);
    piVar5 = (int *)**(undefined8 **)PTR_DAT_047e7050;
    uVar4 = *(uint *)(*(undefined8 **)PTR_DAT_047e7050 + 1);
    if ((uVar4 == 0) || (*piVar5 == param_2)) {
      piVar8 = piVar5;
    }
    else {
      lVar7 = (ulong)uVar4 * 0x10;
      piVar11 = piVar5;
      do {
        lVar7 = lVar7 + -0x10;
        if (lVar7 == 0) goto LAB_034dab58;
        piVar8 = piVar11 + 4;
        piVar1 = piVar11 + 4;
        piVar11 = piVar8;
      } while (*piVar1 != param_2);
    }
    if (piVar8 != piVar5 + (ulong)uVar4 * 4) {
      lVar7 = 0;
      lVar9 = *(long *)(*(long *)(piVar8 + 2) + 8);
      lVar10 = lVar9;
      if ((lVar9 != 0) && (lVar9 != lVar6)) {
        do {
          lVar7 = lVar10;
          lVar10 = *(long *)(lVar7 + 8);
        } while (lVar10 != 0 && lVar10 != lVar6);
      }
      if (lVar10 != 0) {
        if (lVar10 == lVar9) {
          *(undefined8 *)(*(long *)(piVar8 + 2) + 8) = *(undefined8 *)(lVar10 + 8);
        }
        else {
          *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar10 + 8);
        }
      }
    }
LAB_034dab58:
    uVar4 = *(uint *)(lVar6 + 0x30);
    while (uVar4 != 0) {
      piVar5 = *(int **)(lVar6 + 0x28);
      iVar2 = *piVar5;
      *(undefined8 *)(*(long *)(piVar5 + 2) + 0x20) = 0;
      (**(code **)(**(long **)(piVar5 + 2) + 0x18))();
      piVar8 = *(int **)(lVar6 + 0x28);
      uVar4 = *(uint *)(lVar6 + 0x30);
      piVar5 = piVar8 + (ulong)uVar4 * 4;
      if ((uVar4 != 0) && (*piVar8 != iVar2)) {
        lVar7 = (ulong)uVar4 * 0x10;
        do {
          lVar7 = lVar7 + -0x10;
          if (lVar7 == 0) {
            piVar8 = piVar5;
            break;
          }
          piVar1 = piVar8 + 4;
          piVar11 = piVar8 + 4;
          piVar8 = piVar1;
        } while (*piVar11 != iVar2);
      }
      if (piVar5 != piVar8) {
        if (piVar8 < piVar5 + -4) {
          do {
            piVar11 = piVar8 + 4;
            *(undefined8 *)piVar8 = *(undefined8 *)piVar11;
            *(undefined8 *)(piVar8 + 2) = *(undefined8 *)(piVar8 + 6);
            piVar8 = piVar11;
          } while (piVar11 < piVar5 + -4);
          uVar4 = *(uint *)(lVar6 + 0x30);
        }
        uVar4 = uVar4 - 1;
        *(uint *)(lVar6 + 0x30) = uVar4;
      }
    }
    FUN_034dbce4(lVar6);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2,lVar6);
    if ((param_3 & 1) != 0) {
      FUN_034da454(param_1);
      return;
    }
  }
  return;
}


