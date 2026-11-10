/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a1180; name: FUN_004a1180
 */


void FUN_004a1180(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
                    /* try { // try from 004a11ac to 004a122f has its CatchHandler @ 004a17dc */
  uVar1 = std::__next_prime(3);
  uVar4 = param_1[1];
  if (uVar4 < uVar1) {
    uVar3 = uVar1;
LAB_004a11cc:
    FUN_004c1fc4(param_1,uVar3);
  }
  else if (uVar1 < uVar4) {
    uVar3 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar4 < 3) ||
       (uVar6 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)
                                                                              ),
                                                                      CONCAT11(POPCOUNT((char)(uVar4
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar4
                                                                                        )))))))),
       uVar5 = NEON_uaddlv(uVar6,1), 1 < (uint)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar5))) {
      uVar3 = std::__next_prime(uVar3);
    }
    else if (1 < uVar3) {
      uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
    }
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (uVar3 < uVar4) goto LAB_004a11cc;
  }
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  param_1[8] = 0;
  param_1[7] = 0;
                    /* try { // try from 004a1260 to 004a12e3 has its CatchHandler @ 004a17b0 */
  uVar1 = std::__next_prime(3);
  uVar4 = param_1[6];
  if (uVar4 < uVar1) {
    uVar3 = uVar1;
LAB_004a1280:
    FUN_004c2250(param_1 + 5,uVar3);
  }
  else if (uVar1 < uVar4) {
    uVar3 = (ulong)((float)(ulong)param_1[8] / *(float *)(param_1 + 9));
    if ((uVar4 < 3) ||
       (uVar6 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)
                                                                              ),
                                                                      CONCAT11(POPCOUNT((char)(uVar4
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar4
                                                                                        )))))))),
       uVar5 = NEON_uaddlv(uVar6,1), 1 < (uint)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar5))) {
      uVar3 = std::__next_prime(uVar3);
    }
    else if (1 < uVar3) {
      uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
    }
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (uVar3 < uVar4) goto LAB_004a1280;
  }
  puVar2 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 4) = 0x3f800000;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  param_1[10] = puVar2;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
                    /* try { // try from 004a133c to 004a13bf has its CatchHandler @ 004a1784 */
  uVar1 = std::__next_prime(3);
  uVar4 = param_1[0xd];
  if (uVar4 < uVar1) {
    uVar3 = uVar1;
LAB_004a135c:
    FUN_004c2250(param_1 + 0xc,uVar3);
  }
  else if (uVar1 < uVar4) {
    uVar3 = (ulong)((float)(ulong)param_1[0xf] / *(float *)(param_1 + 0x10));
    if ((uVar4 < 3) ||
       (uVar6 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)
                                                                              ),
                                                                      CONCAT11(POPCOUNT((char)(uVar4
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar4
                                                                                        )))))))),
       uVar5 = NEON_uaddlv(uVar6,1), 1 < (uint)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar5))) {
      uVar3 = std::__next_prime(uVar3);
    }
    else if (1 < uVar3) {
      uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
    }
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (uVar3 < uVar4) goto LAB_004a135c;
  }
  puVar2 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 4) = 0x3f800000;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  param_1[0x11] = puVar2;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
                    /* try { // try from 004a1414 to 004a1497 has its CatchHandler @ 004a1758 */
  uVar1 = std::__next_prime(3);
  uVar4 = param_1[0x14];
  if (uVar4 < uVar1) {
    uVar3 = uVar1;
LAB_004a1434:
    FUN_004c24dc(param_1 + 0x13,uVar3);
  }
  else if (uVar1 < uVar4) {
    uVar3 = (ulong)((float)(ulong)param_1[0x16] / *(float *)(param_1 + 0x17));
    if ((uVar4 < 3) ||
       (uVar6 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)
                                                                              ),
                                                                      CONCAT11(POPCOUNT((char)(uVar4
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar4
                                                                                        )))))))),
       uVar5 = NEON_uaddlv(uVar6,1), 1 < (uint)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar5))) {
      uVar3 = std::__next_prime(uVar3);
    }
    else if (1 < uVar3) {
      uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
    }
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (uVar3 < uVar4) goto LAB_004a1434;
  }
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
                    /* try { // try from 004a14c8 to 004a154b has its CatchHandler @ 004a172c */
  uVar1 = std::__next_prime(3);
  uVar4 = param_1[0x19];
  if (uVar4 < uVar1) {
    uVar3 = uVar1;
LAB_004a14e8:
    FUN_004c2748(param_1 + 0x18,uVar3);
  }
  else if (uVar1 < uVar4) {
    uVar3 = (ulong)((float)(ulong)param_1[0x1b] / *(float *)(param_1 + 0x1c));
    if ((uVar4 < 3) ||
       (uVar6 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)
                                                                              ),
                                                                      CONCAT11(POPCOUNT((char)(uVar4
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar4
                                                                                        )))))))),
       uVar5 = NEON_uaddlv(uVar6,1), 1 < (uint)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar5))) {
      uVar3 = std::__next_prime(uVar3);
    }
    else if (1 < uVar3) {
      uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
    }
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (uVar3 < uVar4) goto LAB_004a14e8;
  }
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
                    /* try { // try from 004a157c to 004a15ff has its CatchHandler @ 004a1700 */
  uVar1 = std::__next_prime(3);
  uVar4 = param_1[0x1e];
  if (uVar4 < uVar1) {
    uVar3 = uVar1;
  }
  else {
    if (uVar4 <= uVar1) goto LAB_004a1618;
    uVar3 = (ulong)((float)(ulong)param_1[0x20] / *(float *)(param_1 + 0x21));
    if ((uVar4 < 3) ||
       (uVar6 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)
                                                                              ),
                                                                      CONCAT11(POPCOUNT((char)(uVar4
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar4
                                                                                        )))))))),
       uVar5 = NEON_uaddlv(uVar6,1), 1 < (uint)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar5))) {
      uVar3 = std::__next_prime(uVar3);
    }
    else if (1 < uVar3) {
      uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
    }
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (uVar4 <= uVar3) goto LAB_004a1618;
  }
  FUN_004c2748(param_1 + 0x1d,uVar3);
LAB_004a1618:
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
                    /* try { // try from 004a1630 to 004a16cb has its CatchHandler @ 004a1808 */
  uVar1 = std::__next_prime(3);
  uVar4 = param_1[0x24];
  if (uVar4 < uVar1) {
    FUN_004c29b4(param_1 + 0x23,uVar1);
  }
  else if (uVar1 < uVar4) {
    uVar3 = (ulong)((float)(ulong)param_1[0x26] / *(float *)(param_1 + 0x27));
    if ((uVar4 < 3) ||
       (uVar6 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)
                                                                              ),
                                                                      CONCAT11(POPCOUNT((char)(uVar4
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar4
                                                                                        )))))))),
       uVar5 = NEON_uaddlv(uVar6,1), 1 < (uint)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar5))) {
      uVar3 = std::__next_prime(uVar3);
    }
    else if (1 < uVar3) {
      uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
    }
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (uVar3 < uVar4) {
      FUN_004c29b4(param_1 + 0x23);
    }
  }
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x28) = 1;
  *(undefined1 *)((long)param_1 + 0x142) = 0;
  return;
}


