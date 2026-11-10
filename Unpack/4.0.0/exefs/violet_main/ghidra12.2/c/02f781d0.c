/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f781d0; name: FUN_02f781d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f781d0(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined3 uVar3;
  undefined3 uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 (*pauVar10) [16];
  undefined1 *puVar11;
  int *piVar12;
  undefined1 (*pauVar13) [16];
  ulong uVar14;
  undefined1 (*pauVar15) [16];
  long lVar16;
  float fVar17;
  byte bVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  byte bVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  byte bVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  uint uVar30;
  undefined1 auVar31 [16];
  ulong uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar42;
  float fVar44;
  float fVar45;
  undefined1 auVar39 [16];
  float fVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar46;
  float fVar47;
  float fVar53;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined8 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  int iVar70;
  int iVar71;
  float fVar72;
  int iVar73;
  float fVar74;
  int iVar75;
  int iVar77;
  int iVar78;
  undefined1 auVar76 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  
  auVar59 = ZEXT816(0);
  piVar12 = (int *)(*(long *)(param_1 + 0x3c0) + 0x48);
  uVar1 = *(uint *)(param_1 + 0x1c60);
  auVar41 = *(undefined1 (*) [16])(param_1 + 0xa0);
  auVar55 = *(undefined1 (*) [16])(param_1 + 0xb0);
  auVar63 = *(undefined1 (*) [16])(param_1 + 0xc0);
  auVar33 = NEON_ext(auVar41,auVar41,8,1);
  auVar39 = NEON_ext(auVar55,auVar55,8,1);
  puVar2 = (undefined8 *)((long)*piVar12 + (long)piVar12);
  uVar6 = puVar2[1];
  uVar57 = *puVar2;
  pauVar13 = *(undefined1 (**) [16])(param_1 + 0x1c58);
  auVar31 = NEON_ext(auVar63,auVar63,8,1);
  fVar67 = (float)uVar57;
  fVar38 = fVar67 * (float)*(undefined8 *)(param_1 + 0xd0);
  fVar68 = (float)((ulong)uVar57 >> 0x20);
  fVar42 = fVar68 * (float)((ulong)*(undefined8 *)(param_1 + 0xd0) >> 0x20);
  uVar19 = (undefined1)((uint)fVar42 >> 8);
  uVar20 = (undefined1)((uint)fVar42 >> 0x10);
  uVar21 = (undefined1)((uint)fVar42 >> 0x18);
  fVar69 = (float)uVar6;
  fVar44 = fVar69 * (float)*(undefined8 *)(param_1 + 0xd8);
  uVar23 = (undefined1)((uint)fVar44 >> 8);
  uVar24 = (undefined1)((uint)fVar44 >> 0x10);
  uVar25 = (undefined1)((uint)fVar44 >> 0x18);
  fVar17 = (float)((ulong)uVar6 >> 0x20);
  fVar62 = fVar17 * (float)((ulong)*(undefined8 *)(param_1 + 0xd8) >> 0x20);
  uVar27 = (undefined1)((uint)fVar62 >> 8);
  uVar28 = (undefined1)((uint)fVar62 >> 0x10);
  uVar29 = (undefined1)((uint)fVar62 >> 0x18);
  lVar16 = 4;
  auVar48[4] = SUB41(fVar42,0);
  auVar48._0_4_ = fVar38;
  auVar48[5] = uVar19;
  auVar48[6] = uVar20;
  auVar48[7] = uVar21;
  auVar48[8] = SUB41(fVar44,0);
  auVar48[9] = uVar23;
  auVar48[10] = uVar24;
  auVar48[0xb] = uVar25;
  auVar48[0xc] = SUB41(fVar62,0);
  auVar48[0xd] = uVar27;
  auVar48[0xe] = uVar28;
  auVar48[0xf] = uVar29;
  auVar54[4] = SUB41(fVar42,0);
  auVar54._0_4_ = fVar38;
  auVar54[5] = uVar19;
  auVar54[6] = uVar20;
  auVar54[7] = uVar21;
  auVar54[8] = SUB41(fVar44,0);
  auVar54[9] = uVar23;
  auVar54[10] = uVar24;
  auVar54[0xb] = uVar25;
  auVar54[0xc] = SUB41(fVar62,0);
  auVar54[0xd] = uVar27;
  auVar54[0xe] = uVar28;
  auVar54[0xf] = uVar29;
  auVar48 = NEON_ext(auVar48,auVar54,8,1);
  fVar17 = fVar17 + fVar38 + fVar42 + auVar48._0_4_;
  fVar38 = auVar33._0_4_ * fVar69 + auVar41._0_4_ * fVar67 + auVar41._4_4_ * fVar68;
  fVar42 = auVar39._0_4_ * fVar69 + auVar55._0_4_ * fVar67 + auVar55._4_4_ * fVar68;
  fVar44 = auVar31._0_4_ * fVar69 + auVar63._0_4_ * fVar67 + auVar63._4_4_ * fVar68;
  fVar62 = 0.0 - fVar38;
  fVar67 = 0.0 - fVar42;
  fVar68 = 0.0 - fVar44;
  fVar69 = 0.0 - fVar17;
  switch(uVar1 & 3) {
  case 0:
switchD_02f78280_caseD_0:
    auVar48 = *pauVar13;
    uVar57 = auVar48._0_8_;
    auVar31 = NEON_ext(auVar48,auVar48,8,1);
    auVar54 = *(undefined1 (*) [16])(*pauVar13 + 0xc);
    auVar41 = *(undefined1 (*) [16])(pauVar13[1] + 8);
    auVar63 = NEON_ext(auVar41,auVar41,8,1);
    auVar55 = NEON_ext(auVar54,auVar54,8,1);
    auVar64._0_4_ = fVar62 * auVar48._0_4_ + fVar67 * auVar48._4_4_ + fVar68 * auVar31._0_4_;
    auVar64._4_4_ = fVar62 * auVar54._0_4_ + fVar67 * auVar54._4_4_ + fVar68 * auVar55._0_4_;
    auVar64._8_4_ = fVar62 * auVar41._0_4_ + fVar67 * auVar41._4_4_ + fVar68 * auVar63._0_4_;
    auVar64._12_4_ =
         fVar62 * (float)*(undefined8 *)(pauVar13[2] + 4) +
         fVar67 * (float)((ulong)*(undefined8 *)(pauVar13[2] + 4) >> 0x20) +
         fVar68 * *(float *)(pauVar13[2] + 0xc);
    auVar59._8_8_ = _UNK_03cab988;
    auVar59._0_8_ = _DAT_03cab980;
    break;
  case 1:
    uVar57 = *(undefined8 *)*pauVar13;
    lVar16 = 1;
    fVar69 = fVar62 * (float)uVar57;
    fVar45 = fVar67 * (float)((ulong)uVar57 >> 0x20);
    fVar47 = fVar68 * *(float *)(*pauVar13 + 8);
    auVar64._0_8_ = CONCAT44(fVar69 + fVar45 + fVar47,fVar69 + fVar45 + fVar47);
    auVar64._8_8_ = auVar64._0_8_;
    break;
  case 2:
    auVar48 = *pauVar13;
    uVar57 = auVar48._0_8_;
    fVar45 = fVar62 * auVar48._0_4_;
    fVar47 = fVar67 * auVar48._4_4_;
    fVar72 = fVar68 * auVar48._8_4_;
    fVar74 = fVar69 * auVar48._12_4_;
    auVar39._4_4_ = fVar47;
    auVar39._0_4_ = fVar45;
    auVar39._8_4_ = fVar72;
    auVar39._12_4_ = fVar74;
    auVar8._4_4_ = fVar47;
    auVar8._0_4_ = fVar45;
    auVar8._8_4_ = fVar72;
    auVar8._12_4_ = fVar74;
    auVar54 = NEON_ext(auVar39,auVar8,8,1);
    auVar58._0_4_ = fVar62 * (float)*(undefined8 *)(*pauVar13 + 0xc);
    auVar58._4_4_ = fVar67 * (float)((ulong)*(undefined8 *)(*pauVar13 + 0xc) >> 0x20);
    auVar58._8_4_ = fVar68 * *(float *)(pauVar13[1] + 4);
    auVar58._12_4_ = fVar69 * *(float *)(pauVar13[1] + 4);
    auVar48 = NEON_ext(auVar58,auVar58,8,1);
    auVar64._4_4_ = auVar58._0_4_ + auVar58._4_4_ + auVar48._0_4_;
    auVar64._0_4_ = auVar54._0_4_ + fVar45 + fVar47;
    auVar64._8_8_ = 0xff800000ff800000;
    auVar59._8_8_ = _UNK_03cab988;
    auVar59._0_8_ = _DAT_03cab980;
    lVar16 = 2;
    break;
  case 3:
    if (uVar1 != 3) {
      lVar16 = 3;
      goto switchD_02f78280_caseD_0;
    }
    fVar45 = *(float *)(*pauVar13 + 8);
    auVar63._12_4_ = fVar45;
    auVar63._8_4_ = fVar45;
    auVar63._0_8_ = *(undefined8 *)*pauVar13;
    fVar74 = *(float *)(*pauVar13 + 0xc);
    fVar43 = *(float *)pauVar13[1];
    fVar46 = *(float *)(pauVar13[1] + 8);
    fVar53 = *(float *)(pauVar13[1] + 0xc);
    fVar47 = *(float *)(pauVar13[1] + 4);
    fVar72 = *(float *)pauVar13[2];
    auVar41._0_4_ = fVar62 * (float)auVar63._0_8_;
    auVar41._4_4_ = fVar67 * (float)((ulong)auVar63._0_8_ >> 0x20);
    auVar41._8_4_ = fVar68 * fVar45;
    auVar41._12_4_ = fVar69 * fVar45;
    auVar31._0_4_ = fVar62 * fVar74;
    auVar31._4_4_ = fVar67 * fVar43;
    auVar31._8_4_ = fVar68 * fVar47;
    auVar31._12_4_ = fVar69 * fVar47;
    auVar33._0_4_ = fVar62 * fVar46;
    auVar33._4_4_ = fVar67 * fVar53;
    auVar33._8_4_ = fVar68 * fVar72;
    auVar33._12_4_ = fVar69 * fVar72;
    auVar48 = NEON_ext(auVar41,auVar41,8,1);
    auVar54 = NEON_ext(auVar31,auVar31,8,1);
    auVar55 = NEON_ext(auVar33,auVar33,8,1);
    fVar62 = auVar48._0_4_ + auVar41._0_4_ + auVar41._4_4_;
    fVar67 = auVar54._0_4_ + auVar31._0_4_ + auVar31._4_4_;
    uVar57 = CONCAT44(fVar67,fVar62);
    fVar68 = auVar55._0_4_ + auVar33._0_4_ + auVar33._4_4_;
    uVar57 = NEON_fmaxp(uVar57,uVar57,4);
    uVar57 = NEON_fmax(CONCAT44(fVar68,fVar68),uVar57,4);
    auVar55._12_4_ =
         (int)(char)PTR_DAT_047d1a18
                    [(-(uint)((float)((ulong)uVar57 >> 0x20) <= fVar67) & 2) +
                     (uint)((float)uVar57 <= fVar62) | -(uint)((float)uVar57 <= fVar68) & 4] |
         0x3f000000;
    auVar55._0_12_ =
         *(undefined1 (*) [12])
          (*pauVar13 +
          (long)(char)PTR_DAT_047d1a18
                      [(-(uint)((float)((ulong)uVar57 >> 0x20) <= fVar67) & 2) +
                       (uint)((float)uVar57 <= fVar62) | -(uint)((float)uVar57 <= fVar68) & 4] * 0xc
          );
    goto LAB_02f785f4;
  }
  iVar75 = (int)lVar16;
  iVar77 = (int)((ulong)_DAT_03cab980 >> 0x20);
  iVar78 = (int)((ulong)_UNK_03cab988 >> 0x20);
  if (iVar75 < (int)uVar1) {
    pauVar15 = (undefined1 (*) [16])(pauVar13[1] + lVar16 * 0xc + 8);
    iVar70 = iVar75 + (int)_DAT_03cab980;
    iVar71 = iVar75 + iVar77;
    iVar73 = iVar75 + (int)_UNK_03cab988;
    iVar75 = iVar75 + iVar78;
    do {
      auVar48 = *(undefined1 (*) [16])(pauVar15[-2] + 8);
      pauVar10 = pauVar15 + 1;
      lVar16 = lVar16 + 4;
      auVar54 = *(undefined1 (*) [16])(pauVar15[-1] + 4);
      auVar41 = *pauVar15;
      puVar11 = *pauVar15;
      auVar31 = NEON_ext(auVar41,auVar41,8,1);
      auVar55 = NEON_ext(auVar48,auVar48,8,1);
      auVar63 = NEON_ext(auVar54,auVar54,8,1);
      pauVar15 = pauVar15 + 3;
      auVar79._0_4_ = fVar62 * auVar48._0_4_ + fVar67 * auVar48._4_4_ + fVar68 * auVar55._0_4_;
      auVar79._4_4_ = fVar62 * auVar54._0_4_ + fVar67 * auVar54._4_4_ + fVar68 * auVar63._0_4_;
      auVar79._8_4_ = fVar62 * auVar41._0_4_ + fVar67 * auVar41._4_4_ + fVar68 * auVar31._0_4_;
      auVar79._12_4_ =
           fVar62 * (float)*(undefined8 *)(puVar11 + 0xc) +
           fVar67 * (float)((ulong)*(undefined8 *)(puVar11 + 0xc) >> 0x20) +
           fVar68 * *(float *)(*pauVar10 + 4);
      auVar81._0_4_ = -(uint)(auVar64._0_4_ < auVar79._0_4_);
      auVar81._4_4_ = -(uint)(auVar64._4_4_ < auVar79._4_4_);
      auVar81._8_4_ = -(uint)(auVar64._8_4_ < auVar79._8_4_);
      auVar81._12_4_ = -(uint)(auVar64._12_4_ < auVar79._12_4_);
      auVar64 = NEON_fmax(auVar79,auVar64,4);
      auVar7._4_4_ = iVar71;
      auVar7._0_4_ = iVar70;
      auVar7._8_4_ = iVar73;
      auVar7._12_4_ = iVar75;
      auVar59 = auVar59 ^ (auVar59 ^ auVar7) & auVar81;
      iVar70 = iVar70 + 4;
      iVar71 = iVar71 + 4;
      iVar73 = iVar73 + 4;
      iVar75 = iVar75 + 4;
    } while (lVar16 < (int)uVar1);
  }
  auVar48 = NEON_rev64(auVar64,4);
  auVar49._0_4_ = -(uint)(auVar48._0_4_ <= auVar64._0_4_);
  auVar49._4_4_ = -(uint)(auVar48._4_4_ <= auVar64._4_4_);
  auVar49._8_4_ = -(uint)(auVar48._8_4_ <= auVar64._8_4_);
  auVar49._12_4_ = -(uint)(auVar48._12_4_ <= auVar64._12_4_);
  auVar48 = NEON_fmax(auVar64,auVar48,4);
  auVar54 = NEON_rev64(auVar59,4);
  auVar54 = auVar54 ^ (auVar54 ^ auVar59) & auVar49;
  auVar41 = NEON_ext(auVar48,auVar48,8,1);
  auVar55 = NEON_ext(auVar54,auVar54,8,1);
  uVar30 = auVar55._0_4_ ^ (auVar55._0_4_ ^ auVar54._0_4_) & -(uint)(auVar41._0_4_ <= auVar48._0_4_)
  ;
  auVar55._12_4_ = uVar30 | 0x3f000000;
  auVar55._0_12_ = *(undefined1 (*) [12])(*pauVar13 + (long)(int)uVar30 * 0xc);
  lVar16 = 4;
  switch(uVar1 & 3) {
  case 1:
    lVar16 = 1;
    fVar62 = fVar38 * (float)uVar57;
    fVar67 = fVar42 * (float)((ulong)uVar57 >> 0x20);
    fVar68 = fVar44 * *(float *)(*pauVar13 + 8);
    auVar36._0_8_ = CONCAT44(fVar62 + fVar67 + fVar68,fVar62 + fVar67 + fVar68);
    auVar61 = ZEXT816(0);
    auVar36._8_8_ = auVar36._0_8_;
    break;
  case 2:
    lVar16 = 2;
    auVar34._0_4_ = fVar38 * *(float *)*pauVar13;
    auVar34._4_4_ = fVar42 * *(float *)(*pauVar13 + 4);
    auVar34._8_4_ = fVar44 * *(float *)(*pauVar13 + 8);
    auVar34._12_4_ = fVar17 * *(float *)(*pauVar13 + 0xc);
    auVar48 = NEON_ext(auVar34,auVar34,8,1);
    auVar60._0_4_ = fVar38 * (float)*(undefined8 *)(*pauVar13 + 0xc);
    auVar60._4_4_ = fVar42 * (float)((ulong)*(undefined8 *)(*pauVar13 + 0xc) >> 0x20);
    auVar60._8_4_ = fVar44 * *(float *)(pauVar13[1] + 4);
    auVar60._12_4_ = fVar17 * *(float *)(pauVar13[1] + 4);
    auVar36._0_4_ = auVar48._0_4_ + auVar34._0_4_ + auVar34._4_4_;
    auVar48 = NEON_ext(auVar60,auVar60,8,1);
    auVar36._4_4_ = auVar60._0_4_ + auVar60._4_4_ + auVar48._0_4_;
    auVar36._8_8_ = 0xff800000ff800000;
    goto LAB_02f786dc;
  case 3:
    if (uVar1 == 3) {
      auVar63._12_4_ = *(undefined4 *)(*pauVar13 + 8);
      auVar63._8_4_ = *(undefined4 *)(*pauVar13 + 8);
      fVar47 = *(float *)(pauVar13[1] + 4);
      fVar72 = *(float *)pauVar13[2];
      auVar63._0_8_ = uVar57;
      fVar74 = *(float *)(*pauVar13 + 0xc);
      fVar43 = *(float *)pauVar13[1];
      fVar46 = *(float *)(pauVar13[1] + 8);
      fVar53 = *(float *)(pauVar13[1] + 0xc);
LAB_02f785f4:
      auVar35._0_4_ = fVar38 * auVar63._0_4_;
      auVar35._4_4_ = fVar42 * auVar63._4_4_;
      auVar35._8_4_ = fVar44 * auVar63._8_4_;
      auVar35._12_4_ = fVar17 * auVar63._12_4_;
      auVar40._0_4_ = fVar38 * fVar74;
      auVar40._4_4_ = fVar42 * fVar43;
      auVar40._8_4_ = fVar44 * fVar47;
      auVar40._12_4_ = fVar17 * fVar47;
      auVar50._0_4_ = fVar38 * fVar46;
      auVar50._4_4_ = fVar42 * fVar53;
      auVar50._8_4_ = fVar44 * fVar72;
      auVar50._12_4_ = fVar17 * fVar72;
      auVar48 = NEON_ext(auVar35,auVar35,8,1);
      auVar54 = NEON_ext(auVar40,auVar40,8,1);
      auVar41 = NEON_ext(auVar50,auVar50,8,1);
      fVar62 = auVar48._0_4_ + auVar35._0_4_ + auVar35._4_4_;
      fVar67 = auVar54._0_4_ + auVar40._0_4_ + auVar40._4_4_;
      uVar57 = CONCAT44(fVar67,fVar62);
      fVar68 = auVar41._0_4_ + auVar50._0_4_ + auVar50._4_4_;
      uVar57 = NEON_fmaxp(uVar57,uVar57,4);
      uVar57 = NEON_fmax(CONCAT44(fVar68,fVar68),uVar57,4);
      uVar14 = (ulong)(char)PTR_DAT_047d1a18
                            [(-(uint)((float)((ulong)uVar57 >> 0x20) <= fVar67) & 2) +
                             (uint)((float)uVar57 <= fVar62) | -(uint)((float)uVar57 <= fVar68) & 4]
      ;
      uVar32 = uVar14;
      goto LAB_02f787b4;
    }
    lVar16 = 3;
  case 0:
    auVar48 = *pauVar13;
    auVar54 = *(undefined1 (*) [16])(*pauVar13 + 0xc);
    auVar41 = *(undefined1 (*) [16])(pauVar13[1] + 8);
    auVar33 = NEON_ext(auVar41,auVar41,8,1);
    auVar63 = NEON_ext(auVar48,auVar48,8,1);
    auVar31 = NEON_ext(auVar54,auVar54,8,1);
    auVar36._0_4_ = fVar38 * auVar48._0_4_ + fVar42 * auVar48._4_4_ + fVar44 * auVar63._0_4_;
    auVar36._4_4_ = fVar38 * auVar54._0_4_ + fVar42 * auVar54._4_4_ + fVar44 * auVar31._0_4_;
    auVar36._8_4_ = fVar38 * auVar41._0_4_ + fVar42 * auVar41._4_4_ + fVar44 * auVar33._0_4_;
    auVar36._12_4_ =
         fVar38 * (float)*(undefined8 *)(pauVar13[2] + 4) +
         fVar42 * (float)((ulong)*(undefined8 *)(pauVar13[2] + 4) >> 0x20) +
         fVar44 * *(float *)(pauVar13[2] + 0xc);
LAB_02f786dc:
    auVar61._8_8_ = _UNK_03cab988;
    auVar61._0_8_ = _DAT_03cab980;
  }
  iVar75 = (int)lVar16;
  if (iVar75 < (int)uVar1) {
    pauVar15 = (undefined1 (*) [16])(pauVar13[1] + lVar16 * 0xc + 8);
    auVar65._0_4_ = iVar75 + (int)_DAT_03cab980;
    auVar65._4_4_ = iVar75 + iVar77;
    auVar65._8_4_ = iVar75 + (int)_UNK_03cab988;
    auVar65._12_4_ = iVar75 + iVar78;
    do {
      auVar48 = *(undefined1 (*) [16])(pauVar15[-2] + 8);
      pauVar10 = pauVar15 + 1;
      lVar16 = lVar16 + 4;
      auVar54 = *(undefined1 (*) [16])(pauVar15[-1] + 4);
      auVar41 = *pauVar15;
      puVar11 = *pauVar15;
      auVar33 = NEON_ext(auVar41,auVar41,8,1);
      auVar63 = NEON_ext(auVar48,auVar48,8,1);
      auVar31 = NEON_ext(auVar54,auVar54,8,1);
      pauVar15 = pauVar15 + 3;
      auVar76._0_4_ = fVar38 * auVar48._0_4_ + fVar42 * auVar48._4_4_ + fVar44 * auVar63._0_4_;
      auVar76._4_4_ = fVar38 * auVar54._0_4_ + fVar42 * auVar54._4_4_ + fVar44 * auVar31._0_4_;
      auVar76._8_4_ = fVar38 * auVar41._0_4_ + fVar42 * auVar41._4_4_ + fVar44 * auVar33._0_4_;
      auVar76._12_4_ =
           fVar38 * (float)*(undefined8 *)(puVar11 + 0xc) +
           fVar42 * (float)((ulong)*(undefined8 *)(puVar11 + 0xc) >> 0x20) +
           fVar44 * *(float *)(*pauVar10 + 4);
      auVar80._0_4_ = -(uint)(auVar36._0_4_ < auVar76._0_4_);
      auVar80._4_4_ = -(uint)(auVar36._4_4_ < auVar76._4_4_);
      auVar80._8_4_ = -(uint)(auVar36._8_4_ < auVar76._8_4_);
      auVar80._12_4_ = -(uint)(auVar36._12_4_ < auVar76._12_4_);
      auVar36 = NEON_fmax(auVar76,auVar36,4);
      auVar61 = auVar61 ^ (auVar61 ^ auVar65) & auVar80;
      auVar66._0_4_ = auVar65._0_4_ + 4;
      auVar66._4_4_ = auVar65._4_4_ + 4;
      auVar66._8_4_ = auVar65._8_4_ + 4;
      auVar66._12_4_ = auVar65._12_4_ + 4;
      auVar65 = auVar66;
    } while (lVar16 < (int)uVar1);
  }
  auVar48 = NEON_rev64(auVar36,4);
  auVar51._0_4_ = -(uint)(auVar48._0_4_ <= auVar36._0_4_);
  auVar51._4_4_ = -(uint)(auVar48._4_4_ <= auVar36._4_4_);
  auVar51._8_4_ = -(uint)(auVar48._8_4_ <= auVar36._8_4_);
  auVar51._12_4_ = -(uint)(auVar48._12_4_ <= auVar36._12_4_);
  auVar48 = NEON_fmax(auVar36,auVar48,4);
  auVar54 = NEON_rev64(auVar61,4);
  auVar41 = NEON_ext(auVar48,auVar48,8,1);
  auVar54 = auVar54 ^ (auVar54 ^ auVar61) & auVar51;
  auVar63 = NEON_ext(auVar54,auVar54,8,1);
  uVar32 = auVar63._0_8_ ^
           (auVar63._0_8_ ^ auVar54._0_8_) & (ulong)-(uint)(auVar41._0_4_ <= auVar48._0_4_);
  uVar14 = uVar32 & 0xffffffff;
  uVar32 = (ulong)(int)uVar32;
LAB_02f787b4:
  auVar52._0_4_ = fVar38 * auVar55._0_4_;
  auVar52._4_4_ = fVar42 * auVar55._4_4_;
  auVar52._8_4_ = fVar44 * auVar55._8_4_;
  auVar52._12_4_ = fVar17 * auVar55._12_4_;
  auVar9 = *(undefined1 (*) [12])(*pauVar13 + uVar32 * 0xc);
  fVar62 = (float)((uint)uVar14 | 0x3f000000);
  auVar48 = NEON_ext(auVar52,auVar52,8,1);
  fVar67 = auVar48._0_4_ + fVar17;
  auVar37._12_4_ = fVar62;
  auVar37._0_12_ = auVar9;
  auVar56._0_4_ = fVar38 * auVar9._0_4_;
  auVar56._4_4_ = fVar42 * auVar9._4_4_;
  auVar56._8_4_ = fVar44 * auVar9._8_4_;
  auVar56._12_4_ = fVar17 * fVar62;
  auVar48 = NEON_ext(auVar56,auVar56,8,1);
  fVar47 = *(float *)(*(long *)(param_1 + 0x3c0) + 0x20);
  fVar17 = auVar48._0_4_ + fVar17;
  iVar75 = -(uint)(auVar52._0_4_ + auVar52._4_4_ + fVar67 <
                  -(auVar56._0_4_ + auVar56._4_4_ + fVar17));
  bVar26 = (byte)((uint)iVar75 >> 0x18);
  iVar77 = -(uint)(auVar52._0_4_ + auVar52._4_4_ + fVar67 <
                  -(auVar56._0_4_ + auVar56._4_4_ + fVar17));
  uVar19 = (undefined1)((uint)iVar77 >> 8);
  uVar20 = (undefined1)((uint)iVar77 >> 0x10);
  bVar22 = (byte)((uint)iVar77 >> 0x18);
  fVar62 = fVar47 + *(float *)(param_2 + 3);
  auVar5[4] = (char)iVar77;
  auVar5._0_4_ = iVar75;
  auVar5[5] = uVar19;
  auVar5[6] = uVar20;
  auVar5[7] = bVar22;
  auVar5[8] = (char)iVar75;
  auVar5[9] = (char)((uint)iVar75 >> 8);
  auVar5[10] = (char)((uint)iVar75 >> 0x10);
  auVar5[0xb] = bVar26;
  auVar5[0xc] = (char)iVar77;
  auVar5[0xd] = uVar19;
  auVar5[0xe] = uVar20;
  auVar5[0xf] = bVar22;
  auVar55 = auVar55 ^ (auVar55 ^ auVar37) & auVar5;
  fVar17 = (float)*param_2 - (float)*(undefined8 *)((long)param_2 + 0xc) * fVar62;
  fVar67 = (float)((ulong)*param_2 >> 0x20) -
           (float)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20) * fVar62;
  fVar45 = *(float *)(param_2 + 1) - *(float *)((long)param_2 + 0x14) * fVar62;
  fVar62 = *(float *)(*(long *)(param_1 + 0x388) + 0x20);
  bVar18 = bVar26 & 0x80 ^ (byte)((uint)fVar38 >> 0x18);
  bVar22 = bVar22 & 0x80 ^ (byte)((uint)fVar42 >> 0x18);
  bVar26 = bVar26 & 0x80 ^ (byte)((uint)fVar44 >> 0x18);
  uVar3 = SUB43(fVar38,0);
  *(ulong *)((long)param_2 + 0xc) =
       CONCAT17(bVar22,CONCAT16((char)((uint)fVar42 >> 0x10),
                                CONCAT15((char)((uint)fVar42 >> 8),
                                         CONCAT14(SUB41(fVar42,0),CONCAT13(bVar18,uVar3)))));
  uVar4 = SUB43(fVar44,0);
  *(float *)((long)param_2 + 0x14) = (float)CONCAT13(bVar26,uVar4);
  fVar38 = (auVar55._0_4_ - fVar17) * (float)CONCAT13(bVar18,uVar3);
  fVar68 = (auVar55._4_4_ - fVar67) * (float)CONCAT13(bVar22,SUB43(fVar42,0));
  fVar69 = (auVar55._8_4_ - fVar45) * (float)CONCAT13(bVar26,uVar4);
  fVar44 = (fVar38 + fVar68 + fVar69) - fVar62;
  *(float *)(param_2 + 3) = fVar44 - fVar47;
  fVar67 = fVar67 + ((fVar38 + fVar68 + fVar69) - fVar62) * (float)CONCAT13(bVar22,SUB43(fVar42,0));
  *param_2 = CONCAT17((char)((uint)fVar67 >> 0x18),
                      CONCAT16((char)((uint)fVar67 >> 0x10),
                               CONCAT15((char)((uint)fVar67 >> 8),
                                        CONCAT14(SUB41(fVar67,0),
                                                 fVar17 + fVar44 * (float)CONCAT13(bVar18,uVar3)))))
  ;
  *(float *)(param_2 + 1) = fVar45 + fVar44 * (float)CONCAT13(bVar26,uVar4);
  *param_3 = auVar55[0xc];
  *(undefined4 *)(param_3 + 1) = 0x43020100;
  return;
}


