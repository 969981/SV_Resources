/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030c3724; name: FUN_030c3724
 */


void FUN_030c3724(long param_1,float *param_2,char param_3,float *param_4,char param_5)

{
  undefined1 (*pauVar1) [12];
  unkbyte9 *pVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar28;
  undefined8 uVar27;
  float fVar29;
  float fVar30;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar31 [16];
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar50;
  float fVar52;
  undefined1 auVar46 [16];
  float fVar51;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar55;
  undefined8 uVar53;
  undefined1 auVar54 [16];
  float fVar64;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  char cVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined8 uVar75;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined8 uVar76;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar89;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  
  if (param_3 == '\x02') {
    if (param_5 == '\x02') {
      return;
    }
    fVar37 = param_4[3];
    fVar36 = (float)*(undefined8 *)(param_1 + 0x18) - fVar37;
    if (fVar36 <= 0.0) {
      return;
    }
    fVar45 = (float)*(undefined8 *)param_2;
    fVar43 = *param_4 - fVar45;
    fVar28 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    fVar50 = param_4[1] - fVar28;
    fVar34 = (float)*(undefined8 *)(param_2 + 2);
    fVar52 = param_4[2] - fVar34;
    fVar26 = (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
    auVar46 = *(undefined1 (*) [16])(param_1 + 0x90);
    fVar39 = fVar45 - *param_4;
    fVar40 = fVar28 - param_4[1];
    fVar41 = fVar34 - param_4[2];
    fVar44 = auVar46._0_4_;
    fVar29 = fVar43 * fVar44;
    fVar51 = auVar46._4_4_;
    fVar32 = fVar50 * fVar51;
    fVar64 = auVar46._8_4_;
    fVar35 = fVar52 * fVar64;
    fVar30 = fVar29 + fVar32 + fVar35;
    fVar35 = fVar29 + fVar32 + fVar35;
    auVar77 = NEON_ext(auVar46,auVar46,8,1);
    fVar39 = fVar39 * fVar39;
    fVar40 = fVar40 * fVar40;
    fVar41 = fVar41 * fVar41;
    fVar32 = fVar44 * fVar30;
    fVar33 = fVar51 * fVar35;
    fVar30 = fVar64 * fVar30;
    fVar35 = auVar46._12_4_ * fVar35;
    uVar75 = NEON_ext(auVar46._0_8_,auVar77._0_8_,4,1);
    fVar43 = fVar43 - fVar32;
    fVar50 = fVar50 - fVar33;
    fVar52 = fVar52 - fVar30;
    fVar42 = (fVar37 - fVar26) - fVar35;
    auVar4._4_4_ = fVar50;
    auVar4._0_4_ = fVar43;
    auVar4._8_4_ = fVar52;
    auVar4._12_4_ = fVar42;
    auVar5._4_4_ = fVar50;
    auVar5._0_4_ = fVar43;
    auVar5._8_4_ = fVar52;
    auVar5._12_4_ = fVar42;
    auVar77 = NEON_ext(auVar4,auVar5,4,1);
    auVar56._0_4_ = (float)uVar75 * fVar43 - fVar44 * auVar77._0_4_;
    auVar56._4_4_ = (float)((ulong)uVar75 >> 0x20) * fVar50 - fVar51 * auVar77._4_4_;
    auVar56._8_4_ = fVar44 * fVar52 - fVar64 * fVar43;
    auVar56._12_4_ = fVar51 * fVar42 - auVar46._12_4_ * fVar50;
    auVar46 = NEON_ext(auVar56,auVar56,4,1);
    fVar44 = auVar46._0_4_;
    fVar51 = auVar46._4_4_;
    fVar29 = fVar44 * fVar44 + fVar51 * fVar51 + auVar56._0_4_ * auVar56._0_4_;
    if (fVar29 == 0.0) {
      fVar44 = 0.0;
      fVar51 = 0.0;
      fVar29 = 0.0;
      fVar64 = 0.0;
    }
    else {
      fVar29 = SQRT(fVar29);
      fVar64 = SQRT(fVar44 * fVar44 + fVar51 * fVar51 + auVar56._0_4_ * auVar56._0_4_);
      fVar44 = fVar44 / fVar29;
      fVar51 = fVar51 / fVar64;
      fVar29 = auVar56._0_4_ / fVar29;
      fVar64 = 0.0 / fVar64;
    }
    uVar75 = NEON_fmin(CONCAT44(SQRT(fVar39 + fVar40 + fVar41),SQRT(fVar39 + fVar40 + fVar41)),
                       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) - fVar37,
                                fVar36),4);
    fVar37 = fVar52 * fVar52 + fVar43 * fVar43 + fVar50 * fVar50;
    fVar36 = fVar52 * fVar52 + fVar43 * fVar43 + fVar50 * fVar50;
    fVar39 = (float)uVar75;
    fVar40 = (float)((ulong)uVar75 >> 0x20);
    if (fVar37 == 0.0) {
      fVar37 = fVar37 - fVar39 * fVar39;
      fVar36 = fVar36 - fVar40 * fVar40;
      fVar41 = 0.0;
      fVar55 = 0.0;
      uVar75 = CONCAT44(fVar40 * SQRT(fVar36) * 0.0,fVar39 * SQRT(fVar37) * 0.0);
      fVar43 = 0.0;
      fVar50 = 0.0;
      fVar52 = 0.0;
      fVar42 = 0.0;
    }
    else {
      fVar90 = SQRT(fVar37);
      fVar89 = SQRT(fVar36);
      uVar75 = NEON_fmov(0x3f800000,4);
      fVar37 = fVar37 - fVar39 * fVar39;
      fVar36 = fVar36 - fVar40 * fVar40;
      fVar41 = (float)uVar75 / fVar90;
      fVar55 = (float)((ulong)uVar75 >> 0x20) / fVar89;
      uVar75 = CONCAT44(fVar55 * fVar40 * SQRT(fVar36),fVar41 * fVar39 * SQRT(fVar37));
      fVar43 = fVar43 / fVar90;
      fVar50 = fVar50 / fVar89;
      fVar52 = fVar52 / fVar90;
      fVar42 = fVar42 / (float)CONCAT13((char)((uint)fVar89 >> 0x18),
                                        CONCAT12((char)((uint)fVar89 >> 0x10),
                                                 (short)(CONCAT15((char)((uint)fVar89 >> 8),
                                                                  CONCAT14(SUB41(fVar89,0),fVar90))
                                                        >> 0x20)));
    }
    cVar65 = -(param_5 == '\x01');
    auVar78._8_8_ = uVar75;
    auVar78._0_8_ = uVar75;
    auVar57._0_8_ = CONCAT44(-(float)((ulong)uVar75 >> 0x20),-(float)uVar75);
    auVar57._8_8_ = auVar57._0_8_;
    auVar12[1] = cVar65;
    auVar12[0] = cVar65;
    auVar12[2] = cVar65;
    auVar12[3] = cVar65;
    auVar12[4] = cVar65;
    auVar12[5] = cVar65;
    auVar12[6] = cVar65;
    auVar12[7] = cVar65;
    auVar12[8] = cVar65;
    auVar12[9] = cVar65;
    auVar12[10] = cVar65;
    auVar12[0xb] = cVar65;
    auVar12[0xc] = cVar65;
    auVar12[0xd] = cVar65;
    auVar12[0xe] = cVar65;
    auVar12[0xf] = cVar65;
    auVar57 = auVar57 ^ (auVar57 ^ auVar78) & auVar12;
    fVar32 = fVar45 + fVar32 + fVar44 * auVar57._0_4_;
    fVar28 = fVar28 + fVar33 + fVar51 * auVar57._4_4_;
    fVar39 = fVar34 + fVar30 + fVar29 * auVar57._8_4_;
    fVar40 = fVar26 + fVar35 + fVar64 * auVar57._12_4_;
    fVar43 = fVar43 * fVar37 * fVar41;
    fVar50 = fVar50 * fVar36 * fVar55;
    fVar52 = fVar52 * fVar37 * fVar41;
    fVar42 = fVar42 * fVar36 * fVar55;
  }
  else {
    if (param_5 == '\x02') {
      cVar65 = '\x01';
      if (param_3 != '\0') {
        cVar65 = '\x02';
      }
      cVar3 = '\0';
      if (param_3 != '\x01') {
        cVar3 = cVar65;
      }
      if (cVar3 == '\x02') {
        return;
      }
      fVar37 = param_2[3];
      fVar36 = (float)*(undefined8 *)(param_1 + 0x18) - fVar37;
      if (fVar36 <= 0.0) {
        return;
      }
      fVar26 = (float)*(undefined8 *)param_4;
      fVar45 = *param_2 - fVar26;
      fVar30 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
      fVar32 = param_2[1] - fVar30;
      fVar35 = (float)*(undefined8 *)(param_4 + 2);
      fVar28 = param_2[2] - fVar35;
      fVar33 = (float)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20);
      auVar13 = *(undefined1 (*) [16])(param_1 + 0x90);
      fVar51 = fVar26 - *param_2;
      fVar64 = fVar30 - param_2[1];
      fVar55 = fVar35 - param_2[2];
      fVar43 = auVar13._0_4_;
      fVar29 = fVar45 * fVar43;
      fVar50 = auVar13._4_4_;
      fVar34 = fVar32 * fVar50;
      fVar52 = auVar13._8_4_;
      fVar41 = fVar28 * fVar52;
      fVar39 = fVar29 + fVar34 + fVar41;
      fVar41 = fVar29 + fVar34 + fVar41;
      auVar46 = NEON_ext(auVar13,auVar13,8,1);
      fVar51 = fVar51 * fVar51;
      fVar64 = fVar64 * fVar64;
      fVar55 = fVar55 * fVar55;
      fVar40 = fVar43 * fVar39;
      fVar44 = fVar50 * fVar41;
      fVar39 = fVar52 * fVar39;
      fVar41 = auVar13._12_4_ * fVar41;
      uVar75 = NEON_ext(auVar13._0_8_,auVar46._0_8_,4,1);
      fVar45 = fVar45 - fVar40;
      fVar32 = fVar32 - fVar44;
      fVar28 = fVar28 - fVar39;
      fVar34 = (fVar37 - fVar33) - fVar41;
      auVar46._4_4_ = fVar32;
      auVar46._0_4_ = fVar45;
      auVar46._8_4_ = fVar28;
      auVar46._12_4_ = fVar34;
      auVar77._4_4_ = fVar32;
      auVar77._0_4_ = fVar45;
      auVar77._8_4_ = fVar28;
      auVar77._12_4_ = fVar34;
      auVar46 = NEON_ext(auVar46,auVar77,4,1);
      auVar58._0_4_ = (float)uVar75 * fVar45 - fVar43 * auVar46._0_4_;
      auVar58._4_4_ = (float)((ulong)uVar75 >> 0x20) * fVar32 - fVar50 * auVar46._4_4_;
      auVar58._8_4_ = fVar43 * fVar28 - fVar52 * fVar45;
      auVar58._12_4_ = fVar50 * fVar34 - auVar13._12_4_ * fVar32;
      auVar46 = NEON_ext(auVar58,auVar58,4,1);
      fVar43 = auVar46._0_4_;
      fVar50 = auVar46._4_4_;
      fVar29 = fVar43 * fVar43 + fVar50 * fVar50 + auVar58._0_4_ * auVar58._0_4_;
      if (fVar29 == 0.0) {
        fVar43 = 0.0;
        fVar50 = 0.0;
        fVar29 = 0.0;
        fVar52 = 0.0;
      }
      else {
        fVar29 = SQRT(fVar29);
        fVar52 = SQRT(fVar43 * fVar43 + fVar50 * fVar50 + auVar58._0_4_ * auVar58._0_4_);
        fVar43 = fVar43 / fVar29;
        fVar50 = fVar50 / fVar52;
        fVar29 = auVar58._0_4_ / fVar29;
        fVar52 = 0.0 / fVar52;
      }
      uVar75 = NEON_fmin(CONCAT44(SQRT(fVar51 + fVar64 + fVar55),SQRT(fVar51 + fVar64 + fVar55)),
                         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) - fVar37,
                                  fVar36),4);
      fVar37 = fVar28 * fVar28 + fVar45 * fVar45 + fVar32 * fVar32;
      fVar36 = fVar28 * fVar28 + fVar45 * fVar45 + fVar32 * fVar32;
      fVar51 = (float)uVar75;
      fVar64 = (float)((ulong)uVar75 >> 0x20);
      if (fVar37 == 0.0) {
        fVar37 = fVar37 - fVar51 * fVar51;
        fVar36 = fVar36 - fVar64 * fVar64;
        fVar55 = 0.0;
        fVar42 = 0.0;
        uVar75 = CONCAT44(fVar64 * SQRT(fVar36) * 0.0,fVar51 * SQRT(fVar37) * 0.0);
        fVar45 = 0.0;
        fVar32 = 0.0;
        fVar28 = 0.0;
        fVar34 = 0.0;
      }
      else {
        fVar90 = SQRT(fVar37);
        fVar89 = SQRT(fVar36);
        uVar75 = NEON_fmov(0x3f800000,4);
        fVar37 = fVar37 - fVar51 * fVar51;
        fVar36 = fVar36 - fVar64 * fVar64;
        fVar55 = (float)uVar75 / fVar90;
        fVar42 = (float)((ulong)uVar75 >> 0x20) / fVar89;
        uVar75 = CONCAT44(fVar42 * fVar64 * SQRT(fVar36),fVar55 * fVar51 * SQRT(fVar37));
        fVar45 = fVar45 / fVar90;
        fVar32 = fVar32 / fVar89;
        fVar28 = fVar28 / fVar90;
        fVar34 = fVar34 / (float)CONCAT13((char)((uint)fVar89 >> 0x18),
                                          CONCAT12((char)((uint)fVar89 >> 0x10),
                                                   (short)(CONCAT15((char)((uint)fVar89 >> 8),
                                                                    CONCAT14(SUB41(fVar89,0),fVar90)
                                                                   ) >> 0x20)));
      }
      cVar65 = -(cVar3 == '\x01');
      auVar79._8_8_ = uVar75;
      auVar79._0_8_ = uVar75;
      auVar59._0_8_ = CONCAT44(-(float)((ulong)uVar75 >> 0x20),-(float)uVar75);
      auVar59._8_8_ = auVar59._0_8_;
      auVar13[1] = cVar65;
      auVar13[0] = cVar65;
      auVar13[2] = cVar65;
      auVar13[3] = cVar65;
      auVar13[4] = cVar65;
      auVar13[5] = cVar65;
      auVar13[6] = cVar65;
      auVar13[7] = cVar65;
      auVar13[8] = cVar65;
      auVar13[9] = cVar65;
      auVar13[10] = cVar65;
      auVar13[0xb] = cVar65;
      auVar13[0xc] = cVar65;
      auVar13[0xd] = cVar65;
      auVar13[0xe] = cVar65;
      auVar13[0xf] = cVar65;
      auVar59 = auVar59 ^ (auVar59 ^ auVar79) & auVar13;
      fVar26 = fVar26 + fVar40 + fVar43 * auVar59._0_4_;
      fVar30 = fVar30 + fVar44 + fVar50 * auVar59._4_4_;
      fVar35 = fVar35 + fVar39 + fVar29 * auVar59._8_4_;
      fVar29 = fVar33 + fVar41 + fVar52 * auVar59._12_4_;
      fVar45 = fVar45 * fVar37 * fVar55;
      fVar32 = fVar32 * fVar36 * fVar42;
      fVar28 = fVar28 * fVar37 * fVar55;
      fVar34 = fVar34 * fVar36 * fVar42;
