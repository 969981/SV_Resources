/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d4be8; name: FUN_002d4be8
 */


long * FUN_002d4be8(long *param_1,void *param_2,ulong param_3,uint param_4)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int *piVar13;
  ulong uVar14;
  ulong uVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  void *local_70;
  int local_68;
  uint uStack_64;
  undefined1 *puStack_58;
  
  puStack_58 = (undefined1 *)&local_70;
  plVar1 = param_1 + 0x14;
  iVar6 = (int)param_3;
  local_70 = param_2;
  local_68 = iVar6;
  uStack_64 = param_4;
  lVar4 = FUN_002d6e4c(plVar1,&puStack_58);
  if (lVar4 != 0) {
    return *(long **)(lVar4 + 0x10);
  }
  uVar11 = (param_3 & 0xffffffff) << 2;
  uVar2 = *(uint *)(*param_1 + 0x14);
  lVar4 = (ulong)((int)uVar11 + (uVar2 + 1) * 8 + 0x10) << 0x20;
  lVar10 = lVar4 + 0x2800000000 >> 0x20;
  if (param_1[0x12] < lVar10) {
    param_1[0x12] = -1;
    return (long *)0x0;
  }
  param_1[0x12] = param_1[0x12] - lVar10;
  plVar5 = (long *)FUN_0049e770(PTR_FUN_047cba38,lVar4 >> 0x20);
  if (-1 < (int)uVar2) {
    memset(plVar5 + 2,0,(ulong)uVar2 * 8 + 8);
  }
  *plVar5 = (long)(plVar5 + (long)(int)(uVar2 + 1) + 2);
  uVar15 = 0xdc3eb94af8ab4c93;
  memmove(plVar5 + (long)(int)(uVar2 + 1) + 2,param_2,
          -((param_3 & 0xffffffff) >> 0x1f) & 0xfffffffc00000000 | uVar11);
  lVar4 = (ulong)param_4 + 0x53;
  *(int *)(plVar5 + 1) = iVar6;
  *(uint *)((long)plVar5 + 0xc) = param_4;
  if (0 < iVar6) {
    if (iVar6 == 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      do {
        piVar13 = (int *)(*plVar5 + uVar11 * 4);
        uVar11 = uVar11 + 2;
        lVar4 = (lVar4 * -0x35a83aa59b680000 | (ulong)(lVar4 * -0x23c146b50754b36d) >> 0x2d) +
                (long)*piVar13;
        lVar4 = (lVar4 * -0x35a83aa59b680000 | (ulong)(lVar4 * -0x23c146b50754b36d) >> 0x2d) +
                (long)piVar13[1];
      } while ((param_3 & 0xfffffffe) != uVar11);
    }
    if ((param_3 & 1) != 0) {
      lVar4 = (lVar4 * -0x35a83aa59b680000 | (ulong)(lVar4 * -0x23c146b50754b36d) >> 0x2d) +
              (long)*(int *)(*plVar5 + uVar11 * 4);
    }
  }
  uVar11 = param_1[0x15];
  uVar14 = lVar4 * -0x35a83aa59b680000 | (ulong)(lVar4 * -0x23c146b50754b36d) >> 0x2d;
  if (uVar11 != 0) {
    uVar17 = CONCAT17(POPCOUNT((char)(uVar11 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar11 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar11 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar11 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar11 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar11 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar11 
                                                  >> 8)),POPCOUNT((char)uVar11))))))));
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar9 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar9 < 2) {
      uVar15 = uVar14 & uVar11 - 1;
    }
    else {
      uVar15 = uVar14;
      if (uVar11 <= uVar14) {
        uVar15 = 0;
        if (uVar11 != 0) {
          uVar15 = uVar14 / uVar11;
        }
        uVar15 = uVar14 - uVar15 * uVar11;
      }
    }
    plVar7 = *(long **)(*plVar1 + uVar15 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar9 < 2) {
        if (iVar6 < 1) {
          do {
            if (plVar7[1] != uVar14 && (plVar7[1] & uVar11 - 1) != uVar15) break;
            plVar8 = (long *)plVar7[2];
            if (plVar8 == plVar5) {
              return plVar5;
            }
            if ((*(uint *)((long)plVar8 + 0xc) == param_4) && ((int)plVar8[1] == iVar6)) {
              return plVar5;
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
        else {
          do {
            if (plVar7[1] != uVar14 && (plVar7[1] & uVar11 - 1) != uVar15) break;
            plVar8 = (long *)plVar7[2];
            if (plVar8 == plVar5) {
              return plVar5;
            }
            if ((*(uint *)((long)plVar8 + 0xc) == param_4) && ((int)plVar8[1] == iVar6)) {
              piVar12 = (int *)*plVar8;
              piVar13 = (int *)*plVar5;
              uVar9 = param_3 & 0xffffffff;
              while (*piVar12 == *piVar13) {
                uVar9 = uVar9 - 1;
                piVar13 = piVar13 + 1;
                piVar12 = piVar12 + 1;
                if (uVar9 == 0) {
                  return plVar5;
                }
              }
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
      }
      else if (iVar6 < 1) {
        do {
          uVar9 = plVar7[1];
          if (uVar9 != uVar14) {
            if (uVar11 <= uVar9) {
              uVar3 = 0;
              if (uVar11 != 0) {
                uVar3 = uVar9 / uVar11;
              }
              uVar9 = uVar9 - uVar3 * uVar11;
            }
            if (uVar9 != uVar15) break;
          }
          plVar8 = (long *)plVar7[2];
          if (plVar8 == plVar5) {
            return plVar5;
          }
          if ((*(uint *)((long)plVar8 + 0xc) == param_4) && ((int)plVar8[1] == iVar6)) {
            return plVar5;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar7[1];
          if (uVar9 != uVar14) {
            if (uVar11 <= uVar9) {
              uVar3 = 0;
              if (uVar11 != 0) {
                uVar3 = uVar9 / uVar11;
              }
              uVar9 = uVar9 - uVar3 * uVar11;
            }
            if (uVar9 != uVar15) break;
          }
          plVar8 = (long *)plVar7[2];
          if (plVar8 == plVar5) {
            return plVar5;
          }
          if ((*(uint *)((long)plVar8 + 0xc) == param_4) && ((int)plVar8[1] == iVar6)) {
            piVar12 = (int *)*plVar8;
            piVar13 = (int *)*plVar5;
            uVar9 = param_3 & 0xffffffff;
            while (*piVar12 == *piVar13) {
              uVar9 = uVar9 - 1;
              piVar13 = piVar13 + 1;
              piVar12 = piVar12 + 1;
              if (uVar9 == 0) {
                return plVar5;
              }
            }
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  plVar7 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  plVar7[1] = uVar14;
  plVar7[2] = (long)plVar5;
  *plVar7 = 0;
  if ((uVar11 == 0) || (*(float *)(param_1 + 0x18) * (float)uVar11 < (float)(param_1[0x17] + 1))) {
    uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar15 = (ulong)((float)(param_1[0x17] + 1) / *(float *)(param_1 + 0x18));
    if (uVar15 <= uVar11) {
      uVar15 = uVar11;
    }
                    /* try { // try from 002d4fe8 to 002d4fef has its CatchHandler @ 002d50bc */
    FUN_002d7064(plVar1,uVar15);
    uVar11 = param_1[0x15];
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar15 = uVar11 - 1 & uVar14;
    }
    else if (uVar14 < uVar11) {
      uVar15 = uVar14;
    }
    else {
      uVar15 = 0;
      if (uVar11 != 0) {
        uVar15 = uVar14 / uVar11;
      }
      uVar15 = uVar14 - uVar15 * uVar11;
    }
  }
  plVar8 = *(long **)(*plVar1 + uVar15 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 0x16;
    *plVar7 = *plVar8;
    *plVar8 = (long)plVar7;
    *(long **)(param_1[0x14] + uVar15 * 8) = plVar8;
    if (*plVar7 == 0) goto LAB_002d508c;
    uVar15 = *(ulong *)(*plVar7 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar15 = uVar15 & uVar11 - 1;
    }
    else if (uVar11 <= uVar15) {
      uVar14 = 0;
      if (uVar11 != 0) {
        uVar14 = uVar15 / uVar11;
      }
      uVar15 = uVar15 - uVar14 * uVar11;
    }
    plVar8 = (long *)(*plVar1 + uVar15 * 8);
  }
  else {
    *plVar7 = *plVar8;
  }
  *plVar8 = (long)plVar7;
LAB_002d508c:
  param_1[0x17] = param_1[0x17] + 1;
  return plVar5;
}


