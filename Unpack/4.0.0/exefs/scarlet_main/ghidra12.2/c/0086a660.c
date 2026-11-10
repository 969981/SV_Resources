/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0086a660; name: FUN_0086a660
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0086a660(long *param_1,long param_2,float *param_3,undefined8 *param_4)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  byte bVar12;
  undefined *puVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uVar43;
  undefined8 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar48 [16];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined8 uVar62;
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  uint uVar74;
  undefined1 auVar75 [12];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar83 [16];
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  undefined1 auVar80 [16];
  float fVar84;
  undefined1 auVar85 [12];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  int iVar90;
  int iVar94;
  int iVar95;
  undefined1 auVar91 [16];
  int iVar96;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar109;
  float fVar110;
  float fVar111;
  undefined4 uVar112;
  undefined8 uVar113;
  float local_260;
  float fStack_25c;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  float local_230 [2];
  undefined8 uStack_228;
  float local_220 [4];
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined1 local_200 [16];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_170;
  undefined8 uStack_168;
  uint local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 *local_130 [2];
  undefined8 local_120 [6];
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 local_98;
  uint local_90;
  int local_8c [3];
  
  puVar13 = PTR_DAT_047d19b0;
  local_130[0] = (undefined8 *)(PTR_DAT_047d1cd8 + 0x10);
  *(undefined4 *)(param_4 + 6) = 0;
  uVar6 = *(undefined8 *)(puVar13 + 0x50);
  param_4[1] = uVar6;
  fVar47 = *param_3;
  fVar49 = param_3[1];
  fVar50 = param_3[2];
  fVar19 = fVar47 * fVar47 + fVar49 * fVar49 + fVar50 * fVar50;
  if (fVar19 < *(float *)(puVar13 + 0x270)) {
    return;
  }
  uVar62 = NEON_fmax(CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x20) *
                              (float)((ulong)*(undefined8 *)(puVar13 + 0x150) >> 0x20) -
                              (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20),
                              (float)*(undefined8 *)(param_3 + 0x14) *
                              (float)*(undefined8 *)(puVar13 + 0x150) -
                              (float)*(undefined8 *)(param_3 + 0x18)),uVar6,4);
  fVar7 = *(float *)(puVar13 + 0x60);
  fVar8 = *(float *)(puVar13 + 100);
  fVar9 = *(float *)(puVar13 + 0x68);
  fVar10 = *(float *)(puVar13 + 0x6c);
  fVar52 = *(float *)(puVar13 + 0x260);
  fVar19 = fVar7 / SQRT(fVar19);
  uVar24 = *param_4;
  fVar63 = (float)((ulong)uVar62 >> 0x20);
  uVar43 = NEON_fmax(uVar6,CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x16) >> 0x20) -
                                    fVar63 * (fVar8 / SQRT(fVar47 * fVar47 + fVar49 * fVar49 +
                                                           fVar50 * fVar50)),
                                    (float)*(undefined8 *)(param_3 + 0x16) - (float)uVar62 * fVar19)
                     ,4);
  fVar51 = (float)((ulong)uVar43 >> 0x20);
  fVar47 = param_3[0x10] + fVar47 * (float)uVar43;
  fVar49 = param_3[0x11] + fVar49 * fVar51;
  fVar50 = param_3[0x12] + fVar50 * (float)uVar43;
  fVar51 = param_3[0x13] + param_3[3] * fVar51;
  uVar44 = *(undefined8 *)*param_1;
  uStack_228._0_4_ = *(float *)((undefined8 *)*param_1 + 1);
  uStack_238 = CONCAT44(fVar51,fVar50);
  local_240 = CONCAT44(fVar49,fVar47);
  local_230[0] = (float)uVar44;
  local_230[1] = (float)((ulong)uVar44 >> 0x20);
  uStack_228._4_4_ = 0.5;
  fVar47 = fVar47 - local_230[0];
  fVar49 = fVar49 - local_230[1];
  auVar33._0_8_ = CONCAT44(fVar49,fVar47);
  auVar33._8_4_ = fVar50 - (float)uStack_228;
  auVar33._12_4_ = fVar51 - 0.5;
  fVar50 = fVar47 * fVar47 + fVar49 * fVar49 + auVar33._8_4_ * auVar33._8_4_;
  auVar26 = ZEXT816(0);
  uStack_148 = auVar33._8_8_;
  if (fVar50 != 0.0) {
    fVar50 = SQRT(fVar50);
    fVar51 = SQRT(fVar47 * fVar47 + fVar49 * fVar49 + auVar33._8_4_ * auVar33._8_4_);
    auVar26._0_4_ = fVar47 / fVar50;
    auVar26._4_4_ = fVar49 / fVar51;
    auVar26._8_4_ = auVar33._8_4_ / fVar50;
    auVar26._12_4_ = auVar33._12_4_ / fVar51;
  }
  auVar11 = *(undefined1 (*) [16])(puVar13 + 0x240);
  auVar76 = *(undefined1 (*) [16])(puVar13 + 0x40);
  uVar44 = *(undefined8 *)(puVar13 + 0x290);
  uVar113 = *(undefined8 *)(puVar13 + 0x298);
  iVar18 = 0;
  uVar74 = 1;
  local_260 = 1e+07;
  fStack_25c = 1e+07;
  uStack_248 = auVar26._8_8_;
  local_250 = auVar26._0_8_;
  auVar26 = NEON_ext(auVar76,auVar76,8,1);
  auVar26 = NEON_ext(auVar26,auVar76,8,1);
  local_90 = 1;
  local_8c[0] = 0;
  local_98 = 0x3727c5ac3727c5ac;
  local_150 = auVar33._0_8_;
  do {
    uVar25 = local_98;
    (*(code *)*local_130[0])(local_130,param_1,&local_150,param_2,param_3 + 4,&local_e0);
    fVar51 = fStack_d4;
    fVar50 = fStack_dc;
    fVar49 = local_e0;
    fVar34 = (float)local_250;
    fVar20 = fVar34 * ((float)local_240 - local_e0);
    fVar39 = (float)((ulong)local_250 >> 0x20);
    fVar22 = fVar39 * ((float)((ulong)local_240 >> 0x20) - fStack_dc);
    fVar41 = (float)uStack_248;
    fVar23 = fVar41 * ((float)uStack_238 - fStack_d8);
    fVar47 = fVar20 + fVar22 + fVar23;
    if (local_260 - (float)uVar25 <= fVar47) {
      if ((param_2 != 0) &&
         (uVar25 = NEON_fmax(uVar25,*(undefined8 *)(param_3 + 0x14),4),
         local_260 - (float)*(undefined8 *)(param_3 + 0x18) <= (float)uVar25)) {
        auVar76._0_4_ = fVar34 * *param_3;
        auVar76._4_4_ = fVar39 * param_3[1];
        auVar76._8_4_ = fVar41 * param_3[2];
        auVar76._12_4_ = (float)((ulong)uStack_248 >> 0x20) * param_3[3];
        auVar33 = NEON_ext(auVar76,auVar76,8,1);
        if (0.0 < auVar76._0_4_ + auVar76._4_4_ + auVar33._0_4_) {
          return;
        }
        param_4[5] = uStack_248;
        param_4[4] = local_250;
LAB_0086b150:
        *param_4 = uVar43;
        *(undefined4 *)(param_4 + 6) = 1;
        return;
      }
      bVar2 = 1;
      bVar12 = 1;
      fVar47 = local_260 - (float)*(undefined8 *)(param_3 + 0x18);
      fStack_25c = fStack_25c - (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
      auVar33 = local_200;
    }
    else {
      bVar2 = 0;
      bVar12 = 0;
      lVar14 = (long)iVar18;
      local_8c[0] = iVar18 + 1;
      local_230[lVar14 * 4 + 2] = fStack_d8;
      local_220[lVar14 * 4 + -1] = fVar51;
      local_230[lVar14 * 4] = fVar49;
      local_230[lVar14 * 4 + 1] = fVar50;
      fVar47 = fVar47 - (float)*(undefined8 *)(param_3 + 0x18);
      fStack_25c = (fVar20 + fVar22 + fVar23) -
                   (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
      iVar18 = iVar18 + 1;
      auVar33 = local_200;
    }
    if (0.0 < fVar47) {
      fVar49 = *param_3;
      fVar50 = param_3[1];
      fVar51 = param_3[2];
      fVar20 = param_3[3];
      fVar34 = fVar34 * fVar49;
      fVar39 = fVar39 * fVar50;
      fVar41 = fVar41 * fVar51;
      fVar22 = fVar34 + fVar39 + fVar41;
      if (0.0 <= fVar22) {
        return;
      }
      uVar25 = NEON_fmax(CONCAT44(fStack_25c - fVar63,fVar47 - (float)uVar62),uVar6,4);
      fVar47 = (float)uVar43 - (float)uVar25 / fVar22;
      fVar22 = (float)((ulong)uVar43 >> 0x20) -
               (float)((ulong)uVar25 >> 0x20) / (fVar34 + fVar39 + fVar41);
      uVar43 = CONCAT44(fVar22,fVar47);
      if ((float)uVar24 - fVar52 * fVar19 <= fVar47) {
        return;
      }
      auVar76 = *(undefined1 (*) [16])(param_3 + 0x10);
      param_4[5] = uStack_248;
      param_4[4] = local_250;
      local_240 = CONCAT44(fVar50 * fVar22 + auVar76._4_4_,fVar49 * fVar47 + auVar76._0_4_);
      uStack_238 = CONCAT44(fVar20 * fVar22 + auVar76._12_4_,fVar51 * fVar47 + auVar76._8_4_);
      bVar12 = bVar2;
    }
    uVar74 = uVar74 | iVar18 << 3;
    uStack_1c8 = uStack_238;
    local_1d0 = local_240;
    if (0x18 < uVar74 - 9) goto switchD_0086a92c_caseD_d;
    auVar86._8_8_ = uStack_238;
    auVar86._0_8_ = local_240;
    fVar47 = (float)local_240;
    fVar49 = (float)((ulong)local_240 >> 0x20);
    fVar50 = (float)uStack_238;
    fVar51 = (float)((ulong)uStack_238 >> 0x20);
    local_200 = auVar33;
    switch(uVar74) {
    case 9:
switchD_0086a92c_caseD_9:
      fVar20 = local_230[0] - auVar86._0_4_;
      fVar23 = local_230[1] - auVar86._4_4_;
      fVar51 = (float)uStack_228 - auVar86._8_4_;
      fVar22 = uStack_228._4_4_ - auVar86._12_4_;
      break;
    case 10:
      goto switchD_0086a92c_caseD_a;
    case 0xb:
      goto switchD_0086a92c_caseD_b;
    case 0xc:
      goto switchD_0086a92c_caseD_c;
    default:
      goto switchD_0086a92c_caseD_d;
    case 0x11:
switchD_0086a92c_caseD_11:
      auVar31._0_4_ = local_220[0] - local_230[0];
      auVar31._4_4_ = local_220[1] - local_230[1];
      auVar31._8_4_ = local_220[2] - (float)uStack_228;
      auVar31._12_4_ = local_220[3] - uStack_228._4_4_;
      fVar20 = (float)local_1d0;
      fVar23 = (float)((ulong)local_1d0 >> 0x20);
      fVar51 = (float)uStack_1c8;
      fVar22 = (float)((ulong)uStack_1c8 >> 0x20);
      fVar34 = auVar31._0_4_ * (local_220[0] - fVar20);
      fVar39 = auVar31._4_4_ * (local_220[1] - fVar23);
      fVar35 = auVar31._8_4_ * (local_220[2] - fVar51);
      fVar42 = auVar31._0_4_ * (local_230[0] - fVar20);
      fVar109 = auVar31._4_4_ * (local_230[1] - fVar23);
      fVar41 = auVar31._8_4_ * ((float)uStack_228 - fVar51);
      fVar40 = fVar34 + fVar39 + fVar35;
      fVar35 = fVar34 + fVar39 + fVar35;
      fVar34 = fVar42 + fVar109 + fVar41;
      fVar41 = fVar42 + fVar109 + fVar41;
      if (fVar40 * fVar34 < 0.0) {
        iVar18 = 2;
        auVar37._0_4_ = (local_230[0] - fVar20) * fVar40 - (local_220[0] - fVar20) * fVar34;
        auVar37._4_4_ = (local_230[1] - fVar23) * fVar35 - (local_220[1] - fVar23) * fVar41;
        auVar37._8_4_ = ((float)uStack_228 - fVar51) * fVar40 - (local_220[2] - fVar51) * fVar34;
        auVar37._12_4_ = (uStack_228._4_4_ - fVar22) * fVar35 - (local_220[3] - fVar22) * fVar41;
        auVar33 = NEON_ext(auVar31,auVar31,4,1);
        auVar76 = NEON_ext(auVar37,auVar37,4,1);
        fVar20 = auVar31._0_4_ * auVar76._0_4_ - auVar33._0_4_ * auVar37._0_4_;
        auVar38._0_8_ =
             CONCAT44(auVar31._4_4_ * auVar76._4_4_ - auVar33._4_4_ * auVar37._4_4_,fVar20);
        auVar38._8_4_ = auVar31._8_4_ * auVar37._0_4_ - auVar31._0_4_ * auVar37._8_4_;
        auVar38._12_4_ = auVar31._12_4_ * auVar37._4_4_ - auVar31._4_4_ * auVar37._12_4_;
        auVar76 = NEON_ext(auVar38,auVar38,4,1);
        uVar25 = NEON_ext(auVar76._0_8_,auVar38._0_8_,4,1);
        fVar51 = (float)(0x7ef504f3 -
                        (int)(auVar31._8_4_ * auVar31._8_4_ +
                             auVar31._0_4_ * auVar31._0_4_ + auVar31._4_4_ * auVar31._4_4_));
        fVar22 = (float)(0x7ef504f3 -
                        (int)(auVar31._8_4_ * auVar31._8_4_ +
                             auVar31._0_4_ * auVar31._0_4_ + auVar31._4_4_ * auVar31._4_4_));
        auVar32._0_4_ = auVar33._0_4_ * auVar76._0_4_ - auVar31._0_4_ * (float)uVar25;
        auVar32._4_4_ =
             auVar33._4_4_ * auVar76._4_4_ - auVar31._4_4_ * (float)((ulong)uVar25 >> 0x20);
        auVar32._8_4_ = auVar31._0_4_ * fVar20 - auVar31._8_4_ * auVar76._0_4_;
        auVar32._12_4_ = auVar31._4_4_ * 0.0 - auVar31._12_4_ * auVar76._4_4_;
        auVar33 = NEON_ext(auVar32,auVar32,4,1);
        fVar51 = fVar51 * fVar51;
        fVar22 = fVar22 * fVar22;
        fVar20 = auVar33._0_4_ * fVar51;
        fVar23 = auVar33._4_4_ * fVar22;
        fVar51 = auVar32._0_4_ * fVar51;
        fVar22 = fVar22 * 0.0;
      }
      else {
        local_230[0] = (float)((uint)local_230[0] ^
                              ((uint)local_230[0] ^ (uint)local_220[0]) & -(uint)(fVar40 <= 0.0));
        local_230[1] = (float)((uint)local_230[1] ^
                              ((uint)local_230[1] ^ (uint)local_220[1]) & -(uint)(fVar35 <= 0.0));
        uStack_228._0_4_ =
             (float)((uint)(float)uStack_228 ^
                    ((uint)(float)uStack_228 ^ (uint)local_220[2]) & -(uint)(fVar40 <= 0.0));
        uStack_228._4_4_ =
             (float)((uint)uStack_228._4_4_ ^
                    ((uint)uStack_228._4_4_ ^ (uint)local_220[3]) & -(uint)(fVar35 <= 0.0));
        fVar20 = local_230[0] - fVar20;
        fVar23 = local_230[1] - fVar23;
        fVar51 = (float)uStack_228 - fVar51;
        fVar22 = uStack_228._4_4_ - fVar22;
        iVar18 = 1;
      }
      local_8c[0] = iVar18;
      break;
    case 0x12:
      goto switchD_0086a92c_caseD_12;
    case 0x13:
      goto switchD_0086a92c_caseD_13;
    case 0x19:
switchD_0086a92c_caseD_19:
      fVar41 = fStack_204;
      fVar39 = fStack_20c;
      fVar34 = local_210;
      fVar23 = uStack_228._4_4_;
      fVar22 = (float)uStack_228;
      fVar20 = local_230[1];
      fVar51 = local_230[0];
      fVar35 = auVar86._0_4_;
      auVar101._0_4_ = fVar35 - local_210;
      fVar40 = auVar86._4_4_;
      auVar101._4_4_ = fVar40 - fStack_20c;
      fVar42 = auVar86._8_4_;
      auVar101._8_4_ = fVar42 - fStack_208;
      fVar109 = auVar86._12_4_;
      auVar101._12_4_ = fVar109 - fStack_204;
      auVar71._0_4_ = local_230[0] - local_210;
      auVar71._4_4_ = local_230[1] - fStack_20c;
      auVar71._8_4_ = (float)uStack_228 - fStack_208;
      auVar71._12_4_ = uStack_228._4_4_ - fStack_204;
      auVar58 = NEON_ext(auVar71,auVar71,4,1);
      auVar65._0_4_ = local_210 - local_220[0];
      auVar65._4_4_ = fStack_20c - local_220[1];
      auVar65._8_4_ = fStack_208 - local_220[2];
      auVar65._12_4_ = fStack_204 - local_220[3];
      auVar33 = NEON_ext(auVar65,auVar65,4,1);
      auVar93._0_4_ = fVar35 - local_220[0];
      auVar93._4_4_ = fVar40 - local_220[1];
      auVar93._8_4_ = fVar42 - local_220[2];
      auVar93._12_4_ = fVar109 - local_220[3];
      auVar76 = NEON_ext(auVar93,auVar93,4,1);
      auVar59._0_4_ = local_220[0] - local_230[0];
      auVar59._4_4_ = local_220[1] - local_230[1];
      auVar59._8_4_ = local_220[2] - (float)uStack_228;
      auVar59._12_4_ = local_220[3] - uStack_228._4_4_;
      fVar103 = fVar35 - local_230[0];
      fVar104 = fVar40 - local_230[1];
      fVar105 = fVar42 - (float)uStack_228;
      fVar106 = fVar109 - uStack_228._4_4_;
      auVar66._0_4_ = auVar93._0_4_ * auVar33._0_4_ - auVar65._0_4_ * auVar76._0_4_;
      auVar66._4_4_ = auVar93._4_4_ * auVar33._4_4_ - auVar65._4_4_ * auVar76._4_4_;
      auVar66._8_4_ = auVar93._8_4_ * auVar65._0_4_ - auVar65._8_4_ * auVar93._0_4_;
      auVar66._12_4_ = auVar93._12_4_ * auVar65._4_4_ - auVar65._12_4_ * auVar93._4_4_;
      auVar57 = NEON_ext(auVar66,auVar66,4,1);
      auVar54._0_4_ = auVar65._0_4_ * auVar58._0_4_ - auVar71._0_4_ * auVar33._0_4_;
      auVar54._4_4_ = auVar65._4_4_ * auVar58._4_4_ - auVar71._4_4_ * auVar33._4_4_;
      auVar54._8_4_ = auVar65._8_4_ * auVar71._0_4_ - auVar71._8_4_ * auVar65._0_4_;
      auVar54._12_4_ = auVar65._12_4_ * auVar71._4_4_ - auVar71._12_4_ * auVar65._4_4_;
      auVar33 = NEON_ext(auVar54,auVar54,4,1);
      auVar76 = NEON_ext(auVar101,auVar101,4,1);
      auVar102 = NEON_ext(auVar59,auVar59,4,1);
      auVar67._0_4_ = auVar101._0_4_ * auVar58._0_4_ - auVar71._0_4_ * auVar76._0_4_;
      auVar67._4_4_ = auVar101._4_4_ * auVar58._4_4_ - auVar71._4_4_ * auVar76._4_4_;
      auVar67._8_4_ = auVar101._8_4_ * auVar71._0_4_ - auVar71._8_4_ * auVar101._0_4_;
      auVar67._12_4_ = auVar101._12_4_ * auVar71._4_4_ - auVar71._12_4_ * auVar101._4_4_;
      auVar58 = NEON_ext(auVar67,auVar67,4,1);
      auVar48._8_4_ = auVar54._0_4_;
      auVar48._0_8_ = auVar33._0_8_;
      auVar48._12_4_ = 0;
      auVar4._4_4_ = fVar104;
      auVar4._0_4_ = fVar103;
      auVar4._8_4_ = fVar105;
      auVar4._12_4_ = fVar106;
      auVar5._4_4_ = fVar104;
      auVar5._0_4_ = fVar103;
      auVar5._8_4_ = fVar105;
      auVar5._12_4_ = fVar106;
      auVar76 = NEON_ext(auVar4,auVar5,4,1);
      fVar110 = auVar33._0_4_;
      fVar84 = fVar110 * auVar58._0_4_;
      fVar111 = auVar33._4_4_;
      auVar72._0_4_ = fVar103 * auVar102._0_4_ - auVar59._0_4_ * auVar76._0_4_;
      auVar72._4_4_ = fVar104 * auVar102._4_4_ - auVar59._4_4_ * auVar76._4_4_;
      auVar72._8_4_ = fVar105 * auVar59._0_4_ - auVar59._8_4_ * fVar103;
      auVar72._12_4_ = fVar106 * auVar59._4_4_ - auVar59._12_4_ * fVar104;
      auVar79._0_4_ = auVar57._0_4_ * fVar110;
      auVar79._4_4_ = auVar57._4_4_ * fVar111;
      auVar79._8_4_ = auVar66._0_4_ * auVar54._0_4_;
      auVar79._12_4_ = auVar66._4_4_ * 0.0;
      auVar76 = NEON_ext(auVar72,auVar72,4,1);
      fVar105 = fVar110 * auVar76._0_4_;
      fVar106 = fVar111 * auVar76._4_4_;
      auVar80._4_12_ = auVar79._4_12_;
      auVar80._0_4_ = auVar79._0_4_;
      auVar82._0_8_ = auVar80._0_8_;
      auVar82._8_4_ = auVar79._8_4_;
      auVar82._12_4_ = auVar79._12_4_;
      auVar81._8_8_ = auVar82._8_8_;
      auVar81._4_4_ = fVar84;
      auVar81._0_4_ = auVar79._0_4_;
      auVar83._0_12_ = auVar81._0_12_;
      auVar83._12_4_ = auVar54._0_4_ * auVar67._0_4_;
      auVar76 = NEON_ext(auVar83,auVar83,8,1);
      fVar103 = auVar76._0_4_ + auVar57._4_4_ * fVar111 + auVar79._0_4_;
      fVar104 = auVar76._4_4_ + fVar111 * auVar58._4_4_ + fVar84;
      auVar61._0_8_ = CONCAT44(fVar104,fVar103);
      fVar84 = fVar105 + fVar106 + auVar54._0_4_ * auVar72._0_4_;
      uStack_168 = CONCAT44(fVar105 + fVar106 + auVar54._0_4_ * auVar72._0_4_,fVar84);
      auVar61._8_8_ = uStack_168;
      uVar74 = (-(uint)(fVar104 < 0.0) & 2) + (uint)(fVar103 < 0.0) | -(uint)(fVar84 < 0.0) & 4;
      if (uVar74 != 7) {
        local_8c[0] = 2;
        bVar2 = PTR_DAT_047d1a28[uVar74];
        uStack_148 = (ulong)(uint)auVar54._0_4_;
        local_150 = auVar33._0_8_;
        local_170 = auVar61._0_8_;
        if ((char)bVar2 < '\0') {
          if (-6 < (char)bVar2) {
            iVar18 = 1;
            local_90 = 1;
            local_8c[0] = 1;
            goto switchD_0086a92c_caseD_9;
          }
          lVar14 = (long)((char)bVar2 + 8);
          local_230[lVar14 * 4 + 2] = fStack_208;
          local_220[lVar14 * 4 + -1] = fVar41;
          local_230[lVar14 * 4] = fVar34;
          local_230[lVar14 * 4 + 1] = fVar39;
        }
        else {
          uVar17 = (ulong)bVar2;
          fVar51 = local_230[uVar17 * 4];
          fVar20 = local_230[uVar17 * 4 + 1];
          fVar22 = local_230[uVar17 * 4 + 2];
          fVar23 = local_220[uVar17 * 4 + -1];
          cVar3 = PTR_DAT_047d1a30[uVar17];
          lVar14 = (long)cVar3;
          cVar1 = PTR_DAT_047d1a30[(long)(int)(char)bVar2 + 2];
          lVar16 = (long)cVar1;
          auVar29._0_4_ = (fVar35 - fVar51) * (local_230[lVar14 * 4] - fVar51);
          auVar29._4_4_ = (fVar40 - fVar20) * (local_230[lVar14 * 4 + 1] - fVar20);
          auVar29._8_4_ = (fVar42 - fVar22) * (local_230[lVar14 * 4 + 2] - fVar22);
          auVar29._12_4_ = (fVar109 - fVar23) * (local_220[lVar14 * 4 + -1] - fVar23);
          auVar33 = NEON_ext(auVar29,auVar29,8,1);
          if (auVar29._0_4_ + auVar29._4_4_ + auVar33._0_4_ < 0.0) {
            fVar110 = local_230[lVar16 * 4];
            fVar111 = local_230[lVar16 * 4 + 1];
            fVar84 = local_230[lVar16 * 4 + 2];
            fVar103 = local_220[lVar16 * 4 + -1];
            local_230[lVar14 * 4 + 2] = fStack_208;
            local_220[lVar14 * 4 + -1] = fVar41;
            local_230[lVar14 * 4] = fVar34;
            local_230[lVar14 * 4 + 1] = fVar39;
            auVar21._0_4_ = (fVar35 - fVar51) * (fVar110 - fVar51);
            auVar21._4_4_ = (fVar40 - fVar20) * (fVar111 - fVar20);
            auVar21._8_4_ = (fVar42 - fVar22) * (fVar84 - fVar22);
            auVar21._12_4_ = (fVar109 - fVar23) * (fVar103 - fVar23);
            auVar33 = NEON_ext(auVar21,auVar21,8,1);
            if (auVar21._0_4_ + auVar21._4_4_ + auVar33._0_4_ < 0.0) {
              uVar25 = CONCAT44(local_220[1],local_220[0]);
              iVar18 = (int)cVar3;
              if (cVar1 != 2) {
                iVar18 = (int)cVar1;
              }
              *(ulong *)(local_230 + (long)iVar18 * 4 + 2) = CONCAT44(local_220[3],local_220[2]);
              *(undefined8 *)(local_230 + (long)iVar18 * 4) = uVar25;
              auVar86._8_8_ = uStack_1c8;
              auVar86._0_8_ = local_1d0;
              iVar18 = 1;
              local_8c[0] = 1;
              goto switchD_0086a92c_caseD_9;
            }
          }
          else {
            local_230[lVar16 * 4 + 2] = fStack_208;
            local_220[lVar16 * 4 + -1] = fVar41;
            local_230[lVar16 * 4] = fVar34;
            local_230[lVar16 * 4 + 1] = fVar39;
          }
        }
        goto switchD_0086a92c_caseD_11;
      }
      auVar28._0_4_ = (local_230[0] - fVar35) * fVar110;
      auVar28._4_4_ = (local_230[1] - fVar40) * fVar111;
      auVar28._8_4_ = ((float)uStack_228 - fVar42) * auVar54._0_4_;
      auVar28._12_4_ = (uStack_228._4_4_ - fVar109) * 0.0;
      auVar33 = NEON_ext(auVar28,auVar28,8,1);
      if (auVar33._0_4_ + auVar28._0_4_ + auVar28._4_4_ < 0.0) {
        auVar48._0_4_ = -fVar110;
        auVar48._4_4_ = -fVar111;
        auVar48._8_4_ = -auVar54._0_4_;
        auVar48._12_4_ = 0x80000000;
        auVar30._8_8_ = _UNK_03caa978;
        auVar30._0_8_ = _DAT_03caa970;
        uStack_228._0_4_ = local_220[2];
        uStack_228._4_4_ = local_220[3];
        local_230[0] = local_220[0];
        local_230[1] = local_220[1];
        local_220[2] = fVar22;
        local_220[3] = fVar23;
        local_220[0] = fVar51;
        local_220[1] = fVar20;
        auVar61 = a64_TBL(ZEXT816(0),auVar61,auVar30);
      }
      uStack_148 = auVar48._8_8_;
      local_150 = auVar48._0_8_;
      uStack_168 = auVar61._8_8_;
      local_170 = auVar61._0_8_;
      goto LAB_0086b014;
    case 0x1a:
      goto switchD_0086a92c_caseD_1a;
    case 0x21:
      fVar20 = auVar33._0_4_;
      auVar100._0_4_ = fVar20 - local_210;
      fVar22 = auVar33._4_4_;
      auVar100._4_4_ = fVar22 - fStack_20c;
      fVar23 = auVar33._8_4_;
      auVar100._8_4_ = fVar23 - fStack_208;
      fVar34 = auVar33._12_4_;
      auVar100._12_4_ = fVar34 - fStack_204;
      auVar57._0_4_ = local_210 - local_220[0];
      auVar57._4_4_ = fStack_20c - local_220[1];
      auVar57._8_4_ = fStack_208 - local_220[2];
      auVar57._12_4_ = fStack_204 - local_220[3];
      auVar76 = NEON_ext(auVar57,auVar57,4,1);
      auVar58._0_4_ = fVar20 - local_220[0];
      auVar58._4_4_ = fVar22 - local_220[1];
      auVar58._8_4_ = fVar23 - local_220[2];
      auVar58._12_4_ = fVar34 - local_220[3];
      auVar86 = NEON_ext(auVar58,auVar58,4,1);
      auVar69._0_4_ = local_230[0] - local_210;
      auVar69._4_4_ = local_230[1] - fStack_20c;
      auVar69._8_4_ = (float)uStack_228 - fStack_208;
      auVar69._12_4_ = uStack_228._4_4_ - fStack_204;
      auVar56._0_4_ = local_220[0] - local_230[0];
      auVar56._4_4_ = local_220[1] - local_230[1];
      auVar56._8_4_ = local_220[2] - (float)uStack_228;
      auVar56._12_4_ = local_220[3] - uStack_228._4_4_;
      auVar97 = NEON_ext(auVar100,auVar100,4,1);
      auVar102._0_4_ = fVar20 - local_230[0];
      auVar102._4_4_ = fVar22 - local_230[1];
      auVar102._8_4_ = fVar23 - (float)uStack_228;
      auVar102._12_4_ = fVar34 - uStack_228._4_4_;
      auVar107 = NEON_ext(auVar102,auVar102,4,1);
      auVar99._0_4_ = auVar57._0_4_ * auVar86._0_4_ - auVar58._0_4_ * auVar76._0_4_;
      auVar99._4_4_ = auVar57._4_4_ * auVar86._4_4_ - auVar58._4_4_ * auVar76._4_4_;
      auVar99._8_4_ = auVar57._8_4_ * auVar58._0_4_ - auVar58._8_4_ * auVar57._0_4_;
      auVar99._12_4_ = auVar57._12_4_ * auVar58._4_4_ - auVar58._12_4_ * auVar57._4_4_;
      auVar86 = NEON_ext(auVar99,auVar99,4,1);
      fVar34 = auVar86._4_4_;
      auVar76 = NEON_ext(auVar69,auVar69,4,1);
      auVar77._0_4_ = auVar69._0_4_ * auVar97._0_4_ - auVar100._0_4_ * auVar76._0_4_;
      auVar77._4_4_ = auVar69._4_4_ * auVar97._4_4_ - auVar100._4_4_ * auVar76._4_4_;
      auVar77._8_4_ = auVar69._8_4_ * auVar100._0_4_ - auVar100._8_4_ * auVar69._0_4_;
      auVar77._12_4_ = auVar69._12_4_ * auVar100._4_4_ - auVar100._12_4_ * auVar69._4_4_;
      auVar76 = NEON_ext(auVar77,auVar77,4,1);
      fVar41 = auVar76._0_4_;
      fVar35 = auVar76._4_4_;
      auVar76 = NEON_ext(auVar56,auVar56,4,1);
      auVar108._0_4_ = auVar56._0_4_ * auVar107._0_4_ - auVar102._0_4_ * auVar76._0_4_;
      auVar108._4_4_ = auVar56._4_4_ * auVar107._4_4_ - auVar102._4_4_ * auVar76._4_4_;
      auVar108._8_4_ = auVar56._8_4_ * auVar102._0_4_ - auVar102._8_4_ * auVar56._0_4_;
      auVar108._12_4_ = auVar56._12_4_ * auVar102._4_4_ - auVar102._12_4_ * auVar56._4_4_;
      auVar76 = NEON_ext(auVar108,auVar108,4,1);
      fVar40 = auVar76._0_4_;
      fVar42 = auVar76._4_4_;
      fVar109 = auVar26._0_4_ * (fVar47 - fVar20);
      fVar110 = auVar26._4_4_ * (fVar49 - fVar22);
      fVar111 = auVar26._8_4_ * (fVar50 - fVar23);
      fVar20 = auVar86._0_4_;
      auVar91._0_4_ = fVar20 * fVar20;
      auVar91._8_4_ = auVar99._0_4_ * auVar99._0_4_;
      auVar91._4_4_ = fVar41 * fVar41;
      auVar91._12_4_ = auVar77._0_4_ * auVar77._0_4_;
      auVar76 = NEON_ext(auVar91,auVar91,8,1);
      fVar23 = auVar76._0_4_ + fVar34 * fVar34 + auVar91._0_4_;
      fVar39 = auVar76._4_4_ + fVar35 * fVar35 + fVar41 * fVar41;
      auVar97._4_4_ = fVar109 * fVar41;
      auVar97._0_4_ = fVar109 * fVar20;
      auVar97._8_4_ = fVar111 * auVar99._0_4_;
      auVar97._12_4_ = fVar111 * auVar77._0_4_;
      auVar76 = NEON_ext(auVar97,auVar97,8,1);
      fVar20 = auVar76._0_4_ + fVar110 * fVar34 + fVar109 * fVar20;
      fVar22 = auVar76._4_4_ + fVar110 * fVar35 + fVar109 * fVar41;
      fVar34 = fVar40 * fVar40 + fVar42 * fVar42 + auVar108._0_4_ * auVar108._0_4_;
      fVar41 = fVar40 * fVar40 + fVar42 * fVar42 + auVar108._0_4_ * auVar108._0_4_;
      fVar35 = fVar109 * fVar40 + fVar110 * fVar42 + fVar111 * auVar108._0_4_;
      fVar40 = fVar109 * fVar40 + fVar110 * fVar42 + fVar111 * auVar108._0_4_;
      iVar90 = -(uint)(fVar23 == 0.0);
      iVar94 = -(uint)(fVar39 == 0.0);
      iVar95 = -(uint)(fVar34 == 0.0);
      iVar96 = -(uint)(fVar41 == 0.0);
      auVar98._0_4_ = (fVar7 / fVar23) * fVar20 * ABS(fVar20);
      auVar98._4_4_ = (fVar8 / fVar39) * fVar22 * ABS(fVar22);
      auVar98._8_4_ = (fVar9 / fVar34) * fVar35 * ABS(fVar35);
      auVar98._12_4_ = (fVar10 / fVar41) * fVar40 * ABS(fVar40);
      auVar107[0] = ~(byte)iVar90;
      auVar107[1] = ~(byte)((uint)iVar90 >> 8);
      auVar107[2] = ~(byte)((uint)iVar90 >> 0x10);
      auVar107[3] = ~(byte)((uint)iVar90 >> 0x18);
      auVar107[4] = ~(byte)iVar94;
      auVar107[5] = ~(byte)((uint)iVar94 >> 8);
      auVar107[6] = ~(byte)((uint)iVar94 >> 0x10);
      auVar107[7] = ~(byte)((uint)iVar94 >> 0x18);
      auVar107[8] = ~(byte)iVar95;
      auVar107[9] = ~(byte)((uint)iVar95 >> 8);
      auVar107[10] = ~(byte)((uint)iVar95 >> 0x10);
      auVar107[0xb] = ~(byte)((uint)iVar95 >> 0x18);
      auVar107[0xc] = ~(byte)iVar96;
      auVar107[0xd] = ~(byte)((uint)iVar96 >> 8);
      auVar107[0xe] = ~(byte)((uint)iVar96 >> 0x10);
      auVar107[0xf] = ~(byte)((uint)iVar96 >> 0x18);
      auVar76 = auVar11 ^ (auVar11 ^ auVar98) & auVar107;
      auVar85._0_8_ = auVar76._0_8_;
      uVar25 = NEON_fmaxp(auVar85._0_8_,auVar85._0_8_,4);
      fVar23 = auVar76._8_4_;
      uVar25 = NEON_fmax(CONCAT44(fVar23,fVar23),uVar25,4);
      fVar34 = (float)uVar25;
      if (9.9999994e-11 <= fVar34) {
        auVar87._0_4_ = auVar76._0_4_;
        cVar1 = PTR_DAT_047d1a18
                [(-(uint)((float)((ulong)uVar25 >> 0x20) <= auVar76._4_4_) & 2) +
                 (uint)(fVar34 <= auVar87._0_4_) | -(uint)(fVar34 <= fVar23) & 4];
        if (cVar1 == '\x03') {
          auVar85 = auVar76._0_12_;
        }
        else {
          uVar112 = (undefined4)uVar44;
          if (cVar1 == '\x02') {
            auVar85._8_4_ = uVar112;
          }
          else if (cVar1 == '\x01') {
            auVar87._8_8_ = auVar76._8_8_;
            auVar87._4_4_ = uVar112;
            auVar85 = auVar87._0_12_;
          }
          else {
            auVar88._4_12_ = auVar76._4_12_;
            auVar88._0_4_ = uVar112;
            auVar85 = auVar88._0_12_;
          }
        }
        uVar25 = NEON_fmaxp(auVar85._0_8_,auVar85._0_8_,4);
        uVar25 = NEON_fmax(CONCAT44(auVar85._8_4_,auVar85._8_4_),uVar25,4);
        if (fVar34 <= (float)uVar25 * 1.1) {
          iVar90 = -(uint)(0.0 <= fVar35);
          iVar94 = -(uint)(0.0 <= fVar40);
          uVar74 = (uint)(byte)(-(0.0 <= fVar20) & (byte)_DAT_03cab270);
          auVar75._0_8_ =
               CONCAT17((byte)(-(uint)(0.0 <= fVar22) >> 0x18) &
                        (byte)((ulong)_DAT_03cab270 >> 0x38),
                        (uint7)CONCAT14((byte)-(uint)(0.0 <= fVar22) &
                                        (byte)((ulong)_DAT_03cab270 >> 0x20),uVar74));
          auVar75[8] = (byte)iVar90 & (byte)_UNK_03cab278;
          auVar75[9] = (byte)((uint)iVar90 >> 8) & (byte)((ulong)_UNK_03cab278 >> 8);
          auVar75[10] = (byte)((uint)iVar90 >> 0x10) & (byte)((ulong)_UNK_03cab278 >> 0x10);
          auVar75[0xb] = (byte)((uint)iVar90 >> 0x18) & (byte)((ulong)_UNK_03cab278 >> 0x18);
          auVar78[0xc] = (byte)iVar94 & (byte)((ulong)_UNK_03cab278 >> 0x20);
          auVar78._0_12_ = auVar75;
          auVar78[0xd] = (byte)((uint)iVar94 >> 8) & (byte)((ulong)_UNK_03cab278 >> 0x28);
          auVar78[0xe] = (byte)((uint)iVar94 >> 0x10) & (byte)((ulong)_UNK_03cab278 >> 0x30);
          auVar78[0xf] = (byte)((uint)iVar94 >> 0x18) & (byte)((ulong)_UNK_03cab278 >> 0x38);
          uVar74 = uVar74 + (int)((ulong)auVar75._0_8_ >> 0x20) + auVar75._8_4_ + auVar78._12_4_;
          if ((~uVar74 & 3) == 0) {
            auVar92._0_4_ = (fVar47 - local_210) * auVar69._0_4_;
            auVar92._4_4_ = (fVar49 - fStack_20c) * auVar69._4_4_;
            auVar92._8_4_ = (fVar50 - fStack_208) * auVar69._8_4_;
            auVar92._12_4_ = (fVar51 - fStack_204) * auVar69._12_4_;
            auVar86 = NEON_ext(auVar92,auVar92,8,1);
            auVar89._0_4_ = (fVar47 - local_210) * (local_220[0] - local_210);
            auVar89._4_4_ = (fVar49 - fStack_20c) * (local_220[1] - fStack_20c);
            auVar89._8_4_ = (fVar50 - fStack_208) * (local_220[2] - fStack_208);
            auVar89._12_4_ = (fVar51 - fStack_204) * (local_220[3] - fStack_204);
            auVar99 = NEON_ext(auVar89,auVar89,8,1);
            auVar70._0_4_ = auVar69._0_4_ * auVar100._0_4_;
            auVar70._4_4_ = auVar69._4_4_ * auVar100._4_4_;
            auVar70._8_4_ = auVar69._8_4_ * auVar100._8_4_;
            auVar70._12_4_ = auVar69._12_4_ * auVar100._12_4_;
            auVar64._0_4_ = (local_220[0] - local_210) * auVar100._0_4_;
            auVar64._4_4_ = (local_220[1] - fStack_20c) * auVar100._4_4_;
            auVar64._8_4_ = (local_220[2] - fStack_208) * auVar100._8_4_;
            auVar64._12_4_ = (local_220[3] - fStack_204) * auVar100._12_4_;
            auVar100 = NEON_ext(auVar70,auVar70,8,1);
            auVar76 = NEON_ext(auVar64,auVar64,8,1);
            uVar15 = 0xfffffffd;
            if ((auVar99._0_4_ + auVar89._0_4_ + auVar89._4_4_) *
                (auVar100._0_4_ + auVar70._0_4_ + auVar70._4_4_) <=
                (auVar86._0_4_ + auVar92._0_4_ + auVar92._4_4_) *
                (auVar76._0_4_ + auVar64._0_4_ + auVar64._4_4_)) {
              uVar15 = 0xfffffffe;
            }
            uVar74 = uVar15 & uVar74;
          }
          if ((~uVar74 & 6) == 0) {
            auVar73._0_4_ = (fVar47 - local_230[0]) * auVar56._0_4_;
            auVar73._4_4_ = (fVar49 - local_230[1]) * auVar56._4_4_;
            auVar73._8_4_ = (fVar50 - (float)uStack_228) * auVar56._8_4_;
            auVar73._12_4_ = (fVar51 - uStack_228._4_4_) * auVar56._12_4_;
            auVar86 = NEON_ext(auVar73,auVar73,8,1);
            auVar68._0_4_ = (fVar47 - local_230[0]) * (local_210 - local_230[0]);
            auVar68._4_4_ = (fVar49 - local_230[1]) * (fStack_20c - local_230[1]);
            auVar68._8_4_ = (fVar50 - (float)uStack_228) * (fStack_208 - (float)uStack_228);
            auVar68._12_4_ = (fVar51 - uStack_228._4_4_) * (fStack_204 - uStack_228._4_4_);
            auVar100 = NEON_ext(auVar68,auVar68,8,1);
            auVar60._0_4_ = auVar56._0_4_ * auVar102._0_4_;
            auVar60._4_4_ = auVar56._4_4_ * auVar102._4_4_;
            auVar60._8_4_ = auVar56._8_4_ * auVar102._8_4_;
            auVar60._12_4_ = auVar56._12_4_ * auVar102._12_4_;
            auVar55._0_4_ = (local_210 - local_230[0]) * auVar102._0_4_;
            auVar55._4_4_ = (fStack_20c - local_230[1]) * auVar102._4_4_;
            auVar55._8_4_ = (fStack_208 - (float)uStack_228) * auVar102._8_4_;
            auVar55._12_4_ = (fStack_204 - uStack_228._4_4_) * auVar102._12_4_;
            auVar102 = NEON_ext(auVar60,auVar60,8,1);
            auVar76 = NEON_ext(auVar55,auVar55,8,1);
            uVar15 = 0xfffffffb;
            if ((auVar100._0_4_ + auVar68._0_4_ + auVar68._4_4_) *
                (auVar102._0_4_ + auVar60._0_4_ + auVar60._4_4_) <=
                (auVar86._0_4_ + auVar73._0_4_ + auVar73._4_4_) *
                (auVar76._0_4_ + auVar55._0_4_ + auVar55._4_4_)) {
              uVar15 = 0xfffffffd;
            }
            uVar74 = uVar15 & uVar74;
          }
          if (((uVar74 ^ 0xffffffff) & 5) == 0) {
            auVar53._0_4_ = auVar57._0_4_ * (fVar47 - local_220[0]);
            auVar53._4_4_ = auVar57._4_4_ * (fVar49 - local_220[1]);
            auVar53._8_4_ = auVar57._8_4_ * (fVar50 - local_220[2]);
            auVar53._12_4_ = auVar57._12_4_ * (fVar51 - local_220[3]);
            auVar86 = NEON_ext(auVar53,auVar53,8,1);
            auVar45._0_4_ = (fVar47 - local_220[0]) * (local_230[0] - local_220[0]);
            auVar45._4_4_ = (fVar49 - local_220[1]) * (local_230[1] - local_220[1]);
            auVar45._8_4_ = (fVar50 - local_220[2]) * ((float)uStack_228 - local_220[2]);
            auVar45._12_4_ = (fVar51 - local_220[3]) * (uStack_228._4_4_ - local_220[3]);
            auVar36._0_4_ = auVar57._0_4_ * auVar58._0_4_;
            auVar36._4_4_ = auVar57._4_4_ * auVar58._4_4_;
            auVar36._8_4_ = auVar57._8_4_ * auVar58._8_4_;
            auVar36._12_4_ = auVar57._12_4_ * auVar58._12_4_;
            auVar57 = NEON_ext(auVar45,auVar45,8,1);
            auVar27._0_4_ = (local_230[0] - local_220[0]) * auVar58._0_4_;
            auVar27._4_4_ = (local_230[1] - local_220[1]) * auVar58._4_4_;
            auVar27._8_4_ = ((float)uStack_228 - local_220[2]) * auVar58._8_4_;
            auVar27._12_4_ = (uStack_228._4_4_ - local_220[3]) * auVar58._12_4_;
            auVar58 = NEON_ext(auVar36,auVar36,8,1);
            auVar76 = NEON_ext(auVar27,auVar27,8,1);
            uVar15 = 0xfffffffe;
            if ((auVar57._0_4_ + auVar45._0_4_ + auVar45._4_4_) *
                (auVar58._0_4_ + auVar36._0_4_ + auVar36._4_4_) <=
                (auVar86._0_4_ + auVar53._0_4_ + auVar53._4_4_) *
                (auVar76._0_4_ + auVar27._0_4_ + auVar27._4_4_)) {
              uVar15 = 0xfffffffb;
            }
            uVar74 = uVar15 & uVar74;
          }
          cVar1 = PTR_DAT_047d1a20[(ulong)uVar74 & 7];
        }
        uVar74 = (uint)cVar1;
        if (-1 < (int)uVar74) {
          *(long *)(local_230 + (ulong)uVar74 * 4 + 2) = auVar33._8_8_;
          *(long *)(local_230 + (ulong)uVar74 * 4) = auVar33._0_8_;
          if (iVar18 == 4) {
            auVar86._8_8_ = uStack_1c8;
            auVar86._0_8_ = local_1d0;
            iVar18 = 3;
            local_8c[0] = 3;
            goto switchD_0086a92c_caseD_19;
          }
switchD_0086a92c_caseD_b:
          do {
          } while( true );
        }
      }
switchD_0086a92c_caseD_d:
      if (param_2 != 0) {
        FUN_031cc588(&local_e0,param_3 + 4);
        FUN_0086b864(local_230,local_130,param_1,param_2,&local_e0,&local_98,local_8c,&local_90,
                     local_120,&local_f0,uVar44,uVar113);
        *(float *)(param_4 + 5) = 0.0 - fStack_e8;
        *(float *)((long)param_4 + 0x2c) = 0.0 - fStack_e4;
        *(float *)(param_4 + 4) = 0.0 - local_f0;
        *(float *)((long)param_4 + 0x24) = 0.0 - fStack_ec;
        param_4[1] = CONCAT44((float)((ulong)local_120[0] >> 0x20) -
                              (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20),
                              (float)local_120[0] - (float)*(undefined8 *)(param_3 + 0x18));
      }
      goto LAB_0086b150;
    }
    uStack_148 = CONCAT44(fVar22,fVar51);
    local_150 = CONCAT44(fVar23,fVar20);
LAB_0086b014:
    uVar74 = local_90;
    fVar23 = uStack_228._4_4_;
    fVar22 = (float)uStack_228;
    fVar20 = local_230[1];
    fVar51 = local_230[0];
    local_160 = local_90;
    if ((bool)(bVar12 & local_90 + iVar18 == 4)) goto LAB_0086b150;
    lVar14 = (long)iVar18;
    local_230[lVar14 * 4 + 2] = (float)uStack_228;
    local_220[lVar14 * 4 + -1] = fVar23;
    local_230[lVar14 * 4] = local_230[0];
    local_230[lVar14 * 4 + 1] = fVar20;
    local_220[lVar14 * 4 + 2] = fVar22;
    local_220[lVar14 * 4 + 3] = fVar23;
    local_220[lVar14 * 4] = fVar51;
    local_220[lVar14 * 4 + 1] = fVar20;
    fVar23 = -(float)local_150;
    fVar34 = -local_150._4_4_;
    fVar39 = -(float)uStack_148;
    uStack_148._4_4_ = -uStack_148._4_4_;
    fVar41 = (float)local_150 * (float)local_150;
    fVar40 = local_150._4_4_ * local_150._4_4_;
    fVar42 = (float)uStack_148 * (float)uStack_148;
    uStack_148 = CONCAT44(uStack_148._4_4_,fVar39);
    local_150 = CONCAT44(fVar34,fVar23);
    fVar35 = fVar41 + fVar40 + fVar42;
    auVar46 = ZEXT816(0);
    if (fVar35 != 0.0) {
      fVar35 = SQRT(fVar35);
      fVar41 = SQRT(fVar41 + fVar40 + fVar42);
      auVar46._0_4_ = fVar23 / fVar35;
      auVar46._4_4_ = fVar34 / fVar41;
      auVar46._8_4_ = fVar39 / fVar35;
      auVar46._12_4_ = uStack_148._4_4_ / fVar41;
    }
    fVar47 = (fVar47 - fVar51) * auVar46._0_4_;
    fVar49 = (fVar49 - fVar20) * auVar46._4_4_;
    fStack_25c = (fVar50 - fVar22) * auVar46._8_4_;
    local_260 = fVar47 + fVar49 + fStack_25c;
    fStack_25c = fVar47 + fVar49 + fStack_25c;
    local_98 = CONCAT44((float)((ulong)local_98 >> 0x20) * 1.3,(float)local_98 * 1.3);
    if ((param_2 == 0) &&
       (uVar25 = NEON_fmax(local_98,*(undefined8 *)(param_3 + 0x14),4),
       local_260 - (float)*(undefined8 *)(param_3 + 0x18) <= (float)uVar25)) goto LAB_0086b150;
    uStack_248 = auVar46._8_8_;
    local_250 = auVar46._0_8_;
  } while( true );
switchD_0086a92c_caseD_1a:
  do {
  } while( true );
switchD_0086a92c_caseD_13:
  do {
  } while( true );
switchD_0086a92c_caseD_12:
  do {
  } while( true );
switchD_0086a92c_caseD_c:
  do {
  } while( true );
switchD_0086a92c_caseD_a:
  do {
  } while( true );
}


