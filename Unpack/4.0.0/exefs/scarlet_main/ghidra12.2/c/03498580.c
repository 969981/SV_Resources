/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03498580; name: FUN_03498580
 */


void FUN_03498580(long *param_1,long *param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  int *piVar12;
  ulong uVar13;
  long *plVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  
  uVar11 = *(uint *)(param_1 + 1);
  if (uVar11 != 0) {
    uVar17 = 0;
    uVar4 = (uint)*param_2;
    if (uVar11 != 0) {
      uVar17 = uVar4 / uVar11;
    }
    for (plVar19 = *(long **)(*param_1 + (ulong)(uVar4 - uVar17 * uVar11) * 8);
        plVar19 != (long *)0x0; plVar19 = (long *)plVar19[3]) {
      if (plVar19[2] == *param_2) {
        plVar20 = (long *)*plVar19;
        plVar3 = plVar20;
        if ((int)plVar19[1] != 0) {
          if (param_3 == 0) {
            do {
              plVar3 = (long *)*plVar20;
              if (*(uint *)(param_2 + 0xb) != 0) {
                lVar7 = (ulong)*(uint *)(param_2 + 0xb) << 5;
                piVar12 = (int *)(param_2[10] + 4);
                do {
                  if (*piVar12 == (int)plVar3[2]) goto LAB_0349889c;
                  lVar7 = lVar7 + -0x20;
                  piVar12 = piVar12 + 8;
                } while (lVar7 != 0);
              }
              uVar11 = *(uint *)(plVar3 + 0xd);
              uVar13 = (ulong)uVar11;
              if (uVar11 != 0) {
                puVar8 = (undefined8 *)plVar3[0xc];
                iVar15 = 0;
                uVar17 = uVar11;
LAB_034987a0:
                iVar1 = iVar15 + (uVar17 >> 1);
                plVar18 = (long *)puVar8[iVar1];
                if (plVar18 != param_2) goto code_r0x034987b4;
                if (puVar8 + iVar1 < puVar8 + (uVar13 - 1)) {
                  puVar16 = puVar8 + iVar1;
                  do {
                    puVar9 = puVar16 + 1;
                    *puVar16 = *puVar9;
                    puVar16 = puVar9;
                  } while (puVar9 < puVar8 + (uVar13 - 1));
                  uVar11 = *(uint *)(plVar3 + 0xd);
                  puVar8 = (undefined8 *)plVar3[0xc];
                }
                uVar11 = uVar11 - 1;
                uVar13 = (ulong)uVar11;
                *(uint *)(plVar3 + 0xd) = uVar11;
joined_r0x034987e4:
                if (uVar11 == 0) goto LAB_03498850;
                lVar7 = uVar13 << 3;
                while (*(long *)*puVar8 != *param_2) {
                  lVar7 = lVar7 + -8;
                  puVar8 = puVar8 + 1;
                  if (lVar7 == 0) goto LAB_03498850;
                }
LAB_0349889c:
                plVar20 = plVar20 + 1;
                goto LAB_034988a0;
              }
LAB_03498850:
              uVar11 = *(uint *)(plVar19 + 1);
              plVar18 = (long *)(*plVar19 + (ulong)uVar11 * 8 + -8);
              if (plVar20 < plVar18) {
                plVar14 = plVar20;
                do {
                  plVar10 = plVar14 + 1;
                  *plVar14 = *plVar10;
                  plVar14 = plVar10;
                } while (plVar10 < plVar18);
                uVar11 = *(uint *)(plVar19 + 1);
              }
              *(uint *)(plVar19 + 1) = uVar11 - 1;
              (**(code **)(*plVar3 + 0x18))();
LAB_034988a0:
              plVar3 = (long *)*plVar19;
              uVar11 = *(uint *)(plVar19 + 1);
            } while (plVar3 + uVar11 != plVar20);
          }
          else {
            do {
              plVar3 = (long *)*plVar20;
              if ((int)plVar3[2] == param_3) {
                if (*(uint *)(param_2 + 0xb) != 0) {
                  lVar7 = (ulong)*(uint *)(param_2 + 0xb) << 5;
                  piVar12 = (int *)(param_2[10] + 4);
                  do {
                    if (*piVar12 == param_3) goto LAB_03498738;
                    lVar7 = lVar7 + -0x20;
                    piVar12 = piVar12 + 8;
                  } while (lVar7 != 0);
                }
                uVar11 = *(uint *)(plVar3 + 0xd);
                uVar13 = (ulong)uVar11;
                if (uVar11 != 0) {
                  puVar8 = (undefined8 *)plVar3[0xc];
                  iVar15 = 0;
                  uVar17 = uVar11;
LAB_0349863c:
                  iVar1 = iVar15 + (uVar17 >> 1);
                  plVar18 = (long *)puVar8[iVar1];
                  if (plVar18 != param_2) goto code_r0x03498650;
                  puVar16 = puVar8 + iVar1;
                  if (puVar8 + iVar1 < puVar8 + (uVar13 - 1)) {
                    do {
                      puVar9 = puVar16 + 1;
                      *puVar16 = *puVar9;
                      puVar16 = puVar9;
                    } while (puVar9 < puVar8 + (uVar13 - 1));
                    uVar11 = *(uint *)(plVar3 + 0xd);
                    puVar8 = (undefined8 *)plVar3[0xc];
                  }
                  uVar11 = uVar11 - 1;
                  uVar13 = (ulong)uVar11;
                  *(uint *)(plVar3 + 0xd) = uVar11;
joined_r0x03498680:
                  if (uVar11 == 0) goto LAB_034986ec;
                  lVar7 = uVar13 << 3;
                  while (*(long *)*puVar8 != *param_2) {
                    lVar7 = lVar7 + -8;
                    puVar8 = puVar8 + 1;
                    if (lVar7 == 0) goto LAB_034986ec;
                  }
                  goto LAB_03498738;
                }
LAB_034986ec:
                uVar11 = *(uint *)(plVar19 + 1);
                plVar14 = (long *)(*plVar19 + (ulong)uVar11 * 8 + -8);
                plVar18 = plVar20;
                if (plVar20 < plVar14) {
                  do {
                    plVar10 = plVar18 + 1;
                    *plVar18 = *plVar10;
                    plVar18 = plVar10;
                  } while (plVar10 < plVar14);
                  uVar11 = *(uint *)(plVar19 + 1);
                }
                *(uint *)(plVar19 + 1) = uVar11 - 1;
                (**(code **)(*plVar3 + 0x18))();
              }
              else {
LAB_03498738:
                plVar20 = plVar20 + 1;
              }
              plVar3 = (long *)*plVar19;
              uVar11 = *(uint *)(plVar19 + 1);
            } while (plVar3 + uVar11 != plVar20);
          }
          if (uVar11 != 0) {
            return;
          }
        }
        puVar2 = PTR_DAT_047e2fd0;
        if (plVar3 != (long *)0x0) {
          *(undefined4 *)(plVar19 + 1) = 0;
          (**(code **)(puVar2 + 0x30))(0,plVar3);
          *plVar19 = 0;
          *(undefined4 *)((long)plVar19 + 0xc) = 0;
        }
        uVar11 = *(uint *)(param_1 + 1);
        if (uVar11 != 0) {
          lVar7 = *param_2;
          uVar17 = 0;
          if (uVar11 != 0) {
            uVar17 = (uint)lVar7 / uVar11;
          }
          plVar20 = (long *)(*param_1 + (ulong)((uint)lVar7 - uVar17 * uVar11) * 8);
          lVar5 = *plVar20;
          if (lVar5 != 0) {
            if (*(long *)(lVar5 + 0x10) != lVar7) {
              do {
                lVar6 = lVar5;
                lVar5 = *(long *)(lVar6 + 0x18);
                if (lVar5 == 0) goto LAB_0349895c;
              } while (*(long *)(lVar5 + 0x10) != lVar7);
              plVar20 = (long *)(lVar6 + 0x18);
            }
            *plVar20 = *(long *)(lVar5 + 0x18);
            *(int *)(param_1 + 2) = (int)param_1[2] + -1;
          }
        }
LAB_0349895c:
                    /* WARNING: Could not recover jumptable at 0x03498978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(puVar2 + 0x30))(0,plVar19);
        return;
      }
    }
  }
  return;
code_r0x03498650:
  if (((int)plVar18[9] < (int)param_2[9]) ||
     ((plVar18 < param_2 && ((int)plVar18[9] == (int)param_2[9])))) {
    iVar15 = iVar1 + 1;
    uVar17 = uVar17 - 1;
  }
  uVar17 = uVar17 >> 1;
  if (uVar17 == 0) goto joined_r0x03498680;
  goto LAB_0349863c;
code_r0x034987b4:
  if (((int)plVar18[9] < (int)param_2[9]) ||
     ((plVar18 < param_2 && ((int)plVar18[9] == (int)param_2[9])))) {
    iVar15 = iVar1 + 1;
    uVar17 = uVar17 - 1;
  }
  uVar17 = uVar17 >> 1;
  if (uVar17 == 0) goto joined_r0x034987e4;
  goto LAB_034987a0;
}


