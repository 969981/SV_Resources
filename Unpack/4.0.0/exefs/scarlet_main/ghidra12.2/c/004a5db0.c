/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a5db0; name: FUN_004a5db0
 */


void FUN_004a5db0(long *param_1,byte *param_2)

{
  size_t sVar1;
  byte *pbVar2;
  void *__src;
  byte bVar3;
  size_t __n;
  int iVar4;
  ulong uVar5;
  void *__dest;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x26;
  undefined2 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_58 [8];
  
  uVar5 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar5 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 004a5de8 to 004a5def has its CatchHandler @ 004a6214 */
  uVar5 = FUN_0039a45c(auStack_58,pbVar2,uVar5);
  uVar12 = param_1[1];
  if (uVar12 != 0) {
    uVar14 = CONCAT17(POPCOUNT((char)(uVar12 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar12 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar12 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar12 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar12 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar12 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar12 
                                                  >> 8)),POPCOUNT((char)uVar12))))))));
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar8 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar8 < 2) {
      unaff_x26 = uVar12 - 1 & uVar5;
    }
    else {
      unaff_x26 = uVar5;
      if (uVar12 <= uVar5) {
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = uVar5 / uVar12;
        }
        unaff_x26 = uVar5 - uVar11 * uVar12;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x26 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      pbVar2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
      if ((*param_2 & 1) != 0) {
        pbVar2 = *(byte **)(param_2 + 0x10);
        __n = *(size_t *)(param_2 + 8);
      }
      if (uVar8 < 2) {
        if (__n == 0) {
          do {
            if (plVar7[1] != uVar5 && (plVar7[1] & uVar12 - 1) != unaff_x26) break;
            uVar8 = (ulong)(*(byte *)(plVar7 + 2) >> 1);
            if ((*(byte *)(plVar7 + 2) & 1) != 0) {
              uVar8 = plVar7[3];
            }
            if (uVar8 == 0) {
              return;
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
        else {
          do {
            if (plVar7[1] != uVar5 && (plVar7[1] & uVar12 - 1) != unaff_x26) break;
            bVar3 = *(byte *)(plVar7 + 2);
            uVar8 = (ulong)(bVar3 >> 1);
            sVar1 = uVar8;
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar7[3];
            }
            if (sVar1 == __n) {
              if ((bVar3 & 1) == 0) {
                pbVar9 = (byte *)((long)plVar7 + 0x11);
                pbVar10 = pbVar2;
                while (*pbVar9 == *pbVar10) {
                  uVar8 = uVar8 - 1;
                  pbVar9 = pbVar9 + 1;
                  pbVar10 = pbVar10 + 1;
                  if (uVar8 == 0) {
                    return;
                  }
                }
              }
              else {
                iVar4 = memcmp((void *)plVar7[4],pbVar2,__n);
                if (iVar4 == 0) {
                  return;
                }
              }
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
      }
      else if (__n == 0) {
        do {
          uVar8 = plVar7[1];
          if (uVar8 != uVar5) {
            if (uVar12 <= uVar8) {
              uVar11 = 0;
              if (uVar12 != 0) {
                uVar11 = uVar8 / uVar12;
              }
              uVar8 = uVar8 - uVar11 * uVar12;
            }
            if (uVar8 != unaff_x26) break;
          }
          uVar8 = (ulong)(*(byte *)(plVar7 + 2) >> 1);
          if ((*(byte *)(plVar7 + 2) & 1) != 0) {
            uVar8 = plVar7[3];
          }
          if (uVar8 == 0) {
            return;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar7[1];
          if (uVar8 != uVar5) {
            if (uVar12 <= uVar8) {
              uVar11 = 0;
              if (uVar12 != 0) {
                uVar11 = uVar8 / uVar12;
              }
              uVar8 = uVar8 - uVar11 * uVar12;
            }
            if (uVar8 != unaff_x26) break;
          }
          bVar3 = *(byte *)(plVar7 + 2);
          uVar8 = (ulong)(bVar3 >> 1);
          sVar1 = uVar8;
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar7[3];
          }
          if (sVar1 == __n) {
            if ((bVar3 & 1) == 0) {
              pbVar9 = (byte *)((long)plVar7 + 0x11);
              pbVar10 = pbVar2;
              while (*pbVar9 == *pbVar10) {
                uVar8 = uVar8 - 1;
                pbVar9 = pbVar9 + 1;
                pbVar10 = pbVar10 + 1;
                if (uVar8 == 0) {
                  return;
                }
              }
            }
            else {
              iVar4 = memcmp((void *)plVar7[4],pbVar2,__n);
              if (iVar4 == 0) {
                return;
              }
            }
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  plVar7 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  if ((*param_2 & 1) == 0) {
    lVar16 = *(long *)(param_2 + 8);
    lVar15 = *(long *)param_2;
    plVar7[4] = *(long *)(param_2 + 0x10);
    plVar7[3] = lVar16;
    plVar7[2] = lVar15;
  }
  else {
    uVar8 = *(ulong *)(param_2 + 8);
    __src = *(void **)(param_2 + 0x10);
    if (uVar8 < 0x17) {
      __dest = (void *)((long)plVar7 + 0x11);
      *(char *)(plVar7 + 2) = (char)((int)uVar8 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar8) {
                    /* try { // try from 004a61cc to 004a61d3 has its CatchHandler @ 004a61d4 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar11 = uVar8 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar11);
      plVar7[3] = uVar8;
      plVar7[4] = (long)__dest;
      plVar7[2] = uVar11 | 1;
    }
    memcpy(__dest,__src,uVar8 + 1);
  }
  *plVar7 = 0;
  plVar7[1] = uVar5;
  if ((uVar12 == 0) || (*(float *)(param_1 + 4) * (float)uVar12 < (float)(param_1[3] + 1))) {
    uVar12 = (ulong)(uVar12 < 3 || (uVar12 & uVar12 - 1) != 0) | uVar12 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar12) {
      uVar8 = uVar12;
    }
                    /* try { // try from 004a5f8c to 004a5f93 has its CatchHandler @ 004a61e0 */
    FUN_004c0ca4(param_1,uVar8);
    uVar12 = param_1[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x26 = uVar12 - 1 & uVar5;
      plVar6 = *(long **)(*param_1 + unaff_x26 * 8);
    }
    else {
      if (uVar5 < uVar12) {
        unaff_x26 = uVar5;
        goto LAB_004a5fc4;
      }
      uVar8 = 0;
      if (uVar12 != 0) {
        uVar8 = uVar5 / uVar12;
      }
      unaff_x26 = uVar5 - uVar8 * uVar12;
      plVar6 = *(long **)(*param_1 + unaff_x26 * 8);
    }
    if (plVar6 != (long *)0x0) goto LAB_004a5fd0;
LAB_004a60d0:
    plVar6 = param_1 + 2;
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
    *(long **)(*param_1 + unaff_x26 * 8) = plVar6;
    if (*plVar7 == 0) goto LAB_004a6124;
    uVar5 = *(ulong *)(*plVar7 + 8);
    if ((uVar12 & uVar12 - 1) == 0) {
      uVar5 = uVar5 & uVar12 - 1;
    }
    else if (uVar12 <= uVar5) {
      uVar8 = 0;
      if (uVar12 != 0) {
        uVar8 = uVar5 / uVar12;
      }
      uVar5 = uVar5 - uVar8 * uVar12;
    }
    plVar6 = (long *)(*param_1 + uVar5 * 8);
  }
  else {
LAB_004a5fc4:
    plVar6 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar6 == (long *)0x0) goto LAB_004a60d0;
LAB_004a5fd0:
    *plVar7 = *plVar6;
  }
  *plVar6 = (long)plVar7;
LAB_004a6124:
  param_1[3] = param_1[3] + 1;
  return;
}


