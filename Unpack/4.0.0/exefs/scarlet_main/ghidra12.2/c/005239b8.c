/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005239b8; name: FUN_005239b8
 */


void FUN_005239b8(long param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  int *piVar5;
  bool bVar6;
  int *piVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    piVar7 = *(int **)(param_1 + 0x10);
    uVar4 = *(ushort *)(param_1 + 10);
    piVar9 = piVar7 + (ulong)uVar4 * 8;
    if (*(ushort *)(param_2 + 8) < 0x101) {
      piVar11 = *(int **)(param_2 + 0x10);
      lVar10 = 0;
      piVar2 = piVar11 + (ulong)*(ushort *)(param_2 + 10) * 8;
      if ((uVar4 != 0) && (*(ushort *)(param_2 + 10) != 0)) {
        lVar10 = 0;
        do {
          iVar3 = *piVar7;
          piVar1 = piVar7 + 8;
          if (iVar3 == *piVar11) {
            piVar7 = piVar1;
          }
          piVar5 = piVar11 + 8;
          if (iVar3 < *piVar11) {
            piVar7 = piVar1;
            piVar5 = piVar11;
          }
          piVar11 = piVar5;
          lVar10 = lVar10 + 1;
        } while ((piVar11 != piVar2) && (piVar7 != piVar9));
      }
      lVar12 = (long)piVar9 - (long)piVar7 >> 5;
      piVar7 = piVar11;
      piVar9 = piVar2;
    }
    else {
      lVar10 = 0;
      plVar8 = *(long **)(param_2 + 0x10) + 1;
      plVar20 = (long *)**(long **)(param_2 + 0x10);
      if ((uVar4 != 0) && (plVar8 != plVar20)) {
        lVar10 = 0;
        do {
          lVar10 = lVar10 + 1;
          if (*piVar7 < (int)plVar20[4]) {
            piVar7 = piVar7 + 8;
          }
          else if (*piVar7 == (int)plVar20[4]) {
            piVar7 = piVar7 + 8;
            plVar13 = (long *)plVar20[1];
            if ((long *)plVar20[1] == (long *)0x0) {
              plVar13 = plVar20 + 2;
              bVar6 = *(long **)*plVar13 != plVar20;
              plVar20 = (long *)*plVar13;
              if (bVar6) {
                do {
                  lVar12 = *plVar13;
                  plVar13 = (long *)(lVar12 + 0x10);
                  plVar20 = (long *)*plVar13;
                } while (*plVar20 != lVar12);
              }
            }
            else {
              do {
                plVar20 = plVar13;
                plVar13 = (long *)*plVar20;
              } while ((long *)*plVar20 != (long *)0x0);
            }
          }
          else {
            plVar13 = (long *)plVar20[1];
            if ((long *)plVar20[1] == (long *)0x0) {
              plVar13 = plVar20 + 2;
              bVar6 = *(long **)*plVar13 != plVar20;
              plVar20 = (long *)*plVar13;
              if (bVar6) {
                do {
                  lVar12 = *plVar13;
                  plVar13 = (long *)(lVar12 + 0x10);
                  plVar20 = (long *)*plVar13;
                } while (*plVar20 != lVar12);
              }
            }
            else {
              do {
                plVar20 = plVar13;
                plVar13 = (long *)*plVar20;
              } while ((long *)*plVar20 != (long *)0x0);
            }
          }
        } while (plVar8 != plVar20 && piVar7 != piVar9);
      }
      if (plVar20 == plVar8) {
        lVar12 = 0;
      }
      else {
        lVar12 = 0;
        do {
          lVar12 = lVar12 + 1;
          plVar13 = (long *)plVar20[1];
          if ((long *)plVar20[1] == (long *)0x0) {
            plVar13 = plVar20 + 2;
            plVar14 = (long *)*plVar13;
            if ((long *)*plVar14 != plVar20) {
              do {
                lVar15 = *plVar13;
                plVar13 = (long *)(lVar15 + 0x10);
                plVar14 = (long *)*plVar13;
              } while (*plVar14 != lVar15);
            }
          }
          else {
            do {
              plVar14 = plVar13;
              plVar13 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
          }
          plVar20 = plVar14;
        } while (plVar14 != plVar8);
      }
    }
    FUN_00523c6c(param_1,lVar10 + ((long)piVar9 - (long)piVar7 >> 5) + lVar12);
  }
  if (*(ushort *)(param_2 + 8) < 0x101) {
    uVar4 = *(ushort *)(param_2 + 10);
    if ((ulong)uVar4 != 0) {
      puVar16 = *(undefined4 **)(param_2 + 0x10);
      puVar17 = puVar16;
      do {
        puVar18 = puVar17 + 8;
        FUN_00523ea0(param_1,*puVar17,puVar17 + 2);
        puVar17 = puVar18;
      } while (puVar18 != puVar16 + (ulong)uVar4 * 8);
    }
  }
  else {
    puVar19 = *(undefined8 **)(param_2 + 0x10);
    plVar20 = (long *)*puVar19;
    while (plVar20 != puVar19 + 1) {
      FUN_00523ea0(param_1,(int)plVar20[4],plVar20 + 5);
      plVar8 = (long *)plVar20[1];
      if ((long *)plVar20[1] == (long *)0x0) {
        plVar8 = plVar20 + 2;
        if (*(long **)*plVar8 == plVar20) {
          plVar20 = (long *)*plVar8;
        }
        else {
          do {
            lVar10 = *plVar8;
            plVar8 = (long *)(lVar10 + 0x10);
            plVar20 = (long *)*plVar8;
          } while (*plVar20 != lVar10);
        }
      }
      else {
        do {
          plVar20 = plVar8;
          plVar8 = (long *)*plVar20;
        } while ((long *)*plVar20 != (long *)0x0);
      }
    }
  }
  return;
}


