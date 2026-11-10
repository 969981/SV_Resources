/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00106660; name: FUN_00106660
 */


void FUN_00106660(float param_1,undefined2 *param_2,undefined8 param_3,undefined8 *param_4,
                 ulong param_5)

{
  undefined1 (*pauVar1) [16];
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_q5 [16];
  undefined1 auVar12 [16];
  undefined1 in_q6 [16];
  undefined1 auVar13 [16];
  
  uVar4 = param_5 >> 1;
  if ((0x7fe < param_5 - 2) ||
     (uVar5 = param_5 - (uVar4 & 0x5555555555555555),
     uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333),
     (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 != 1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0,0x1066d4);
    (*pcVar3)();
  }
  puVar2 = &DAT_03cacd40 + param_5 * 8;
  if (0x800 < param_5 * 4) {
    puVar2 = &UNK_03cade00 + uVar4 * 8;
  }
  FUN_00106a60(param_3,param_4,param_5,uVar4,puVar2);
  FUN_001064e0(param_4,param_3,param_5);
  pauVar6 = (undefined1 (*) [16])((long)param_4 + (param_5 * 4 - 0x10));
  do {
    pauVar1 = pauVar6 + -1;
    auVar7 = *pauVar6;
    pauVar6 = pauVar6 + -2;
    auVar10 = NEON_rev64(*pauVar1,4);
    auVar7 = NEON_rev64(auVar7,4);
    auVar8 = NEON_ext(auVar7,auVar7,8,1);
    auVar11 = NEON_ext(auVar10,auVar10,8,1);
    param_5 = param_5 - 0x10;
    auVar7._4_4_ = (int)(param_1 * (float)((ulong)*param_4 >> 0x20));
    auVar7._0_4_ = (int)(param_1 * (float)*param_4);
    auVar7._8_4_ = (int)(param_1 * (float)param_4[1]);
    auVar7._12_4_ = (int)(param_1 * (float)((ulong)param_4[1] >> 0x20));
    auVar12._8_8_ = in_q5._8_8_;
    auVar12._0_8_ = NEON_sqxtn(in_q5._0_8_,auVar7,4);
    auVar10._4_4_ = (int)(param_1 * (float)((ulong)param_4[2] >> 0x20));
    auVar10._0_4_ = (int)(param_1 * (float)param_4[2]);
    auVar10._8_4_ = (int)(param_1 * (float)param_4[3]);
    auVar10._12_4_ = (int)(param_1 * (float)((ulong)param_4[3] >> 0x20));
    in_q5 = NEON_sqxtn2(auVar12,auVar10,4);
    auVar9._0_4_ = (int)(param_1 * auVar8._0_4_);
    auVar9._4_4_ = (int)(param_1 * auVar8._4_4_);
    auVar9._8_4_ = (int)(param_1 * auVar8._8_4_);
    auVar9._12_4_ = (int)(param_1 * auVar8._12_4_);
    auVar13._8_8_ = in_q6._8_8_;
    auVar13._0_8_ = NEON_sqxtn(in_q6._0_8_,auVar9,4);
    auVar8._0_4_ = (int)(param_1 * auVar11._0_4_);
    auVar8._4_4_ = (int)(param_1 * auVar11._4_4_);
    auVar8._8_4_ = (int)(param_1 * auVar11._8_4_);
    auVar8._12_4_ = (int)(param_1 * auVar11._12_4_);
    in_q6 = NEON_sqxtn2(auVar13,auVar8,4);
    *param_2 = in_q5._0_2_;
    param_2[1] = in_q6._0_2_;
    param_2[2] = in_q5._2_2_;
    param_2[3] = in_q6._2_2_;
    param_2[4] = in_q5._4_2_;
    param_2[5] = in_q6._4_2_;
    param_2[6] = in_q5._6_2_;
    param_2[7] = in_q6._6_2_;
    param_2[8] = in_q5._8_2_;
    param_2[9] = in_q6._8_2_;
    param_2[10] = in_q5._10_2_;
    param_2[0xb] = in_q6._10_2_;
    param_2[0xc] = in_q5._12_2_;
    param_2[0xd] = in_q6._12_2_;
    param_2[0xe] = in_q5._14_2_;
    param_2[0xf] = in_q6._14_2_;
    param_2 = param_2 + 0x10;
    param_4 = param_4 + 4;
  } while (param_5 != 0);
  return;
}


