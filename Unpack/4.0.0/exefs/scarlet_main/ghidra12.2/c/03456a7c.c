/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03456a7c; name: FUN_03456a7c
 */


void FUN_03456a7c(long param_1,long param_2,undefined8 param_3,uint param_4,int param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  puVar14 = (undefined8 *)(param_1 + 0x50);
  puVar15 = (undefined8 *)*puVar14;
  if (puVar15 != (undefined8 *)0x0) {
    if (param_2 == 0) {
      puVar17 = (undefined8 *)0x0;
      do {
        lVar13 = puVar15[2];
        if (((param_5 == 0) || (*(int *)(lVar13 + 0x30) == param_5)) &&
           (uVar6 = FUN_034560f0(*(undefined8 *)(lVar13 + 8),param_3), (uVar6 & 1) == 0)) {
          if (((param_4 & 1) == 0) && (*(int *)(lVar13 + 0x34) != 0)) {
            *(int *)(lVar13 + 0x34) = *(int *)(lVar13 + 0x34) + -1;
            goto LAB_03456bb0;
          }
          FUN_03455744(param_1,lVar13);
          puVar16 = (undefined8 *)*puVar15;
          puVar4 = puVar14;
          if (*(undefined8 **)(param_1 + 0x50) != puVar15) {
            puVar4 = puVar17;
          }
          *puVar4 = puVar16;
          if (*(undefined8 **)(param_1 + 0x58) == puVar15) {
            *(undefined8 **)(param_1 + 0x58) = puVar17;
          }
          *puVar15 = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 **)(param_1 + 0x60) = puVar15;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        }
        else {
LAB_03456bb0:
          puVar16 = (undefined8 *)*puVar15;
          puVar17 = puVar15;
        }
        puVar15 = puVar16;
      } while (puVar16 != (undefined8 *)0x0);
    }
    else if (param_5 == 0) {
      puVar17 = (undefined8 *)0x0;
      do {
        lVar13 = puVar15[2];
        if ((*(long *)(lVar13 + 0x40) == param_2) &&
           (uVar6 = FUN_034560f0(*(undefined8 *)(lVar13 + 8),param_3), (uVar6 & 1) == 0)) {
          if (((param_4 & 1) == 0) && (*(int *)(lVar13 + 0x34) != 0)) {
            *(int *)(lVar13 + 0x34) = *(int *)(lVar13 + 0x34) + -1;
            goto LAB_03456c50;
          }
          FUN_03455744(param_1,lVar13);
          puVar16 = (undefined8 *)*puVar15;
          puVar4 = puVar14;
          if (*(undefined8 **)(param_1 + 0x50) != puVar15) {
            puVar4 = puVar17;
          }
          *puVar4 = puVar16;
          if (*(undefined8 **)(param_1 + 0x58) == puVar15) {
            *(undefined8 **)(param_1 + 0x58) = puVar17;
          }
          *puVar15 = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 **)(param_1 + 0x60) = puVar15;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        }
        else {
LAB_03456c50:
          puVar16 = (undefined8 *)*puVar15;
          puVar17 = puVar15;
        }
        puVar15 = puVar16;
      } while (puVar16 != (undefined8 *)0x0);
    }
    else {
      puVar17 = (undefined8 *)0x0;
      do {
        lVar13 = puVar15[2];
        if (((*(long *)(lVar13 + 0x40) == param_2) && (*(int *)(lVar13 + 0x30) == param_5)) &&
           (uVar6 = FUN_034560f0(*(undefined8 *)(lVar13 + 8),param_3), (uVar6 & 1) == 0)) {
          if (((param_4 & 1) == 0) && (*(int *)(lVar13 + 0x34) != 0)) {
            *(int *)(lVar13 + 0x34) = *(int *)(lVar13 + 0x34) + -1;
            goto LAB_03456b08;
          }
          FUN_03455744(param_1,lVar13);
          puVar16 = (undefined8 *)*puVar15;
          puVar4 = puVar14;
          if (*(undefined8 **)(param_1 + 0x50) != puVar15) {
            puVar4 = puVar17;
          }
          *puVar4 = puVar16;
          if (*(undefined8 **)(param_1 + 0x58) == puVar15) {
            *(undefined8 **)(param_1 + 0x58) = puVar17;
          }
          *puVar15 = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 **)(param_1 + 0x60) = puVar15;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        }
        else {
LAB_03456b08:
          puVar16 = (undefined8 *)*puVar15;
          puVar17 = puVar15;
        }
        puVar15 = puVar16;
      } while (puVar16 != (undefined8 *)0x0);
    }
  }
  plVar12 = *(long **)(*(long *)PTR_DAT_047e2fe8 + 0x28);
  if (plVar12 != (long *)0x0) {
    if (param_2 == 0) {
      if (param_5 == 0) {
        do {
          lVar13 = *(long *)(plVar12[2] + 8);
          uVar6 = FUN_034560f0(lVar13,param_3);
          if ((((uVar6 & 1) == 0) && (*(short *)(lVar13 + 0x34) == 0x503)) &&
             ((plVar7 = *(long **)(lVar13 + 0x48), plVar7 != (long *)0x0 &&
              (*plVar7 == 0x4000000 || *plVar7 == 0x2000000)))) {
            lVar10 = *(long *)(lVar13 + 0xd8);
            if (lVar10 != 0) {
              uVar5 = *(uint *)(plVar7 + 6);
              if (uVar5 != 0) {
                plVar9 = (long *)plVar7[5];
                plVar3 = plVar9 + uVar5;
                if (*plVar9 != lVar10) {
                  lVar11 = (ulong)uVar5 * 8;
                  do {
                    lVar11 = lVar11 + -8;
                    if (lVar11 == 0) {
                      plVar9 = plVar3;
                      break;
                    }
                    plVar2 = plVar9 + 1;
                    plVar1 = plVar9 + 1;
                    plVar9 = plVar2;
                  } while (*plVar1 != lVar10);
                }
                if (plVar3 != plVar9) {
                  if (uVar5 < 2) {
                    iVar8 = 0;
                  }
                  else {
                    *plVar9 = plVar3[-1];
                    iVar8 = (int)plVar7[6] + -1;
                  }
                  *(int *)(plVar7 + 6) = iVar8;
                }
              }
            }
            *(undefined8 *)(lVar13 + 0x48) = 0;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          if (*(int *)(plVar12[2] + 0x30) == param_5) {
            lVar13 = *(long *)(plVar12[2] + 8);
            uVar6 = FUN_034560f0(lVar13,param_3);
            if (((((uVar6 & 1) == 0) && (*(short *)(lVar13 + 0x34) == 0x503)) &&
                (plVar7 = *(long **)(lVar13 + 0x48), plVar7 != (long *)0x0)) &&
               (*plVar7 == 0x4000000 || *plVar7 == 0x2000000)) {
              lVar10 = *(long *)(lVar13 + 0xd8);
              if (lVar10 != 0) {
                uVar5 = *(uint *)(plVar7 + 6);
                if (uVar5 != 0) {
                  plVar9 = (long *)plVar7[5];
                  plVar3 = plVar9 + uVar5;
                  if (*plVar9 != lVar10) {
                    lVar11 = (ulong)uVar5 * 8;
                    do {
                      lVar11 = lVar11 + -8;
                      if (lVar11 == 0) {
                        plVar9 = plVar3;
                        break;
                      }
                      plVar2 = plVar9 + 1;
                      plVar1 = plVar9 + 1;
                      plVar9 = plVar2;
                    } while (*plVar1 != lVar10);
                  }
                  if (plVar3 != plVar9) {
                    if (uVar5 < 2) {
                      iVar8 = 0;
                    }
                    else {
                      *plVar9 = plVar3[-1];
                      iVar8 = (int)plVar7[6] + -1;
                    }
                    *(int *)(plVar7 + 6) = iVar8;
                  }
                }
              }
              *(undefined8 *)(lVar13 + 0x48) = 0;
            }
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    else if (param_5 == 0) {
      do {
        if (*(long *)(plVar12[2] + 0x40) == param_2) {
          lVar13 = *(long *)(plVar12[2] + 8);
          uVar6 = FUN_034560f0(lVar13,param_3);
          if ((((uVar6 & 1) == 0) && (*(short *)(lVar13 + 0x34) == 0x503)) &&
             ((plVar7 = *(long **)(lVar13 + 0x48), plVar7 != (long *)0x0 &&
              (*plVar7 == 0x4000000 || *plVar7 == 0x2000000)))) {
            lVar10 = *(long *)(lVar13 + 0xd8);
            if (lVar10 != 0) {
              uVar5 = *(uint *)(plVar7 + 6);
              if (uVar5 != 0) {
                plVar9 = (long *)plVar7[5];
                plVar3 = plVar9 + uVar5;
                if (*plVar9 != lVar10) {
                  lVar11 = (ulong)uVar5 * 8;
                  do {
                    lVar11 = lVar11 + -8;
                    if (lVar11 == 0) {
                      plVar9 = plVar3;
                      break;
                    }
                    plVar2 = plVar9 + 1;
                    plVar1 = plVar9 + 1;
                    plVar9 = plVar2;
                  } while (*plVar1 != lVar10);
                }
                if (plVar3 != plVar9) {
                  if (uVar5 < 2) {
                    iVar8 = 0;
                  }
                  else {
                    *plVar9 = plVar3[-1];
                    iVar8 = (int)plVar7[6] + -1;
                  }
                  *(int *)(plVar7 + 6) = iVar8;
                }
              }
            }
            *(undefined8 *)(lVar13 + 0x48) = 0;
          }
        }
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
    else {
      do {
        lVar13 = plVar12[2];
        if ((*(long *)(lVar13 + 0x40) == param_2) && (*(int *)(lVar13 + 0x30) == param_5)) {
          lVar13 = *(long *)(lVar13 + 8);
          uVar6 = FUN_034560f0(lVar13,param_3);
          if (((uVar6 & 1) == 0) &&
             (((*(short *)(lVar13 + 0x34) == 0x503 &&
               (plVar7 = *(long **)(lVar13 + 0x48), plVar7 != (long *)0x0)) &&
              (*plVar7 == 0x4000000 || *plVar7 == 0x2000000)))) {
            lVar10 = *(long *)(lVar13 + 0xd8);
            if (lVar10 != 0) {
              uVar5 = *(uint *)(plVar7 + 6);
              if (uVar5 != 0) {
                plVar9 = (long *)plVar7[5];
                plVar3 = plVar9 + uVar5;
                if (*plVar9 != lVar10) {
                  lVar11 = (ulong)uVar5 * 8;
                  do {
                    lVar11 = lVar11 + -8;
                    if (lVar11 == 0) {
                      plVar9 = plVar3;
                      break;
                    }
                    plVar2 = plVar9 + 1;
                    plVar1 = plVar9 + 1;
                    plVar9 = plVar2;
                  } while (*plVar1 != lVar10);
                }
                if (plVar3 != plVar9) {
                  if (uVar5 < 2) {
                    iVar8 = 0;
                  }
                  else {
                    *plVar9 = plVar3[-1];
                    iVar8 = (int)plVar7[6] + -1;
                  }
                  *(int *)(plVar7 + 6) = iVar8;
                }
              }
            }
            *(undefined8 *)(lVar13 + 0x48) = 0;
          }
        }
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
  return;
}