LAB_030c3aa8:
      uVar75 = CONCAT44(fVar30 + fVar32,fVar26 + fVar45);
      uVar27 = CONCAT44(fVar29 + fVar34,fVar35 + fVar28);
LAB_030c40d4:
      *(undefined8 *)(param_2 + 2) = uVar27;
      *(undefined8 *)param_2 = uVar75;
      return;
    }
    fVar37 = *param_2;
    fVar36 = param_2[1];
    fVar29 = param_2[2];
    fVar45 = param_2[3];
    fVar32 = *param_4;
    fVar28 = param_4[1];
    fVar34 = param_4[2];
    fVar33 = param_4[3];
    fVar26 = (float)*(undefined8 *)(param_1 + 0x18);
    fVar30 = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
    fVar35 = 0.0;
    fVar41 = 0.0;
    uVar27 = NEON_fmax(CONCAT44(fVar30 - fVar45,fVar26 - fVar45),0,4);
    uVar75 = NEON_fmax(CONCAT44(fVar30 - fVar33,fVar26 - fVar33),0,4);
    fVar26 = (float)uVar75;
    fVar30 = (float)((ulong)uVar75 >> 0x20);
    fVar39 = (float)uVar27;
    fVar40 = (float)((ulong)uVar27 >> 0x20);
    if (param_3 == param_5) {
      if ((fVar39 <= 0.0) && (fVar26 <= 0.0)) {
        return;
      }
      if (fVar39 == fVar26) {
        pauVar1 = (undefined1 (*) [12])(param_1 + 0x90);
        fVar30 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
        uVar75 = *(undefined8 *)*pauVar1;
        fVar26 = (float)((ulong)uVar75 >> 0x20);
        auVar38._0_4_ = fVar32 - fVar37;
        auVar38._4_4_ = fVar28 - fVar36;
        auVar38._8_4_ = fVar34 - fVar29;
        auVar38._12_4_ = fVar33 - fVar45;
        auVar6._12_4_ = fVar30;
        auVar6._0_12_ = *pauVar1;
        auVar7._12_4_ = fVar30;
        auVar7._0_12_ = *pauVar1;
        auVar77 = NEON_ext(auVar6,auVar7,8,1);
        auVar46 = NEON_ext(auVar38,auVar38,4,1);
        uVar53 = NEON_ext(uVar75,auVar77._0_8_,4,1);
        fVar35 = auVar38._0_4_ * (float)uVar53 - auVar46._0_4_ * (float)uVar75;
        fVar37 = auVar38._4_4_ * (float)((ulong)uVar53 >> 0x20) - auVar46._4_4_ * fVar26;
        fVar36 = auVar38._8_4_ * (float)uVar75 -
                 auVar38._0_4_ * (float)*(undefined8 *)(param_1 + 0x98);
        fVar29 = auVar38._12_4_ * fVar26 - auVar38._4_4_ * fVar30;
        auVar8._4_4_ = fVar37;
        auVar8._0_4_ = fVar35;
        auVar8._8_4_ = fVar36;
        auVar8._12_4_ = fVar29;
        auVar9._4_4_ = fVar37;
        auVar9._0_4_ = fVar35;
        auVar9._8_4_ = fVar36;
        auVar9._12_4_ = fVar29;
        auVar46 = NEON_ext(auVar8,auVar9,4,1);
        fVar26 = auVar46._0_4_;
        fVar30 = auVar46._4_4_;
        fVar37 = fVar26 * fVar26 + fVar30 * fVar30 + fVar35 * fVar35;
        if (fVar37 == 0.0) {
          fVar26 = 0.0;
          fVar30 = 0.0;
          fVar35 = 0.0;
          fVar36 = 0.0;
        }
        else {
          fVar37 = SQRT(fVar37);
          fVar36 = SQRT(fVar26 * fVar26 + fVar30 * fVar30 + fVar35 * fVar35);
          fVar26 = fVar26 / fVar37;
          fVar30 = fVar30 / fVar36;
          fVar35 = fVar35 / fVar37;
          fVar36 = 0.0 / fVar36;
        }
        if (param_3 != '\x01') {
          uVar27 = CONCAT44(-fVar40,-fVar39);
        }
        fVar29 = (float)((ulong)uVar27 >> 0x20);
        fVar26 = (float)uVar27 * fVar26;
        fVar30 = fVar29 * fVar30;
        fVar35 = (float)uVar27 * fVar35;
        fVar29 = fVar29 * fVar36;
        param_4[2] = fVar34 + fVar35;
        param_4[3] = fVar33 + fVar29;
        *param_4 = fVar32 + fVar26;
        param_4[1] = fVar28 + fVar30;
        fVar45 = *param_2;
        fVar32 = param_2[1];
        fVar28 = param_2[2];
        fVar34 = param_2[3];
        goto LAB_030c3aa8;
      }
      if (fVar26 <= fVar39) {
        auVar46 = *(undefined1 (*) [16])(param_1 + 0x90);
        fVar52 = auVar46._0_4_;
        fVar35 = (fVar37 - fVar32) * fVar52;
        fVar42 = auVar46._4_4_;
        fVar44 = (fVar36 - fVar28) * fVar42;
        fVar90 = auVar46._8_4_;
        fVar51 = (fVar29 - fVar34) * fVar90;
        auVar77 = NEON_ext(auVar46,auVar46,8,1);
        uVar75 = NEON_ext(auVar46._0_8_,auVar77._0_8_,4,1);
        fVar55 = (fVar32 - fVar37) * (fVar32 - fVar37);
        fVar43 = (fVar28 - fVar36) * (fVar28 - fVar36);
        fVar50 = (fVar34 - fVar29) * (fVar34 - fVar29);
        fVar41 = fVar35 + fVar44 + fVar51;
        fVar51 = fVar35 + fVar44 + fVar51;
        fVar44 = fVar52 * fVar41;
        fVar64 = fVar42 * fVar51;
        fVar41 = fVar90 * fVar41;
        fVar51 = auVar46._12_4_ * fVar51;
        auVar49._0_4_ = (fVar37 - fVar32) - fVar44;
        auVar49._4_4_ = (fVar36 - fVar28) - fVar64;
        auVar49._8_4_ = (fVar29 - fVar34) - fVar41;
        auVar49._12_4_ = (fVar45 - fVar33) - fVar51;
        auVar77 = NEON_ext(auVar49,auVar49,4,1);
        fVar35 = SQRT(fVar50 + fVar55 + fVar43);
        auVar87._0_4_ = (float)uVar75 * auVar49._0_4_ - fVar52 * auVar77._0_4_;
        auVar87._4_4_ = (float)((ulong)uVar75 >> 0x20) * auVar49._4_4_ - fVar42 * auVar77._4_4_;
        auVar87._8_4_ = fVar52 * auVar49._8_4_ - fVar90 * auVar49._0_4_;
        auVar87._12_4_ = fVar42 * auVar49._12_4_ - auVar46._12_4_ * auVar49._4_4_;
        auVar46 = NEON_ext(auVar87,auVar87,4,1);
        fVar52 = auVar46._0_4_;
        fVar42 = auVar46._4_4_;
        fVar90 = fVar52 * fVar52 + fVar42 * fVar42 + auVar87._0_4_ * auVar87._0_4_;
        if (fVar90 == 0.0) {
          fVar52 = 0.0;
          fVar42 = 0.0;
          fVar90 = 0.0;
          fVar89 = 0.0;
        }
        else {
          fVar90 = SQRT(fVar90);
          fVar89 = SQRT(fVar52 * fVar52 + fVar42 * fVar42 + auVar87._0_4_ * auVar87._0_4_);
          fVar52 = fVar52 / fVar90;
          fVar42 = fVar42 / fVar89;
          fVar90 = auVar87._0_4_ / fVar90;
          fVar89 = 0.0 / fVar89;
        }
        uVar75 = NEON_fmin(CONCAT17((char)((uint)fVar35 >> 0x18),
                                    CONCAT16((char)((uint)fVar35 >> 0x10),
                                             CONCAT15((char)((uint)fVar35 >> 8),
                                                      CONCAT14(SUB41(fVar35,0),
                                                               SQRT(fVar50 + fVar55 + fVar43))))),
                           CONCAT44(fVar40 - fVar30,fVar39 - fVar26),4);
        fVar35 = auVar49._8_4_ * auVar49._8_4_ +
                 auVar49._0_4_ * auVar49._0_4_ + auVar49._4_4_ * auVar49._4_4_;
        fVar39 = auVar49._8_4_ * auVar49._8_4_ +
                 auVar49._0_4_ * auVar49._0_4_ + auVar49._4_4_ * auVar49._4_4_;
        fVar40 = (float)uVar75;
        fVar55 = (float)((ulong)uVar75 >> 0x20);
        if (fVar35 == 0.0) {
          fVar35 = fVar35 - fVar40 * fVar40;
          fVar39 = fVar39 - fVar55 * fVar55;
          uVar66 = 0;
          uVar67 = 0;
          uVar68 = 0;
          uVar69 = 0;
          uVar70 = 0;
          uVar71 = 0;
          uVar72 = 0;
          uVar73 = 0;
          uVar75 = CONCAT44(fVar55 * SQRT(fVar39) * 0.0,fVar40 * SQRT(fVar35) * 0.0);
          fVar40 = 0.0;
          fVar55 = 0.0;
          fVar43 = 0.0;
          fVar50 = 0.0;
        }
        else {
          fVar43 = SQRT(fVar35);
          fVar50 = SQRT(fVar39);
          uVar75 = NEON_fmov(0x3f800000,4);
          fVar35 = fVar35 - fVar40 * fVar40;
          fVar39 = fVar39 - fVar55 * fVar55;
          fVar23 = (float)uVar75 / fVar43;
          uVar66 = SUB41(fVar23,0);
          uVar67 = (undefined1)((uint)fVar23 >> 8);
          uVar68 = (undefined1)((uint)fVar23 >> 0x10);
          uVar69 = (undefined1)((uint)fVar23 >> 0x18);
          fVar24 = (float)((ulong)uVar75 >> 0x20) / fVar50;
          uVar70 = SUB41(fVar24,0);
          uVar71 = (undefined1)((uint)fVar24 >> 8);
          uVar72 = (undefined1)((uint)fVar24 >> 0x10);
          uVar73 = (undefined1)((uint)fVar24 >> 0x18);
          uVar75 = CONCAT44(fVar24 * fVar55 * SQRT(fVar39),fVar23 * fVar40 * SQRT(fVar35));
          fVar40 = auVar49._0_4_ / fVar43;
          fVar55 = auVar49._4_4_ / fVar50;
          fVar43 = auVar49._8_4_ / fVar43;
          fVar50 = auVar49._12_4_ / fVar50;
        }
        auVar93[0] = -(param_3 == '\0');
        auVar96._8_8_ = uVar75;
        auVar96._0_8_ = uVar75;
        auVar88._0_8_ = CONCAT44(-(float)((ulong)uVar75 >> 0x20),-(float)uVar75);
        auVar88._8_8_ = auVar88._0_8_;
        auVar93[1] = auVar93[0];
        auVar93[2] = auVar93[0];
        auVar93[3] = auVar93[0];
        auVar93[4] = auVar93[0];
        auVar93[5] = auVar93[0];
        auVar93[6] = auVar93[0];
        auVar93[7] = auVar93[0];
        auVar93[8] = auVar93[0];
        auVar93[9] = auVar93[0];
        auVar93[10] = auVar93[0];
        auVar93[0xb] = auVar93[0];
        auVar93[0xc] = auVar93[0];
        auVar93[0xd] = auVar93[0];
        auVar93[0xe] = auVar93[0];
        auVar93[0xf] = auVar93[0];
        auVar88 = auVar88 ^ (auVar88 ^ auVar96) & auVar93;
        fVar35 = fVar35 * (float)CONCAT13(uVar69,CONCAT12(uVar68,CONCAT11(uVar67,uVar66)));
        fVar39 = fVar39 * (float)CONCAT13(uVar73,CONCAT12(uVar72,CONCAT11(uVar71,uVar70)));
        fVar32 = fVar32 + fVar44 + fVar52 * auVar88._0_4_ + fVar40 * fVar35;
        fVar28 = fVar28 + fVar64 + fVar42 * auVar88._4_4_ + fVar55 * fVar39;
        fVar34 = fVar34 + fVar41 + fVar90 * auVar88._8_4_ + fVar43 * fVar35;
        fVar35 = fVar33 + fVar51 + fVar89 * auVar88._12_4_ + fVar50 * fVar39;
        fVar37 = fVar32 - fVar37;
        fVar36 = fVar28 - fVar36;
        fVar29 = fVar34 - fVar29;
        *(ulong *)(param_2 + 2) = CONCAT44(fVar35,fVar34);
        *(ulong *)param_2 = CONCAT44(fVar28,fVar32);
        fVar33 = fVar37 * fVar37 + fVar36 * fVar36 + fVar29 * fVar29;
        if (fVar33 == 0.0) {
          fVar37 = 0.0;
          fVar36 = 0.0;
          fVar29 = 0.0;
          fVar39 = 0.0;
        }
        else {
          fVar33 = SQRT(fVar33);
          fVar39 = SQRT(fVar37 * fVar37 + fVar36 * fVar36 + fVar29 * fVar29);
          fVar37 = fVar37 / fVar33;
          fVar36 = fVar36 / fVar39;
          fVar29 = fVar29 / fVar33;
          fVar39 = (fVar35 - fVar45) / fVar39;
        }
        *(ulong *)(param_2 + 2) = CONCAT44(fVar35 + fVar30 * fVar39,fVar34 + fVar26 * fVar29);
        *(ulong *)param_2 = CONCAT44(fVar28 + fVar30 * fVar36,fVar32 + fVar26 * fVar37);
        uVar75 = CONCAT44(fVar30 * fVar36 + (float)((ulong)*(undefined8 *)param_4 >> 0x20),
                          fVar26 * fVar37 + (float)*(undefined8 *)param_4);
        uVar27 = CONCAT44(fVar30 * fVar39 + (float)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20),
                          fVar26 * fVar29 + (float)*(undefined8 *)(param_4 + 2));
        goto LAB_030c3fb0;
      }
      auVar46 = *(undefined1 (*) [16])(param_1 + 0x90);
      fVar52 = auVar46._0_4_;
      fVar35 = (fVar32 - fVar37) * fVar52;
      fVar42 = auVar46._4_4_;
      fVar44 = (fVar28 - fVar36) * fVar42;
      fVar90 = auVar46._8_4_;
      fVar51 = (fVar34 - fVar29) * fVar90;
      auVar77 = NEON_ext(auVar46,auVar46,8,1);
      uVar75 = NEON_ext(auVar46._0_8_,auVar77._0_8_,4,1);
      fVar55 = (fVar37 - fVar32) * (fVar37 - fVar32);
      fVar43 = (fVar36 - fVar28) * (fVar36 - fVar28);
      fVar50 = (fVar29 - fVar34) * (fVar29 - fVar34);
      fVar41 = fVar35 + fVar44 + fVar51;
      fVar51 = fVar35 + fVar44 + fVar51;
      fVar44 = fVar52 * fVar41;
      fVar64 = fVar42 * fVar51;
      fVar41 = fVar90 * fVar41;
      fVar51 = auVar46._12_4_ * fVar51;
      auVar48._0_4_ = (fVar32 - fVar37) - fVar44;
      auVar48._4_4_ = (fVar28 - fVar36) - fVar64;
      auVar48._8_4_ = (fVar34 - fVar29) - fVar41;
      auVar48._12_4_ = (fVar33 - fVar45) - fVar51;
      auVar77 = NEON_ext(auVar48,auVar48,4,1);
      fVar35 = SQRT(fVar50 + fVar55 + fVar43);
      auVar84._0_4_ = (float)uVar75 * auVar48._0_4_ - fVar52 * auVar77._0_4_;
      auVar84._4_4_ = (float)((ulong)uVar75 >> 0x20) * auVar48._4_4_ - fVar42 * auVar77._4_4_;
      auVar84._8_4_ = fVar52 * auVar48._8_4_ - fVar90 * auVar48._0_4_;
      auVar84._12_4_ = fVar42 * auVar48._12_4_ - auVar46._12_4_ * auVar48._4_4_;
      auVar46 = NEON_ext(auVar84,auVar84,4,1);
      fVar52 = auVar46._0_4_;
      fVar42 = auVar46._4_4_;
      fVar90 = fVar52 * fVar52 + fVar42 * fVar42 + auVar84._0_4_ * auVar84._0_4_;
      if (fVar90 == 0.0) {
        fVar52 = 0.0;
        fVar42 = 0.0;
        fVar90 = 0.0;
        fVar89 = 0.0;
      }
      else {
        fVar90 = SQRT(fVar90);
        fVar89 = SQRT(fVar52 * fVar52 + fVar42 * fVar42 + auVar84._0_4_ * auVar84._0_4_);
        fVar52 = fVar52 / fVar90;
        fVar42 = fVar42 / fVar89;
        fVar90 = auVar84._0_4_ / fVar90;
        fVar89 = 0.0 / fVar89;
      }
      uVar75 = NEON_fmin(CONCAT17((char)((uint)fVar35 >> 0x18),
                                  CONCAT16((char)((uint)fVar35 >> 0x10),
                                           CONCAT15((char)((uint)fVar35 >> 8),
                                                    CONCAT14(SUB41(fVar35,0),
                                                             SQRT(fVar50 + fVar55 + fVar43))))),
                         CONCAT44(fVar30 - fVar40,fVar26 - fVar39),4);
      fVar26 = auVar48._8_4_ * auVar48._8_4_ +
               auVar48._0_4_ * auVar48._0_4_ + auVar48._4_4_ * auVar48._4_4_;
      fVar30 = auVar48._8_4_ * auVar48._8_4_ +
               auVar48._0_4_ * auVar48._0_4_ + auVar48._4_4_ * auVar48._4_4_;
      fVar35 = (float)uVar75;
      fVar55 = (float)((ulong)uVar75 >> 0x20);
      if (fVar26 == 0.0) {
        fVar26 = fVar26 - fVar35 * fVar35;
        fVar30 = fVar30 - fVar55 * fVar55;
        uVar66 = 0;
        uVar67 = 0;
        uVar68 = 0;
        uVar69 = 0;
        uVar70 = 0;
        uVar71 = 0;
        uVar72 = 0;
        uVar73 = 0;
        uVar75 = CONCAT44(fVar55 * SQRT(fVar30) * 0.0,fVar35 * SQRT(fVar26) * 0.0);
        fVar35 = 0.0;
        fVar55 = 0.0;
        fVar43 = 0.0;
        fVar50 = 0.0;
      }
      else {
        fVar43 = SQRT(fVar26);
        fVar50 = SQRT(fVar30);
        uVar75 = NEON_fmov(0x3f800000,4);
        fVar26 = fVar26 - fVar35 * fVar35;
        fVar30 = fVar30 - fVar55 * fVar55;
        fVar23 = (float)uVar75 / fVar43;
        uVar66 = SUB41(fVar23,0);
        uVar67 = (undefined1)((uint)fVar23 >> 8);
        uVar68 = (undefined1)((uint)fVar23 >> 0x10);
        uVar69 = (undefined1)((uint)fVar23 >> 0x18);
        fVar24 = (float)((ulong)uVar75 >> 0x20) / fVar50;
        uVar70 = SUB41(fVar24,0);
        uVar71 = (undefined1)((uint)fVar24 >> 8);
        uVar72 = (undefined1)((uint)fVar24 >> 0x10);
        uVar73 = (undefined1)((uint)fVar24 >> 0x18);
        uVar75 = CONCAT44(fVar24 * fVar55 * SQRT(fVar30),fVar23 * fVar35 * SQRT(fVar26));
        fVar35 = auVar48._0_4_ / fVar43;
        fVar55 = auVar48._4_4_ / fVar50;
        fVar43 = auVar48._8_4_ / fVar43;
        fVar50 = auVar48._12_4_ / fVar50;
      }
      auVar92[0] = -(param_3 == '\x01');
      auVar95._8_8_ = uVar75;
      auVar95._0_8_ = uVar75;
      auVar85._0_8_ = CONCAT44(-(float)((ulong)uVar75 >> 0x20),-(float)uVar75);
      auVar85._8_8_ = auVar85._0_8_;
      auVar92[1] = auVar92[0];
      auVar92[2] = auVar92[0];
      auVar92[3] = auVar92[0];
      auVar92[4] = auVar92[0];
      auVar92[5] = auVar92[0];
      auVar92[6] = auVar92[0];
      auVar92[7] = auVar92[0];
      auVar92[8] = auVar92[0];
      auVar92[9] = auVar92[0];
      auVar92[10] = auVar92[0];
      auVar92[0xb] = auVar92[0];
      auVar92[0xc] = auVar92[0];
      auVar92[0xd] = auVar92[0];
      auVar92[0xe] = auVar92[0];
      auVar92[0xf] = auVar92[0];
      auVar85 = auVar85 ^ (auVar85 ^ auVar95) & auVar92;
      fVar26 = fVar26 * (float)CONCAT13(uVar69,CONCAT12(uVar68,CONCAT11(uVar67,uVar66)));
      fVar30 = fVar30 * (float)CONCAT13(uVar73,CONCAT12(uVar72,CONCAT11(uVar71,uVar70)));
      fVar37 = fVar37 + fVar44 + fVar52 * auVar85._0_4_ + fVar35 * fVar26;
      fVar36 = fVar36 + fVar64 + fVar42 * auVar85._4_4_ + fVar55 * fVar30;
      fVar29 = fVar29 + fVar41 + fVar90 * auVar85._8_4_ + fVar43 * fVar26;
      fVar45 = fVar45 + fVar51 + fVar89 * auVar85._12_4_ + fVar50 * fVar30;
      fVar32 = fVar37 - fVar32;
      fVar28 = fVar36 - fVar28;
      fVar34 = fVar29 - fVar34;
      param_4[2] = fVar29;
      param_4[3] = fVar45;
      *param_4 = fVar37;
      param_4[1] = fVar36;
      fVar37 = fVar32 * fVar32 + fVar28 * fVar28 + fVar34 * fVar34;
      if (fVar37 == 0.0) {
        fVar32 = 0.0;
        fVar28 = 0.0;
        fVar34 = 0.0;
        fVar36 = 0.0;
      }
      else {
        fVar37 = SQRT(fVar37);
        fVar36 = SQRT(fVar32 * fVar32 + fVar28 * fVar28 + fVar34 * fVar34);
        fVar32 = fVar32 / fVar37;
        fVar28 = fVar28 / fVar36;
        fVar34 = fVar34 / fVar37;
        fVar36 = (fVar45 - fVar33) / fVar36;
      }
      fVar32 = fVar39 * fVar32;
      fVar28 = fVar40 * fVar28;
      fVar39 = fVar39 * fVar34;
      fVar40 = fVar40 * fVar36;
      param_2[2] = param_2[2] + fVar39;
      param_2[3] = param_2[3] + fVar40;
      *param_2 = *param_2 + fVar32;
      param_2[1] = param_2[1] + fVar28;
      fVar43 = *param_4;
      fVar50 = param_4[1];
      fVar52 = param_4[2];
      fVar42 = param_4[3];
    }
    else {
      if (0.0 < fVar39) {
        if (fVar26 <= 0.0) {
          auVar46 = *(undefined1 (*) [16])(param_1 + 0x90);
          auVar77 = NEON_ext(auVar46,auVar46,8,1);
          fVar50 = auVar46._0_4_;
          fVar26 = (fVar37 - fVar32) * fVar50;
          fVar52 = auVar46._4_4_;
          fVar30 = (fVar36 - fVar28) * fVar52;
          fVar42 = auVar46._8_4_;
          fVar44 = (fVar29 - fVar34) * fVar42;
          uVar75 = NEON_ext(auVar46._0_8_,auVar77._0_8_,4,1);
          fVar64 = (fVar32 - fVar37) * (fVar32 - fVar37);
          fVar55 = (fVar28 - fVar36) * (fVar28 - fVar36);
          fVar43 = (fVar34 - fVar29) * (fVar34 - fVar29);
          fVar40 = fVar26 + fVar30 + fVar44;
          fVar44 = fVar26 + fVar30 + fVar44;
          fVar41 = fVar50 * fVar40;
          fVar51 = fVar52 * fVar44;
          fVar40 = fVar42 * fVar40;
          fVar44 = auVar46._12_4_ * fVar44;
          fVar26 = (fVar37 - fVar32) - fVar41;
          fVar30 = (fVar36 - fVar28) - fVar51;
          fVar35 = (fVar29 - fVar34) - fVar40;
          fVar39 = (fVar45 - fVar33) - fVar44;
          auVar10._4_4_ = fVar30;
          auVar10._0_4_ = fVar26;
          auVar10._8_4_ = fVar35;
          auVar10._12_4_ = fVar39;
          auVar11._4_4_ = fVar30;
          auVar11._0_4_ = fVar26;
          auVar11._8_4_ = fVar35;
          auVar11._12_4_ = fVar39;
          auVar77 = NEON_ext(auVar10,auVar11,4,1);
          auVar62._0_4_ = (float)uVar75 * fVar26 - fVar50 * auVar77._0_4_;
          auVar62._4_4_ = (float)((ulong)uVar75 >> 0x20) * fVar30 - fVar52 * auVar77._4_4_;
          auVar62._8_4_ = fVar50 * fVar35 - fVar42 * fVar26;
          auVar62._12_4_ = fVar52 * fVar39 - auVar46._12_4_ * fVar30;
          auVar46 = NEON_ext(auVar62,auVar62,4,1);
          fVar36 = auVar46._0_4_;
          fVar29 = auVar46._4_4_;
          fVar37 = fVar36 * fVar36 + fVar29 * fVar29 + auVar62._0_4_ * auVar62._0_4_;
          if (fVar37 == 0.0) {
            fVar36 = 0.0;
            fVar29 = 0.0;
            fVar37 = 0.0;
            fVar45 = 0.0;
          }
          else {
            fVar37 = SQRT(fVar37);
            fVar45 = SQRT(fVar36 * fVar36 + fVar29 * fVar29 + auVar62._0_4_ * auVar62._0_4_);
            fVar36 = fVar36 / fVar37;
            fVar29 = fVar29 / fVar45;
            fVar37 = auVar62._0_4_ / fVar37;
            fVar45 = 0.0 / fVar45;
          }
          uVar75 = NEON_fmin(CONCAT44(SQRT(fVar43 + fVar64 + fVar55),SQRT(fVar43 + fVar64 + fVar55))
                             ,uVar27,4);
          fVar64 = fVar35 * fVar35 + fVar26 * fVar26 + fVar30 * fVar30;
          fVar55 = fVar35 * fVar35 + fVar26 * fVar26 + fVar30 * fVar30;
          fVar43 = (float)uVar75;
          fVar50 = (float)((ulong)uVar75 >> 0x20);
          if (fVar64 == 0.0) {
            fVar64 = fVar64 - fVar43 * fVar43;
            fVar55 = fVar55 - fVar50 * fVar50;
            fVar52 = 0.0;
            fVar42 = 0.0;
            uVar75 = CONCAT44(fVar50 * SQRT(fVar55) * 0.0,fVar43 * SQRT(fVar64) * 0.0);
            fVar26 = 0.0;
            fVar30 = 0.0;
            fVar35 = 0.0;
            fVar39 = 0.0;
          }
          else {
            fVar90 = SQRT(fVar64);
            fVar89 = SQRT(fVar55);
            uVar75 = NEON_fmov(0x3f800000,4);
            fVar64 = fVar64 - fVar43 * fVar43;
            fVar55 = fVar55 - fVar50 * fVar50;
            fVar52 = (float)uVar75 / fVar90;
            fVar42 = (float)((ulong)uVar75 >> 0x20) / fVar89;
            uVar75 = CONCAT44(fVar42 * fVar50 * SQRT(fVar55),fVar52 * fVar43 * SQRT(fVar64));
            fVar26 = fVar26 / fVar90;
            fVar30 = fVar30 / fVar89;
            fVar35 = fVar35 / fVar90;
            fVar39 = fVar39 / (float)CONCAT13((char)((uint)fVar89 >> 0x18),
                                              CONCAT12((char)((uint)fVar89 >> 0x10),
                                                       (short)(CONCAT15((char)((uint)fVar89 >> 8),
                                                                        CONCAT14(SUB41(fVar89,0),
                                                                                 fVar90)) >> 0x20)))
            ;
          }
          cVar65 = -(param_5 == '\x01');
          auVar86._8_8_ = uVar75;
          auVar86._0_8_ = uVar75;
          auVar63._0_8_ = CONCAT44(-(float)((ulong)uVar75 >> 0x20),-(float)uVar75);
          auVar63._8_8_ = auVar63._0_8_;
          fVar26 = fVar26 * fVar64 * fVar52;
          fVar30 = fVar30 * fVar55 * fVar42;
          fVar35 = fVar35 * fVar64 * fVar52;
          fVar39 = fVar39 * fVar55 * fVar42;
          auVar19[1] = cVar65;
          auVar19[0] = cVar65;
          auVar19[2] = cVar65;
          auVar19[3] = cVar65;
          auVar19[4] = cVar65;
          auVar19[5] = cVar65;
          auVar19[6] = cVar65;
          auVar19[7] = cVar65;
          auVar19[8] = cVar65;
          auVar19[9] = cVar65;
          auVar19[10] = cVar65;
          auVar19[0xb] = cVar65;
          auVar19[0xc] = cVar65;
          auVar19[0xd] = cVar65;
          auVar19[0xe] = cVar65;
          auVar19[0xf] = cVar65;
          auVar63 = auVar63 ^ (auVar63 ^ auVar86) & auVar19;
          fVar32 = fVar32 + fVar41 + fVar36 * auVar63._0_4_;
          fVar36 = fVar28 + fVar51 + fVar29 * auVar63._4_4_;
          fVar37 = fVar34 + fVar40 + fVar37 * auVar63._8_4_;
          fVar29 = fVar33 + fVar44 + fVar45 * auVar63._12_4_;
        }
        else {
          fVar39 = fVar39 / (fVar39 + fVar26);
          fVar40 = fVar40 / (fVar40 + fVar30);
          pVar2 = (unkbyte9 *)(param_1 + 0x90);
          uVar25 = *(undefined8 *)(param_1 + 0x98);
          uVar66 = (undefined1)((ulong)uVar25 >> 8);
          uVar67 = (undefined1)((ulong)uVar25 >> 0x10);
          uVar68 = (undefined1)((ulong)uVar25 >> 0x18);
          uVar69 = (undefined1)((ulong)uVar25 >> 0x20);
          uVar70 = (undefined1)((ulong)uVar25 >> 0x28);
          uVar71 = (undefined1)((ulong)uVar25 >> 0x30);
          uVar72 = (undefined1)((ulong)uVar25 >> 0x38);
          uVar53 = *(undefined8 *)pVar2;
          auVar14[9] = uVar66;
          auVar14._0_9_ = *pVar2;
          auVar14[10] = uVar67;
          auVar14[0xb] = uVar68;
          auVar14[0xc] = uVar69;
          auVar14[0xd] = uVar70;
          auVar14[0xe] = uVar71;
          auVar14[0xf] = uVar72;
          auVar15[9] = uVar66;
          auVar15._0_9_ = *pVar2;
          auVar15[10] = uVar67;
          auVar15[0xb] = uVar68;
          auVar15[0xc] = uVar69;
          auVar15[0xd] = uVar70;
          auVar15[0xe] = uVar71;
          auVar15[0xf] = uVar72;
          auVar46 = NEON_ext(auVar14,auVar15,8,1);
          uVar76 = NEON_ext(uVar53,auVar46._0_8_,4,1);
          fVar37 = fVar37 + (fVar32 - fVar37) * fVar39;
          fVar36 = fVar36 + (fVar28 - fVar36) * fVar40;
          fVar29 = fVar29 + (fVar34 - fVar29) * fVar39;
          fVar45 = fVar45 + (fVar33 - fVar45) * fVar40;
          fVar64 = (fVar37 - fVar32) * (fVar37 - fVar32);
          fVar55 = (fVar36 - fVar28) * (fVar36 - fVar28);
          fVar43 = (fVar29 - fVar34) * (fVar29 - fVar34);
          fVar26 = (float)uVar53;
          fVar39 = (fVar32 - fVar37) * fVar26;
          fVar30 = (float)((ulong)uVar53 >> 0x20);
          fVar41 = (fVar28 - fVar36) * fVar30;
          fVar35 = (float)uVar25;
          fVar44 = (fVar34 - fVar29) * fVar35;
          fVar40 = fVar39 + fVar41 + fVar44;
          fVar44 = fVar39 + fVar41 + fVar44;
          fVar41 = fVar26 * fVar40;
          fVar51 = fVar30 * fVar44;
          fVar40 = fVar35 * fVar40;
          fVar39 = (float)((ulong)uVar25 >> 0x20);
          fVar44 = fVar39 * fVar44;
          auVar54._0_4_ = (fVar32 - fVar37) - fVar41;
          auVar54._4_4_ = (fVar28 - fVar36) - fVar51;
          auVar54._8_4_ = (fVar34 - fVar29) - fVar40;
          auVar54._12_4_ = (fVar33 - fVar45) - fVar44;
          auVar46 = NEON_ext(auVar54,auVar54,4,1);
          fVar32 = SQRT(fVar43 + fVar64 + fVar55);
          auVar80._0_4_ = (float)uVar76 * auVar54._0_4_ - fVar26 * auVar46._0_4_;
          auVar80._4_4_ = (float)((ulong)uVar76 >> 0x20) * auVar54._4_4_ - fVar30 * auVar46._4_4_;
          auVar80._8_4_ = fVar26 * auVar54._8_4_ - fVar35 * auVar54._0_4_;
          auVar80._12_4_ = fVar30 * auVar54._12_4_ - fVar39 * auVar54._4_4_;
          auVar46 = NEON_ext(auVar80,auVar80,4,1);
          fVar28 = auVar46._0_4_;
          fVar34 = auVar46._4_4_;
          fVar26 = fVar28 * fVar28 + fVar34 * fVar34 + auVar80._0_4_ * auVar80._0_4_;
          if (fVar26 == 0.0) {
            fVar28 = 0.0;
            fVar34 = 0.0;
            fVar26 = 0.0;
            fVar30 = 0.0;
          }
          else {
            fVar26 = SQRT(fVar26);
            fVar30 = SQRT(fVar28 * fVar28 + fVar34 * fVar34 + auVar80._0_4_ * auVar80._0_4_);
            fVar28 = fVar28 / fVar26;
            fVar34 = fVar34 / fVar30;
            fVar26 = auVar80._0_4_ / fVar26;
            fVar30 = 0.0 / fVar30;
          }
          uVar75 = NEON_fmin(CONCAT17((char)((uint)fVar32 >> 0x18),
                                      CONCAT16((char)((uint)fVar32 >> 0x10),
                                               CONCAT15((char)((uint)fVar32 >> 8),
                                                        CONCAT14(SUB41(fVar32,0),
                                                                 SQRT(fVar43 + fVar64 + fVar55))))),
                             uVar75,4);
          fVar32 = auVar54._8_4_ * auVar54._8_4_ +
                   auVar54._0_4_ * auVar54._0_4_ + auVar54._4_4_ * auVar54._4_4_;
          fVar35 = auVar54._8_4_ * auVar54._8_4_ +
                   auVar54._0_4_ * auVar54._0_4_ + auVar54._4_4_ * auVar54._4_4_;
          fVar33 = (float)uVar75;
          fVar39 = (float)((ulong)uVar75 >> 0x20);
          if (fVar32 == 0.0) {
            fVar32 = fVar32 - fVar33 * fVar33;
            fVar35 = fVar35 - fVar39 * fVar39;
            uVar66 = 0;
            uVar67 = 0;
            uVar68 = 0;
            uVar69 = 0;
            uVar70 = 0;
            uVar71 = 0;
            uVar72 = 0;
            uVar73 = 0;
            uVar75 = CONCAT44(fVar39 * SQRT(fVar35) * 0.0,fVar33 * SQRT(fVar32) * 0.0);
            fVar33 = 0.0;
            fVar39 = 0.0;
            fVar64 = 0.0;
            fVar55 = 0.0;
          }
          else {
            fVar64 = SQRT(fVar32);
            fVar55 = SQRT(fVar35);
            uVar75 = NEON_fmov(0x3f800000,4);
            fVar32 = fVar32 - fVar33 * fVar33;
            fVar35 = fVar35 - fVar39 * fVar39;
            fVar43 = (float)uVar75 / fVar64;
            uVar66 = SUB41(fVar43,0);
            uVar67 = (undefined1)((uint)fVar43 >> 8);
            uVar68 = (undefined1)((uint)fVar43 >> 0x10);
            uVar69 = (undefined1)((uint)fVar43 >> 0x18);
            fVar50 = (float)((ulong)uVar75 >> 0x20) / fVar55;
            uVar70 = SUB41(fVar50,0);
            uVar71 = (undefined1)((uint)fVar50 >> 8);
            uVar72 = (undefined1)((uint)fVar50 >> 0x10);
            uVar73 = (undefined1)((uint)fVar50 >> 0x18);
            uVar75 = CONCAT44(fVar50 * fVar39 * SQRT(fVar35),fVar43 * fVar33 * SQRT(fVar32));
            fVar33 = auVar54._0_4_ / fVar64;
            fVar39 = auVar54._4_4_ / fVar55;
            fVar64 = auVar54._8_4_ / fVar64;
            fVar55 = auVar54._12_4_ / fVar55;
          }
          auVar91[0] = -(param_5 == '\x01');
          auVar94._8_8_ = uVar75;
          auVar94._0_8_ = uVar75;
          auVar81._0_8_ = CONCAT44(-(float)((ulong)uVar75 >> 0x20),-(float)uVar75);
          auVar81._8_8_ = auVar81._0_8_;
          fVar32 = fVar32 * (float)CONCAT13(uVar69,CONCAT12(uVar68,CONCAT11(uVar67,uVar66)));
          fVar35 = fVar35 * (float)CONCAT13(uVar73,CONCAT12(uVar72,CONCAT11(uVar71,uVar70)));
          auVar91[1] = auVar91[0];
          auVar91[2] = auVar91[0];
          auVar91[3] = auVar91[0];
          auVar91[4] = auVar91[0];
          auVar91[5] = auVar91[0];
          auVar91[6] = auVar91[0];
          auVar91[7] = auVar91[0];
          auVar91[8] = auVar91[0];
          auVar91[9] = auVar91[0];
          auVar91[10] = auVar91[0];
          auVar91[0xb] = auVar91[0];
          auVar91[0xc] = auVar91[0];
          auVar91[0xd] = auVar91[0];
          auVar91[0xe] = auVar91[0];
          auVar91[0xf] = auVar91[0];
          auVar81 = auVar81 ^ (auVar81 ^ auVar94) & auVar91;
          *(ulong *)(param_4 + 2) =
               CONCAT44(fVar45 + fVar44 + fVar30 * auVar81._12_4_ + fVar55 * fVar35,
                        fVar29 + fVar40 + fVar26 * auVar81._8_4_ + fVar64 * fVar32);
          *(ulong *)param_4 =
               CONCAT44(fVar36 + fVar51 + fVar34 * auVar81._4_4_ + fVar39 * fVar35,
                        fVar37 + fVar41 + fVar28 * auVar81._0_4_ + fVar33 * fVar32);
          fVar39 = (float)*(undefined8 *)(param_2 + 2);
          fVar30 = (float)*(undefined8 *)param_2;
          fVar35 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
          fVar34 = fVar30 - fVar37;
          fVar26 = fVar35 - fVar36;
          fVar33 = fVar39 - fVar29;
          auVar46 = *(undefined1 (*) [16])(param_1 + 0x90);
          fVar30 = fVar37 - fVar30;
          fVar35 = fVar36 - fVar35;
          fVar39 = fVar29 - fVar39;
          fVar64 = auVar46._0_4_;
          fVar32 = fVar34 * fVar64;
          fVar55 = auVar46._4_4_;
          fVar28 = fVar26 * fVar55;
          fVar43 = auVar46._8_4_;
          fVar44 = fVar33 * fVar43;
          fVar40 = fVar32 + fVar28 + fVar44;
          fVar44 = fVar32 + fVar28 + fVar44;
          fVar30 = fVar30 * fVar30;
          fVar35 = fVar35 * fVar35;
          fVar39 = fVar39 * fVar39;
          fVar41 = fVar64 * fVar40;
          fVar51 = fVar55 * fVar44;
          fVar40 = fVar43 * fVar40;
          fVar44 = auVar46._12_4_ * fVar44;
          auVar47._0_4_ = fVar34 - fVar41;
          auVar47._4_4_ = fVar26 - fVar51;
          auVar47._8_4_ = fVar33 - fVar40;
          auVar47._12_4_ = ((float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20) - fVar45) - fVar44;
          auVar77 = NEON_ext(auVar46,auVar46,8,1);
          uVar75 = NEON_ext(auVar46._0_8_,auVar77._0_8_,4,1);
          auVar77 = NEON_ext(auVar47,auVar47,4,1);
          fVar28 = (float)uVar75 * auVar47._0_4_ - fVar64 * auVar77._0_4_;
          fVar32 = (float)((ulong)uVar75 >> 0x20) * auVar47._4_4_ - fVar55 * auVar77._4_4_;
          uVar66 = (undefined1)((uint)fVar32 >> 8);
          uVar67 = (undefined1)((uint)fVar32 >> 0x10);
          uVar68 = (undefined1)((uint)fVar32 >> 0x18);
          fVar34 = fVar64 * auVar47._8_4_ - fVar43 * auVar47._0_4_;
          uVar69 = (undefined1)((uint)fVar34 >> 8);
          uVar70 = (undefined1)((uint)fVar34 >> 0x10);
          uVar71 = (undefined1)((uint)fVar34 >> 0x18);
          fVar26 = fVar55 * auVar47._12_4_ - auVar46._12_4_ * auVar47._4_4_;
          uVar72 = (undefined1)((uint)fVar26 >> 8);
          uVar73 = (undefined1)((uint)fVar26 >> 0x10);
          uVar74 = (undefined1)((uint)fVar26 >> 0x18);
          auVar16[4] = SUB41(fVar32,0);
          auVar16._0_4_ = fVar28;
          auVar16[5] = uVar66;
          auVar16[6] = uVar67;
          auVar16[7] = uVar68;
          auVar16[8] = SUB41(fVar34,0);
          auVar16[9] = uVar69;
          auVar16[10] = uVar70;
          auVar16[0xb] = uVar71;
          auVar16[0xc] = SUB41(fVar26,0);
          auVar16[0xd] = uVar72;
          auVar16[0xe] = uVar73;
          auVar16[0xf] = uVar74;
          auVar17[4] = SUB41(fVar32,0);
          auVar17._0_4_ = fVar28;
          auVar17[5] = uVar66;
          auVar17[6] = uVar67;
          auVar17[7] = uVar68;
          auVar17[8] = SUB41(fVar34,0);
          auVar17[9] = uVar69;
          auVar17[10] = uVar70;
          auVar17[0xb] = uVar71;
          auVar17[0xc] = SUB41(fVar26,0);
          auVar17[0xd] = uVar72;
          auVar17[0xe] = uVar73;
          auVar17[0xf] = uVar74;
          auVar46 = NEON_ext(auVar16,auVar17,4,1);
          fVar34 = auVar46._0_4_;
          fVar33 = auVar46._4_4_;
          fVar32 = fVar34 * fVar34 + fVar33 * fVar33 + fVar28 * fVar28;
          if (fVar32 == 0.0) {
            fVar34 = 0.0;
            fVar33 = 0.0;
            fVar28 = 0.0;
            fVar64 = 0.0;
          }
          else {
            fVar32 = SQRT(fVar32);
            fVar64 = SQRT(fVar34 * fVar34 + fVar33 * fVar33 + fVar28 * fVar28);
            fVar34 = fVar34 / fVar32;
            fVar33 = fVar33 / fVar64;
            fVar28 = fVar28 / fVar32;
            fVar64 = 0.0 / fVar64;
          }
          uVar75 = NEON_fmin(CONCAT44(SQRT(fVar30 + fVar35 + fVar39),SQRT(fVar30 + fVar35 + fVar39))
                             ,uVar27,4);
          fVar32 = auVar47._8_4_ * auVar47._8_4_ +
                   auVar47._0_4_ * auVar47._0_4_ + auVar47._4_4_ * auVar47._4_4_;
          fVar55 = auVar47._8_4_ * auVar47._8_4_ +
                   auVar47._0_4_ * auVar47._0_4_ + auVar47._4_4_ * auVar47._4_4_;
          fVar26 = (float)uVar75;
          fVar30 = (float)((ulong)uVar75 >> 0x20);
          if (fVar32 == 0.0) {
            fVar32 = fVar32 - fVar26 * fVar26;
            fVar55 = fVar55 - fVar30 * fVar30;
            fVar43 = 0.0;
            fVar50 = 0.0;
            uVar75 = CONCAT44(fVar30 * SQRT(fVar55) * 0.0,fVar26 * SQRT(fVar32) * 0.0);
            fVar26 = 0.0;
            fVar30 = 0.0;
            fVar35 = 0.0;
            fVar39 = 0.0;
          }
          else {
            fVar39 = SQRT(fVar32);
            fVar52 = SQRT(fVar55);
            uVar75 = NEON_fmov(0x3f800000,4);
            fVar32 = fVar32 - fVar26 * fVar26;
            fVar55 = fVar55 - fVar30 * fVar30;
            fVar43 = (float)uVar75 / fVar39;
            fVar50 = (float)((ulong)uVar75 >> 0x20) / fVar52;
            uVar75 = CONCAT44(fVar50 * fVar30 * SQRT(fVar55),fVar43 * fVar26 * SQRT(fVar32));
            fVar26 = auVar47._0_4_ / fVar39;
            fVar30 = auVar47._4_4_ / fVar52;
            fVar35 = auVar47._8_4_ / fVar39;
            fVar39 = auVar47._12_4_ /
                     (float)CONCAT13((char)((uint)fVar52 >> 0x18),
                                     CONCAT12((char)((uint)fVar52 >> 0x10),
                                              (short)(CONCAT15((char)((uint)fVar52 >> 8),
                                                               CONCAT14(SUB41(fVar52,0),fVar39)) >>
                                                     0x20)));
          }
          cVar65 = -(param_5 == '\x01');
          auVar82._8_8_ = uVar75;
          auVar82._0_8_ = uVar75;
          auVar60._0_8_ = CONCAT44(-(float)((ulong)uVar75 >> 0x20),-(float)uVar75);
          auVar60._8_8_ = auVar60._0_8_;
          fVar26 = fVar26 * fVar32 * fVar43;
          fVar30 = fVar30 * fVar55 * fVar50;
          fVar35 = fVar35 * fVar32 * fVar43;
          fVar39 = fVar39 * fVar55 * fVar50;
          auVar18[1] = cVar65;
          auVar18[0] = cVar65;
          auVar18[2] = cVar65;
          auVar18[3] = cVar65;
          auVar18[4] = cVar65;
          auVar18[5] = cVar65;
          auVar18[6] = cVar65;
          auVar18[7] = cVar65;
          auVar18[8] = cVar65;
          auVar18[9] = cVar65;
          auVar18[10] = cVar65;
          auVar18[0xb] = cVar65;
          auVar18[0xc] = cVar65;
          auVar18[0xd] = cVar65;
          auVar18[0xe] = cVar65;
          auVar18[0xf] = cVar65;
          auVar60 = auVar60 ^ (auVar60 ^ auVar82) & auVar18;
          fVar32 = fVar37 + fVar41 + fVar34 * auVar60._0_4_;
          fVar36 = fVar36 + fVar51 + fVar33 * auVar60._4_4_;
          fVar37 = fVar29 + fVar40 + fVar28 * auVar60._8_4_;
          fVar29 = fVar45 + fVar44 + fVar64 * auVar60._12_4_;
        }
        uVar75 = CONCAT44(fVar36 + fVar30,fVar32 + fVar26);
        uVar27 = CONCAT44(fVar29 + fVar39,fVar37 + fVar35);
        goto LAB_030c40d4;
      }
      if (fVar26 <= 0.0) {
        return;
      }
      auVar46 = *(undefined1 (*) [16])(param_1 + 0x90);
      fVar26 = auVar46._0_4_;
      fVar30 = (fVar32 - fVar37) * fVar26;
      fVar43 = auVar46._4_4_;
      fVar39 = (fVar28 - fVar36) * fVar43;
      fVar50 = auVar46._8_4_;
      fVar55 = (fVar34 - fVar29) * fVar50;
      fVar64 = fVar30 + fVar39 + fVar55;
      fVar55 = fVar30 + fVar39 + fVar55;
      fVar30 = (fVar37 - fVar32) * (fVar37 - fVar32);
      fVar40 = (fVar36 - fVar28) * (fVar36 - fVar28);
      fVar51 = (fVar29 - fVar34) * (fVar29 - fVar34);
      fVar39 = fVar26 * fVar64;
      fVar44 = fVar43 * fVar55;
      fVar64 = fVar50 * fVar64;
      fVar55 = auVar46._12_4_ * fVar55;
      auVar77 = NEON_ext(auVar46,auVar46,8,1);
      uVar27 = NEON_ext(auVar46._0_8_,auVar77._0_8_,4,1);
      auVar31._0_4_ = (fVar32 - fVar37) - fVar39;
      auVar31._4_4_ = (fVar28 - fVar36) - fVar44;
      auVar31._8_4_ = (fVar34 - fVar29) - fVar64;
      auVar31._12_4_ = (fVar33 - fVar45) - fVar55;
      auVar77 = NEON_ext(auVar31,auVar31,4,1);
      fVar34 = (float)uVar27 * auVar31._0_4_ - fVar26 * auVar77._0_4_;
      fVar32 = (float)((ulong)uVar27 >> 0x20) * auVar31._4_4_ - fVar43 * auVar77._4_4_;
      uVar66 = (undefined1)((uint)fVar32 >> 8);
      uVar67 = (undefined1)((uint)fVar32 >> 0x10);
      uVar68 = (undefined1)((uint)fVar32 >> 0x18);
      fVar28 = fVar26 * auVar31._8_4_ - fVar50 * auVar31._0_4_;
      uVar69 = (undefined1)((uint)fVar28 >> 8);
      uVar70 = (undefined1)((uint)fVar28 >> 0x10);
      uVar71 = (undefined1)((uint)fVar28 >> 0x18);
      fVar26 = fVar43 * auVar31._12_4_ - auVar46._12_4_ * auVar31._4_4_;
      uVar72 = (undefined1)((uint)fVar26 >> 8);
      uVar73 = (undefined1)((uint)fVar26 >> 0x10);
      uVar74 = (undefined1)((uint)fVar26 >> 0x18);
      auVar20[4] = SUB41(fVar32,0);
      auVar20._0_4_ = fVar34;
      auVar20[5] = uVar66;
      auVar20[6] = uVar67;
      auVar20[7] = uVar68;
      auVar20[8] = SUB41(fVar28,0);
      auVar20[9] = uVar69;
      auVar20[10] = uVar70;
      auVar20[0xb] = uVar71;
      auVar20[0xc] = SUB41(fVar26,0);
      auVar20[0xd] = uVar72;
      auVar20[0xe] = uVar73;
      auVar20[0xf] = uVar74;
      auVar21[4] = SUB41(fVar32,0);
      auVar21._0_4_ = fVar34;
      auVar21[5] = uVar66;
      auVar21[6] = uVar67;
      auVar21[7] = uVar68;
      auVar21[8] = SUB41(fVar28,0);
      auVar21[9] = uVar69;
      auVar21[10] = uVar70;
      auVar21[0xb] = uVar71;
      auVar21[0xc] = SUB41(fVar26,0);
      auVar21[0xd] = uVar72;
      auVar21[0xe] = uVar73;
      auVar21[0xf] = uVar74;
      auVar46 = NEON_ext(auVar20,auVar21,4,1);
      fVar28 = auVar46._0_4_;
      fVar26 = auVar46._4_4_;
      fVar32 = fVar28 * fVar28 + fVar26 * fVar26 + fVar34 * fVar34;
      if (fVar32 == 0.0) {
        fVar28 = 0.0;
        fVar26 = 0.0;
        fVar34 = 0.0;
        fVar33 = 0.0;
      }
      else {
        fVar32 = SQRT(fVar32);
        fVar33 = SQRT(fVar28 * fVar28 + fVar26 * fVar26 + fVar34 * fVar34);
        fVar28 = fVar28 / fVar32;
        fVar26 = fVar26 / fVar33;
        fVar34 = fVar34 / fVar32;
        fVar33 = 0.0 / (float)CONCAT13((char)((uint)fVar33 >> 0x18),
                                       CONCAT12((char)((uint)fVar33 >> 0x10),
                                                (short)(CONCAT15((char)((uint)fVar33 >> 8),
                                                                 CONCAT14(SUB41(fVar33,0),fVar32))
                                                       >> 0x20)));
      }
      uVar75 = NEON_fmin(CONCAT44(SQRT(fVar51 + fVar30 + fVar40),SQRT(fVar51 + fVar30 + fVar40)),
                         uVar75,4);
      fVar30 = auVar31._8_4_ * auVar31._8_4_ +
               auVar31._0_4_ * auVar31._0_4_ + auVar31._4_4_ * auVar31._4_4_;
      fVar51 = auVar31._8_4_ * auVar31._8_4_ +
               auVar31._0_4_ * auVar31._0_4_ + auVar31._4_4_ * auVar31._4_4_;
      fVar32 = (float)uVar75;
      fVar40 = (float)((ulong)uVar75 >> 0x20);
      if (fVar30 == 0.0) {
        fVar30 = fVar30 - fVar32 * fVar32;
        fVar51 = fVar51 - fVar40 * fVar40;
        uVar75 = CONCAT44(fVar40 * SQRT(fVar51) * 0.0,fVar32 * SQRT(fVar30) * 0.0);
        fVar43 = 0.0;
        fVar50 = 0.0;
        fVar52 = 0.0;
        fVar42 = 0.0;
      }
      else {
        fVar42 = SQRT(fVar30);
        fVar90 = SQRT(fVar51);
        uVar75 = NEON_fmov(0x3f800000,4);
        fVar30 = fVar30 - fVar32 * fVar32;
        fVar51 = fVar51 - fVar40 * fVar40;
        fVar35 = (float)uVar75 / fVar42;
        fVar41 = (float)((ulong)uVar75 >> 0x20) / fVar90;
        uVar75 = CONCAT44(fVar41 * fVar40 * SQRT(fVar51),fVar35 * fVar32 * SQRT(fVar30));
        fVar43 = auVar31._0_4_ / fVar42;
        fVar50 = auVar31._4_4_ / fVar90;
        fVar52 = auVar31._8_4_ / fVar42;
        fVar42 = auVar31._12_4_ /
                 (float)CONCAT13((char)((uint)fVar90 >> 0x18),
                                 CONCAT12((char)((uint)fVar90 >> 0x10),
                                          (short)(CONCAT15((char)((uint)fVar90 >> 8),
                                                           CONCAT14(SUB41(fVar90,0),fVar42)) >> 0x20
                                                 )));
      }
      cVar65 = -(param_5 == '\x01');
      auVar83._8_8_ = uVar75;
      auVar83._0_8_ = uVar75;
      auVar61._0_8_ = CONCAT44(-(float)((ulong)uVar75 >> 0x20),-(float)uVar75);
      auVar61._8_8_ = auVar61._0_8_;
      auVar22[1] = cVar65;
      auVar22[0] = cVar65;
      auVar22[2] = cVar65;
      auVar22[3] = cVar65;
      auVar22[4] = cVar65;
      auVar22[5] = cVar65;
      auVar22[6] = cVar65;
      auVar22[7] = cVar65;
      auVar22[8] = cVar65;
      auVar22[9] = cVar65;
      auVar22[10] = cVar65;
      auVar22[0xb] = cVar65;
      auVar22[0xc] = cVar65;
      auVar22[0xd] = cVar65;
      auVar22[0xe] = cVar65;
      auVar22[0xf] = cVar65;
      auVar61 = auVar61 ^ (auVar61 ^ auVar83) & auVar22;
      fVar32 = fVar37 + fVar39 + fVar28 * auVar61._0_4_;
      fVar28 = fVar36 + fVar44 + fVar26 * auVar61._4_4_;
      fVar39 = fVar29 + fVar64 + fVar34 * auVar61._8_4_;
      fVar40 = fVar45 + fVar55 + fVar33 * auVar61._12_4_;
      fVar43 = fVar43 * fVar30 * fVar35;
      fVar50 = fVar50 * fVar51 * fVar41;
      fVar52 = fVar52 * fVar30 * fVar35;
      fVar42 = fVar42 * fVar51 * fVar41;
    }
  }
  uVar75 = CONCAT44(fVar28 + fVar50,fVar32 + fVar43);
  uVar27 = CONCAT44(fVar40 + fVar42,fVar39 + fVar52);
LAB_030c3fb0:
  *(undefined8 *)(param_4 + 2) = uVar27;
  *(undefined8 *)param_4 = uVar75;
  return;
}


