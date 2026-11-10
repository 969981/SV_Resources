/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030447e0; name: FUN_030447e0
 */


undefined8 FUN_030447e0(float param_1,long param_2,long *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  uint uVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  float *pfVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  uint *puVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar43;
  float fVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar45;
  float fVar47;
  float fVar48;
  undefined1 auVar46 [16];
  float fVar49;
  float fVar50;
  undefined8 uVar51;
  float fVar53;
  undefined1 auVar52 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  ulong local_70;
  undefined8 uStack_68;
  
  iVar15 = (**(code **)(*param_3 + 0xf8))(param_3,*(undefined8 *)(param_2 + 0x20));
  if ((iVar15 == 0) ||
     (iVar15 = (**(code **)(*param_3 + 0xf8))(param_3,*(undefined8 *)(param_2 + 0x28)), iVar15 == 0)
     ) {
    uVar32 = 1;
  }
  else {
    uVar17 = *(ulong *)(param_2 + 0x20);
    if ((long)uVar17 < 0) {
      uVar17 = uVar17 & 0xffffffff;
    }
    else {
      uVar18 = FUN_00dbb6c8(param_3 + 300,uVar17,&local_70);
      uVar17 = local_70 & 0xffffffff;
      if ((uVar18 & 1) == 0) {
        uVar17 = 0xffffff;
      }
    }
    lVar24 = param_3[7];
    uVar17 = uVar17 & 0xffffff;
    uVar18 = *(ulong *)(param_2 + 0x28);
    if ((long)uVar18 < 0) {
      uVar18 = uVar18 & 0xffffffff;
      lVar23 = lVar24;
    }
    else {
      uVar16 = FUN_00dbb6c8(param_3 + 300,uVar18,&local_70);
      uVar18 = local_70 & 0xffffffff;
      lVar23 = param_3[7];
      if ((uVar16 & 1) == 0) {
        uVar18 = 0xffffff;
      }
    }
    if (((*(byte *)(lVar24 + uVar17 * 0xc0 + 0x88) & 1) != 0) &&
       (uVar18 = uVar18 & 0xffffff, (*(byte *)(lVar23 + uVar18 * 0xc0 + 0x88) & 1) != 0)) {
      puVar19 = (uint *)(lVar24 + uVar17 * 0xc0 + 0x54);
      uVar3 = *puVar19 & 8;
      puVar25 = (uint *)(lVar23 + uVar18 * 0xc0 + 0x54);
      uVar4 = *puVar25 & 8;
      if (uVar4 != 0 || uVar3 != 0) {
        puVar21 = (undefined8 *)(lVar24 + uVar17 * 0xc0);
        fVar56 = (float)*(undefined8 *)(param_2 + 0x48);
        fVar31 = (float)*(undefined8 *)(param_2 + 0x40);
        fVar57 = (float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
        lVar22 = lVar24 + uVar17 * 0xc0;
        pfVar20 = (float *)(lVar23 + uVar18 * 0xc0);
        fVar26 = *(float *)(lVar22 + 0x30) +
                 *(float *)(puVar21 + 4) * fVar56 +
                 (float)*puVar21 * fVar31 + *(float *)(puVar21 + 2) * fVar57;
        fVar27 = *(float *)(lVar22 + 0x34) +
                 *(float *)((long)puVar21 + 0x24) * fVar56 +
                 (float)((ulong)*puVar21 >> 0x20) * fVar31 +
                 *(float *)((long)puVar21 + 0x14) * fVar57;
        fVar29 = *(float *)(lVar22 + 0x38) +
                 *(float *)(puVar21 + 5) * fVar56 +
                 (float)puVar21[1] * fVar31 + *(float *)(puVar21 + 3) * fVar57;
        fVar30 = *(float *)(lVar22 + 0x3c) +
                 *(float *)((long)puVar21 + 0x2c) * fVar56 +
                 (float)((ulong)puVar21[1] >> 0x20) * fVar31 +
                 *(float *)((long)puVar21 + 0x1c) * fVar57;
        uStack_68 = CONCAT44(fVar30,fVar29);
        local_70 = CONCAT44(fVar27,fVar26);
        fVar31 = *(float *)(param_2 + 0x50);
        fVar57 = *(float *)(param_2 + 0x54);
        fVar56 = *(float *)(param_2 + 0x58);
        auVar52 = *(undefined1 (*) [16])(pfVar20 + 8);
        lVar22 = lVar23 + uVar18 * 0xc0;
        uVar51 = *(undefined8 *)(lVar22 + 0x38);
        uVar32 = *(undefined8 *)(lVar22 + 0x30);
        local_80 = (float)uVar32 +
                   auVar52._0_4_ * fVar56 +
                   *pfVar20 * fVar31 + (float)*(undefined8 *)(pfVar20 + 4) * fVar57;
        fStack_7c = (float)((ulong)uVar32 >> 0x20) +
                    auVar52._4_4_ * fVar56 +
                    pfVar20[1] * fVar31 +
                    (float)((ulong)*(undefined8 *)(pfVar20 + 4) >> 0x20) * fVar57;
        fStack_78 = (float)uVar51 +
                    auVar52._8_4_ * fVar56 +
                    pfVar20[2] * fVar31 + (float)*(undefined8 *)(pfVar20 + 6) * fVar57;
        fStack_74 = (float)((ulong)uVar51 >> 0x20) +
                    auVar52._12_4_ * fVar56 +
                    pfVar20[3] * fVar31 +
                    (float)((ulong)*(undefined8 *)(pfVar20 + 6) >> 0x20) * fVar57;
        fVar26 = local_80 - fVar26;
        fVar27 = fStack_7c - fVar27;
        fVar29 = fStack_78 - fVar29;
        fVar31 = fVar26 * fVar26 + fVar27 * fVar27 + fVar29 * fVar29;
        if (fVar31 == 0.0) {
          fVar31 = 0.0;
          fVar56 = 0.0;
          fVar26 = 0.0;
          fVar27 = 0.0;
          fVar29 = 0.0;
          fVar57 = 0.0;
        }
        else {
          fVar31 = SQRT(fVar31);
          fVar56 = SQRT(fVar26 * fVar26 + fVar27 * fVar27 + fVar29 * fVar29);
          fVar26 = fVar26 / fVar31;
          fVar27 = fVar27 / fVar56;
          fVar29 = fVar29 / fVar31;
          fVar57 = (fStack_74 - fVar30) / fVar56;
        }
        fVar30 = *(float *)(param_2 + 0x60);
        if (((fVar30 <= fVar31) || (*(char *)(param_2 + 0x6c) != '\0')) &&
           ((fVar31 <= fVar30 || (*(char *)(param_2 + 0x6d) != '\0')))) {
          if ((uVar3 == 0) && ((*(byte *)puVar19 & 1) == 0)) {
            (**(code **)(*param_3 + 0x370))(param_3,*(undefined8 *)(param_2 + 0x20),0);
          }
          if ((uVar4 == 0) && ((*(byte *)puVar25 & 1) == 0)) {
            (**(code **)(*param_3 + 0x370))(param_3,*(undefined8 *)(param_2 + 0x28),0);
          }
          pauVar1 = (undefined1 (*) [16])
                    (param_3[0x2a] + (ulong)*(uint *)(lVar24 + uVar17 * 0xc0 + 0x80) * 0x80);
          auVar52 = *pauVar1;
          auVar33 = NEON_ext(auVar52,auVar52,8,1);
          pauVar2 = (undefined1 (*) [16])
                    (param_3[0x2a] + (ulong)*(uint *)(lVar23 + uVar18 * 0xc0 + 0x80) * 0x80);
          fVar34 = (float)local_70 - (float)*(double *)pauVar1[1];
          fVar36 = (float)(local_70 >> 0x20) - (float)*(double *)(pauVar1[1] + 8);
          fVar37 = (float)uStack_68 - (float)*(double *)pauVar1[2];
          fVar38 = (float)((ulong)uStack_68 >> 0x20) - 0.0;
          fVar28 = auVar33._4_4_ * auVar33._4_4_;
          uVar32 = NEON_ext(auVar52._0_8_,auVar33._0_8_,4,1);
          fVar49 = fVar28 + -0.5;
          fVar28 = fVar28 + -0.5;
          auVar33 = pauVar1[7];
          fVar39 = auVar52._0_4_;
          fVar45 = auVar33._0_4_;
          fVar43 = auVar52._4_4_;
          fVar47 = auVar33._4_4_;
          fVar44 = auVar52._8_4_;
          fVar48 = auVar33._8_4_;
          fVar35 = auVar52._12_4_;
          fVar50 = fVar39 * fVar45 + fVar43 * fVar47 + fVar44 * fVar48;
          fVar53 = fVar39 * fVar45 + fVar43 * fVar47 + fVar44 * fVar48;
          auVar52 = NEON_ext(auVar33,auVar33,8,1);
          uVar51 = NEON_ext(auVar33._0_8_,auVar52._0_8_,4,1);
          auVar46._0_4_ = fVar39 * (float)uVar51 - fVar45 * (float)uVar32;
          auVar46._4_4_ =
               fVar43 * (float)((ulong)uVar51 >> 0x20) - fVar47 * (float)((ulong)uVar32 >> 0x20);
          auVar46._8_4_ = fVar44 * fVar45 - fVar48 * fVar39;
          auVar46._12_4_ = fVar35 * fVar47 - auVar33._12_4_ * fVar43;
          auVar52 = NEON_ext(auVar46,auVar46,4,1);
          fVar39 = fVar45 * fVar49 + fVar39 * fVar50 + auVar52._0_4_ * fVar35;
          fVar43 = fVar47 * fVar28 + fVar43 * fVar53 + auVar52._4_4_ * fVar35;
          fVar44 = fVar48 * fVar49 + fVar44 * fVar50 + auVar46._0_4_ * fVar35;
          fVar28 = auVar33._12_4_ * fVar28 + fVar35 * fVar53 + fVar35 * 0.0;
          auVar12._4_4_ = fVar36;
          auVar12._0_4_ = fVar34;
          auVar12._8_4_ = fVar37;
          auVar12._12_4_ = fVar38;
          auVar41._4_4_ = fVar36;
          auVar41._0_4_ = fVar34;
          auVar41._8_4_ = fVar37;
          auVar41._12_4_ = fVar38;
          auVar33 = NEON_ext(auVar12,auVar41,4,1);
          auVar40._0_4_ = fVar39 + fVar39;
          auVar40._4_4_ = fVar43 + fVar43;
          auVar40._8_4_ = fVar44 + fVar44;
          auVar40._12_4_ = fVar28 + fVar28;
          auVar52 = NEON_ext(auVar40,auVar40,4,1);
          fVar35 = auVar33._0_4_ * auVar40._0_4_ - fVar34 * auVar52._0_4_;
          fVar28 = auVar33._4_4_ * auVar40._4_4_ - fVar36 * auVar52._4_4_;
          fVar34 = fVar34 * auVar40._8_4_ - fVar37 * auVar40._0_4_;
          fVar36 = fVar36 * auVar40._12_4_ - fVar38 * auVar40._4_4_;
          auVar13._4_4_ = fVar28;
          auVar13._0_4_ = fVar35;
          auVar13._8_4_ = fVar34;
          auVar13._12_4_ = fVar36;
          auVar14._4_4_ = fVar28;
          auVar14._0_4_ = fVar35;
          auVar14._8_4_ = fVar34;
          auVar14._12_4_ = fVar36;
          auVar41 = NEON_ext(auVar13,auVar14,4,1);
          auVar52 = *pauVar2;
          auVar42._0_4_ = local_80 - (float)*(double *)pauVar2[1];
          auVar42._4_4_ = fStack_7c - (float)*(double *)(pauVar2[1] + 8);
          auVar42._8_4_ = fStack_78 - (float)*(double *)pauVar2[2];
          auVar42._12_4_ = fStack_74 - 0.0;
          auVar33 = NEON_ext(auVar52,auVar52,8,1);
          fVar53 = auVar33._4_4_ * auVar33._4_4_;
          uVar51 = NEON_ext(auVar52._0_8_,auVar33._0_8_,4,1);
          fVar50 = fVar53 + -0.5;
          fVar53 = fVar53 + -0.5;
          auVar12 = pauVar2[6];
          pauVar5 = pauVar2 + 7;
          fVar38 = (float)*(undefined8 *)(pauVar2[7] + 8);
          fVar43 = (float)((ulong)*(undefined8 *)(pauVar2[7] + 8) >> 0x20);
          uVar32 = *(undefined8 *)*pauVar5;
          fVar28 = (float)uVar32;
          fVar36 = (float)((ulong)uVar32 >> 0x20);
          fVar45 = auVar52._0_4_;
          fVar47 = auVar52._4_4_;
          fVar48 = auVar52._8_4_;
          fVar49 = auVar52._12_4_;
          fVar54 = fVar45 * fVar28 + fVar47 * fVar36 + fVar48 * fVar38;
          fVar55 = fVar45 * fVar28 + fVar47 * fVar36 + fVar48 * fVar38;
          auVar52._12_4_ = fVar43;
          auVar52._0_12_ = *(undefined1 (*) [12])*pauVar5;
          auVar33._12_4_ = fVar43;
          auVar33._0_12_ = *(undefined1 (*) [12])*pauVar5;
          auVar52 = NEON_ext(auVar52,auVar33,8,1);
          uVar32 = NEON_ext(uVar32,auVar52._0_8_,4,1);
          fVar34 = fVar45 * (float)uVar32 - fVar28 * (float)uVar51;
          fVar37 = fVar47 * (float)((ulong)uVar32 >> 0x20) - fVar36 * (float)((ulong)uVar51 >> 0x20)
          ;
          fVar39 = fVar48 * fVar28 - fVar38 * fVar45;
          fVar44 = fVar49 * fVar36 - fVar43 * fVar47;
          auVar6._4_4_ = fVar37;
          auVar6._0_4_ = fVar34;
          auVar6._8_4_ = fVar39;
          auVar6._12_4_ = fVar44;
          auVar7._4_4_ = fVar37;
          auVar7._0_4_ = fVar34;
          auVar7._8_4_ = fVar39;
          auVar7._12_4_ = fVar44;
          auVar52 = NEON_ext(auVar6,auVar7,4,1);
          auVar33 = NEON_ext(auVar42,auVar42,4,1);
          fVar28 = fVar28 * fVar50 + fVar45 * fVar54 + auVar52._0_4_ * fVar49;
          fVar36 = fVar36 * fVar53 + fVar47 * fVar55 + auVar52._4_4_ * fVar49;
          fVar38 = fVar38 * fVar50 + fVar48 * fVar54 + fVar34 * fVar49;
          fVar39 = fVar43 * fVar53 + fVar49 * fVar55 + fVar49 * 0.0;
          fVar28 = fVar28 + fVar28;
          fVar36 = fVar36 + fVar36;
          fVar38 = fVar38 + fVar38;
          fVar39 = fVar39 + fVar39;
          auVar8._4_4_ = fVar36;
          auVar8._0_4_ = fVar28;
          auVar8._8_4_ = fVar38;
          auVar8._12_4_ = fVar39;
          auVar9._4_4_ = fVar36;
          auVar9._0_4_ = fVar28;
          auVar9._8_4_ = fVar38;
          auVar9._12_4_ = fVar39;
          auVar52 = NEON_ext(auVar8,auVar9,4,1);
          fVar34 = auVar33._0_4_ * fVar28 - auVar42._0_4_ * auVar52._0_4_;
          fVar37 = auVar33._4_4_ * fVar36 - auVar42._4_4_ * auVar52._4_4_;
          fVar28 = auVar42._0_4_ * fVar38 - auVar42._8_4_ * fVar28;
          fVar36 = auVar42._4_4_ * fVar39 - auVar42._12_4_ * fVar36;
          auVar10._4_4_ = fVar37;
          auVar10._0_4_ = fVar34;
          auVar10._8_4_ = fVar28;
          auVar10._12_4_ = fVar36;
          auVar11._4_4_ = fVar37;
          auVar11._0_4_ = fVar34;
          auVar11._8_4_ = fVar28;
          auVar11._12_4_ = fVar36;
          auVar52 = NEON_ext(auVar10,auVar11,4,1);
          fVar28 = fVar26 * ((auVar12._0_4_ + auVar52._0_4_) -
                            ((float)*(undefined8 *)pauVar1[6] + auVar41._0_4_));
          fVar36 = fVar27 * ((auVar12._4_4_ + auVar52._4_4_) -
                            ((float)((ulong)*(undefined8 *)pauVar1[6] >> 0x20) + auVar41._4_4_));
          fVar34 = fVar29 * ((auVar12._8_4_ + fVar34) -
                            ((float)*(undefined8 *)(pauVar1[6] + 8) + fVar35));
          fVar31 = (fVar31 - fVar30) * *(float *)(param_2 + 100) +
                   (fVar28 + fVar36 + fVar34) * *(float *)(param_2 + 0x68);
          fVar56 = (fVar56 - fVar30) * *(float *)(param_2 + 100) +
                   (fVar28 + fVar36 + fVar34) * *(float *)(param_2 + 0x68);
          fVar26 = fVar26 * fVar31;
          fVar27 = fVar27 * fVar56;
          fVar29 = fVar29 * fVar31;
          fVar57 = fVar57 * fVar56;
          *(ulong *)(param_2 + 0x38) = CONCAT44(fVar57,fVar29);
          *(ulong *)(param_2 + 0x30) = CONCAT44(fVar27,fVar26);
          local_90 = fVar26 * param_1;
          fStack_8c = fVar27 * param_1;
          fStack_88 = fVar29 * param_1;
          fStack_84 = fVar57 * param_1;
          (**(code **)(*param_3 + 0x1c0))
                    (param_3,*(undefined8 *)(param_2 + 0x20),&local_90,&local_70,0);
          uStack_98 = CONCAT44(0.0 - fStack_84,0.0 - fStack_88);
          local_a0 = CONCAT44(0.0 - fStack_8c,0.0 - local_90);
          (**(code **)(*param_3 + 0x1c0))
                    (param_3,*(undefined8 *)(param_2 + 0x28),&local_a0,&local_80,0);
        }
      }
    }
    uVar32 = 0;
  }
  return uVar32;
}


