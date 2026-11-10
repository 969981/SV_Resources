/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03454ac4; name: FUN_03454ac4
 */


void FUN_03454ac4(long param_1,long *param_2,long param_3,uint param_4,int param_5)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  
  puVar3 = PTR_DAT_047e6f28;
  plVar5 = (long *)(param_1 + 0x50);
  plVar13 = (long *)*plVar5;
  if (plVar13 != (long *)0x0) {
    if (param_2 == (long *)0x0) {
      plVar11 = (long *)0x0;
      do {
        lVar10 = plVar13[2];
        plVar4 = (long *)FUN_0344ec90(*(undefined8 *)puVar3,
                                      *(undefined4 *)(*(long *)(lVar10 + 8) + 0x30),
                                      *(byte *)(*(long *)(lVar10 + 8) + 0x36) >> 6 & 1);
        if (((param_3 == 0) || (*(long *)(lVar10 + 0x40) == param_3)) &&
           ((param_5 == 0 || (*(int *)(lVar10 + 0x30) == param_5)))) {
          if (((param_4 & 1) == 0) && (*(int *)(lVar10 + 0x34) != 0)) {
            *(int *)(lVar10 + 0x34) = *(int *)(lVar10 + 0x34) + -1;
            goto LAB_03454c98;
          }
          FUN_03455744(param_1,lVar10);
          plVar8 = (long *)*plVar13;
          plVar6 = plVar5;
          if (*(long **)(param_1 + 0x50) != plVar13) {
            plVar6 = plVar11;
          }
          *plVar6 = (long)plVar8;
          if (*(long **)(param_1 + 0x58) == plVar13) {
            *(long **)(param_1 + 0x58) = plVar11;
          }
          *plVar13 = *(long *)(param_1 + 0x60);
          *(long **)(param_1 + 0x60) = plVar13;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        }
        else {
LAB_03454c98:
          plVar8 = (long *)*plVar13;
          plVar11 = plVar13;
        }
        plVar13 = plVar8;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x30))(plVar4);
        }
      } while (plVar13 != (long *)0x0);
    }
    else {
      plVar11 = (long *)0x0;
      do {
        lVar10 = plVar13[2];
        plVar4 = (long *)FUN_0344ec90(*(undefined8 *)puVar3,
                                      *(undefined4 *)(*(long *)(lVar10 + 8) + 0x30),
                                      *(byte *)(*(long *)(lVar10 + 8) + 0x36) >> 6 & 1);
        if (plVar4 == (long *)0x0) {
LAB_03454bb4:
          plVar8 = (long *)*plVar13;
          plVar11 = plVar13;
        }
        else {
          if (plVar4 != param_2) {
            plVar6 = (long *)plVar4[0x14];
            for (plVar8 = (long *)plVar4[0x13]; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[0x13]
                ) {
              if (plVar8 == param_2) goto LAB_03454b7c;
              if (plVar6 == (long *)0x0) {
                plVar6 = (long *)plVar8[0x14];
              }
            }
            for (; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[0x14]) {
              if (plVar6 == param_2) goto LAB_03454b7c;
            }
            goto LAB_03454bb4;
          }
LAB_03454b7c:
          if (((param_3 != 0) && (*(long *)(lVar10 + 0x40) != param_3)) ||
             ((param_5 != 0 && (*(int *)(lVar10 + 0x30) != param_5)))) goto LAB_03454bb4;
          if (((param_4 & 1) == 0) && (*(int *)(lVar10 + 0x34) != 0)) {
            *(int *)(lVar10 + 0x34) = *(int *)(lVar10 + 0x34) + -1;
            goto LAB_03454bb4;
          }
          FUN_03455744(param_1,lVar10);
          plVar8 = (long *)*plVar13;
          plVar6 = plVar5;
          if (*(long **)(param_1 + 0x50) != plVar13) {
            plVar6 = plVar11;
          }
          *plVar6 = (long)plVar8;
          if (*(long **)(param_1 + 0x58) == plVar13) {
            *(long **)(param_1 + 0x58) = plVar11;
          }
          *plVar13 = *(long *)(param_1 + 0x60);
          *(long **)(param_1 + 0x60) = plVar13;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        }
        plVar13 = plVar8;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x30))(plVar4);
        }
      } while (plVar13 != (long *)0x0);
    }
  }
  puVar3 = PTR_DAT_047e6f28;
  plVar13 = *(long **)(param_1 + 0x28);
  if (plVar13 != (long *)0x0) {
    if (param_2 == (long *)0x0) {
      do {
        lVar12 = plVar13[2];
        lVar10 = *(long *)(lVar12 + 8);
        plVar5 = (long *)FUN_0344ec90(*(undefined8 *)puVar3,*(undefined4 *)(lVar10 + 0x30),
                                      *(byte *)(lVar10 + 0x36) >> 6 & 1);
        if ((((param_3 == 0) || (*(long *)(lVar12 + 0x40) == param_3)) &&
            ((param_5 == 0 || (*(int *)(lVar12 + 0x30) == param_5)))) &&
           (((*(short *)(lVar10 + 0x34) == 0x503 &&
             (plVar11 = *(long **)(lVar10 + 0x48), plVar11 != (long *)0x0)) &&
            (*plVar11 == 0x4000000 || *plVar11 == 0x2000000)))) {
          lVar12 = *(long *)(lVar10 + 0xd8);
          if (lVar12 != 0) {
            uVar2 = *(uint *)(plVar11 + 6);
            if (uVar2 != 0) {
              plVar8 = (long *)plVar11[5];
              plVar4 = plVar8 + uVar2;
              if (*plVar8 != lVar12) {
                lVar9 = (ulong)uVar2 * 8;
                do {
                  lVar9 = lVar9 + -8;
                  if (lVar9 == 0) {
                    plVar8 = plVar4;
                    break;
                  }
                  plVar1 = plVar8 + 1;
                  plVar6 = plVar8 + 1;
                  plVar8 = plVar1;
                } while (*plVar6 != lVar12);
              }
              if (plVar4 != plVar8) {
                if (uVar2 < 2) {
                  iVar7 = 0;
                }
                else {
                  *plVar8 = plVar4[-1];
                  iVar7 = (int)plVar11[6] + -1;
                }
                *(int *)(plVar11 + 6) = iVar7;
              }
            }
          }
          *(undefined8 *)(lVar10 + 0x48) = 0;
        }
        plVar13 = (long *)*plVar13;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x30))();
        }
      } while (plVar13 != (long *)0x0);
    }
    else {
      do {
        while( true ) {
          lVar12 = plVar13[2];
          lVar10 = *(long *)(lVar12 + 8);
          plVar5 = (long *)FUN_0344ec90(*(undefined8 *)puVar3,*(undefined4 *)(lVar10 + 0x30),
                                        *(byte *)(lVar10 + 0x36) >> 6 & 1);
          if (plVar5 == (long *)0x0) break;
          if (plVar5 == param_2) {
LAB_03454d90:
            if ((((param_3 == 0) || (*(long *)(lVar12 + 0x40) == param_3)) &&
                (((param_5 == 0 || (*(int *)(lVar12 + 0x30) == param_5)) &&
                 ((*(short *)(lVar10 + 0x34) == 0x503 &&
                  (plVar11 = *(long **)(lVar10 + 0x48), plVar11 != (long *)0x0)))))) &&
               ((*plVar11 == 0x4000000 || (*plVar11 == 0x2000000)))) {
              lVar12 = *(long *)(lVar10 + 0xd8);
              if (lVar12 != 0) {
                uVar2 = *(uint *)(plVar11 + 6);
                if (uVar2 != 0) {
                  plVar8 = (long *)plVar11[5];
                  plVar4 = plVar8 + uVar2;
                  if (*plVar8 != lVar12) {
                    lVar9 = (ulong)uVar2 * 8;
                    do {
                      lVar9 = lVar9 + -8;
                      if (lVar9 == 0) {
                        plVar8 = plVar4;
                        break;
                      }
                      plVar1 = plVar8 + 1;
                      plVar6 = plVar8 + 1;
                      plVar8 = plVar1;
                    } while (*plVar6 != lVar12);
                  }
                  if (plVar4 != plVar8) {
                    if (uVar2 < 2) {
                      iVar7 = 0;
                    }
                    else {
                      *plVar8 = plVar4[-1];
                      iVar7 = (int)plVar11[6] + -1;
                    }
                    *(int *)(plVar11 + 6) = iVar7;
                  }
                }
              }
              *(undefined8 *)(lVar10 + 0x48) = 0;
            }
          }
          else {
            plVar4 = (long *)plVar5[0x14];
            for (plVar11 = (long *)plVar5[0x13]; plVar11 != (long *)0x0;
                plVar11 = (long *)plVar11[0x13]) {
              if (plVar11 == param_2) goto LAB_03454d90;
              if (plVar4 == (long *)0x0) {
                plVar4 = (long *)plVar11[0x14];
              }
            }
            for (; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[0x14]) {
              if (plVar4 == param_2) goto LAB_03454d90;
            }
          }
          plVar13 = (long *)*plVar13;
          (**(code **)(*plVar5 + 0x30))();
          if (plVar13 == (long *)0x0) {
            return;
          }
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
  return;
}


