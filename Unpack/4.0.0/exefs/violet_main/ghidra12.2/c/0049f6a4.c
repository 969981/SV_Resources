/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049f6a4; name: FUN_0049f6a4
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049f6a4(undefined8 *param_1)

{
  long *plVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  size_t __n;
  undefined8 uVar5;
  undefined5 uVar6;
  undefined5 uVar7;
  undefined3 uVar8;
  undefined5 uVar9;
  undefined5 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined6 uVar13;
  undefined6 uVar14;
  undefined6 uVar15;
  undefined6 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long *plVar25;
  byte *pbVar26;
  byte *pbVar27;
  ulong uVar28;
  undefined8 *puVar29;
  long *plVar30;
  undefined8 *puVar31;
  ulong *puVar32;
  undefined2 uVar33;
  undefined8 uVar34;
  ulong local_280;
  ulong local_278;
  char *local_270;
  undefined4 local_268;
  ulong local_260;
  undefined8 uStack_258;
  char *local_250;
  undefined4 local_248;
  ulong local_240;
  undefined8 uStack_238;
  char *local_230;
  undefined4 local_228;
  ulong local_220;
  undefined8 uStack_218;
  char *local_210;
  undefined4 local_208;
  ulong local_200;
  undefined8 uStack_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  ulong local_1e0;
  undefined8 uStack_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  ulong local_1c0;
  undefined8 uStack_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  ulong local_1a0;
  undefined8 uStack_198;
  char *local_190;
  undefined4 local_188;
  ulong local_180;
  undefined8 uStack_178;
  char *local_170;
  undefined4 local_168;
  byte local_160;
  char local_15f [8];
  undefined7 uStack_157;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined4 local_148;
  ulong local_140;
  undefined8 uStack_138;
  char *local_130;
  undefined4 local_128;
  ulong local_120;
  undefined8 uStack_118;
  char *local_110;
  undefined4 local_108;
  ulong local_100;
  undefined8 uStack_f8;
  char *local_f0;
  undefined4 local_e8;
  byte local_e0;
  char local_df [8];
  char acStack_d7 [5];
  undefined2 uStack_d2;
  char cStack_d0;
  char acStack_cf [5];
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  undefined4 local_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  undefined4 local_a8;
  byte local_a0;
  char local_9f [8];
  char acStack_97 [6];
  char cStack_91;
  char cStack_90;
  char acStack_8f [6];
  undefined1 uStack_89;
  undefined4 local_88;
  ulong uStack_80;
  long *local_78 [3];
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
                    /* try { // try from 0049f6e0 to 0049f77b has its CatchHandler @ 004a0544 */
  uVar21 = std::__next_prime(3);
  uVar28 = param_1[4];
  if (uVar28 < uVar21) {
    FUN_004c0d8c(param_1 + 3,uVar21);
  }
  else if (uVar21 < uVar28) {
    uVar22 = (ulong)((float)(ulong)param_1[6] / *(float *)(param_1 + 7));
    if ((uVar28 < 3) ||
       (uVar34 = CONCAT17(POPCOUNT((char)(uVar28 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar28 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar28 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar28 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar28 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar28 >>
                                                                                      0x10)),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar28 >> 8)),POPCOUNT((char)uVar28)))))))),
       uVar33 = NEON_uaddlv(uVar34,1), 1 < (uint)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33))) {
      uVar22 = std::__next_prime(uVar22);
    }
    else if (1 < uVar22) {
      uVar22 = 1L << (-LZCOUNT(uVar22 - 1) & 0x3fU);
    }
    if (uVar22 <= uVar21) {
      uVar22 = uVar21;
    }
    if (uVar22 < uVar28) {
      FUN_004c0d8c(param_1 + 3);
    }
  }
  puVar31 = param_1 + 8;
  param_1[9] = 0;
  *puVar31 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  param_1[0xb] = 0;
  param_1[10] = 0;
                    /* try { // try from 0049f794 to 0049f833 has its CatchHandler @ 004a04f4 */
  uVar21 = std::__next_prime(3);
  uVar28 = param_1[9];
  if (uVar28 < uVar21) {
    FUN_004c0d8c(puVar31,uVar21);
  }
  else if (uVar21 < uVar28) {
    uVar22 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
    if ((uVar28 < 3) ||
       (uVar34 = CONCAT17(POPCOUNT((char)(uVar28 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar28 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar28 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar28 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar28 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar28 >>
                                                                                      0x10)),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar28 >> 8)),POPCOUNT((char)uVar28)))))))),
       uVar33 = NEON_uaddlv(uVar34,1), 1 < (uint)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33))) {
      uVar22 = std::__next_prime(uVar22);
    }
    else if (1 < uVar22) {
      uVar22 = 1L << (-LZCOUNT(uVar22 - 1) & 0x3fU);
    }
    if (uVar22 <= uVar21) {
      uVar22 = uVar21;
    }
    if (uVar22 < uVar28) {
      FUN_004c0d8c(puVar31);
    }
  }
  puVar31 = param_1 + 0xd;
  param_1[0xe] = 0;
  *puVar31 = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
                    /* try { // try from 0049f84c to 0049f8eb has its CatchHandler @ 004a04bc */
  uVar21 = std::__next_prime(3);
  uVar28 = param_1[0xe];
  if (uVar28 < uVar21) {
    FUN_004c1114(puVar31,uVar21);
  }
  else if (uVar21 < uVar28) {
    uVar22 = (ulong)((float)(ulong)param_1[0x10] / *(float *)(param_1 + 0x11));
    if ((uVar28 < 3) ||
       (uVar34 = CONCAT17(POPCOUNT((char)(uVar28 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar28 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar28 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar28 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar28 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar28 >>
                                                                                      0x10)),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar28 >> 8)),POPCOUNT((char)uVar28)))))))),
       uVar33 = NEON_uaddlv(uVar34,1), 1 < (uint)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33))) {
      uVar22 = std::__next_prime(uVar22);
    }
    else if (1 < uVar22) {
      uVar22 = 1L << (-LZCOUNT(uVar22 - 1) & 0x3fU);
    }
    if (uVar22 <= uVar21) {
      uVar22 = uVar21;
    }
    if (uVar22 < uVar28) {
      FUN_004c1114(puVar31);
    }
  }
  plVar30 = param_1 + 0x12;
  param_1[0x13] = 0;
  *plVar30 = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  puVar31 = param_1 + 0x26;
  param_1[0x29] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
                    /* try { // try from 0049f93c to 0049f9db has its CatchHandler @ 004a0484 */
  uVar21 = std::__next_prime(3);
  uVar28 = param_1[0x27];
  if (uVar28 < uVar21) {
    FUN_004c1450(puVar31,uVar21);
  }
  else if (uVar21 < uVar28) {
    uVar22 = (ulong)((float)(ulong)param_1[0x29] / *(float *)(param_1 + 0x2a));
    if ((uVar28 < 3) ||
       (uVar34 = CONCAT17(POPCOUNT((char)(uVar28 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar28 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar28 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar28 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar28 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar28 >>
                                                                                      0x10)),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar28 >> 8)),POPCOUNT((char)uVar28)))))))),
       uVar33 = NEON_uaddlv(uVar34,1), 1 < (uint)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33))) {
      uVar22 = std::__next_prime(uVar22);
    }
    else if (1 < uVar22) {
      uVar22 = 1L << (-LZCOUNT(uVar22 - 1) & 0x3fU);
    }
    if (uVar22 <= uVar21) {
      uVar22 = uVar21;
    }
    if (uVar22 < uVar28) {
      FUN_004c1450(puVar31);
    }
  }
  puVar23 = param_1 + 0x2b;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f800000;
  param_1[0x2c] = 0;
  *puVar23 = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
                    /* try { // try from 0049f9f0 to 0049fa8f has its CatchHandler @ 004a0448 */
  uVar21 = std::__next_prime(3);
  uVar28 = param_1[0x2c];
  if (uVar28 < uVar21) {
    FUN_004c17a4(puVar23,uVar21);
  }
  else if (uVar21 < uVar28) {
    uVar22 = (ulong)((float)(ulong)param_1[0x2e] / *(float *)(param_1 + 0x2f));
    if ((uVar28 < 3) ||
       (uVar34 = CONCAT17(POPCOUNT((char)(uVar28 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar28 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar28 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar28 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar28 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar28 >>
                                                                                      0x10)),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar28 >> 8)),POPCOUNT((char)uVar28)))))))),
       uVar33 = NEON_uaddlv(uVar34,1), 1 < (uint)CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33))) {
      uVar22 = std::__next_prime(uVar22);
    }
    else if (1 < uVar22) {
      uVar22 = 1L << (-LZCOUNT(uVar22 - 1) & 0x3fU);
    }
    if (uVar22 <= uVar21) {
      uVar22 = uVar21;
    }
    if (uVar22 < uVar28) {
      FUN_004c17a4(puVar23);
    }
  }
  param_1[0x30] = param_1 + 0x31;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  puVar32 = &local_280;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  puVar19 = PTR_FUN_047cba38;
  local_270 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
  uVar17 = _UNK_03caa878;
  uVar21 = _DAT_03caa870;
  uVar11 = s_google_protobuf_DoubleValue_03c0250c._0_8_;
  uVar5 = CONCAT35(s_google_protobuf_DoubleValue_03c0250c._16_3_,
                   s_google_protobuf_DoubleValue_03c0250c._11_5_);
  local_278 = _UNK_03caa878;
  local_280 = _DAT_03caa870;
  uVar34 = CONCAT53(s_google_protobuf_DoubleValue_03c0250c._11_5_,
                    s_google_protobuf_DoubleValue_03c0250c._8_3_);
  *(undefined8 *)(local_270 + 0x13) = s_google_protobuf_DoubleValue_03c0250c._19_8_;
  *(undefined8 *)(local_270 + 0xb) = uVar5;
  local_270[0x1b] = '\0';
  *(undefined8 *)(local_270 + 8) = uVar34;
  *(undefined8 *)local_270 = uVar11;
  local_268 = 1;
  local_250 = (char *)FUN_0049e770(puVar19,0x20);
  uVar18 = _UNK_03cab348;
  uVar28 = _DAT_03cab340;
  uVar12 = s_google_protobuf_FloatValue_03c109a5._18_8_;
  uVar11 = s_google_protobuf_FloatValue_03c109a5._0_8_;
  uVar5 = CONCAT26(s_google_protobuf_FloatValue_03c109a5._16_2_,
                   s_google_protobuf_FloatValue_03c109a5._10_6_);
  uStack_258 = _UNK_03cab348;
  local_260 = _DAT_03cab340;
  uVar34 = CONCAT62(s_google_protobuf_FloatValue_03c109a5._10_6_,
                    s_google_protobuf_FloatValue_03c109a5._8_2_);
  local_250[0x1a] = '\0';
  *(undefined8 *)(local_250 + 0x12) = uVar12;
  *(undefined8 *)(local_250 + 10) = uVar5;
  *(undefined8 *)(local_250 + 8) = uVar34;
  *(undefined8 *)local_250 = uVar11;
  local_248 = 2;
  local_230 = (char *)FUN_0049e770(puVar19,0x20);
  uVar11 = s_google_protobuf_Int64Value_03c4f208._0_8_;
  uStack_238 = uVar18;
  local_240 = uVar28;
  uVar34 = CONCAT62(s_google_protobuf_Int64Value_03c4f208._10_6_,
                    s_google_protobuf_Int64Value_03c4f208._8_2_);
  uVar5 = CONCAT26(s_google_protobuf_Int64Value_03c4f208._16_2_,
                   s_google_protobuf_Int64Value_03c4f208._10_6_);
  *(undefined8 *)(local_230 + 0x12) = s_google_protobuf_Int64Value_03c4f208._18_8_;
  *(undefined8 *)(local_230 + 10) = uVar5;
  local_230[0x1a] = '\0';
  *(undefined8 *)(local_230 + 8) = uVar34;
  *(undefined8 *)local_230 = uVar11;
  local_228 = 3;
  local_210 = (char *)FUN_0049e770(puVar19,0x20);
  uVar11 = s_google_protobuf_UInt64Value_03c3a5e9._0_8_;
  uStack_218 = uVar17;
  local_220 = uVar21;
  uVar34 = CONCAT53(s_google_protobuf_UInt64Value_03c3a5e9._11_5_,
                    s_google_protobuf_UInt64Value_03c3a5e9._8_3_);
  uVar5 = CONCAT35(s_google_protobuf_UInt64Value_03c3a5e9._16_3_,
                   s_google_protobuf_UInt64Value_03c3a5e9._11_5_);
  *(undefined8 *)(local_210 + 0x13) = s_google_protobuf_UInt64Value_03c3a5e9._19_8_;
  *(undefined8 *)(local_210 + 0xb) = uVar5;
  local_210[0x1b] = '\0';
  *(undefined8 *)(local_210 + 8) = uVar34;
  *(undefined8 *)local_210 = uVar11;
  local_208 = 4;
  local_1f0 = (char *)FUN_0049e770(puVar19,0x20);
  uVar11 = s_google_protobuf_Int32Value_03c90d4f._0_8_;
  uStack_1f8 = uVar18;
  local_200 = uVar28;
  uVar34 = CONCAT62(s_google_protobuf_Int32Value_03c90d4f._10_6_,
                    s_google_protobuf_Int32Value_03c90d4f._8_2_);
  uVar5 = CONCAT26(s_google_protobuf_Int32Value_03c90d4f._16_2_,
                   s_google_protobuf_Int32Value_03c90d4f._10_6_);
  *(undefined8 *)(local_1f0 + 0x12) = s_google_protobuf_Int32Value_03c90d4f._18_8_;
  *(undefined8 *)(local_1f0 + 10) = uVar5;
  local_1f0[0x1a] = '\0';
  *(undefined8 *)(local_1f0 + 8) = uVar34;
  *(undefined8 *)local_1f0 = uVar11;
  local_1e8 = 5;
  local_1d0 = (char *)FUN_0049e770(puVar19,0x20);
  uVar11 = s_google_protobuf_UInt32Value_03c2ceb9._0_8_;
  uStack_1d8 = uVar17;
  local_1e0 = uVar21;
  uVar34 = CONCAT53(s_google_protobuf_UInt32Value_03c2ceb9._11_5_,
                    s_google_protobuf_UInt32Value_03c2ceb9._8_3_);
  uVar5 = CONCAT35(s_google_protobuf_UInt32Value_03c2ceb9._16_3_,
                   s_google_protobuf_UInt32Value_03c2ceb9._11_5_);
  *(undefined8 *)(local_1d0 + 0x13) = s_google_protobuf_UInt32Value_03c2ceb9._19_8_;
  *(undefined8 *)(local_1d0 + 0xb) = uVar5;
  local_1d0[0x1b] = '\0';
  *(undefined8 *)(local_1d0 + 8) = uVar34;
  *(undefined8 *)local_1d0 = uVar11;
  local_1c8 = 6;
  local_1b0 = (char *)FUN_0049e770(puVar19,0x20);
  uVar11 = s_google_protobuf_StringValue_03c90d6a._0_8_;
  uStack_1b8 = uVar17;
  local_1c0 = uVar21;
  uVar34 = CONCAT53(s_google_protobuf_StringValue_03c90d6a._11_5_,
                    s_google_protobuf_StringValue_03c90d6a._8_3_);
  uVar5 = CONCAT35(s_google_protobuf_StringValue_03c90d6a._16_3_,
                   s_google_protobuf_StringValue_03c90d6a._11_5_);
  *(undefined8 *)(local_1b0 + 0x13) = s_google_protobuf_StringValue_03c90d6a._19_8_;
  *(undefined8 *)(local_1b0 + 0xb) = uVar5;
  local_1b0[0x1b] = '\0';
  *(undefined8 *)(local_1b0 + 8) = uVar34;
  *(undefined8 *)local_1b0 = uVar11;
  local_1a8 = 7;
  local_190 = (char *)FUN_0049e770(puVar19,0x20);
  uVar11 = s_google_protobuf_BytesValue_03c33c54._0_8_;
  uStack_198 = uVar18;
  local_1a0 = uVar28;
  uVar34 = CONCAT62(s_google_protobuf_BytesValue_03c33c54._10_6_,
                    s_google_protobuf_BytesValue_03c33c54._8_2_);
  uVar5 = CONCAT26(s_google_protobuf_BytesValue_03c33c54._16_2_,
                   s_google_protobuf_BytesValue_03c33c54._10_6_);
  *(undefined8 *)(local_190 + 0x12) = s_google_protobuf_BytesValue_03c33c54._18_8_;
  *(undefined8 *)(local_190 + 10) = uVar5;
  local_190[0x1a] = '\0';
  *(undefined8 *)(local_190 + 8) = uVar34;
  *(undefined8 *)local_190 = uVar11;
  local_188 = 8;
  local_170 = (char *)FUN_0049e770(puVar19,0x20);
  uVar12 = _UNK_03caa7a8;
  uVar21 = _DAT_03caa7a0;
  uVar11 = s_google_protobuf_BoolValue_03c978f7._0_8_;
  uVar5 = CONCAT17(s_google_protobuf_BoolValue_03c978f7[0x10],
                   s_google_protobuf_BoolValue_03c978f7._9_7_);
  uStack_178 = _UNK_03caa7a8;
  local_180 = _DAT_03caa7a0;
  uVar34 = CONCAT71(s_google_protobuf_BoolValue_03c978f7._9_7_,
                    s_google_protobuf_BoolValue_03c978f7[8]);
  *(undefined8 *)(local_170 + 0x11) = s_google_protobuf_BoolValue_03c978f7._17_8_;
  *(undefined8 *)(local_170 + 9) = uVar5;
  local_170[0x19] = '\0';
  *(undefined8 *)(local_170 + 8) = uVar34;
  *(undefined8 *)local_170 = uVar11;
  local_168 = 9;
  local_160 = 0x26;
  uStack_157 = s_google_protobuf_Any_03c02528._8_7_;
  local_15f[0] = s_google_protobuf_Any_03c02528[0];
  local_15f[1] = s_google_protobuf_Any_03c02528[1];
  local_15f[2] = s_google_protobuf_Any_03c02528[2];
  local_15f[3] = s_google_protobuf_Any_03c02528[3];
  local_15f[4] = s_google_protobuf_Any_03c02528[4];
  local_15f[5] = s_google_protobuf_Any_03c02528[5];
  local_15f[6] = s_google_protobuf_Any_03c02528[6];
  local_15f[7] = s_google_protobuf_Any_03c02528[7];
  uStack_150 = 0x796e412e;
  uStack_14c = uStack_14c & 0xffffff00;
  local_148 = 10;
  local_130 = (char *)FUN_0049e770(puVar19,0x20);
  uVar11 = s_google_protobuf_FieldMask_03c3a605._0_8_;
  uStack_138 = uVar12;
  local_140 = uVar21;
  uVar34 = CONCAT71(s_google_protobuf_FieldMask_03c3a605._9_7_,
                    s_google_protobuf_FieldMask_03c3a605[8]);
  uVar5 = CONCAT17(s_google_protobuf_FieldMask_03c3a605[0x10],
                   s_google_protobuf_FieldMask_03c3a605._9_7_);
  *(undefined8 *)(local_130 + 0x11) = s_google_protobuf_FieldMask_03c3a605._17_8_;
  *(undefined8 *)(local_130 + 9) = uVar5;
  *(undefined8 *)(local_130 + 8) = uVar34;
  *(undefined8 *)local_130 = uVar11;
  local_130[0x19] = '\0';
  local_128 = 0xb;
  local_110 = (char *)FUN_0049e770(puVar19,0x20);
  uVar5 = s_google_protobuf_Duration_03be14ff._8_8_;
  uVar34 = s_google_protobuf_Duration_03be14ff._0_8_;
  uStack_118 = _UNK_03caaa18;
  local_120 = _DAT_03caaa10;
  *(undefined8 *)(local_110 + 0x10) = s_google_protobuf_Duration_03be14ff._16_8_;
  *(undefined8 *)(local_110 + 8) = uVar5;
  *(undefined8 *)local_110 = uVar34;
  local_110[0x18] = '\0';
  local_108 = 0xc;
  local_f0 = (char *)FUN_0049e770(puVar19,0x20);
  uVar11 = s_google_protobuf_Timestamp_03c3a61f._0_8_;
  uVar9 = s_google_protobuf_Value_03bf4f07._16_5_;
  uStack_f8 = uVar12;
  local_100 = uVar21;
  uVar34 = CONCAT71(s_google_protobuf_Timestamp_03c3a61f._9_7_,
                    s_google_protobuf_Timestamp_03c3a61f[8]);
  uVar5 = CONCAT17(s_google_protobuf_Timestamp_03c3a61f[0x10],
                   s_google_protobuf_Timestamp_03c3a61f._9_7_);
  *(undefined8 *)(local_f0 + 0x11) = s_google_protobuf_Timestamp_03c3a61f._17_8_;
  *(undefined8 *)(local_f0 + 9) = uVar5;
  *(undefined8 *)(local_f0 + 8) = uVar34;
  *(undefined8 *)local_f0 = uVar11;
  uVar8 = s_google_protobuf_Value_03bf4f07._13_3_;
  uVar6 = s_google_protobuf_Value_03bf4f07._8_5_;
  uVar34 = s_google_protobuf_Value_03bf4f07._0_8_;
  local_f0[0x19] = '\0';
  uVar10 = s_google_protobuf_Value_03bf4f07._16_5_;
  uVar7 = s_google_protobuf_Value_03bf4f07._8_5_;
  uVar5 = s_google_protobuf_Value_03bf4f07._0_8_;
  local_e8 = 0xd;
  local_e0 = 0x2a;
  s_google_protobuf_Value_03bf4f07[0x10] = (char)uVar9;
  s_google_protobuf_Value_03bf4f07[0x11] = SUB51(uVar9,1);
  s_google_protobuf_Value_03bf4f07[0x12] = SUB51(uVar9,2);
  s_google_protobuf_Value_03bf4f07[0x13] = SUB51(uVar9,3);
  s_google_protobuf_Value_03bf4f07[0x14] = SUB51(uVar9,4);
  acStack_cf[0] = s_google_protobuf_Value_03bf4f07[0x10];
  acStack_cf[1] = s_google_protobuf_Value_03bf4f07[0x11];
  acStack_cf[2] = s_google_protobuf_Value_03bf4f07[0x12];
  acStack_cf[3] = s_google_protobuf_Value_03bf4f07[0x13];
  acStack_cf[4] = s_google_protobuf_Value_03bf4f07[0x14];
  s_google_protobuf_Value_03bf4f07[8] = (char)uVar6;
  s_google_protobuf_Value_03bf4f07[9] = SUB51(uVar6,1);
  s_google_protobuf_Value_03bf4f07[10] = SUB51(uVar6,2);
  s_google_protobuf_Value_03bf4f07[0xb] = SUB51(uVar6,3);
  s_google_protobuf_Value_03bf4f07[0xc] = SUB51(uVar6,4);
  acStack_d7[0] = s_google_protobuf_Value_03bf4f07[8];
  acStack_d7[1] = s_google_protobuf_Value_03bf4f07[9];
  acStack_d7[2] = s_google_protobuf_Value_03bf4f07[10];
  acStack_d7[3] = s_google_protobuf_Value_03bf4f07[0xb];
  acStack_d7[4] = s_google_protobuf_Value_03bf4f07[0xc];
  uStack_d2 = (undefined2)uVar8;
  cStack_d0 = SUB31(uVar8,2);
  s_google_protobuf_Value_03bf4f07[0] = (char)uVar34;
  s_google_protobuf_Value_03bf4f07[1] = SUB81(uVar34,1);
  s_google_protobuf_Value_03bf4f07[2] = SUB81(uVar34,2);
  s_google_protobuf_Value_03bf4f07[3] = SUB81(uVar34,3);
  s_google_protobuf_Value_03bf4f07[4] = SUB81(uVar34,4);
  s_google_protobuf_Value_03bf4f07[5] = SUB81(uVar34,5);
  s_google_protobuf_Value_03bf4f07[6] = SUB81(uVar34,6);
  s_google_protobuf_Value_03bf4f07[7] = SUB81(uVar34,7);
  local_df[0] = s_google_protobuf_Value_03bf4f07[0];
  local_df[1] = s_google_protobuf_Value_03bf4f07[1];
  local_df[2] = s_google_protobuf_Value_03bf4f07[2];
  local_df[3] = s_google_protobuf_Value_03bf4f07[3];
  local_df[4] = s_google_protobuf_Value_03bf4f07[4];
  local_df[5] = s_google_protobuf_Value_03bf4f07[5];
  local_df[6] = s_google_protobuf_Value_03bf4f07[6];
  local_df[7] = s_google_protobuf_Value_03bf4f07[7];
  uStack_ca = 0;
  local_c8 = 0xe;
  s_google_protobuf_Value_03bf4f07._0_8_ = uVar5;
  s_google_protobuf_Value_03bf4f07._8_5_ = uVar7;
  s_google_protobuf_Value_03bf4f07._16_5_ = uVar10;
  local_b0 = (char *)FUN_0049e770(puVar19,0x20);
  uVar15 = s_google_protobuf_Struct_03c4197a._16_6_;
  uVar11 = s_google_protobuf_ListValue_03c17c28._0_8_;
  uStack_b8 = uVar12;
  local_c0 = uVar21;
  uVar34 = CONCAT71(s_google_protobuf_ListValue_03c17c28._9_7_,
                    s_google_protobuf_ListValue_03c17c28[8]);
  uVar5 = CONCAT17(s_google_protobuf_ListValue_03c17c28[0x10],
                   s_google_protobuf_ListValue_03c17c28._9_7_);
  *(undefined8 *)(local_b0 + 0x11) = s_google_protobuf_ListValue_03c17c28._17_8_;
  *(undefined8 *)(local_b0 + 9) = uVar5;
  *(undefined8 *)(local_b0 + 8) = uVar34;
  *(undefined8 *)local_b0 = uVar11;
  uVar33 = s_google_protobuf_Struct_03c4197a._14_2_;
  uVar13 = s_google_protobuf_Struct_03c4197a._8_6_;
  uVar34 = s_google_protobuf_Struct_03c4197a._0_8_;
  local_b0[0x19] = '\0';
  uVar16 = s_google_protobuf_Struct_03c4197a._16_6_;
  uVar14 = s_google_protobuf_Struct_03c4197a._8_6_;
  uVar5 = s_google_protobuf_Struct_03c4197a._0_8_;
  local_a8 = 0xf;
  local_a0 = 0x2c;
  s_google_protobuf_Struct_03c4197a[0x10] = (char)uVar15;
  s_google_protobuf_Struct_03c4197a[0x11] = SUB61(uVar15,1);
  s_google_protobuf_Struct_03c4197a[0x12] = SUB61(uVar15,2);
  s_google_protobuf_Struct_03c4197a[0x13] = SUB61(uVar15,3);
  s_google_protobuf_Struct_03c4197a[0x14] = SUB61(uVar15,4);
  s_google_protobuf_Struct_03c4197a[0x15] = SUB61(uVar15,5);
  acStack_8f[0] = s_google_protobuf_Struct_03c4197a[0x10];
  acStack_8f[1] = s_google_protobuf_Struct_03c4197a[0x11];
  acStack_8f[2] = s_google_protobuf_Struct_03c4197a[0x12];
  acStack_8f[3] = s_google_protobuf_Struct_03c4197a[0x13];
  acStack_8f[4] = s_google_protobuf_Struct_03c4197a[0x14];
  acStack_8f[5] = s_google_protobuf_Struct_03c4197a[0x15];
  s_google_protobuf_Struct_03c4197a[8] = (char)uVar13;
  s_google_protobuf_Struct_03c4197a[9] = SUB61(uVar13,1);
  s_google_protobuf_Struct_03c4197a[10] = SUB61(uVar13,2);
  s_google_protobuf_Struct_03c4197a[0xb] = SUB61(uVar13,3);
  s_google_protobuf_Struct_03c4197a[0xc] = SUB61(uVar13,4);
  s_google_protobuf_Struct_03c4197a[0xd] = SUB61(uVar13,5);
  acStack_97[0] = s_google_protobuf_Struct_03c4197a[8];
  acStack_97[1] = s_google_protobuf_Struct_03c4197a[9];
  acStack_97[2] = s_google_protobuf_Struct_03c4197a[10];
  acStack_97[3] = s_google_protobuf_Struct_03c4197a[0xb];
  acStack_97[4] = s_google_protobuf_Struct_03c4197a[0xc];
  acStack_97[5] = s_google_protobuf_Struct_03c4197a[0xd];
  cStack_91 = (char)uVar33;
  cStack_90 = SUB21(uVar33,1);
  s_google_protobuf_Struct_03c4197a[0] = (char)uVar34;
  s_google_protobuf_Struct_03c4197a[1] = SUB81(uVar34,1);
  s_google_protobuf_Struct_03c4197a[2] = SUB81(uVar34,2);
  s_google_protobuf_Struct_03c4197a[3] = SUB81(uVar34,3);
  s_google_protobuf_Struct_03c4197a[4] = SUB81(uVar34,4);
  s_google_protobuf_Struct_03c4197a[5] = SUB81(uVar34,5);
  s_google_protobuf_Struct_03c4197a[6] = SUB81(uVar34,6);
  s_google_protobuf_Struct_03c4197a[7] = SUB81(uVar34,7);
  local_9f[0] = s_google_protobuf_Struct_03c4197a[0];
  local_9f[1] = s_google_protobuf_Struct_03c4197a[1];
  local_9f[2] = s_google_protobuf_Struct_03c4197a[2];
  local_9f[3] = s_google_protobuf_Struct_03c4197a[3];
  local_9f[4] = s_google_protobuf_Struct_03c4197a[4];
  local_9f[5] = s_google_protobuf_Struct_03c4197a[5];
  local_9f[6] = s_google_protobuf_Struct_03c4197a[6];
  local_9f[7] = s_google_protobuf_Struct_03c4197a[7];
  plVar1 = param_1 + 0x14;
  uStack_89 = 0;
  local_88 = 0x10;
  s_google_protobuf_Struct_03c4197a._0_8_ = uVar5;
  s_google_protobuf_Struct_03c4197a._8_6_ = uVar14;
  s_google_protobuf_Struct_03c4197a._16_6_ = uVar16;
  do {
    uVar21 = puVar32[1];
    pbVar3 = (byte *)puVar32[2];
    if (((byte)*puVar32 & 1) == 0) {
      pbVar3 = (byte *)((long)puVar32 + 1);
      uVar21 = (ulong)(byte)((byte)*puVar32 >> 1);
    }
                    /* try { // try from 0049fef0 to 0049fef7 has its CatchHandler @ 004a0cac */
    puVar23 = (undefined8 *)FUN_0039a45c(local_78,pbVar3,uVar21);
    puVar29 = (undefined8 *)param_1[0x13];
    if (puVar29 != (undefined8 *)0x0) {
      uVar34 = CONCAT17(POPCOUNT((char)((ulong)puVar29 >> 0x38)),
                        CONCAT16(POPCOUNT((char)((ulong)puVar29 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)((ulong)puVar29 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)((ulong)puVar29 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)((ulong)puVar29 >> 0x18))
                                                            ,CONCAT12(POPCOUNT((char)((ulong)puVar29
                                                                                     >> 0x10)),
                                                                      CONCAT11(POPCOUNT((char)((
                                                  ulong)puVar29 >> 8)),POPCOUNT((char)puVar29)))))))
                       );
      uVar33 = NEON_uaddlv(uVar34,1);
      uVar21 = CONCAT62((int6)((ulong)uVar34 >> 0x10),uVar33) & 0xffffffff;
      if (uVar21 < 2) {
        puVar31 = (undefined8 *)((long)puVar29 - 1U & (ulong)puVar23);
      }
      else {
        puVar31 = puVar23;
        if (puVar29 <= puVar23) {
          uVar28 = 0;
          if (puVar29 != (undefined8 *)0x0) {
            uVar28 = (ulong)puVar23 / (ulong)puVar29;
          }
          puVar31 = (undefined8 *)((long)puVar23 - uVar28 * (long)puVar29);
        }
      }
      plVar25 = *(long **)(*plVar30 + (long)puVar31 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        pbVar3 = (byte *)((long)puVar32 + 1);
        __n = (ulong)(byte)((byte)*puVar32 >> 1);
        if (((byte)*puVar32 & 1) != 0) {
          pbVar3 = (byte *)puVar32[2];
          __n = puVar32[1];
        }
        if (uVar21 < 2) {
          if (__n == 0) {
            do {
              if ((undefined8 *)plVar25[1] != puVar23 &&
                  (undefined8 *)((ulong)plVar25[1] & (long)puVar29 - 1U) != puVar31) break;
              uVar21 = (ulong)(*(byte *)(plVar25 + 2) >> 1);
              if ((*(byte *)(plVar25 + 2) & 1) != 0) {
                uVar21 = plVar25[3];
              }
              if (uVar21 == 0) goto LAB_0049fecc;
              plVar25 = (long *)*plVar25;
            } while (plVar25 != (long *)0x0);
          }
          else {
            do {
              if ((undefined8 *)plVar25[1] != puVar23 &&
                  (undefined8 *)((ulong)plVar25[1] & (long)puVar29 - 1U) != puVar31) break;
              bVar4 = *(byte *)(plVar25 + 2);
              uVar21 = (ulong)(bVar4 >> 1);
              sVar2 = uVar21;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar25[3];
              }
              if (sVar2 == __n) {
                if ((bVar4 & 1) == 0) {
                  pbVar26 = (byte *)((long)plVar25 + 0x11);
                  pbVar27 = pbVar3;
                  while (*pbVar26 == *pbVar27) {
                    uVar21 = uVar21 - 1;
                    pbVar26 = pbVar26 + 1;
                    pbVar27 = pbVar27 + 1;
                    if (uVar21 == 0) goto LAB_0049fecc;
                  }
                }
                else {
                  iVar20 = memcmp((void *)plVar25[4],pbVar3,__n);
                  if (iVar20 == 0) goto LAB_0049fecc;
                }
              }
              plVar25 = (long *)*plVar25;
            } while (plVar25 != (long *)0x0);
          }
        }
        else if (__n == 0) {
          do {
            puVar24 = (undefined8 *)plVar25[1];
            if (puVar24 != puVar23) {
              if (puVar29 <= puVar24) {
                uVar21 = 0;
                if (puVar29 != (undefined8 *)0x0) {
                  uVar21 = (ulong)puVar24 / (ulong)puVar29;
                }
                puVar24 = (undefined8 *)((long)puVar24 - uVar21 * (long)puVar29);
              }
              if (puVar24 != puVar31) break;
            }
            uVar21 = (ulong)(*(byte *)(plVar25 + 2) >> 1);
            if ((*(byte *)(plVar25 + 2) & 1) != 0) {
              uVar21 = plVar25[3];
            }
            if (uVar21 == 0) goto LAB_0049fecc;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            puVar24 = (undefined8 *)plVar25[1];
            if (puVar24 != puVar23) {
              if (puVar29 <= puVar24) {
                uVar21 = 0;
                if (puVar29 != (undefined8 *)0x0) {
                  uVar21 = (ulong)puVar24 / (ulong)puVar29;
                }
                puVar24 = (undefined8 *)((long)puVar24 - uVar21 * (long)puVar29);
              }
              if (puVar24 != puVar31) break;
            }
            bVar4 = *(byte *)(plVar25 + 2);
            uVar21 = (ulong)(bVar4 >> 1);
            sVar2 = uVar21;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar25[3];
            }
            if (sVar2 == __n) {
              if ((bVar4 & 1) == 0) {
                pbVar26 = (byte *)((long)plVar25 + 0x11);
                pbVar27 = pbVar3;
                while (*pbVar26 == *pbVar27) {
                  uVar21 = uVar21 - 1;
                  pbVar26 = pbVar26 + 1;
                  pbVar27 = pbVar27 + 1;
                  if (uVar21 == 0) goto LAB_0049fecc;
                }
              }
              else {
                iVar20 = memcmp((void *)plVar25[4],pbVar3,__n);
                if (iVar20 == 0) goto LAB_0049fecc;
              }
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
                    /* try { // try from 0049fffc to 004a000f has its CatchHandler @ 004a0ad0 */
    FUN_004c1a54(local_78,plVar30,puVar23,puVar32);
    if ((puVar29 == (undefined8 *)0x0) ||
       (*(float *)(param_1 + 0x16) * (float)puVar29 < (float)(param_1[0x15] + 1))) {
      uVar21 = (ulong)(puVar29 < (undefined8 *)0x3 || ((ulong)puVar29 & (long)puVar29 - 1U) != 0) |
               (long)puVar29 << 1;
      uVar28 = (ulong)((float)(param_1[0x15] + 1) / *(float *)(param_1 + 0x16));
      if (uVar28 <= uVar21) {
        uVar28 = uVar21;
      }
                    /* try { // try from 004a0060 to 004a0067 has its CatchHandler @ 004a0598 */
      FUN_004c1b54(plVar30,uVar28);
      puVar29 = (undefined8 *)param_1[0x13];
      if (((ulong)puVar29 & (long)puVar29 - 1U) == 0) {
        puVar31 = (undefined8 *)((long)puVar29 - 1U & (ulong)puVar23);
        plVar25 = *(long **)(*plVar30 + (long)puVar31 * 8);
      }
      else {
        if (puVar23 < puVar29) {
          puVar31 = puVar23;
          goto LAB_004a0098;
        }
        uVar21 = 0;
        if (puVar29 != (undefined8 *)0x0) {
          uVar21 = (ulong)puVar23 / (ulong)puVar29;
        }
        puVar31 = (undefined8 *)((long)puVar23 - uVar21 * (long)puVar29);
        plVar25 = *(long **)(*plVar30 + (long)puVar31 * 8);
      }
      if (plVar25 == (long *)0x0) goto LAB_004a00a4;
LAB_0049feac:
      *local_78[0] = *plVar25;
      *plVar25 = (long)local_78[0];
    }
    else {
LAB_004a0098:
      plVar25 = *(long **)(*plVar30 + (long)puVar31 * 8);
      if (plVar25 != (long *)0x0) goto LAB_0049feac;
LAB_004a00a4:
      *local_78[0] = *plVar1;
      *plVar1 = (long)local_78[0];
      *(long **)(*plVar30 + (long)puVar31 * 8) = plVar1;
      if (*local_78[0] != 0) {
        puVar23 = *(undefined8 **)(*local_78[0] + 8);
        if (((ulong)puVar29 & (long)puVar29 - 1U) == 0) {
          puVar23 = (undefined8 *)((ulong)puVar23 & (long)puVar29 - 1U);
        }
        else if (puVar29 <= puVar23) {
          uVar21 = 0;
          if (puVar29 != (undefined8 *)0x0) {
            uVar21 = (ulong)puVar23 / (ulong)puVar29;
          }
          puVar23 = (undefined8 *)((long)puVar23 - uVar21 * (long)puVar29);
        }
        *(long **)(*plVar30 + (long)puVar23 * 8) = local_78[0];
      }
    }
    param_1[0x15] = param_1[0x15] + 1;
LAB_0049fecc:
    puVar32 = puVar32 + 4;
    if (puVar32 == &uStack_80) {
      if ((local_a0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,CONCAT17(uStack_89,CONCAT61(acStack_8f,cStack_90)));
      }
      if ((local_c0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_b0);
      }
      if ((local_e0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,
                     CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT51(acStack_cf,cStack_d0))));
      }
      if ((local_100 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_f0);
      }
      if ((local_120 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_110);
      }
      if ((local_140 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_130);
      }
      if ((local_160 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_14c,uStack_150));
      }
      if ((local_180 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_170);
      }
      if ((local_1a0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_190);
      }
      if ((local_1c0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_1b0);
      }
      if ((local_1e0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_1d0);
      }
      if ((local_200 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_1f0);
      }
      if ((local_220 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_210);
      }
      if ((local_240 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_230);
      }
      if ((local_260 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_250);
      }
      if ((local_280 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_270);
      }
      return;
    }
  } while( true );
}


