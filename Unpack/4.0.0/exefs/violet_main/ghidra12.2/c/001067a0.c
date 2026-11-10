/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001067a0; name: FUN_001067a0
 */


void FUN_001067a0(float param_1,undefined2 *param_2,undefined2 *param_3,undefined8 param_4,
                 undefined8 *param_5,ulong param_6)

{
  undefined1 (*pauVar1) [16];
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [16];
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  undefined2 uVar22;
  undefined2 uVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  undefined2 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 in_q17 [16];
  undefined1 auVar34 [16];
  undefined1 in_q19 [16];
  undefined1 auVar35 [16];
  
  uVar10 = param_6 >> 1;
  if ((0x7fe < param_6 - 2) ||
     (uVar11 = param_6 - (uVar10 & 0x5555555555555555),
     uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333),
     (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 != 1)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(0,0x106818);
    (*pcVar9)();
  }
  puVar2 = &DAT_03cacd40 + param_6 * 8;
  if (0x800 < param_6 * 4) {
    puVar2 = &UNK_03cade00 + uVar10 * 8;
  }
  FUN_00106a60(param_4,param_5,param_6,uVar10,puVar2);
  FUN_001064e0(param_5,param_4,param_6);
  pauVar12 = (undefined1 (*) [16])((long)param_5 + (param_6 * 4 - 0x10));
  do {
    pauVar1 = pauVar12 + -1;
    auVar29 = *pauVar12;
    pauVar12 = pauVar12 + -2;
    auVar32 = NEON_rev64(*pauVar1,4);
    auVar29 = NEON_rev64(auVar29,4);
    auVar30 = NEON_ext(auVar29,auVar29,8,1);
    iVar3 = (int)(param_1 * (float)((ulong)*param_5 >> 0x20));
    iVar4 = (int)(param_1 * (float)param_5[1]);
    iVar5 = (int)(param_1 * (float)((ulong)param_5[1] >> 0x20));
    auVar33 = NEON_ext(auVar32,auVar32,8,1);
    iVar6 = (int)(param_1 * (float)((ulong)param_5[2] >> 0x20));
    iVar7 = (int)(param_1 * (float)param_5[3]);
    iVar8 = (int)(param_1 * (float)((ulong)param_5[3] >> 0x20));
    param_6 = param_6 - 0x10;
    auVar29._4_2_ = (short)iVar3;
    auVar29._0_4_ = (int)(param_1 * (float)*param_5);
    auVar29._6_2_ = (short)((uint)iVar3 >> 0x10);
    auVar29._8_2_ = (short)iVar4;
    auVar29._10_2_ = (short)((uint)iVar4 >> 0x10);
    auVar29._12_2_ = (short)iVar5;
    auVar29._14_2_ = (short)((uint)iVar5 >> 0x10);
    auVar34._8_8_ = in_q17._8_8_;
    auVar34._0_8_ = NEON_sqxtn(in_q17._0_8_,auVar29,4);
    auVar32._4_2_ = (short)iVar6;
    auVar32._0_4_ = (int)(param_1 * (float)param_5[2]);
    auVar32._6_2_ = (short)((uint)iVar6 >> 0x10);
    auVar32._8_2_ = (short)iVar7;
    auVar32._10_2_ = (short)((uint)iVar7 >> 0x10);
    auVar32._12_2_ = (short)iVar8;
    auVar32._14_2_ = (short)((uint)iVar8 >> 0x10);
    in_q17 = NEON_sqxtn2(auVar34,auVar32,4);
    auVar31._0_4_ = (int)(param_1 * auVar30._0_4_);
    auVar31._4_4_ = (int)(param_1 * auVar30._4_4_);
    auVar31._8_4_ = (int)(param_1 * auVar30._8_4_);
    auVar31._12_4_ = (int)(param_1 * auVar30._12_4_);
    auVar35._8_8_ = in_q19._8_8_;
    auVar35._0_8_ = NEON_sqxtn(in_q19._0_8_,auVar31,4);
    auVar30._0_4_ = (int)(param_1 * auVar33._0_4_);
    auVar30._4_4_ = (int)(param_1 * auVar33._4_4_);
    auVar30._8_4_ = (int)(param_1 * auVar33._8_4_);
    auVar30._12_4_ = (int)(param_1 * auVar33._12_4_);
    in_q19 = NEON_sqxtn2(auVar35,auVar30,4);
    uVar13 = *param_3;
    uVar21 = param_3[1];
    uVar14 = param_3[2];
    uVar22 = param_3[3];
    uVar15 = param_3[4];
    uVar23 = param_3[5];
    uVar16 = param_3[6];
    uVar24 = param_3[7];
    uVar17 = param_3[8];
    uVar25 = param_3[9];
    uVar18 = param_3[10];
    uVar26 = param_3[0xb];
    uVar19 = param_3[0xc];
    uVar27 = param_3[0xd];
    uVar20 = param_3[0xe];
    uVar28 = param_3[0xf];
    param_3 = param_3 + 0x10;
    *param_2 = uVar13;
    param_2[1] = in_q17._0_2_;
    param_2[2] = uVar21;
    param_2[3] = in_q19._0_2_;
    param_2[4] = uVar14;
    param_2[5] = in_q17._2_2_;
    param_2[6] = uVar22;
    param_2[7] = in_q19._2_2_;
    param_2[8] = uVar15;
    param_2[9] = in_q17._4_2_;
    param_2[10] = uVar23;
    param_2[0xb] = in_q19._4_2_;
    param_2[0xc] = uVar16;
    param_2[0xd] = in_q17._6_2_;
    param_2[0xe] = uVar24;
    param_2[0xf] = in_q19._6_2_;
    param_2[0x10] = uVar17;
    param_2[0x11] = in_q17._8_2_;
    param_2[0x12] = uVar25;
    param_2[0x13] = in_q19._8_2_;
    param_2[0x14] = uVar18;
    param_2[0x15] = in_q17._10_2_;
    param_2[0x16] = uVar26;
    param_2[0x17] = in_q19._10_2_;
    param_2[0x18] = uVar19;
    param_2[0x19] = in_q17._12_2_;
    param_2[0x1a] = uVar27;
    param_2[0x1b] = in_q19._12_2_;
    param_2[0x1c] = uVar20;
    param_2[0x1d] = in_q17._14_2_;
    param_2[0x1e] = uVar28;
    param_2[0x1f] = in_q19._14_2_;
    param_2 = param_2 + 0x20;
    param_5 = param_5 + 4;
  } while (param_6 != 0);
  return;
}


