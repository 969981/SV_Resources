/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034aa790; name: FUN_034aa790
 */


void FUN_034aa790(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong *puVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined8 *puVar25;
  undefined8 local_68;
  
  *param_1 = &PTR_FUN_047c4020;
  param_1[1] = &PTR_LAB_047c4270;
  puVar24 = PTR_DAT_047e2fd0;
  puVar25 = param_1 + 4;
  *puVar25 = &PTR_LAB_047c42b0;
  puVar18 = param_1 + 7;
  *puVar18 = &PTR_FUN_047c4348;
  puVar3 = PTR_DAT_047e71b8;
  plVar22 = (long *)param_1[0xf];
  if (plVar22 != (long *)0x0) {
    lVar19 = *plVar22;
    plVar21 = plVar22 + 1;
    if ((int)*plVar21 != 0) {
      puVar1 = PTR_DAT_047e71b8 + 0x10;
      lVar15 = lVar19;
      do {
        plVar21 = *(long **)(lVar15 + 8);
        if (plVar21 != (long *)0x0) {
          pbVar7 = (byte *)plVar21[3];
          *plVar21 = (long)puVar1;
          if (pbVar7 != (byte *)0x0) {
            bVar6 = *pbVar7;
            if ((ulong)bVar6 != 0) {
              pbVar4 = pbVar7 + bVar6;
              pbVar9 = pbVar7 + ((ulong)(bVar6 + 4) & 0x1fc);
              do {
                lVar19 = *(long *)(pbVar9 + 8);
                pbVar7 = pbVar7 + 1;
                if (lVar19 != 0) {
                  uVar5 = *(uint *)(lVar19 + 0x30);
                  if (uVar5 != 0) {
                    puVar13 = *(undefined8 **)(lVar19 + 0x28);
                    puVar12 = puVar13 + uVar5;
                    if ((long *)*puVar13 != plVar21) {
                      lVar14 = (ulong)uVar5 * 8;
                      do {
                        lVar14 = lVar14 + -8;
                        if (lVar14 == 0) {
                          puVar13 = puVar12;
                          break;
                        }
                        puVar2 = puVar13 + 1;
                        puVar10 = puVar13 + 1;
                        puVar13 = puVar2;
                      } while ((long *)*puVar10 != plVar21);
                    }
                    if (puVar12 != puVar13) {
                      if (uVar5 < 2) {
                        iVar11 = 0;
                      }
                      else {
                        *puVar13 = puVar12[-1];
                        iVar11 = *(int *)(lVar19 + 0x30) + -1;
                      }
                      *(int *)(lVar19 + 0x30) = iVar11;
                    }
                  }
                }
                pbVar9 = pbVar9 + 0x10;
              } while (pbVar7 != pbVar4);
              if (plVar21[3] == 0) goto LAB_034aa8d8;
            }
            (**(code **)(puVar24 + 0x30))(0);
          }
LAB_034aa8d8:
          plVar21[3] = 0;
          (**(code **)(puVar24 + 0x30))(4,plVar21);
          plVar22 = (long *)param_1[0xf];
        }
        lVar19 = *plVar22;
        lVar15 = lVar15 + 0x10;
      } while (lVar15 != lVar19 + (ulong)*(uint *)(plVar22 + 1) * 0x10);
      plVar21 = plVar22 + 1;
    }
    if (lVar19 != 0) {
      *(int *)plVar21 = 0;
      (**(code **)(puVar24 + 0x30))(0,lVar19);
      *plVar22 = 0;
      *(undefined4 *)((long)plVar22 + 0xc) = 0;
      plVar22 = (long *)param_1[0xf];
    }
    if (plVar22 != (long *)0x0) {
      (**(code **)(puVar24 + 0x30))(4,plVar22);
    }
    param_1[0xf] = 0;
  }
  if (param_1[0x15] != 0) {
    (**(code **)(puVar24 + 0x30))(2);
  }
  lVar19 = param_1[0x11];
  if (lVar19 != 0) {
    plVar22 = *(long **)(lVar19 + 0x40);
    if (plVar22 != (long *)0x0) {
      if (*(ushort *)(plVar22 + 2) - 1 == 0) {
        if (*plVar22 != 0) {
          *(undefined4 *)(plVar22 + 1) = 0;
          (**(code **)(puVar24 + 0x30))(0);
          *plVar22 = 0;
          *(undefined4 *)((long)plVar22 + 0xc) = 0;
        }
        (**(code **)(puVar24 + 0x30))(0,plVar22);
      }
      else {
        *(short *)(plVar22 + 2) = (short)(*(ushort *)(plVar22 + 2) - 1);
      }
    }
    *(undefined8 *)(lVar19 + 0x40) = 0;
    lVar19 = param_1[0x11];
    if (lVar19 != 0) {
      if (*(long *)(lVar19 + 0x18) != 0) {
        (**(code **)(puVar24 + 0x30))(2);
        *(undefined8 *)(lVar19 + 0x18) = 0;
      }
      if (*(long *)(lVar19 + 0x28) != 0) {
        (**(code **)(puVar24 + 0x30))(2);
        *(undefined8 *)(lVar19 + 0x28) = 0;
      }
      plVar22 = *(long **)(lVar19 + 0x40);
      *(undefined4 *)(lVar19 + 0x20) = 0;
      *(uint *)(lVar19 + 0x30) = *(uint *)(lVar19 + 0x30) & 0x80000000;
      if (plVar22 != (long *)0x0) {
        if (*(ushort *)(plVar22 + 2) - 1 == 0) {
          if (*plVar22 != 0) {
            *(undefined4 *)(plVar22 + 1) = 0;
            (**(code **)(puVar24 + 0x30))(0);
            *plVar22 = 0;
            *(undefined4 *)((long)plVar22 + 0xc) = 0;
          }
          (**(code **)(puVar24 + 0x30))(0,plVar22);
        }
        else {
          *(short *)(plVar22 + 2) = (short)(*(ushort *)(plVar22 + 2) - 1);
        }
      }
      *(undefined8 *)(lVar19 + 0x40) = 0;
      (**(code **)(puVar24 + 0x30))(2,lVar19);
    }
    param_1[0x11] = 0;
  }
  if (param_1[0x1a] != 0) {
    (**(code **)(puVar24 + 0x30))(2);
    param_1[0x1a] = 0;
  }
  lVar19 = param_1[0x10];
  if ((lVar19 != 0) &&
     ((*(int *)(lVar19 + 0x10) == 0 ||
      ((**(code **)(puVar24 + 0x30))(2,*(undefined8 *)(lVar19 + 8)), param_1[0x10] != 0)))) {
    (**(code **)(puVar24 + 0x30))(2);
  }
  plVar22 = (long *)param_1[0xe];
  if (plVar22 != (long *)0x0) {
    pbVar7 = (byte *)plVar22[3];
    *plVar22 = (long)(puVar3 + 0x10);
    if (pbVar7 != (byte *)0x0) {
      bVar6 = *pbVar7;
      if ((ulong)bVar6 != 0) {
        pbVar4 = pbVar7 + bVar6;
        pbVar9 = pbVar7 + ((ulong)(bVar6 + 4) & 0x1fc);
        do {
          lVar19 = *(long *)(pbVar9 + 8);
          pbVar7 = pbVar7 + 1;
          if (lVar19 != 0) {
            uVar5 = *(uint *)(lVar19 + 0x30);
            if (uVar5 != 0) {
              puVar13 = *(undefined8 **)(lVar19 + 0x28);
              puVar12 = puVar13 + uVar5;
              if ((long *)*puVar13 != plVar22) {
                lVar15 = (ulong)uVar5 * 8;
                do {
                  lVar15 = lVar15 + -8;
                  if (lVar15 == 0) {
                    puVar13 = puVar12;
                    break;
                  }
                  puVar2 = puVar13 + 1;
                  puVar10 = puVar13 + 1;
                  puVar13 = puVar2;
                } while ((long *)*puVar10 != plVar22);
              }
              if (puVar12 != puVar13) {
                if (uVar5 < 2) {
                  iVar11 = 0;
                }
                else {
                  *puVar13 = puVar12[-1];
                  iVar11 = *(int *)(lVar19 + 0x30) + -1;
                }
                *(int *)(lVar19 + 0x30) = iVar11;
              }
            }
          }
          pbVar9 = pbVar9 + 0x10;
        } while (pbVar7 != pbVar4);
        if (plVar22[3] == 0) goto LAB_034aab84;
      }
      (**(code **)(puVar24 + 0x30))(0);
    }
LAB_034aab84:
    plVar22[3] = 0;
    (**(code **)(puVar24 + 0x30))(4,plVar22);
  }
  puVar3 = PTR_DAT_047e70c0;
  lVar19 = param_1[0x12];
  if (lVar19 != 0) {
    if ((*(byte *)(lVar19 + 0x98) >> 1 & 1) == 0) {
LAB_034aac14:
      if (param_1[0x13] != 0) {
        FUN_034ac158();
      }
      if (param_1[0x14] != 0) {
        FUN_034ac158();
      }
    }
    else {
      puVar12 = (undefined8 *)(PTR_DAT_047e70c0 + 0x10);
      puVar13 = (undefined8 *)0x0;
      do {
        puVar10 = puVar13;
        puVar13 = (undefined8 *)*puVar12;
        puVar12 = puVar13 + 10;
      } while (puVar13 != (undefined8 *)0x0 && puVar13 != param_1);
      if (puVar13 != (undefined8 *)0x0) {
        puVar12 = (undefined8 *)(PTR_DAT_047e70c0 + 0x10);
        if (*(undefined8 **)(PTR_DAT_047e70c0 + 0x10) != puVar13) {
          puVar12 = puVar10 + 10;
        }
        *puVar12 = puVar13[10];
        if (*(undefined8 **)(puVar3 + 8) == puVar13) {
          *(undefined8 **)(puVar3 + 8) = puVar10;
        }
        *(int *)puVar3 = *(int *)puVar3 + -1;
        lVar19 = param_1[0x12];
      }
      if (lVar19 != 0) goto LAB_034aac14;
    }
    FUN_034ac254(&DAT_048b0280,param_1[0x12]);
    param_1[0x12] = 0;
  }
  if (DAT_048b02a8 != 0) {
    uVar5 = 0;
    uVar17 = (uint)puVar18;
    if (DAT_048b02a8 != 0) {
      uVar5 = uVar17 / DAT_048b02a8;
    }
    plVar22 = *(long **)(DAT_048b02a0 + (ulong)(uVar17 - uVar5 * DAT_048b02a8) * 8);
joined_r0x034aac60:
    if (plVar22 != (long *)0x0) {
      if (*(uint *)(plVar22 + 1) != uVar17) goto code_r0x034aac70;
      for (lVar19 = plVar22[2]; lVar19 != 0; lVar19 = *(long *)(lVar19 + 8)) {
        local_68 = 0xffffffffffffffff;
        if (*(long *)(lVar19 + 0x40) != 0) {
          FUN_034be534(&DAT_048b0298,lVar19);
          FUN_034afae0(*(undefined8 *)(lVar19 + 0x40),lVar19,&local_68,1);
          *(undefined8 *)(lVar19 + 0x40) = 0;
        }
      }
    }
  }
  if (param_1[0x1a] != 0) {
    (**(code **)(puVar24 + 0x30))(2);
    param_1[0x1a] = 0;
  }
  if (param_1[0x16] != 0) {
    (**(code **)(puVar24 + 0x30))(0);
  }
  puVar3 = PTR_DAT_047e7128 + 0x10;
  param_1[0xb] = puVar3;
  puVar20 = (ulong *)param_1[0xc];
  param_1[0x16] = 0;
  puVar1 = PTR_DAT_047e6fd8;
  if (puVar20 != (ulong *)0x0) {
    uVar8 = *puVar20;
    if (uVar8 == 0) {
LAB_034aad7c:
      if (puVar20[2] != 0) {
        *(undefined4 *)(puVar20 + 3) = 0;
        (**(code **)(puVar24 + 0x30))(0);
        puVar20[2] = 0;
        *(undefined4 *)((long)puVar20 + 0x1c) = 0;
      }
      (**(code **)(puVar24 + 0x30))(2,puVar20);
    }
    else {
      uVar23 = 0;
      do {
        uVar16 = 1L << (uVar23 & 0x3f);
        if ((uVar16 & uVar8) != 0) {
          FUN_034b6c14(*(undefined8 *)puVar1,param_1 + 0xb,uVar23);
          *(ulong *)param_1[0xc] = *(ulong *)param_1[0xc] & (uVar16 ^ 0xffffffffffffffff);
          puVar20 = (ulong *)param_1[0xc];
        }
        uVar8 = *puVar20;
        uVar23 = (ulong)((int)uVar23 + 1);
      } while (uVar8 != 0);
      puVar24 = PTR_DAT_047e2fd0;
      if (puVar20 != (ulong *)0x0) goto LAB_034aad7c;
    }
    param_1[0xc] = 0;
  }
  puVar20 = (ulong *)param_1[8];
  param_1[7] = puVar3;
  puVar3 = PTR_DAT_047e6fd8;
  if (puVar20 != (ulong *)0x0) {
    uVar8 = *puVar20;
    if (uVar8 == 0) {
LAB_034aae14:
      if (puVar20[2] != 0) {
        *(undefined4 *)(puVar20 + 3) = 0;
        (**(code **)(puVar24 + 0x30))(0);
        puVar20[2] = 0;
        *(undefined4 *)((long)puVar20 + 0x1c) = 0;
      }
      (**(code **)(puVar24 + 0x30))(2,puVar20);
    }
    else {
      uVar23 = 0;
      do {
        uVar16 = 1L << (uVar23 & 0x3f);
        if ((uVar16 & uVar8) != 0) {
          FUN_034b6c14(*(undefined8 *)puVar3,puVar18,uVar23);
          *(ulong *)param_1[8] = *(ulong *)param_1[8] & (uVar16 ^ 0xffffffffffffffff);
          puVar20 = (ulong *)param_1[8];
        }
        uVar8 = *puVar20;
        uVar23 = (ulong)((int)uVar23 + 1);
      } while (uVar8 != 0);
      if (puVar20 != (ulong *)0x0) goto LAB_034aae14;
    }
    param_1[8] = 0;
  }
  plVar22 = (long *)param_1[6];
  param_1[4] = PTR_DAT_047e7278 + 0x10;
  if (plVar22 == (long *)0x0) goto LAB_034aaedc;
  if (*plVar22 == 0) {
LAB_034aae84:
    *plVar22 = 0;
    if (plVar22[4] != 0) {
      *(undefined4 *)(plVar22 + 5) = 0;
      (**(code **)(puVar24 + 0x30))(0);
      plVar22[4] = 0;
      *(undefined4 *)((long)plVar22 + 0x2c) = 0;
    }
    if (plVar22[2] != 0) {
      *(undefined4 *)(plVar22 + 3) = 0;
      (**(code **)(puVar24 + 0x30))(0);
      plVar22[2] = 0;
      *(undefined4 *)((long)plVar22 + 0x1c) = 0;
    }
    (**(code **)(puVar24 + 0x30))(2,plVar22);
  }
  else {
    FUN_034db9b8(puVar25);
    FUN_034dac54(puVar25,0);
    plVar22 = (long *)param_1[6];
    if (plVar22 != (long *)0x0) goto LAB_034aae84;
  }
  param_1[6] = 0;
LAB_034aaedc:
  param_1[1] = PTR_DAT_047e70a0 + 0x10;
  return;
code_r0x034aac70:
  plVar22 = (long *)*plVar22;
  goto joined_r0x034aac60;
}


