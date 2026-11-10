/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ed1b30; name: FUN_02ed1b30
 */


void FUN_02ed1b30(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  long lVar29;
  undefined *puVar30;
  uint uVar31;
  int iVar32;
  undefined4 uVar33;
  long *plVar34;
  ulong uVar35;
  long *plVar36;
  uint uVar37;
  ulong uVar38;
  undefined8 *puVar39;
  ulong uVar40;
  byte *pbVar41;
  char cVar42;
  ulong *puVar43;
  float *pfVar44;
  undefined1 uVar45;
  undefined4 uVar46;
  float *pfVar47;
  float *pfVar48;
  float *pfVar49;
  ulong uVar50;
  long *plVar51;
  long lVar52;
  uint uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar66;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined8 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar70 [12];
  undefined8 uVar69;
  undefined1 auVar71 [16];
  float fVar72;
  float fVar73;
  undefined1 auVar74 [16];
  undefined8 uVar75;
  undefined8 uVar76;
  undefined1 auVar77 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined2 local_1a0 [8];
  undefined8 local_190;
  undefined8 local_188;
  long local_180;
  uint local_178;
  long local_170;
  undefined2 local_168 [8];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  long local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  ulong uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  ulong local_100;
  byte *local_f8;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  ulong local_d0;
  byte *local_c8;
  ulong local_c0 [2];
  float local_b0 [4];
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90 [8];
  
  puVar30 = PTR_DAT_047d1a60;
  if ((int)param_1[1] != 0) {
    uVar35 = param_1[3];
    uVar50 = param_1[2];
    fVar59 = (float)param_1[5];
    fVar62 = (float)param_1[4];
    fVar56 = (float)((ulong)param_1[4] >> 0x20);
    auVar71._0_4_ =
         (((float)uVar50 - *(float *)(param_3 + 8)) - *(float *)(param_3 + 2)) *
         *(float *)(param_3 + 6);
    auVar71._4_4_ =
         (((float)(uVar50 >> 0x20) - *(float *)((long)param_3 + 0x44)) -
         *(float *)((long)param_3 + 0x14)) * *(float *)((long)param_3 + 0x34);
    auVar71._8_4_ =
         (((float)uVar35 - *(float *)(param_3 + 9)) - *(float *)(param_3 + 3)) *
         *(float *)(param_3 + 7);
    auVar71._12_4_ =
         (((float)(uVar35 >> 0x20) - *(float *)((long)param_3 + 0x4c)) -
         *(float *)((long)param_3 + 0x1c)) * *(float *)((long)param_3 + 0x3c);
    auVar63._0_4_ =
         *(float *)(param_3 + 6) * ((fVar62 + *(float *)(param_3 + 8)) - *(float *)(param_3 + 2));
    auVar63._4_4_ =
         *(float *)((long)param_3 + 0x34) *
         ((fVar56 + *(float *)((long)param_3 + 0x44)) - *(float *)((long)param_3 + 0x14));
    auVar63._8_4_ =
         *(float *)(param_3 + 7) * ((fVar59 + *(float *)(param_3 + 9)) - *(float *)(param_3 + 3));
    auVar63._12_4_ =
         *(float *)((long)param_3 + 0x3c) *
         (((float)((ulong)param_1[5] >> 0x20) + *(float *)((long)param_3 + 0x4c)) -
         *(float *)((long)param_3 + 0x1c));
    auVar68 = NEON_fmin(auVar71,auVar63,4);
    auVar63 = NEON_fmax(auVar71,auVar63,4);
    uVar69 = NEON_fmaxp(auVar68._0_8_,auVar68._0_8_,4);
    uVar67 = NEON_fmax(CONCAT44(auVar68._8_4_,auVar68._8_4_),uVar69,4);
    uVar69 = NEON_fminp(auVar63._0_8_,auVar63._0_8_,4);
    uVar69 = NEON_fmin(CONCAT44(auVar63._8_4_,auVar63._8_4_),uVar69,4);
    uVar67 = NEON_fmax(uVar67,0,4);
    uVar69 = NEON_fmin(uVar69,*(undefined8 *)(*(long *)(*param_3 + 0x80) + 0x10),4);
    if (!(bool)(~((float)uVar67 <= (float)uVar69) & 1)) {
      lVar29 = param_2[1];
      uVar69 = NEON_fmov(0x3f800000,4);
      NEON_fmov(0x3f800000,4);
      uVar38 = 0;
      pbVar41 = (byte *)(*param_1 + (long)param_1);
LAB_02ed1c6c:
      while ((char)pbVar41[3] < '\0') {
        uVar40 = (long)(int)uVar38 + 1;
        local_f0 = (float)uVar50;
        fStack_ec = (float)(uVar50 >> 0x20);
        fStack_e8 = (float)uVar35;
        local_100 = CONCAT44(local_100._4_4_,(int)uVar40);
        uVar53 = ((uint)*(ushort *)(pbVar41 + 4) << 1 | (pbVar41[3] & 0x7f) << 0x11) + (int)uVar38;
        uVar38 = (ulong)uVar53;
        local_d0 = CONCAT44(local_d0._4_4_,uVar53);
        local_f8 = (byte *)((long)param_1 + uVar40 * 6 + *param_1);
        local_c8 = (byte *)((long)param_1 + (long)(int)uVar53 * 6 + *param_1);
        bVar23 = *local_f8 >> 4;
        bVar11 = *local_f8 & 0xf;
        fVar55 = (fVar62 - local_f0) * 0.0044247787;
        fVar66 = (fVar56 - fStack_ec) * 0.0044247787;
        fVar54 = (fVar59 - fStack_e8) * 0.0044247787;
        bVar24 = local_f8[1] >> 4;
        bVar25 = local_f8[2] >> 4;
        bVar4 = local_f8[2] & 0xf;
        bVar26 = *local_c8 >> 4;
        fVar60 = local_f0 + (float)(byte)(bVar23 * bVar23) * fVar55;
        bVar23 = local_f8[1] & 0xf;
        bVar5 = *local_c8 & 0xf;
        bVar27 = local_c8[1] >> 4;
        bVar28 = local_c8[2] >> 4;
        bVar6 = local_c8[1] & 0xf;
        bVar7 = local_c8[2] & 0xf;
        fVar61 = fStack_ec + (float)(byte)(bVar24 * bVar24) * fVar66;
        local_120 = CONCAT44(fVar61,fVar60);
        fVar72 = fStack_e8 + (float)(byte)(bVar25 * bVar25) * fVar54;
        uStack_118 = (ulong)(uint)fVar72;
        fVar73 = fVar62 - (float)(byte)(bVar11 * bVar11) * fVar55;
        fVar78 = fVar56 - (float)(byte)(bVar23 * bVar23) * fVar66;
        local_110 = CONCAT44(fVar78,fVar73);
        fVar79 = fVar59 - (float)(byte)(bVar4 * bVar4) * fVar54;
        local_108 = (ulong)(uint)fVar79;
        local_f0 = local_f0 + (float)(byte)(bVar26 * bVar26) * fVar55;
        fStack_ec = fStack_ec + (float)(byte)(bVar27 * bVar27) * fVar66;
        uStack_d4 = 0;
        fStack_e8 = fStack_e8 + (float)(byte)(bVar28 * bVar28) * fVar54;
        local_e0 = fVar62 - (float)(byte)(bVar5 * bVar5) * fVar55;
        fStack_dc = fVar56 - (float)(byte)(bVar6 * bVar6) * fVar66;
        fStack_d8 = fVar59 - (float)(byte)(bVar7 * bVar7) * fVar54;
        fVar66 = *(float *)(param_3 + 6);
        fVar54 = *(float *)((long)param_3 + 0x34);
        fVar57 = *(float *)(param_3 + 7);
        fVar58 = *(float *)((long)param_3 + 0x3c);
        fVar62 = *(float *)(param_3 + 8);
        fVar56 = *(float *)((long)param_3 + 0x44);
        fVar59 = *(float *)(param_3 + 9);
        fVar55 = *(float *)((long)param_3 + 0x4c);
        fVar84 = (float)param_3[2];
        fVar85 = (float)((ulong)param_3[2] >> 0x20);
        fVar86 = (float)param_3[3];
        fVar87 = (float)((ulong)param_3[3] >> 0x20);
        uVar88 = *(undefined8 *)(*(long *)(*param_3 + 0x80) + 0x10);
        fVar80 = fVar66 * ((fVar62 + fVar73) - fVar84);
        fVar81 = fVar54 * ((fVar56 + fVar78) - fVar85);
        fVar82 = fVar57 * ((fVar59 + fVar79) - fVar86);
        fVar83 = fVar58 * ((fVar55 + 0.0) - fVar87);
        auVar77._0_4_ = ((fVar60 - fVar62) - fVar84) * fVar66;
        auVar77._4_4_ = ((fVar61 - fVar56) - fVar85) * fVar54;
        auVar77._8_4_ = ((fVar72 - fVar59) - fVar86) * fVar57;
        auVar77._12_4_ = ((0.0 - fVar55) - fVar87) * fVar58;
        auVar68._4_4_ = fVar81;
        auVar68._0_4_ = fVar80;
        auVar68._8_4_ = fVar82;
        auVar68._12_4_ = fVar83;
        auVar68 = NEON_fmin(auVar77,auVar68,4);
        auVar20._4_4_ = fVar81;
        auVar20._0_4_ = fVar80;
        auVar20._8_4_ = fVar82;
        auVar20._12_4_ = fVar83;
        auVar63 = NEON_fmax(auVar77,auVar20,4);
        uVar67 = NEON_fmaxp(auVar68._0_8_,auVar68._0_8_,4);
        uVar67 = NEON_fmax(CONCAT44(auVar68._8_4_,auVar68._8_4_),uVar67,4);
        uVar89 = NEON_fminp(auVar63._0_8_,auVar63._0_8_,4);
        uVar89 = NEON_fmin(CONCAT44(auVar63._8_4_,auVar63._8_4_),uVar89,4);
        uVar75 = NEON_fmin(uVar89,uVar88,4);
        uVar89 = NEON_fmax(uVar67,0,4);
        fVar60 = ((local_f0 - fVar62) - fVar84) * fVar66;
        fVar61 = ((fStack_ec - fVar56) - fVar85) * fVar54;
        fVar72 = ((fStack_e8 - fVar59) - fVar86) * fVar57;
        fVar80 = ((0.0 - fVar55) - fVar87) * fVar58;
        auVar74._0_4_ = fVar66 * ((fVar62 + local_e0) - fVar84);
        auVar74._4_4_ = fVar54 * ((fVar56 + fStack_dc) - fVar85);
        auVar74._8_4_ = fVar57 * ((fVar59 + fStack_d8) - fVar86);
        auVar74._12_4_ = fVar58 * ((fVar55 + 0.0) - fVar87);
        auVar21._4_4_ = fVar61;
        auVar21._0_4_ = fVar60;
        auVar21._8_4_ = fVar72;
        auVar21._12_4_ = fVar80;
        auVar68 = NEON_fmin(auVar21,auVar74,4);
        uVar67 = NEON_fmaxp(auVar68._0_8_,auVar68._0_8_,4);
        auVar22._4_4_ = fVar61;
        auVar22._0_4_ = fVar60;
        auVar22._8_4_ = fVar72;
        auVar22._12_4_ = fVar80;
        auVar63 = NEON_fmax(auVar22,auVar74,4);
        uVar76 = NEON_fmax(CONCAT44(auVar68._8_4_,auVar68._8_4_),uVar67,4);
        uVar67 = NEON_fminp(auVar63._0_8_,auVar63._0_8_,4);
        uVar67 = NEON_fmin(CONCAT44(auVar63._8_4_,auVar63._8_4_),uVar67,4);
        uVar76 = NEON_fmax(uVar76,0,4);
        uVar67 = NEON_fmin(uVar67,uVar88,4);
        cVar42 = '\0';
        if (!(bool)(~((float)uVar76 <= (float)uVar67) & 1)) {
          cVar42 = '\x02';
        }
        cVar42 = cVar42 + ((float)uVar89 <= (float)uVar75);
        if (cVar42 == '\x01') {
          uVar38 = uVar40 & 0xffffffff;
          pbVar41 = local_f8;
          uVar50 = local_120;
          uVar35 = uStack_118;
          fVar62 = fVar73;
          fVar56 = fVar78;
          fVar59 = fVar79;
        }
        else if (cVar42 == '\x02') {
          pbVar41 = local_c8;
          uVar50 = CONCAT44(fStack_ec,local_f0);
          uVar35 = (ulong)(uint)fStack_e8;
          fVar62 = local_e0;
          fVar56 = fStack_dc;
          fVar59 = fStack_d8;
        }
        else {
          if (cVar42 != '\x03') goto LAB_02ed2448;
          uVar53 = -(uint)((float)uVar76 < (float)uVar89);
          *(uint *)(param_3 + 10) = uVar53 & 1;
          uVar50 = (ulong)~uVar53 & 1;
          iVar32 = (int)param_2[1];
          lVar52 = (long)iVar32;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar32) {
            FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar52 + 1);
            iVar32 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar52 + 1);
          puVar43 = (ulong *)(*param_2 + (long)iVar32 * 0x30);
          uVar35 = local_c0[uVar50 * 6 + -0xc];
          puVar43[1] = local_c0[uVar50 * 6 + -0xb];
          *puVar43 = uVar35;
          uVar35 = local_c0[uVar50 * 6 + -10];
          puVar43[3] = local_c0[uVar50 * 6 + -9];
          puVar43[2] = uVar35;
          *(int *)(puVar43 + 4) = (int)local_c0[uVar50 * 6 + -8];
          uVar40 = (ulong)uVar53 & 1;
          uVar38 = (ulong)(uint)local_c0[uVar40 * 6 + -8];
          pbVar41 = (byte *)local_c0[uVar40 * 6 + -7];
          uVar50 = local_c0[uVar40 * 6 + -0xc];
          uVar35 = local_c0[uVar40 * 6 + -0xb];
          fVar62 = (float)local_c0[uVar40 * 6 + -10];
          fVar56 = (float)(local_c0[uVar40 * 6 + -10] >> 0x20);
          fVar59 = (float)local_c0[uVar40 * 6 + -9];
        }
      }
      uVar53 = (uint)CONCAT12(pbVar41[3],*(undefined2 *)(pbVar41 + 4));
      plVar51 = (long *)*param_3;
      (**(code **)(**(long **)(*plVar51 + 0x50) + 0x68))
                (*(long **)(*plVar51 + 0x50),uVar53,local_c0);
      uVar31 = (**(code **)(**(long **)(*plVar51 + 0x50) + 0x78))
                         (*(long **)(*plVar51 + 0x50),uVar53);
      iVar32 = (**(code **)(**(long **)(*plVar51 + 0x50) + 0x20))();
      uVar37 = 1;
      if (iVar32 <= (int)uVar53 && (uVar31 & 7) != 7) {
        uVar37 = 2;
      }
      uVar33 = (**(code **)(**(long **)(*plVar51 + 0x50) + 0x70))
                         (*(long **)(*plVar51 + 0x50),uVar53);
      if (uVar37 < 2) {
        uVar37 = 1;
      }
      uVar50 = 0;
      lVar52 = *(long *)(plVar51[10] + 0x10);
      piVar1 = (int *)(lVar52 + 0x40);
      piVar2 = (int *)(lVar52 + 0x48);
      *(undefined4 *)(lVar52 + 0x20) = *(undefined4 *)(*plVar51 + 0x20);
      pfVar49 = &local_a0;
      do {
        bVar11 = *(byte *)(*plVar51 + 0x1c);
        uVar9 = *(uint *)(plVar51[0xe] + 0x18);
        iVar10 = *(int *)(plVar51[0xe] + 0x1c);
        iVar32 = (uVar53 << 1 | (uint)uVar50) + 1;
        fVar66 = (float)((ulong)uVar69 >> 0x20);
        fVar62 = (float)local_c0[0];
        fVar56 = (float)(local_c0[0] >> 0x20);
        fVar59 = (float)local_c0[1];
        fVar55 = (float)(local_c0[1] >> 0x20);
        if ((uVar31 & 7) == 7) {
          fVar54 = local_b0[0] - fVar62;
          fVar57 = local_b0[1] - fVar56;
          fVar60 = local_b0[2] - fVar59;
          fVar61 = local_b0[3] - fVar55;
          auVar64._0_4_ = local_a0 - fVar62;
          auVar64._4_4_ = fStack_9c - fVar56;
          auVar64._8_4_ = fStack_98 - fVar59;
          auVar64._12_4_ = fStack_94 - fVar55;
          auVar12._4_4_ = fVar57;
          auVar12._0_4_ = fVar54;
          auVar12._8_4_ = fVar60;
          auVar12._12_4_ = fVar61;
          auVar13._4_4_ = fVar57;
          auVar13._0_4_ = fVar54;
          auVar13._8_4_ = fVar60;
          auVar13._12_4_ = fVar61;
          auVar63 = NEON_ext(auVar12,auVar13,4,1);
          auVar68 = NEON_ext(auVar64,auVar64,4,1);
          fVar55 = fVar54 * auVar68._0_4_ - auVar64._0_4_ * auVar63._0_4_;
          fVar58 = fVar57 * auVar68._4_4_ - auVar64._4_4_ * auVar63._4_4_;
          fVar54 = fVar60 * auVar64._0_4_ - auVar64._8_4_ * fVar54;
          fVar57 = fVar61 * auVar64._4_4_ - auVar64._12_4_ * fVar57;
          auVar14._4_4_ = fVar58;
          auVar14._0_4_ = fVar55;
          auVar14._8_4_ = fVar54;
          auVar14._12_4_ = fVar57;
          auVar15._4_4_ = fVar58;
          auVar15._0_4_ = fVar55;
          auVar15._8_4_ = fVar54;
          auVar15._12_4_ = fVar57;
          auVar63 = NEON_ext(auVar14,auVar15,4,1);
          fVar54 = auVar63._0_4_;
          fVar57 = auVar63._4_4_;
          puVar43 = (ulong *)0x0;
          if (*piVar1 != 0) {
            puVar43 = (ulong *)((long)*piVar1 + (long)piVar1);
          }
          fVar58 = fVar54 * fVar54 + fVar57 * fVar57 + fVar55 * fVar55;
          puVar39 = (undefined8 *)0x0;
          if (*piVar2 != 0) {
            puVar39 = (undefined8 *)((long)*piVar2 + (long)piVar2);
          }
          uVar67 = 0;
          if (fVar58 != 0.0) {
            uVar67 = CONCAT44(fVar66 / SQRT(fVar54 * fVar54 + fVar57 * fVar57 + fVar55 * fVar55),
                              (float)uVar69 / SQRT(fVar58));
          }
          auVar70._0_4_ = fVar62 * fVar54;
          auVar70._4_4_ = fVar56 * fVar57;
          auVar70._8_4_ = fVar59 * fVar55;
          uVar45 = 3;
          uVar46 = 4;
          pfVar44 = local_b0;
          pfVar47 = local_90;
          pfVar48 = &local_a0;
        }
        else {
          pfVar44 = pfVar49 + -4;
          puVar43 = (ulong *)0x0;
          if (*piVar1 != 0) {
            puVar43 = (ulong *)((long)*piVar1 + (long)piVar1);
          }
          fVar54 = (float)*(undefined8 *)pfVar44 - fVar62;
          fVar57 = (float)((ulong)*(undefined8 *)pfVar44 >> 0x20) - fVar56;
          fVar58 = (float)*(undefined8 *)(pfVar49 + -2) - fVar59;
          fVar60 = (float)((ulong)*(undefined8 *)(pfVar49 + -2) >> 0x20) - fVar55;
          auVar16._4_4_ = fVar57;
          auVar16._0_4_ = fVar54;
          auVar16._8_4_ = fVar58;
          auVar16._12_4_ = fVar60;
          auVar17._4_4_ = fVar57;
          auVar17._0_4_ = fVar54;
          auVar17._8_4_ = fVar58;
          auVar17._12_4_ = fVar60;
          auVar63 = NEON_ext(auVar16,auVar17,4,1);
          auVar65._0_4_ = *pfVar49 - fVar62;
          auVar65._4_4_ = pfVar49[1] - fVar56;
          auVar65._8_4_ = pfVar49[2] - fVar59;
          auVar65._12_4_ = pfVar49[3] - fVar55;
          auVar68 = NEON_ext(auVar65,auVar65,4,1);
          puVar39 = (undefined8 *)0x0;
          if (*piVar2 != 0) {
            puVar39 = (undefined8 *)((long)*piVar2 + (long)piVar2);
          }
          fVar55 = fVar54 * auVar68._0_4_ - auVar65._0_4_ * auVar63._0_4_;
          fVar61 = fVar57 * auVar68._4_4_ - auVar65._4_4_ * auVar63._4_4_;
          fVar54 = fVar58 * auVar65._0_4_ - auVar65._8_4_ * fVar54;
          fVar57 = fVar60 * auVar65._4_4_ - auVar65._12_4_ * fVar57;
          auVar18._4_4_ = fVar61;
          auVar18._0_4_ = fVar55;
          auVar18._8_4_ = fVar54;
          auVar18._12_4_ = fVar57;
          auVar19._4_4_ = fVar61;
          auVar19._0_4_ = fVar55;
          auVar19._8_4_ = fVar54;
          auVar19._12_4_ = fVar57;
          auVar63 = NEON_ext(auVar18,auVar19,4,1);
          fVar54 = auVar63._0_4_;
          fVar57 = auVar63._4_4_;
          fVar58 = fVar54 * fVar54 + fVar57 * fVar57 + fVar55 * fVar55;
          uVar67 = 0;
          if (fVar58 != 0.0) {
            uVar67 = CONCAT44(fVar66 / SQRT(fVar54 * fVar54 + fVar57 * fVar57 + fVar55 * fVar55),
                              (float)uVar69 / SQRT(fVar58));
          }
          auVar70._0_4_ = fVar62 * fVar54;
          auVar70._4_4_ = fVar56 * fVar57;
          auVar70._8_4_ = fVar59 * fVar55;
          uVar45 = 0;
          uVar46 = 3;
          pfVar47 = pfVar49;
          pfVar48 = pfVar49;
        }
        *puVar43 = local_c0[0];
        *(float *)(puVar43 + 1) = fVar59;
        uVar89 = *(undefined8 *)(pfVar44 + 2);
        *(undefined8 *)((long)puVar43 + 0xc) = *(undefined8 *)pfVar44;
        *(int *)((long)puVar43 + 0x14) = (int)uVar89;
        uVar89 = *(undefined8 *)(pfVar48 + 2);
        puVar43[3] = *(ulong *)pfVar48;
        *(int *)(puVar43 + 4) = (int)uVar89;
        uVar89 = *(undefined8 *)(pfVar47 + 2);
        fVar54 = (float)uVar67 * fVar54;
        fVar62 = (float)((ulong)uVar67 >> 0x20);
        fVar57 = fVar62 * fVar57;
        fVar55 = (float)uVar67 * fVar55;
        fVar62 = fVar62 * -(auVar70._8_4_ + auVar70._0_4_ + auVar70._4_4_);
        *(undefined8 *)((long)puVar43 + 0x24) = *(undefined8 *)pfVar47;
        *(int *)((long)puVar43 + 0x2c) = (int)uVar89;
        lVar8 = 0;
        if (*(int *)(lVar52 + 0x58) != 0) {
          lVar8 = (long)*(int *)(lVar52 + 0x58) + lVar52 + 0x58;
        }
        *(undefined4 *)(lVar52 + 0x44) = uVar46;
        *(undefined1 *)(lVar8 + 3) = uVar45;
        *(undefined1 *)(lVar8 + 7) = uVar45;
        puVar39[1] = CONCAT44(fVar62,fVar55);
        *puVar39 = CONCAT44(fVar57,fVar54);
        puVar39[3] = CONCAT44(-fVar62,-fVar55);
        puVar39[2] = CONCAT44(-fVar57,-fVar54);
        puVar39[5] = CONCAT44(fVar62,fVar55);
        puVar39[4] = CONCAT44(fVar57,fVar54);
        puVar39[7] = CONCAT44(fVar62,fVar55);
        puVar39[6] = CONCAT44(fVar57,fVar54);
        puVar43 = (ulong *)plVar51[0xe];
        local_120 = *puVar43;
        uStack_118 = puVar43[1];
        local_100 = puVar43[4];
        local_f8 = (byte *)0x0;
        local_f0 = (float)CONCAT31((int3)((uint)local_f0 >> 8),(char)puVar43[6]);
        auVar63 = *(undefined1 (*) [16])(puVar43 + 8);
        local_c8 = (byte *)puVar43[0xb];
        local_d0 = puVar43[10];
        fStack_ec = *(float *)((long)puVar43 + 0x34);
        fStack_d8 = auVar63._8_4_;
        uStack_d4 = auVar63._12_4_;
        local_e0 = auVar63._0_4_;
        fStack_dc = auVar63._4_4_;
        fStack_e8 = *(float *)(puVar43 + 7);
        local_110 = *plVar51;
        iVar3 = *(int *)((long)puVar43 + 0x1c) + (uint)*(byte *)(local_110 + 0x1c);
        local_108 = CONCAT44(iVar3,(iVar32 << (ulong)(-iVar3 & 0x1f)) - 1U |
                                   *(uint *)(puVar30 + (long)*(int *)((long)puVar43 + 0x1c) * 4) &
                                   (uint)puVar43[3]);
        local_130 = *(undefined8 *)plVar51[0xd];
        uStack_128 = ((undefined8 *)plVar51[0xd])[1];
        plVar36 = (long *)plVar51[0xb];
        plVar34 = (long *)*plVar36;
        if (plVar34 != (long *)0x0) {
          uVar9 = (iVar32 << (ulong)(-((uint)bVar11 + iVar10) & 0x1f)) - 1U |
                  *(uint *)(puVar30 + (long)iVar10 * 4) & uVar9;
          (**(code **)(*plVar34 + 0x40))
                    (plVar34,uVar33,2,*puVar43,puVar43[1],local_110,uVar9,lVar52,&local_130);
          plVar36 = (long *)plVar51[0xb];
          if (plVar36[1] != 0) {
            local_168[0] = (undefined2)plVar36[2];
            uVar67 = *(undefined8 *)((long)plVar36 + 0x14);
            *(undefined4 *)((undefined8 *)((ulong)local_168 | 4) + 1) =
                 *(undefined4 *)((long)plVar36 + 0x1c);
            *(undefined8 *)((ulong)local_168 | 4) = uVar67;
            puVar39 = (undefined8 *)plVar51[0xc];
            local_158 = *puVar39;
            local_150 = puVar39[1];
            local_148 = puVar39[2];
            local_140 = *(undefined4 *)(puVar39 + 3);
            local_138 = plVar36[7];
            local_1a0[0] = (undefined2)local_130;
            uVar67 = *(undefined8 *)((ulong)&local_130 | 4);
            *(undefined4 *)((undefined8 *)((ulong)local_1a0 | 4) + 1) =
                 *(undefined4 *)((undefined8 *)((ulong)&local_130 | 4) + 1);
            *(undefined8 *)((ulong)local_1a0 | 4) = uVar67;
            local_190 = *(undefined8 *)plVar51[0xe];
            local_188 = ((undefined8 *)plVar51[0xe])[1];
            local_180 = *plVar51;
            local_178 = uVar9;
            local_170 = lVar52;
            uVar35 = (**(code **)(*(long *)plVar36[1] + 0x40))
                               ((long *)plVar36[1],2,(char)plVar51[0xf] == '\0',local_168,local_1a0)
            ;
            if ((uVar35 & 1) == 0) break;
            plVar36 = (long *)plVar51[0xb];
          }
        }
        FUN_02ea2d14(*(undefined8 *)plVar51[10],(undefined8 *)plVar51[10],plVar36,plVar51[0xc],
                     lVar52,&local_130,&local_120,plVar51 + 2,(char)plVar51[0xf],plVar51[0x10],
                     plVar51[0x11]);
        uVar50 = uVar50 + 1;
        pfVar49 = pfVar49 + 4;
      } while (uVar37 != uVar50);
LAB_02ed2448:
      if ((int)lVar29 < (int)param_2[1]) {
        iVar32 = (int)param_2[1] + -1;
        puVar43 = (ulong *)(*param_2 + (long)iVar32 * 0x30);
        *(int *)(param_2 + 1) = iVar32;
        uVar38 = (ulong)(int)puVar43[4];
        pbVar41 = (byte *)((long)param_1 + uVar38 * 6 + *param_1);
        uVar50 = *puVar43;
        uVar35 = puVar43[1];
        fVar62 = (float)puVar43[2];
        fVar56 = (float)(puVar43[2] >> 0x20);
        fVar59 = (float)puVar43[3];
        goto LAB_02ed1c6c;
      }
    }
  }
  return;
}


