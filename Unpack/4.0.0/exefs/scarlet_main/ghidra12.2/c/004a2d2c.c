/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a2d2c; name: FUN_004a2d2c
 */


undefined4 FUN_004a2d2c(long *param_1,long param_2,byte *param_3,long param_4,long param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  byte bVar5;
  byte *__s2;
  long *plVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong unaff_x27;
  undefined2 uVar10;
  undefined8 uVar11;
  
  __s2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    __s2 = param_3 + 1;
  }
  bVar5 = *__s2;
  if (bVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    pbVar8 = __s2;
    do {
      pbVar8 = pbVar8 + 1;
      uVar3 = uVar3 * 5 + (ulong)bVar5;
      bVar5 = *pbVar8;
    } while (bVar5 != 0);
  }
  uVar9 = param_1[1];
  uVar3 = uVar3 ^ param_2 * 0x1000193;
  if (uVar9 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar9 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar9))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x27 = uVar9 - 1 & uVar3;
    }
    else {
      unaff_x27 = uVar3;
      if (uVar9 <= uVar3) {
        uVar2 = 0;
        if (uVar9 != 0) {
          uVar2 = uVar3 / uVar9;
        }
        unaff_x27 = uVar3 - uVar2 * uVar9;
      }
    }
    plVar6 = *(long **)(*param_1 + unaff_x27 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar6[1] != uVar3 && (plVar6[1] & uVar9 - 1) != unaff_x27) break;
          if ((plVar6[2] == param_2) && (iVar1 = strcmp((char *)plVar6[3],(char *)__s2), iVar1 == 0)
             ) {
            return 0;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar6[1];
          if (uVar7 != uVar3) {
            if (uVar9 <= uVar7) {
              uVar2 = 0;
              if (uVar9 != 0) {
                uVar2 = uVar7 / uVar9;
              }
              uVar7 = uVar7 - uVar2 * uVar9;
            }
            if (uVar7 != unaff_x27) break;
          }
          if ((plVar6[2] == param_2) && (iVar1 = strcmp((char *)plVar6[3],(char *)__s2), iVar1 == 0)
             ) {
            return 0;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  plVar6 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x30);
  plVar6[2] = param_2;
  plVar6[3] = (long)__s2;
  plVar6[4] = param_4;
  plVar6[5] = param_5;
  *plVar6 = 0;
  plVar6[1] = uVar3;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
                    /* try { // try from 004a2f18 to 004a2f9b has its CatchHandler @ 004a3090 */
      uVar7 = std::__next_prime(uVar7);
    }
    uVar9 = param_1[1];
    if (uVar9 < uVar7) {
      uVar2 = uVar7;
LAB_004a2f38:
      FUN_004c1fc4(param_1,uVar2);
    }
    else if (uVar7 < uVar9) {
      uVar2 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar9 < 3) ||
         (uVar11 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar9 >> 
                                                  0x10)),CONCAT11(POPCOUNT((char)(uVar9 >> 8)),
                                                                  POPCOUNT((char)uVar9)))))))),
         uVar10 = NEON_uaddlv(uVar11,1), 1 < (uint)CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10)))
      {
        uVar2 = std::__next_prime(uVar2);
      }
      else if (1 < uVar2) {
        uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
      }
      if (uVar2 <= uVar7) {
        uVar2 = uVar7;
      }
      if (uVar2 < uVar9) goto LAB_004a2f38;
    }
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x27 = uVar9 - 1 & uVar3;
      plVar4 = *(long **)(*param_1 + unaff_x27 * 8);
    }
    else {
      if (uVar3 < uVar9) {
        unaff_x27 = uVar3;
        goto LAB_004a2fe4;
      }
      uVar7 = 0;
      if (uVar9 != 0) {
        uVar7 = uVar3 / uVar9;
      }
      unaff_x27 = uVar3 - uVar7 * uVar9;
      plVar4 = *(long **)(*param_1 + unaff_x27 * 8);
    }
    if (plVar4 == (long *)0x0) goto LAB_004a3010;
LAB_004a2ff0:
    *plVar6 = *plVar4;
  }
  else {
LAB_004a2fe4:
    plVar4 = *(long **)(*param_1 + unaff_x27 * 8);
    if (plVar4 != (long *)0x0) goto LAB_004a2ff0;
LAB_004a3010:
    plVar4 = param_1 + 2;
    *plVar6 = *plVar4;
    *plVar4 = (long)plVar6;
    *(long **)(*param_1 + unaff_x27 * 8) = plVar4;
    if (*plVar6 == 0) goto LAB_004a3064;
    uVar3 = *(ulong *)(*plVar6 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar3 = uVar3 & uVar9 - 1;
    }
    else if (uVar9 <= uVar3) {
      uVar7 = 0;
      if (uVar9 != 0) {
        uVar7 = uVar3 / uVar9;
      }
      uVar3 = uVar3 - uVar7 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar3 * 8);
  }
  *plVar4 = (long)plVar6;
LAB_004a3064:
  param_1[3] = param_1[3] + 1;
  return 1;
}


