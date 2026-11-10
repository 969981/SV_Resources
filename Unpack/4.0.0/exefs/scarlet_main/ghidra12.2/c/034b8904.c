/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b8904; name: FUN_034b8904
 */


void FUN_034b8904(long *param_1,uint param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint *puVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  code *pcVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  uint *puVar26;
  uint *puVar27;
  
  uVar14 = *(uint *)(param_1 + 1);
  if (uVar14 != 0) {
    uVar8 = 0;
    if (uVar14 != 0) {
      uVar8 = param_2 / uVar14;
    }
    puVar27 = *(uint **)(*param_1 + (ulong)(param_2 - uVar8 * uVar14) * 8);
    if (puVar27 != (uint *)0x0) {
      while (*puVar27 != param_2) {
        puVar27 = *(uint **)(puVar27 + 2);
        if (puVar27 == (uint *)0x0) {
          return;
        }
      }
      uVar16 = (ulong)puVar27[0x14];
      if (puVar27[0x14] == 0) {
        plVar18 = (long *)0x0;
      }
      else {
        puVar17 = *(undefined8 **)(puVar27 + 0x12);
        puVar19 = puVar17 + uVar16;
        plVar25 = (long *)0x0;
        do {
          uVar14 = (uint)uVar16;
          plVar18 = (long *)*puVar17;
          if (((((plVar18[3] == *param_3) && ((int)plVar18[4] == (int)param_3[1])) &&
               ((int)plVar18[5] == (int)param_3[2])) &&
              (((char)plVar18[6] == (char)param_3[3] && ((char)plVar18[7] == (char)param_3[4])))) &&
             (plVar18[8] == param_3[5])) {
            puVar21 = puVar17;
            if (puVar17 < puVar19 + -1) {
              do {
                puVar12 = puVar21 + 1;
                *puVar21 = *puVar12;
                puVar21 = puVar12;
              } while (puVar12 < puVar19 + -1);
              uVar14 = puVar27[0x14];
            }
            puVar27[0x14] = uVar14 - 1;
            if (plVar25 == (long *)0x0) {
              plVar18[2] = 0;
            }
            else {
              plVar18[2] = (long)plVar25;
            }
          }
          else {
            puVar17 = puVar17 + 1;
            plVar18 = plVar25;
          }
          uVar16 = (ulong)puVar27[0x14];
          puVar19 = (undefined8 *)(*(long *)(puVar27 + 0x12) + uVar16 * 8);
          plVar25 = plVar18;
        } while (puVar19 != puVar17);
        if (plVar18 != (long *)0x0) {
          do {
            if ((int)plVar25[9] - 4U < 2) {
              pcVar13 = *(code **)(*(long *)*plVar25 + 0x18);
LAB_034b8a84:
              (*pcVar13)();
            }
            else if ((int)plVar25[9] == 2) {
              plVar2 = (long *)0x0;
              if (*plVar25 != 0) {
                plVar2 = (long *)(*plVar25 + -0x38);
              }
              pcVar13 = *(code **)(*plVar2 + 0x30);
              goto LAB_034b8a84;
            }
            plVar25 = (long *)plVar25[2];
          } while (plVar25 != (long *)0x0);
        }
      }
      uVar16 = (ulong)puVar27[0x18];
      if (puVar27[0x18] != 0) {
        puVar17 = *(undefined8 **)(puVar27 + 0x16);
        puVar19 = puVar17 + uVar16;
        plVar25 = plVar18;
        do {
          uVar14 = (uint)uVar16;
          plVar18 = (long *)*puVar17;
          if (((plVar18[3] == *param_3) && ((int)plVar18[4] == (int)param_3[1])) &&
             (((int)plVar18[5] == (int)param_3[2] &&
              ((((char)plVar18[6] == (char)param_3[3] && ((char)plVar18[7] == (char)param_3[4])) &&
               (plVar18[8] == param_3[5])))))) {
            puVar21 = puVar17;
            if (puVar17 < puVar19 + -1) {
              do {
                puVar12 = puVar21 + 1;
                *puVar21 = *puVar12;
                puVar21 = puVar12;
              } while (puVar12 < puVar19 + -1);
              uVar14 = puVar27[0x18];
            }
            puVar27[0x18] = uVar14 - 1;
            if (plVar25 == (long *)0x0) {
              plVar18[2] = 0;
            }
            else {
              plVar18[2] = (long)plVar25;
            }
          }
          else {
            puVar17 = puVar17 + 1;
            plVar18 = plVar25;
          }
          uVar16 = (ulong)puVar27[0x18];
          puVar19 = (undefined8 *)(*(long *)(puVar27 + 0x16) + uVar16 * 8);
          plVar25 = plVar18;
        } while (puVar19 != puVar17);
      }
      puVar10 = PTR_DAT_047e2fd0;
      lVar24 = *param_3;
      if ((((lVar24 == 0) && ((int)param_3[1] == 0)) &&
          (((int)param_3[2] == 0 && (((char)param_3[3] == -1 && ((char)param_3[4] == -1)))))) &&
         (param_3[5] == 0)) {
        puVar26 = puVar27 + 0x10;
        puVar17 = *(undefined8 **)puVar26;
        if (puVar17 != (undefined8 *)0x0) {
          puVar19 = puVar17;
          do {
            puVar27 = puVar26;
            if (puVar19 != puVar17) {
              puVar27 = (uint *)&DAT_00000008;
            }
            *(undefined8 *)puVar27 = puVar17[1];
            lVar24 = puVar17[2];
            *puVar17 = &PTR_LAB_047c4410;
            if (lVar24 != 0) {
              puVar21 = *(undefined8 **)(lVar24 + 0x28);
              uVar14 = *(uint *)(lVar24 + 0x30);
              puVar19 = puVar21 + uVar14;
              if (uVar14 != 0) {
                if ((undefined8 *)*puVar21 != puVar17) {
                  lVar23 = (ulong)uVar14 * 8;
                  do {
                    lVar23 = lVar23 + -8;
                    puVar12 = puVar21 + 1;
                    if (lVar23 == 0) {
                      puVar21 = puVar19;
                      break;
                    }
                    puVar3 = puVar21 + 1;
                    puVar21 = puVar12;
                  } while ((undefined8 *)*puVar3 != puVar17);
                }
                if (puVar19 != puVar21) {
                  if (uVar14 < 2) {
                    iVar15 = 0;
                  }
                  else {
                    *puVar21 = puVar19[-1];
                    iVar15 = *(int *)(lVar24 + 0x30) + -1;
                  }
                  *(int *)(lVar24 + 0x30) = iVar15;
                }
              }
            }
            (**(code **)(puVar10 + 0x30))(0,puVar17);
            puVar19 = *(undefined8 **)puVar26;
          } while( true );
        }
      }
      else {
        puVar26 = puVar27 + 0x10;
        puVar17 = *(undefined8 **)puVar26;
        if (puVar17 != (undefined8 *)0x0) {
          iVar15 = (int)param_3[1];
          iVar5 = (int)param_3[2];
          cVar6 = (char)param_3[3];
          cVar7 = (char)param_3[4];
          lVar23 = param_3[5];
          puVar19 = puVar17;
          puVar21 = (undefined8 *)0x0;
          if (lVar24 == 0) {
            do {
              puVar12 = puVar19;
              if ((((((iVar15 == 0) || (*(int *)(puVar12 + 5) == iVar15)) &&
                    ((iVar5 == 0 || (*(int *)(puVar12 + 6) == iVar5)))) &&
                   ((cVar6 == -1 || (*(char *)(puVar12 + 7) == cVar6)))) &&
                  ((cVar7 == -1 || (*(char *)(puVar12 + 8) == cVar7)))) &&
                 ((lVar23 == 0 || (puVar12[9] == lVar23)))) goto LAB_034b8c64;
              puVar19 = (undefined8 *)puVar12[1];
              puVar21 = puVar12;
            } while ((undefined8 *)puVar12[1] != (undefined8 *)0x0);
          }
          else {
            do {
              puVar12 = puVar19;
              if ((((puVar12[4] == lVar24) && ((iVar15 == 0 || (*(int *)(puVar12 + 5) == iVar15))))
                  && ((iVar5 == 0 || (*(int *)(puVar12 + 6) == iVar5)))) &&
                 ((((cVar6 == -1 || (*(char *)(puVar12 + 7) == cVar6)) &&
                   ((cVar7 == -1 || (*(char *)(puVar12 + 8) == cVar7)))) &&
                  ((lVar23 == 0 || (puVar12[9] == lVar23)))))) goto LAB_034b8c64;
              puVar19 = (undefined8 *)puVar12[1];
              puVar21 = puVar12;
            } while ((undefined8 *)puVar12[1] != (undefined8 *)0x0);
          }
        }
      }
LAB_034b8e84:
      FUN_034b4e64(puVar27 + 8,param_3);
      puVar11 = PTR_DAT_047e7048;
      puVar10 = PTR_DAT_047e2fd0;
      do {
        if (plVar18 == (long *)0x0) {
          return;
        }
        plVar25 = (long *)plVar18[2];
        uVar14 = *(uint *)(param_1 + 4);
        if (uVar14 != 0) {
          uVar8 = (int)plVar18[1] + (int)*plVar18;
          uVar9 = 0;
          if (uVar14 != 0) {
            uVar9 = uVar8 / uVar14;
          }
          plVar2 = (long *)(param_1[3] + (ulong)(uVar8 - uVar9 * uVar14) * 8);
          plVar22 = (long *)*plVar2;
          if (plVar22 != (long *)0x0) {
            plVar20 = (long *)0x0;
            do {
              if ((*plVar22 == *plVar18) && ((int)plVar22[1] == (int)plVar18[1])) {
                if (plVar20 != (long *)0x0) {
                  plVar2 = plVar20 + 2;
                }
                *plVar2 = plVar22[2];
                *(int *)(param_1 + 5) = (int)param_1[5] + -1;
                break;
              }
              plVar1 = plVar22 + 2;
              plVar20 = plVar22;
              plVar22 = (long *)*plVar1;
            } while ((long *)*plVar1 != (long *)0x0);
          }
        }
        FUN_03498580(*(undefined8 *)puVar11,plVar18,0);
        if (plVar18[10] != 0) {
          *(undefined4 *)(plVar18 + 0xb) = 0;
          (**(code **)(puVar10 + 0x30))(0);
          plVar18[10] = 0;
          *(undefined4 *)((long)plVar18 + 0x5c) = 0;
        }
        (**(code **)(puVar10 + 0x30))(0,plVar18);
        plVar18 = plVar25;
      } while( true );
    }
  }
  return;
LAB_034b8c64:
  puVar4 = puVar26;
  if (puVar17 != puVar12) {
    puVar4 = (uint *)(puVar21 + 1);
  }
  *(undefined8 *)puVar4 = puVar12[1];
  lVar24 = puVar12[2];
  *puVar12 = &PTR_LAB_047c4410;
  if (lVar24 != 0) {
    uVar14 = *(uint *)(lVar24 + 0x30);
    if (uVar14 != 0) {
      puVar19 = *(undefined8 **)(lVar24 + 0x28);
      puVar17 = puVar19 + uVar14;
      if ((undefined8 *)*puVar19 != puVar12) {
        lVar23 = (ulong)uVar14 * 8;
        do {
          lVar23 = lVar23 + -8;
          if (lVar23 == 0) {
            puVar19 = puVar17;
            break;
          }
          puVar3 = puVar19 + 1;
          puVar21 = puVar19 + 1;
          puVar19 = puVar3;
        } while ((undefined8 *)*puVar21 != puVar12);
      }
      if (puVar17 != puVar19) {
        if (uVar14 < 2) {
          iVar15 = 0;
        }
        else {
          *puVar19 = puVar17[-1];
          iVar15 = *(int *)(lVar24 + 0x30) + -1;
        }
        *(int *)(lVar24 + 0x30) = iVar15;
      }
    }
  }
  (**(code **)(puVar10 + 0x30))(0);
  puVar17 = *(undefined8 **)puVar26;
  if (puVar17 == (undefined8 *)0x0) goto LAB_034b8e84;
  iVar15 = (int)param_3[1];
  iVar5 = (int)param_3[2];
  cVar6 = (char)param_3[3];
  cVar7 = (char)param_3[4];
  lVar24 = param_3[5];
  puVar19 = puVar17;
  puVar21 = (undefined8 *)0x0;
  if (*param_3 == 0) {
    while (((((puVar12 = puVar19, iVar15 != 0 && (*(int *)(puVar12 + 5) != iVar15)) ||
             ((iVar5 != 0 && (*(int *)(puVar12 + 6) != iVar5)))) ||
            (((cVar6 != -1 && (*(char *)(puVar12 + 7) != cVar6)) ||
             ((cVar7 != -1 && (*(char *)(puVar12 + 8) != cVar7)))))) ||
           ((lVar24 != 0 && (puVar12[9] != lVar24))))) {
      puVar19 = (undefined8 *)puVar12[1];
      puVar21 = puVar12;
      if ((undefined8 *)puVar12[1] == (undefined8 *)0x0) goto LAB_034b8e84;
    }
  }
  else {
    while (((puVar12 = puVar19, puVar12[4] != *param_3 ||
            ((iVar15 != 0 && (*(int *)(puVar12 + 5) != iVar15)))) ||
           (((iVar5 != 0 && (*(int *)(puVar12 + 6) != iVar5)) ||
            ((((cVar6 != -1 && (*(char *)(puVar12 + 7) != cVar6)) ||
              ((cVar7 != -1 && (*(char *)(puVar12 + 8) != cVar7)))) ||
             ((lVar24 != 0 && (puVar12[9] != lVar24))))))))) {
      puVar19 = (undefined8 *)puVar12[1];
      puVar21 = puVar12;
      if ((undefined8 *)puVar12[1] == (undefined8 *)0x0) goto LAB_034b8e84;
    }
  }
  goto LAB_034b8c64;
}


