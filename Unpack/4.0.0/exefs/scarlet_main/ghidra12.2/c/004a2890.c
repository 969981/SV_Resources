/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a2890; name: FUN_004a2890
 */


undefined4 FUN_004a2890(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  byte *__s2;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  byte bVar6;
  long *plVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  ulong unaff_x26;
  undefined2 uVar12;
  undefined8 uVar13;
  
  lVar1 = *param_2;
  __s2 = (byte *)param_2[1];
  lVar11 = *param_3;
  bVar6 = *__s2;
  if (bVar6 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    pbVar9 = __s2;
    do {
      pbVar9 = pbVar9 + 1;
      uVar4 = uVar4 * 5 + (ulong)bVar6;
      bVar6 = *pbVar9;
    } while (bVar6 != 0);
  }
  uVar10 = param_1[1];
  uVar4 = uVar4 ^ lVar1 * 0x1000193;
  if (uVar10 != 0) {
    uVar13 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar10 
                                                  >> 8)),POPCOUNT((char)uVar10))))))));
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar8 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar8 < 2) {
      unaff_x26 = uVar10 - 1 & uVar4;
    }
    else {
      unaff_x26 = uVar4;
      if (uVar10 <= uVar4) {
        uVar3 = 0;
        if (uVar10 != 0) {
          uVar3 = uVar4 / uVar10;
        }
        unaff_x26 = uVar4 - uVar3 * uVar10;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x26 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar7[1] != uVar4 && (plVar7[1] & uVar10 - 1) != unaff_x26) break;
          if ((plVar7[2] == lVar1) && (iVar2 = strcmp((char *)plVar7[3],(char *)__s2), iVar2 == 0))
          {
            return 0;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar7[1];
          if (uVar8 != uVar4) {
            if (uVar10 <= uVar8) {
              uVar3 = 0;
              if (uVar10 != 0) {
                uVar3 = uVar8 / uVar10;
              }
              uVar8 = uVar8 - uVar3 * uVar10;
            }
            if (uVar8 != unaff_x26) break;
          }
          if ((plVar7[2] == lVar1) && (iVar2 = strcmp((char *)plVar7[3],(char *)__s2), iVar2 == 0))
          {
            return 0;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  plVar7 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  plVar7[2] = lVar1;
  plVar7[3] = (long)__s2;
  plVar7[4] = lVar11;
  *plVar7 = 0;
  plVar7[1] = uVar4;
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
    }
    else if ((uVar8 & uVar8 - 1) != 0) {
                    /* try { // try from 004a2a64 to 004a2ae7 has its CatchHandler @ 004a2bd8 */
      uVar8 = std::__next_prime(uVar8);
    }
    uVar10 = param_1[1];
    if (uVar10 < uVar8) {
      uVar3 = uVar8;
LAB_004a2a84:
      FUN_004c2250(param_1,uVar3);
    }
    else if (uVar8 < uVar10) {
      uVar3 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar10 < 3) ||
         (uVar13 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar10 >>
                                                                                        0x10)),
                                                                         CONCAT11(POPCOUNT((char)(
                                                  uVar10 >> 8)),POPCOUNT((char)uVar10)))))))),
         uVar12 = NEON_uaddlv(uVar13,1), 1 < (uint)CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12)))
      {
        uVar3 = std::__next_prime(uVar3);
      }
      else if (1 < uVar3) {
        uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
      }
      if (uVar3 <= uVar8) {
        uVar3 = uVar8;
      }
      if (uVar3 < uVar10) goto LAB_004a2a84;
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x26 = uVar10 - 1 & uVar4;
      plVar5 = *(long **)(*param_1 + unaff_x26 * 8);
    }
    else {
      if (uVar4 < uVar10) {
        unaff_x26 = uVar4;
        goto LAB_004a2b30;
      }
      uVar8 = 0;
      if (uVar10 != 0) {
        uVar8 = uVar4 / uVar10;
      }
      unaff_x26 = uVar4 - uVar8 * uVar10;
      plVar5 = *(long **)(*param_1 + unaff_x26 * 8);
    }
    if (plVar5 == (long *)0x0) goto LAB_004a2b5c;
LAB_004a2b3c:
    *plVar7 = *plVar5;
  }
  else {
LAB_004a2b30:
    plVar5 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar5 != (long *)0x0) goto LAB_004a2b3c;
LAB_004a2b5c:
    plVar5 = param_1 + 2;
    *plVar7 = *plVar5;
    *plVar5 = (long)plVar7;
    *(long **)(*param_1 + unaff_x26 * 8) = plVar5;
    if (*plVar7 == 0) goto LAB_004a2bb0;
    uVar4 = *(ulong *)(*plVar7 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar4 = uVar4 & uVar10 - 1;
    }
    else if (uVar10 <= uVar4) {
      uVar8 = 0;
      if (uVar10 != 0) {
        uVar8 = uVar4 / uVar10;
      }
      uVar4 = uVar4 - uVar8 * uVar10;
    }
    plVar5 = (long *)(*param_1 + uVar4 * 8);
  }
  *plVar5 = (long)plVar7;
LAB_004a2bb0:
  param_1[3] = param_1[3] + 1;
  return 1;
}


