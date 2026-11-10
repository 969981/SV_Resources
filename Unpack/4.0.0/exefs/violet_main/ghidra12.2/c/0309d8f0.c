/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0309d8f0; name: FUN_0309d8f0
 */


int FUN_0309d8f0(long param_1,long param_2,uint *param_3,uint *param_4,undefined1 (*param_5) [16],
                float *param_6,float *param_7,float *param_8,ulong *param_9,undefined8 *param_10,
                uint *param_11)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar18;
  undefined8 *puVar17;
  float *pfVar19;
  uint *puVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  long *plVar27;
  uint uVar28;
  float *pfVar29;
  long *plVar30;
  ulong uVar31;
  long lVar32;
  long *plVar33;
  int *piVar34;
  long lVar35;
  float fVar36;
  float fVar43;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar44;
  undefined1 auVar45 [12];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  int iVar51;
  float fVar52;
  int iVar57;
  int iVar58;
  undefined1 auVar53 [16];
  int iVar59;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  int local_214;
  long local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  long local_198;
  undefined8 local_190;
  long local_188;
  undefined8 local_180;
  long local_178;
  undefined8 local_170;
  long local_168;
  undefined8 local_160;
  long local_158;
  undefined8 local_150;
  long local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_100;
  undefined8 uStack_f8;
  float local_f0;
  float fStack_ec;
  long lStack_e8;
  undefined8 local_e0;
  ulong local_d8;
  int local_d0;
  uint local_cc;
  undefined *local_c8;
  undefined4 local_c0;
  long local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a0;
  
  local_148 = 0;
  local_140 = 0x8000000000000000;
  iVar10 = *(int *)(param_2 + 0x10);
  if (iVar10 < *(int *)(param_2 + 0x20)) {
    auVar37._0_4_ = *param_6 * *param_8;
    auVar37._4_4_ = param_6[1] * param_8[1];
    auVar37._8_4_ = param_6[2] * param_8[2];
    auVar37._12_4_ = param_6[3] * param_8[3];
    auVar61 = NEON_ext(auVar37,auVar37,8,1);
    auVar47._0_4_ = *param_8 * *param_7;
    auVar47._4_4_ = param_8[1] * param_7[1];
    auVar47._8_4_ = param_8[2] * param_7[2];
    auVar47._12_4_ = param_8[3] * param_7[3];
    auVar46 = NEON_ext(auVar47,auVar47,8,1);
    auVar9._4_4_ = auVar37._0_4_ + auVar37._4_4_ + auVar61._4_4_;
    auVar9._0_4_ = auVar37._0_4_ + auVar37._4_4_ + auVar61._0_4_;
    auVar61._4_4_ = auVar47._0_4_ + auVar47._4_4_ + auVar46._4_4_;
    auVar61._0_4_ = auVar47._0_4_ + auVar47._4_4_ + auVar46._0_4_;
    lVar15 = (long)*(int *)(param_2 + 0x20) - (long)iVar10;
    piVar34 = (int *)(*(long *)(param_2 + 0x18) + (long)iVar10 * 0xc + 8);
    do {
      iVar10 = iVar10 + 1;
      if (*piVar34 == -1) {
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        *(undefined4 *)(param_2 + 0x50) = 0;
        iVar10 = piVar34[-2];
        if (iVar10 == -1) {
          return 0;
        }
        fVar68 = 3.40282e+38;
        local_214 = 0;
        auVar47 = NEON_fmov(0x3f800000,4);
        uVar11 = 0;
        puVar3 = PTR_DAT_047e5018 + 0x10;
        plVar33 = (long *)PTR_PTR_047d1a50;
        goto LAB_0309da50;
      }
      *(int *)(param_2 + 0x10) = iVar10;
      piVar34 = piVar34 + 3;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return 0;
LAB_0309da50:
  local_168 = 0;
  local_160 = -0x8000000000000000;
  local_158 = 0;
  local_150 = -0x8000000000000000;
  if (0 < (int)uVar11) {
    uVar12 = uVar11 & 7;
    if (uVar11 - 1 < 7) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      do {
        *(undefined4 *)(local_148 + uVar16 * 4) = 0xffffffff;
        *(undefined4 *)(local_148 + uVar16 * 4 + 4) = 0xffffffff;
        *(undefined4 *)(local_148 + uVar16 * 4 + 8) = 0xffffffff;
        *(undefined4 *)(local_148 + uVar16 * 4 + 0xc) = 0xffffffff;
        *(undefined4 *)(local_148 + uVar16 * 4 + 0x10) = 0xffffffff;
        *(undefined4 *)(local_148 + uVar16 * 4 + 0x14) = 0xffffffff;
        *(undefined4 *)(local_148 + uVar16 * 4 + 0x18) = 0xffffffff;
        lVar15 = uVar16 * 4;
        uVar16 = uVar16 + 8;
        *(undefined4 *)(local_148 + lVar15 + 0x1c) = 0xffffffff;
      } while ((uVar11 & 0xfffffff8) != uVar16);
    }
    if (uVar12 != 0) {
      lVar15 = uVar16 << 2;
      do {
        *(undefined4 *)(local_148 + lVar15) = 0xffffffff;
        uVar12 = uVar12 - 1;
        lVar15 = lVar15 + 4;
      } while (uVar12 != 0);
    }
  }
  local_138 = 0;
  FUN_0309f918(&local_168,param_1,iVar10,param_2,&local_148);
  local_178 = 0;
  local_170 = -0x8000000000000000;
  local_188 = 0;
  local_180 = 0x8000000000000000;
  if (0 < (int)local_160) {
    FUN_0309f444(&local_178);
    lVar15 = local_178;
    if (0 < (int)local_160) {
      lVar35 = 0;
      iVar10 = (int)local_170;
      do {
        uVar11 = local_180 >> 0x20;
        local_180 = local_180 & 0xffffffff00000000;
        piVar34 = *(int **)(local_168 + lVar35 * 8);
        iVar51 = *piVar34;
        if ((int)((uint)uVar11 & 0x7fffffff) < iVar51) {
          FUN_02e9b11c(&local_188,plVar33,(long)iVar51);
          iVar51 = *piVar34;
        }
        if (iVar51 < 1) {
          uVar11 = local_180 & 0xffffffff;
        }
        else {
          lVar32 = 0;
          do {
            uVar25 = *(uint *)(*(long *)(piVar34 + 2) + lVar32 * 4);
            uVar11 = (ulong)uVar25 & 0x3fffff;
            lVar13 = *(long *)(*(long *)(param_1 + 0x38) + ((ulong)(uVar25 >> 0xe) & 0x3ff00));
            lVar24 = *(long *)(lVar13 + 0x20);
            iVar51 = (int)uVar11;
            if (iVar51 < *(int *)(lVar24 + 0x40)) {
              pfVar19 = (float *)(*(long *)(lVar24 + 0x38) + uVar11 * 0x10);
            }
            else {
              pfVar19 = (float *)(*(long *)(lVar24 + 0xf0) +
                                 (long)(iVar51 - *(int *)(lVar24 + 0x40)) * 0x10);
            }
            fVar23 = *pfVar19;
            fVar36 = pfVar19[1];
            fVar64 = pfVar19[2];
            auVar46 = *(undefined1 (*) [16])(lVar13 + 0x80);
            uVar11 = (long)(int)local_180 + 1;
            auVar53._0_8_ =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0x90) >> 0x20) +
                          auVar46._4_4_ * fVar64 +
                          *(float *)(lVar13 + 100) * fVar23 + *(float *)(lVar13 + 0x74) * fVar36,
                          (float)*(undefined8 *)(lVar13 + 0x90) +
                          auVar46._0_4_ * fVar64 +
                          *(float *)(lVar13 + 0x60) * fVar23 + *(float *)(lVar13 + 0x70) * fVar36);
            auVar53._8_4_ =
                 (float)*(undefined8 *)(lVar13 + 0x98) +
                 auVar46._8_4_ * fVar64 +
                 *(float *)(lVar13 + 0x68) * fVar23 + *(float *)(lVar13 + 0x78) * fVar36;
            auVar53._12_4_ =
                 (float)((ulong)*(undefined8 *)(lVar13 + 0x98) >> 0x20) +
                 auVar46._12_4_ * fVar64 +
                 *(float *)(lVar13 + 0x6c) * fVar23 + *(float *)(lVar13 + 0x7c) * fVar36;
            if ((int)(local_180._4_4_ & 0x7fffffff) <= (int)local_180) {
              FUN_02e9b11c(&local_188,plVar33,uVar11);
              auVar53._8_8_ = auVar53._8_8_;
            }
            lVar32 = lVar32 + 1;
            puVar5 = (undefined8 *)(local_188 + (long)(int)local_180 * 0x10);
            puVar5[1] = auVar53._8_8_;
            *puVar5 = auVar53._0_8_;
            local_180 = CONCAT44(local_180._4_4_,(int)uVar11);
          } while (lVar32 < *piVar34);
        }
        local_100 = (undefined *)0x0;
        uStack_f8._0_4_ = 0.0;
        uStack_f8._4_4_ = -0.0;
        if (0 < (int)uVar11) {
          FUN_0309f65c(&local_100,PTR_PTR_047d1a50,uVar11 & 0xffffffff);
          iVar51 = (int)(float)uStack_f8;
          if (0 < (int)local_180) {
            lVar32 = 0;
            lVar13 = (long)(int)(float)uStack_f8;
            do {
              pfVar19 = (float *)(local_188 + lVar32 * 0x10);
              auVar48._0_4_ = *pfVar19 * *param_6;
              auVar48._4_4_ = pfVar19[1] * param_6[1];
              auVar48._8_4_ = pfVar19[2] * param_6[2];
              auVar48._12_4_ = pfVar19[3] * param_6[3];
              auVar46._0_4_ = *pfVar19 * *param_7;
              auVar46._4_4_ = pfVar19[1] * param_7[1];
              auVar46._8_4_ = pfVar19[2] * param_7[2];
              auVar46._12_4_ = pfVar19[3] * param_7[3];
              auVar53 = NEON_ext(auVar48,auVar48,8,1);
              auVar37 = NEON_ext(auVar46,auVar46,8,1);
              iVar57 = (int)lVar32;
              if (lVar13 + lVar32 < (long)((ulong)(uint)uStack_f8._4_4_ & 0x7fffffff)) {
                uStack_f8._0_4_ = (float)(iVar51 + iVar57);
              }
              else {
                FUN_0309f65c(&local_100,PTR_PTR_047d1a50,lVar13 + lVar32 + 1);
              }
              *(float *)(local_100 + (long)(int)(float)uStack_f8 * 8) =
                   auVar48._0_4_ + auVar48._4_4_ + auVar53._0_4_;
              *(float *)((long)(local_100 + (long)(int)(float)uStack_f8 * 8) + 4) =
                   auVar46._0_4_ + auVar46._4_4_ + auVar37._0_4_;
              lVar32 = lVar32 + 1;
              uStack_f8._0_4_ = (float)(iVar51 + iVar57 + 1);
            } while (lVar32 < (int)local_180);
          }
        }
        FUN_030a2448(&local_100);
        if (1 < (int)(float)uStack_f8) {
          puVar5 = (undefined8 *)(lVar15 + (long)iVar10 * 0x10);
          puVar17 = puVar5;
          do {
            puVar18 = puVar17 + 2;
            *puVar17 = 0;
            puVar17[1] = 0x8000000000000000;
            puVar17 = puVar18;
          } while (puVar18 != (undefined8 *)(lVar15 + ((long)iVar10 + 1) * 0x10));
          auVar38._0_8_ = *param_9;
          auVar38._8_8_ = 0;
          FUN_030a1a84(auVar38,puVar5,&local_100,8);
          iVar10 = (int)((long)iVar10 + 1);
        }
        uVar25 = (uint)uStack_f8._4_4_;
        plVar33 = (long *)PTR_PTR_047d1a50;
        uVar11 = (ulong)(uint)uStack_f8._4_4_;
        uStack_f8 = uVar11 << 0x20;
        if ((-1 < (int)uVar25) && (local_100 != (undefined *)0x0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_100,uVar11 << 3);
        }
        lVar35 = lVar35 + 1;
      } while (lVar35 < (int)local_160);
      local_170 = CONCAT44(local_170._4_4_,iVar10);
    }
  }
  local_198 = 0;
  local_190 = -0x8000000000000000;
  iVar10 = 0;
  if (param_3 != param_4) {
    puVar20 = param_3;
    do {
      if (1 < (int)local_140) {
        uVar28 = *puVar20;
        uVar25 = (uVar28 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar28 * -0x61c8864f & 0xff00ff) << 8;
        uVar25 = uVar25 >> 0x10 | uVar25 << 0x10;
        while( true ) {
          uVar25 = (int)local_140 - 1U & uVar25;
          uVar26 = *(uint *)(local_148 + (long)(int)uVar25 * 4);
          if (uVar26 == 0xffffffff) break;
          if (uVar26 == uVar28) {
            if ((int)uVar25 < (int)local_140) {
              iVar51 = iVar10 + 1;
              if ((int)(local_190._4_4_ & 0x7fffffff) <= iVar10) {
                FUN_0305c42c(&local_198,PTR_PTR_047d1a50 + 0x20,(long)iVar51);
                iVar10 = (int)local_190;
              }
              *(uint *)(local_198 + (long)iVar10 * 4) = uVar28;
              local_190 = CONCAT44(local_190._4_4_,iVar51);
              plVar33 = (long *)PTR_PTR_047d1a50;
              iVar10 = iVar51;
            }
            break;
          }
          uVar25 = uVar25 + 1;
        }
      }
      puVar20 = puVar20 + 1;
    } while (puVar20 != param_4);
  }
  FUN_0309fd68(&local_100,param_1,param_6,param_7,local_198,local_198 + (long)iVar10 * 4);
  if ((int)local_f0 < (int)local_e0) {
    piVar34 = (int *)(lStack_e8 + (long)(int)local_f0 * 0xc + 8);
    lVar15 = (long)(int)local_e0 - (long)(int)local_f0;
    do {
      fVar23 = (float)((int)local_f0 + 1);
      if (*piVar34 == -1) goto LAB_0309e328;
      piVar34 = piVar34 + 3;
      lVar15 = lVar15 + -1;
      local_f0 = fVar23;
    } while (lVar15 != 0);
  }
LAB_0309df10:
  local_b0 = 0;
  local_100 = puVar3;
  if ((-1 < (int)local_ac) && (local_b8 != 0)) {
    (**(code **)(plVar33[4] + 0x20))(plVar33 + 4,local_b8,(ulong)local_ac << 3);
  }
  local_b8 = 0;
  local_ac = 0x80000000;
  if ((local_c8 != (undefined *)0x0) && (*(int *)(local_c8 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)plVar33[1],local_c8,0);
    local_c8 = &DAT_03d7702c;
    local_c0 = 0;
  }
  uVar11 = local_d8;
  if (local_d0 != 0) {
    lVar15 = (long)local_d0 * 0x30;
    do {
      lVar35 = uVar11 + lVar15;
      *(undefined4 *)(lVar35 + -0x20) = 0;
      if ((-1 < (int)*(uint *)(lVar35 + -0x1c)) && (*(long *)(lVar35 + -0x28) != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                  (PTR_PTR_047d1a50,*(long *)(lVar35 + -0x28),
                   (ulong)*(uint *)(lVar35 + -0x1c) * 0x14);
      }
      lVar15 = lVar15 + -0x30;
      *(undefined8 *)(lVar35 + -0x28) = 0;
      *(undefined4 *)(lVar35 + -0x1c) = 0x80000000;
    } while (lVar15 != 0);
  }
  plVar33 = (long *)PTR_PTR_047d1a50;
  local_d0 = 0;
  if ((-1 < (int)local_cc) && (local_d8 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_d8,(ulong)local_cc * 0x30);
  }
  lVar15 = local_e0;
  uVar11 = (ulong)local_e0._4_4_;
  local_d8 = 0;
  local_cc = 0x80000000;
  local_e0 = (ulong)local_e0._4_4_ << 0x20;
  if ((-1 < lVar15) && (lStack_e8 != 0)) {
    (**(code **)(*(long *)((long)plVar33 + 0x20) + 0x20))
              ((long *)((long)plVar33 + 0x20),lStack_e8,uVar11 * 0xc);
  }
  lVar15 = local_190;
  uVar11 = (ulong)local_190._4_4_;
  local_190 = (ulong)local_190._4_4_ << 0x20;
  if ((-1 < lVar15) && (local_198 != 0)) {
    (**(code **)(*(long *)((long)plVar33 + 0x20) + 0x20))
              ((long *)((long)plVar33 + 0x20),local_198,uVar11 << 2);
  }
  lVar35 = local_178;
  iVar10 = (int)local_170;
  lVar15 = (long)(int)local_170;
  auVar61._8_8_ = 0;
  auVar9._8_8_ = 0;
  FUN_030a2520(auVar9,auVar61,&local_100,local_178,local_178 + lVar15 * 0x10);
  local_a0 = 0xff7fffee;
  local_d8 = local_d8 & 0xffffffff00000000;
  do {
    uVar11 = FUN_030a2c88(&local_100);
    lVar32 = uStack_f8;
  } while ((uVar11 & 1) != 0);
  if (fStack_ec._0_1_ == '\0') {
    FUN_030a2aec(&local_100);
  }
  else {
    fVar23 = uStack_f8._4_4_;
    FUN_030a2aec(&local_100);
    fVar36 = (float)lVar32;
    auVar55._8_4_ = 0x7f7fffee;
    auVar55._0_8_ = 0x7f7fffee7f7fffee;
    auVar6._8_4_ = 0x7f7fffee;
    auVar6._0_8_ = 0x7f7fffee7f7fffee;
    fStack_280 = auVar47._0_4_;
    fStack_27c = auVar47._4_4_;
    fStack_278 = auVar47._8_4_;
    fStack_274 = auVar47._12_4_;
    auVar39._0_8_ =
         (undefined *)
         CONCAT44(param_6[1] * fVar36 + param_7[1] * fVar23,*param_6 * fVar36 + *param_7 * fVar23);
    auVar39._8_4_ = param_6[2] * fVar36 + param_7[2] * fVar23;
    auVar39._12_4_ = param_6[3] * fVar36 + param_7[3] * fVar23;
    auVar46 = *param_5;
    uStack_f8 = auVar39._8_8_;
    iVar51 = -(uint)(auVar46._0_4_ == 0.0);
    iVar57 = -(uint)(auVar46._4_4_ == 0.0);
    iVar58 = -(uint)(auVar46._8_4_ == 0.0);
    local_f0 = (float)CONCAT13(auVar46[3] & ~(byte)((uint)iVar51 >> 0x18),
                               CONCAT12(auVar46[2] & ~(byte)((uint)iVar51 >> 0x10),
                                        CONCAT11(auVar46[1] & ~(byte)((uint)iVar51 >> 8),
                                                 auVar46[0] & ~(byte)iVar51)));
    auVar45._0_8_ =
         CONCAT17(auVar46[7] & ~(byte)((uint)iVar57 >> 0x18),
                  CONCAT16(auVar46[6] & ~(byte)((uint)iVar57 >> 0x10),
                           CONCAT15(auVar46[5] & ~(byte)((uint)iVar57 >> 8),
                                    CONCAT14(auVar46[4] & ~(byte)iVar57,local_f0))));
    auVar45[8] = auVar46[8] & ~(byte)iVar58;
    auVar45[9] = auVar46[9] & ~(byte)((uint)iVar58 >> 8);
    auVar45[10] = auVar46[10] & ~(byte)((uint)iVar58 >> 0x10);
    auVar45[0xb] = auVar46[0xb] & ~(byte)((uint)iVar58 >> 0x18);
    auVar49._12_2_ = 0;
    auVar49._0_12_ = auVar45;
    auVar49[0xe] = 0x80;
    auVar49[0xf] = 0x3f;
    auVar62._0_4_ = fStack_280 / local_f0;
    fStack_ec = (float)((ulong)auVar45._0_8_ >> 0x20);
    auVar62._4_4_ = fStack_27c / fStack_ec;
    auVar62._8_4_ = fStack_278 / auVar45._8_4_;
    auVar62._12_4_ = fStack_274 / auVar49._12_4_;
    iVar51 = -(uint)(local_f0 == 0.0);
    iVar57 = -(uint)(fStack_ec == 0.0);
    iVar58 = -(uint)(auVar45._8_4_ == 0.0);
    iVar59 = -(uint)(auVar49._12_4_ == 0.0);
    auVar54[0] = ~(byte)iVar51;
    auVar54[1] = ~(byte)((uint)iVar51 >> 8);
    auVar54[2] = ~(byte)((uint)iVar51 >> 0x10);
    auVar54[3] = ~(byte)((uint)iVar51 >> 0x18);
    auVar54[4] = ~(byte)iVar57;
    auVar54[5] = ~(byte)((uint)iVar57 >> 8);
    auVar54[6] = ~(byte)((uint)iVar57 >> 0x10);
    auVar54[7] = ~(byte)((uint)iVar57 >> 0x18);
    auVar54[8] = ~(byte)iVar58;
    auVar54[9] = ~(byte)((uint)iVar58 >> 8);
    auVar54[10] = ~(byte)((uint)iVar58 >> 0x10);
    auVar54[0xb] = ~(byte)((uint)iVar58 >> 0x18);
    auVar54[0xc] = ~(byte)iVar59;
    auVar54[0xd] = ~(byte)((uint)iVar59 >> 8);
    auVar54[0xe] = ~(byte)((uint)iVar59 >> 0x10);
    auVar54[0xf] = ~(byte)((uint)iVar59 >> 0x18);
    auVar6._12_4_ = 0x7f7fffee;
    auVar55._12_4_ = 0x7f7fffee;
    auVar55 = auVar55 ^ (auVar6 ^ auVar62) & auVar54;
    lStack_e8 = auVar49._8_8_;
    local_d8 = auVar55._8_8_;
    local_e0 = auVar55._0_8_;
    local_100 = auVar39._0_8_;
    if (*(int *)(param_2 + 0x50) == 0) {
      uVar11 = 0xffffffff;
    }
    else {
      plVar30 = *(long **)(param_2 + 0x48);
      plVar4 = plVar30 + *(int *)(param_2 + 0x50);
      if (param_3 == param_4) {
        uVar11 = 0xffffffff;
        plVar27 = plVar30;
        do {
          plVar14 = (long *)*plVar27;
          if ((((*(float *)(plVar14 + 2) <= fVar36) && (*(float *)((long)plVar14 + 0x14) <= fVar23))
              && (fVar36 <= *(float *)(plVar14 + 3))) &&
             (fVar23 <= *(float *)((long)plVar14 + 0x1c))) {
            if ((int)plVar14[1] != 0) {
              lVar32 = (long)(int)plVar14[1] * 0x14;
              pfVar19 = (float *)(*plVar14 + 0x10);
              do {
                if (0.0 < *pfVar19 + fVar36 * pfVar19[-2] + fVar23 * pfVar19[-1]) goto LAB_0309e748;
                lVar32 = lVar32 + -0x14;
                pfVar19 = pfVar19 + 5;
              } while (lVar32 != 0);
            }
            uVar25 = *(uint *)(plVar14 + 4);
            lVar13 = *(long *)(*(long *)(param_1 + 0x38) + ((ulong)(uVar25 >> 0xe) & 0x3ff00));
            lVar32 = *(long *)(lVar13 + 0x20);
            if ((*(int *)(lVar32 + 0x108) == 0) ||
               (uVar12 = (ulong)uVar25 & 0x3fffff,
               (*(byte *)(*(long *)(lVar32 + 0x100) + uVar12) & 1) == 0)) {
              uVar11 = (ulong)uVar25;
              break;
            }
            uVar28 = *(uint *)(*(long *)(lVar32 + 0x168) + uVar12 * 4);
            uVar16 = (ulong)uVar28;
            if (-1 < (int)uVar28) {
              uVar26 = *(uint *)(lVar32 + 0x170);
              lVar24 = (long)(int)uVar26;
              if ((int)uVar26 <= (int)(uVar28 + 1)) {
                uVar26 = uVar28 + 1;
              }
              uVar31 = uVar16;
              do {
                uVar21 = uVar31 + 1;
                if (lVar24 <= (long)uVar21) goto LAB_0309e810;
                lVar2 = uVar31 * 4;
                uVar31 = uVar21;
              } while (*(int *)(*(long *)(lVar32 + 0x168) + 4 + lVar2) == (int)uVar12);
              uVar26 = (uint)uVar21;
LAB_0309e810:
              if (uVar28 == uVar26) {
                plVar33 = (long *)PTR_PTR_047d1a50;
              }
              else {
                do {
                  uVar28 = (uint)uVar16;
                  local_1b0 = CONCAT44(local_1b0._4_4_,uVar28);
                  fVar64 = (float)FUN_03098e0c(lVar13,&local_1b0,&local_f0,&local_100,&local_130);
                  if (fVar64 < 6.200012e-05) {
                    uVar11 = (ulong)(uVar28 | uVar25 & 0xffc00000);
                    break;
                  }
                  uVar16 = (ulong)(uVar28 + 1);
                } while (uVar26 != uVar28 + 1);
                plVar33 = (long *)PTR_PTR_047d1a50;
              }
            }
          }
LAB_0309e748:
          plVar27 = plVar27 + 1;
        } while (plVar27 != plVar4);
      }
      else {
        uVar12 = 0xffffffff;
        plVar27 = plVar30;
        do {
          plVar14 = (long *)*plVar27;
          uVar25 = *(uint *)(plVar14 + 4);
          uVar11 = (ulong)uVar25;
          puVar20 = param_3;
          do {
            if (*puVar20 == uVar25) {
              if (param_4 != puVar20) goto LAB_0309e198;
              break;
            }
            puVar20 = puVar20 + 1;
          } while (param_4 != puVar20);
          if (((*(float *)(plVar14 + 2) <= fVar36) && (*(float *)((long)plVar14 + 0x14) <= fVar23))
             && ((fVar36 <= *(float *)(plVar14 + 3) && (fVar23 <= *(float *)((long)plVar14 + 0x1c)))
                )) {
            if ((int)plVar14[1] != 0) {
              lVar32 = (long)(int)plVar14[1] * 0x14;
              pfVar19 = (float *)(*plVar14 + 0x10);
              do {
                if (0.0 < *pfVar19 + fVar36 * pfVar19[-2] + fVar23 * pfVar19[-1]) goto LAB_0309e198;
                lVar32 = lVar32 + -0x14;
                pfVar19 = pfVar19 + 5;
              } while (lVar32 != 0);
            }
            lVar13 = *(long *)(*(long *)(param_1 + 0x38) + ((ulong)(uVar25 >> 0xe) & 0x3ff00));
            lVar32 = *(long *)(lVar13 + 0x20);
            if (*(int *)(lVar32 + 0x108) == 0) break;
            uVar16 = uVar11 & 0x3fffff;
            if ((*(byte *)(*(long *)(lVar32 + 0x100) + uVar16) & 1) == 0) break;
            uVar28 = *(uint *)(*(long *)(lVar32 + 0x168) + uVar16 * 4);
            uVar11 = (ulong)uVar28;
            if (-1 < (int)uVar28) {
              uVar26 = *(uint *)(lVar32 + 0x170);
              lVar24 = (long)(int)uVar26;
              if ((int)uVar26 <= (int)(uVar28 + 1)) {
                uVar26 = uVar28 + 1;
              }
              uVar31 = uVar11;
              do {
                uVar21 = uVar31 + 1;
                if (lVar24 <= (long)uVar21) goto LAB_0309e260;
                lVar2 = uVar31 * 4;
                uVar31 = uVar21;
              } while (*(int *)(*(long *)(lVar32 + 0x168) + 4 + lVar2) == (int)uVar16);
              uVar26 = (uint)uVar21;
LAB_0309e260:
              if (uVar28 == uVar26) {
                plVar33 = (long *)PTR_PTR_047d1a50;
              }
              else {
                do {
                  uVar28 = (uint)uVar11;
                  local_1b0 = CONCAT44(local_1b0._4_4_,uVar28);
                  fVar64 = (float)FUN_03098e0c(lVar13,&local_1b0,&local_f0,&local_100,&local_130);
                  if (fVar64 < 6.200012e-05) {
                    uVar12 = (ulong)(uVar28 | uVar25 & 0xffc00000);
                    break;
                  }
                  uVar11 = (ulong)(uVar28 + 1);
                } while (uVar26 != uVar28 + 1);
                plVar33 = (long *)PTR_PTR_047d1a50;
              }
            }
          }
LAB_0309e198:
          plVar27 = plVar27 + 1;
          uVar11 = uVar12;
        } while (plVar27 != plVar4);
      }
      if ((int)uVar11 == -1) {
        if (param_3 == param_4) {
          fVar64 = 3.40282e+38;
          uVar11 = 0xffffffff;
          do {
            plVar27 = (long *)*plVar30;
            uVar12 = (ulong)*(uint *)(plVar27 + 4);
            lVar32 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) +
                                        ((ulong)(*(uint *)(plVar27 + 4) >> 0xe) & 0x3ff00)) + 0x20);
            if ((*(int *)(lVar32 + 0x108) == 0) ||
               (uVar16 = uVar12 & 0x3fffff, (*(byte *)(*(long *)(lVar32 + 0x100) + uVar16) & 1) == 0
               )) {
              uVar25 = *(uint *)(plVar27 + 1);
              fVar43 = 0.0;
              if (0 < (int)uVar25) {
                uVar16 = 0;
                bVar1 = true;
                pfVar19 = (float *)(*plVar27 + 8);
                fVar43 = 3.4028235e+38;
                do {
                  fVar44 = pfVar19[2] + fVar36 * *pfVar19 + fVar23 * pfVar19[1];
                  uVar16 = uVar16 + 1;
                  bVar1 = (bool)(bVar1 & fVar44 <= 0.0);
                  iVar51 = 0;
                  if (uVar25 != 0) {
                    iVar51 = (int)uVar16 / (int)uVar25;
                  }
                  pfVar29 = (float *)(*plVar27 + (ulong)((int)uVar16 - iVar51 * uVar25) * 0x14);
                  fVar52 = *pfVar29;
                  fVar60 = pfVar29[1];
                  fVar67 = fVar60 - pfVar19[-1];
                  fVar65 = fVar23 - pfVar19[-1];
                  fVar66 = fVar52 - pfVar19[-2];
                  fVar63 = fVar36 - pfVar19[-2];
                  fVar66 = (fVar63 * fVar66 + fVar65 * fVar67) / (fVar66 * fVar66 + fVar67 * fVar67)
                  ;
                  if (0.0 <= fVar66) {
                    if (1.0 < fVar66) {
                      fVar52 = fVar36 - fVar52;
                      fVar60 = fVar23 - fVar60;
                      fVar63 = fVar52 * fVar52;
                      fVar65 = fVar60 * fVar60;
                      goto LAB_0309ed14;
                    }
                    fVar44 = ABS(fVar44);
                  }
                  else {
                    fVar63 = fVar63 * fVar63;
                    fVar65 = fVar65 * fVar65;
LAB_0309ed14:
                    fVar44 = SQRT(fVar63 + fVar65);
                  }
                  if (fVar43 <= fVar44) {
                    fVar44 = fVar43;
                  }
                  pfVar19 = pfVar19 + 5;
                  fVar43 = fVar44;
                } while (uVar25 != uVar16);
                fVar43 = 0.0;
                if (!bVar1) {
                  fVar43 = fVar44;
                }
              }
              if (fVar43 < fVar64) {
                uVar11 = uVar12;
                fVar64 = fVar43;
              }
            }
            else {
              uVar25 = *(uint *)(*(long *)(lVar32 + 0x168) + uVar16 * 4);
              uVar31 = (ulong)uVar25;
              if (-1 < (int)uVar25) {
                uVar28 = *(uint *)(lVar32 + 0x170);
                lVar13 = (long)(int)uVar28;
                if ((int)uVar28 <= (int)(uVar25 + 1)) {
                  uVar28 = uVar25 + 1;
                }
                uVar21 = uVar31;
                do {
                  uVar22 = uVar21 + 1;
                  if (lVar13 <= (long)uVar22) goto LAB_0309eda4;
                  lVar24 = uVar21 * 4;
                  uVar21 = uVar22;
                } while (*(int *)(*(long *)(lVar32 + 0x168) + 4 + lVar24) == (int)uVar16);
                uVar28 = (uint)uVar22;
LAB_0309eda4:
                if (uVar25 != uVar28) {
                  fVar43 = fVar64;
                  do {
                    uVar21 = uVar31 | uVar12 & 0xffc00000;
                    local_130 = 0;
                    uStack_128 = 0x8000000000000000;
                    FUN_030a13d0(&local_130,param_1,uVar21,param_6,param_7);
                    uVar16 = uStack_128;
                    fVar64 = 0.0;
                    if (0 < (int)(float)uStack_128) {
                      uVar22 = 0;
                      bVar1 = true;
                      pfVar19 = (float *)(local_130 + 8);
                      fVar64 = 3.4028235e+38;
                      do {
                        fVar44 = pfVar19[2] + fVar36 * *pfVar19 + fVar23 * pfVar19[1];
                        uVar22 = uVar22 + 1;
                        bVar1 = (bool)(bVar1 & fVar44 <= 0.0);
                        iVar51 = 0;
                        if ((float)uStack_128 != 0.0) {
                          iVar51 = (int)uVar22 / (int)(float)uStack_128;
                        }
                        pfVar29 = (float *)(local_130 +
                                           (ulong)(uint)((int)uVar22 -
                                                        iVar51 * (int)(float)uStack_128) * 0x14);
                        fVar52 = *pfVar29;
                        fVar60 = pfVar29[1];
                        fVar67 = fVar60 - pfVar19[-1];
                        fVar65 = fVar23 - pfVar19[-1];
                        fVar66 = fVar52 - pfVar19[-2];
                        fVar63 = fVar36 - pfVar19[-2];
                        fVar66 = (fVar63 * fVar66 + fVar65 * fVar67) /
                                 (fVar66 * fVar66 + fVar67 * fVar67);
                        if (0.0 <= fVar66) {
                          if (1.0 < fVar66) {
                            fVar52 = fVar36 - fVar52;
                            fVar60 = fVar23 - fVar60;
                            fVar63 = fVar52 * fVar52;
                            fVar65 = fVar60 * fVar60;
                            goto LAB_0309eea8;
                          }
                          fVar44 = ABS(fVar44);
                        }
                        else {
                          fVar63 = fVar63 * fVar63;
                          fVar65 = fVar65 * fVar65;
LAB_0309eea8:
                          fVar44 = SQRT(fVar63 + fVar65);
                        }
                        if (fVar64 <= fVar44) {
                          fVar44 = fVar64;
                        }
                        pfVar19 = pfVar19 + 5;
                        fVar64 = fVar44;
                      } while ((uStack_128 & 0xffffffff) != uVar22);
                      fVar64 = 0.0;
                      if (!bVar1) {
                        fVar64 = fVar44;
                      }
                    }
                    uVar22 = (ulong)(uint)uStack_128._4_4_;
                    uVar25 = (uint)uVar21;
                    if (fVar43 <= fVar64) {
                      uVar25 = (uint)uVar11;
                    }
                    uVar11 = (ulong)uVar25;
                    if (fVar43 <= fVar64) {
                      fVar64 = fVar43;
                    }
                    uStack_128 = (ulong)(uint)uStack_128._4_4_ << 0x20;
                    if ((-1 < (long)uVar16) && (local_130 != 0)) {
                      (**(code **)(*plVar33 + 0x20))(plVar33,local_130,uVar22 * 0x14);
                    }
                    uVar25 = (int)uVar31 + 1;
                    uVar31 = (ulong)uVar25;
                    fVar43 = fVar64;
                  } while (uVar25 != uVar28);
                }
              }
            }
            plVar30 = plVar30 + 1;
          } while (plVar30 != plVar4);
        }
        else {
          fVar64 = 3.40282e+38;
          uVar11 = 0xffffffff;
          do {
            plVar27 = (long *)*plVar30;
            uVar25 = *(uint *)(plVar27 + 4);
            puVar20 = param_3;
            do {
              if (*puVar20 == uVar25) {
                if (param_4 != puVar20) goto LAB_0309ebec;
                break;
              }
              puVar20 = puVar20 + 1;
            } while (param_4 != puVar20);
            lVar32 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) +
                                        ((ulong)(uVar25 >> 0xe) & 0x3ff00)) + 0x20);
            if ((*(int *)(lVar32 + 0x108) == 0) ||
               (uVar12 = (ulong)uVar25 & 0x3fffff,
               (*(byte *)(*(long *)(lVar32 + 0x100) + uVar12) & 1) == 0)) {
              uVar28 = *(uint *)(plVar27 + 1);
              fVar43 = 0.0;
              if (0 < (int)uVar28) {
                uVar12 = 0;
                bVar1 = true;
                pfVar19 = (float *)(*plVar27 + 8);
                fVar43 = 3.4028235e+38;
                do {
                  fVar44 = pfVar19[2] + fVar36 * *pfVar19 + fVar23 * pfVar19[1];
                  uVar12 = uVar12 + 1;
                  bVar1 = (bool)(bVar1 & fVar44 <= 0.0);
                  iVar51 = 0;
                  if (uVar28 != 0) {
                    iVar51 = (int)uVar12 / (int)uVar28;
                  }
                  pfVar29 = (float *)(*plVar27 + (ulong)((int)uVar12 - iVar51 * uVar28) * 0x14);
                  fVar52 = *pfVar29;
                  fVar60 = pfVar29[1];
                  fVar67 = fVar60 - pfVar19[-1];
                  fVar65 = fVar23 - pfVar19[-1];
                  fVar66 = fVar52 - pfVar19[-2];
                  fVar63 = fVar36 - pfVar19[-2];
                  fVar66 = (fVar63 * fVar66 + fVar65 * fVar67) / (fVar66 * fVar66 + fVar67 * fVar67)
                  ;
                  if (0.0 <= fVar66) {
                    if (1.0 < fVar66) {
                      fVar52 = fVar36 - fVar52;
                      fVar60 = fVar23 - fVar60;
                      fVar63 = fVar52 * fVar52;
                      fVar65 = fVar60 * fVar60;
                      goto LAB_0309e9d8;
                    }
                    fVar44 = ABS(fVar44);
                  }
                  else {
                    fVar63 = fVar63 * fVar63;
                    fVar65 = fVar65 * fVar65;
LAB_0309e9d8:
                    fVar44 = SQRT(fVar63 + fVar65);
                  }
                  if (fVar43 <= fVar44) {
                    fVar44 = fVar43;
                  }
                  pfVar19 = pfVar19 + 5;
                  fVar43 = fVar44;
                } while (uVar28 != uVar12);
                fVar43 = 0.0;
                if (!bVar1) {
                  fVar43 = fVar44;
                }
              }
              if (fVar43 < fVar64) {
                uVar11 = (ulong)uVar25;
                fVar64 = fVar43;
              }
            }
            else {
              uVar28 = *(uint *)(*(long *)(lVar32 + 0x168) + uVar12 * 4);
              uVar16 = (ulong)uVar28;
              if (-1 < (int)uVar28) {
                uVar26 = *(uint *)(lVar32 + 0x170);
                lVar13 = (long)(int)uVar26;
                if ((int)uVar26 <= (int)(uVar28 + 1)) {
                  uVar26 = uVar28 + 1;
                }
                uVar31 = uVar16;
                do {
                  uVar21 = uVar31 + 1;
                  if (lVar13 <= (long)uVar21) goto LAB_0309ea68;
                  lVar24 = uVar31 * 4;
                  uVar31 = uVar21;
                } while (*(int *)(*(long *)(lVar32 + 0x168) + 4 + lVar24) == (int)uVar12);
                uVar26 = (uint)uVar21;
LAB_0309ea68:
                if (uVar28 != uVar26) {
                  fVar43 = fVar64;
                  do {
                    uVar31 = uVar16 | (ulong)uVar25 & 0xffc00000;
                    local_130 = 0;
                    uStack_128 = 0x8000000000000000;
                    FUN_030a13d0(&local_130,param_1,uVar31,param_6,param_7);
                    uVar12 = uStack_128;
                    fVar64 = 0.0;
                    if (0 < (int)(float)uStack_128) {
                      uVar21 = 0;
                      bVar1 = true;
                      pfVar19 = (float *)(local_130 + 8);
                      fVar64 = 3.4028235e+38;
                      do {
                        fVar44 = pfVar19[2] + fVar36 * *pfVar19 + fVar23 * pfVar19[1];
                        uVar21 = uVar21 + 1;
                        bVar1 = (bool)(bVar1 & fVar44 <= 0.0);
                        iVar51 = 0;
                        if ((float)uStack_128 != 0.0) {
                          iVar51 = (int)uVar21 / (int)(float)uStack_128;
                        }
                        pfVar29 = (float *)(local_130 +
                                           (ulong)(uint)((int)uVar21 -
                                                        iVar51 * (int)(float)uStack_128) * 0x14);
                        fVar52 = *pfVar29;
                        fVar60 = pfVar29[1];
                        fVar67 = fVar60 - pfVar19[-1];
                        fVar65 = fVar23 - pfVar19[-1];
                        fVar66 = fVar52 - pfVar19[-2];
                        fVar63 = fVar36 - pfVar19[-2];
                        fVar66 = (fVar63 * fVar66 + fVar65 * fVar67) /
                                 (fVar66 * fVar66 + fVar67 * fVar67);
                        if (0.0 <= fVar66) {
                          if (1.0 < fVar66) {
                            fVar52 = fVar36 - fVar52;
                            fVar60 = fVar23 - fVar60;
                            fVar63 = fVar52 * fVar52;
                            fVar65 = fVar60 * fVar60;
                            goto LAB_0309eb68;
                          }
                          fVar44 = ABS(fVar44);
                        }
                        else {
                          fVar63 = fVar63 * fVar63;
                          fVar65 = fVar65 * fVar65;
LAB_0309eb68:
                          fVar44 = SQRT(fVar63 + fVar65);
                        }
                        if (fVar64 <= fVar44) {
                          fVar44 = fVar64;
                        }
                        pfVar19 = pfVar19 + 5;
                        fVar64 = fVar44;
                      } while ((uStack_128 & 0xffffffff) != uVar21);
                      fVar64 = 0.0;
                      if (!bVar1) {
                        fVar64 = fVar44;
                      }
                    }
                    uVar21 = (ulong)(uint)uStack_128._4_4_;
                    uVar28 = (uint)uVar31;
                    if (fVar43 <= fVar64) {
                      uVar28 = (uint)uVar11;
                    }
                    uVar11 = (ulong)uVar28;
                    if (fVar43 <= fVar64) {
                      fVar64 = fVar43;
                    }
                    uStack_128 = (ulong)(uint)uStack_128._4_4_ << 0x20;
                    if ((-1 < (long)uVar12) && (local_130 != 0)) {
                      (**(code **)(*plVar33 + 0x20))(plVar33,local_130,uVar21 * 0x14);
                    }
                    uVar28 = (int)uVar16 + 1;
                    uVar16 = (ulong)uVar28;
                    fVar43 = fVar64;
                  } while (uVar28 != uVar26);
                }
              }
            }
LAB_0309ebec:
            plVar30 = plVar30 + 1;
          } while (plVar30 != plVar4);
        }
      }
    }
    lVar32 = *(long *)(*(long *)(param_1 + 0x38) + (uVar11 >> 0x16) * 0x100);
    FUN_0309bf90(*(undefined8 *)(lVar32 + 0x20),(uint)uVar11 & 0x3fffff,&local_130);
    fVar36 = *(float *)(lVar32 + 0x80) * (float)uStack_128 +
             *(float *)(lVar32 + 0x60) * (float)local_130 +
             *(float *)(lVar32 + 0x70) * local_130._4_4_;
    fVar43 = *(float *)(lVar32 + 0x84) * (float)uStack_128 +
             *(float *)(lVar32 + 100) * (float)local_130 +
             *(float *)(lVar32 + 0x74) * local_130._4_4_;
    fVar44 = *(float *)(lVar32 + 0x88) * (float)uStack_128 +
             *(float *)(lVar32 + 0x68) * (float)local_130 +
             *(float *)(lVar32 + 0x78) * local_130._4_4_;
    auVar56._0_4_ = (float)*(undefined8 *)(lVar32 + 0x90) * fVar36;
    auVar56._4_4_ = (float)((ulong)*(undefined8 *)(lVar32 + 0x90) >> 0x20) * fVar43;
    auVar56._8_4_ = (float)*(undefined8 *)(lVar32 + 0x98) * fVar44;
    auVar56._12_4_ =
         (float)((ulong)*(undefined8 *)(lVar32 + 0x98) >> 0x20) *
         (*(float *)(lVar32 + 0x8c) * (float)uStack_128 +
         *(float *)(lVar32 + 0x6c) * (float)local_130 + *(float *)(lVar32 + 0x7c) * local_130._4_4_)
    ;
    auVar46 = NEON_ext(auVar56,auVar56,8,1);
    fVar23 = uStack_128._4_4_ - (auVar56._0_4_ + auVar56._4_4_ + auVar46._0_4_);
    fVar52 = (float)local_100 * fVar36;
    fVar63 = local_100._4_4_ * fVar43;
    fVar64 = uStack_f8._4_4_ * fVar23;
    auVar7._4_4_ = fVar63;
    auVar7._0_4_ = fVar52;
    auVar7._8_4_ = (float)uStack_f8 * fVar44;
    auVar7._12_4_ = fVar64;
    auVar8._4_4_ = fVar63;
    auVar8._0_4_ = fVar52;
    auVar8._8_4_ = (float)uStack_f8 * fVar44;
    auVar8._12_4_ = fVar64;
    auVar46 = NEON_ext(auVar7,auVar8,8,1);
    fVar44 = (float)lStack_e8 * fVar44;
    fVar23 = auVar46._0_4_ + fVar23;
    fVar64 = -(fVar52 + fVar63 + fVar23) / (local_f0 * fVar36 + fStack_ec * fVar43 + fVar44);
    fVar36 = -(fVar52 + fVar63 + fVar23) / (local_f0 * fVar36 + fStack_ec * fVar43 + fVar44);
    fVar23 = (float)local_100 + local_f0 * fVar64;
    fVar43 = local_100._4_4_ + fStack_ec * fVar36;
    auVar42._0_8_ = CONCAT44(fVar43,fVar23);
    auVar42._8_4_ = (float)uStack_f8 + (float)lStack_e8 * fVar64;
    auVar42._12_4_ = uStack_f8._4_4_ + (float)((ulong)lStack_e8 >> 0x20) * fVar36;
    fVar23 = fVar23 - *param_8;
    fVar43 = fVar43 - param_8[1];
    fVar23 = fVar23 * fVar23 + fVar43 * fVar43 +
             (auVar42._8_4_ - param_8[2]) * (auVar42._8_4_ - param_8[2]);
    if ((local_214 == 0) || (fVar23 < fVar68)) {
      param_10[1] = auVar42._8_8_;
      *param_10 = auVar42._0_8_;
      *param_11 = (uint)uVar11;
      fVar68 = fVar23;
    }
    local_214 = 1;
  }
  uVar11 = local_180;
  uVar12 = (ulong)local_180._4_4_;
  local_180 = (ulong)local_180._4_4_ << 0x20;
  if ((-1 < (long)uVar11) && (local_188 != 0)) {
    (**(code **)(*plVar33 + 0x20))(plVar33,local_188,uVar12 << 4);
  }
  if (iVar10 != 0) {
    lVar15 = lVar15 << 4;
    do {
      lVar32 = lVar35 + lVar15;
      *(undefined4 *)(lVar32 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar32 + -4)) && (*(long *)(lVar32 + -0x10) != 0)) {
        (**(code **)(*plVar33 + 0x20))
                  (plVar33,*(long *)(lVar32 + -0x10),(ulong)*(uint *)(lVar32 + -4) << 3);
      }
      lVar15 = lVar15 + -0x10;
      *(undefined8 *)(lVar32 + -0x10) = 0;
      *(undefined4 *)(lVar32 + -4) = 0x80000000;
    } while (lVar15 != 0);
  }
  lVar15 = local_170;
  uVar11 = (ulong)local_170._4_4_;
  local_170 = (ulong)local_170._4_4_ << 0x20;
  if ((-1 < lVar15) && (local_178 != 0)) {
    (**(code **)(plVar33[4] + 0x20))(plVar33 + 4,local_178,uVar11 << 4);
  }
  if (0 < (int)local_160) {
    lVar15 = 0;
    iVar10 = (int)local_160;
    do {
      lVar35 = *(long *)(local_168 + lVar15 * 8);
      if (lVar35 != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar35,0);
        iVar10 = (int)local_160;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar10);
  }
  lVar15 = local_150;
  uVar11 = (ulong)local_150._4_4_;
  local_150 = (ulong)local_150._4_4_ << 0x20;
  if ((-1 < lVar15) && (local_158 != 0)) {
    (**(code **)(*plVar33 + 0x20))(plVar33,local_158,uVar11 << 2);
  }
  lVar15 = local_160;
  uVar11 = (ulong)local_160._4_4_;
  local_158 = 0;
  local_150 = CONCAT44(0x80000000,(undefined4)local_150);
  local_160 = (ulong)local_160._4_4_ << 0x20;
  if ((-1 < lVar15) && (local_168 != 0)) {
    (**(code **)(*plVar33 + 0x20))(plVar33,local_168,uVar11 << 3);
  }
  uVar11 = local_140;
  iVar10 = *(int *)(param_2 + 0x10);
  if (*(int *)(param_2 + 0x20) <= iVar10) {
LAB_0309f20c:
    uVar12 = (ulong)local_140._4_4_;
    local_140 = (ulong)local_140._4_4_ << 0x20;
    if ((-1 < (long)uVar11) && (local_148 != 0)) {
      (**(code **)(*plVar33 + 0x20))(plVar33,local_148,uVar12 << 2);
    }
    return local_214;
  }
  piVar34 = (int *)(*(long *)(param_2 + 0x18) + (long)iVar10 * 0xc + 8);
  lVar15 = (long)*(int *)(param_2 + 0x20) - (long)iVar10;
  while (iVar10 = iVar10 + 1, *piVar34 != -1) {
    *(int *)(param_2 + 0x10) = iVar10;
    piVar34 = piVar34 + 3;
    lVar15 = lVar15 + -1;
    if (lVar15 == 0) goto LAB_0309f20c;
  }
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  *(undefined4 *)(param_2 + 0x50) = 0;
  iVar10 = piVar34[-2];
  if (iVar10 == -1) goto LAB_0309f20c;
  uVar11 = local_140 & 0xffffffff;
  goto LAB_0309da50;
LAB_0309e328:
  fStack_ec = (float)((int)fStack_ec + 1);
  local_b0 = 0;
  if (piVar34[-2] == -1) goto LAB_0309df10;
  local_1a0 = 0;
  local_130 = 0;
  uStack_128 = 0x8000000000000000;
  local_120 = 0;
  local_118 = -0x8000000000000000;
  local_1b0 = 0;
  local_1a8 = -0x8000000000000000;
  FUN_0309f918(&local_130,param_1,piVar34[-2],&local_100,&local_1b0);
  uVar11 = uStack_128 & 0xffffffff;
  if (0 < (int)(float)uStack_128) {
    lVar15 = 0;
    do {
      uVar11 = local_180 >> 0x20;
      local_180 = local_180 & 0xffffffff00000000;
      piVar34 = *(int **)(local_130 + lVar15 * 8);
      iVar10 = *piVar34;
      if ((int)((uint)uVar11 & 0x7fffffff) < iVar10) {
        FUN_02e9b11c(&local_188,plVar33,(long)iVar10);
        iVar10 = *piVar34;
      }
      if (0 < iVar10) {
        lVar35 = 0;
        do {
          uVar25 = *(uint *)(*(long *)(piVar34 + 2) + lVar35 * 4);
          uVar11 = (ulong)uVar25 & 0x3fffff;
          lVar32 = *(long *)(*(long *)(param_1 + 0x38) + ((ulong)(uVar25 >> 0xe) & 0x3ff00));
          lVar13 = *(long *)(lVar32 + 0x20);
          iVar10 = (int)uVar11;
          if (iVar10 < *(int *)(lVar13 + 0x40)) {
            pfVar19 = (float *)(*(long *)(lVar13 + 0x38) + uVar11 * 0x10);
          }
          else {
            pfVar19 = (float *)(*(long *)(lVar13 + 0xf0) +
                               (long)(iVar10 - *(int *)(lVar13 + 0x40)) * 0x10);
          }
          fVar23 = *pfVar19;
          fVar36 = pfVar19[1];
          fVar64 = pfVar19[2];
          auVar46 = *(undefined1 (*) [16])(lVar32 + 0x80);
          lVar13 = (long)(int)local_180;
          auVar40._0_8_ =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar32 + 0x90) >> 0x20) +
                        auVar46._4_4_ * fVar64 +
                        *(float *)(lVar32 + 100) * fVar23 + *(float *)(lVar32 + 0x74) * fVar36,
                        (float)*(undefined8 *)(lVar32 + 0x90) +
                        auVar46._0_4_ * fVar64 +
                        *(float *)(lVar32 + 0x60) * fVar23 + *(float *)(lVar32 + 0x70) * fVar36);
          auVar40._8_4_ =
               (float)*(undefined8 *)(lVar32 + 0x98) +
               auVar46._8_4_ * fVar64 +
               *(float *)(lVar32 + 0x68) * fVar23 + *(float *)(lVar32 + 0x78) * fVar36;
          auVar40._12_4_ =
               (float)((ulong)*(undefined8 *)(lVar32 + 0x98) >> 0x20) +
               auVar46._12_4_ * fVar64 +
               *(float *)(lVar32 + 0x6c) * fVar23 + *(float *)(lVar32 + 0x7c) * fVar36;
          if ((int)(local_180._4_4_ & 0x7fffffff) <= (int)local_180) {
            FUN_02e9b11c(&local_188,plVar33,lVar13 + 1);
            auVar40._8_8_ = auVar40._8_8_;
          }
          lVar35 = lVar35 + 1;
          puVar5 = (undefined8 *)(local_188 + (long)(int)local_180 * 0x10);
          puVar5[1] = auVar40._8_8_;
          *puVar5 = auVar40._0_8_;
          local_180 = CONCAT44(local_180._4_4_,(int)(lVar13 + 1));
        } while (lVar35 < *piVar34);
      }
      iVar10 = (int)local_170;
      lVar35 = (long)(int)local_170;
      if ((int)(local_170._4_4_ & 0x7fffffff) <= (int)local_170) {
        FUN_0309f76c(&local_178,lVar35 + 1);
      }
      lVar32 = local_178;
      plVar33 = (long *)(local_178 + (long)(int)local_170 * 0x10);
      iVar51 = (int)(lVar35 + 1);
      local_170 = CONCAT44(local_170._4_4_,iVar51);
      *plVar33 = 0;
      plVar30 = plVar33 + 1;
      *plVar30 = -0x8000000000000000;
      if (0 < (int)local_180) {
        FUN_0309f65c(plVar33,PTR_PTR_047d1a50);
        if (0 < (int)local_180) {
          lVar35 = (long)(int)*plVar30;
          uVar11 = local_180 & 0xffffffff;
          do {
            pfVar19 = (float *)(local_188 + (uVar11 - 1) * 0x10);
            auVar41._0_4_ = *pfVar19 * *param_6;
            auVar41._4_4_ = pfVar19[1] * param_6[1];
            auVar41._8_4_ = pfVar19[2] * param_6[2];
            auVar41._12_4_ = pfVar19[3] * param_6[3];
            auVar50._0_4_ = *pfVar19 * *param_7;
            auVar50._4_4_ = pfVar19[1] * param_7[1];
            auVar50._8_4_ = pfVar19[2] * param_7[2];
            auVar50._12_4_ = pfVar19[3] * param_7[3];
            auVar37 = NEON_ext(auVar50,auVar50,8,1);
            auVar46 = NEON_ext(auVar41,auVar41,8,1);
            iVar57 = (int)lVar35;
            if ((long)((ulong)*(uint *)((long)plVar33 + 0xc) & 0x7fffffff) <= lVar35) {
              FUN_0309f65c(plVar33,PTR_PTR_047d1a50,lVar35 + 1);
              iVar57 = (int)*plVar30;
            }
            pfVar19 = (float *)(*plVar33 + (long)iVar57 * 8);
            *pfVar19 = auVar41._0_4_ + auVar41._4_4_ + auVar46._0_4_;
            pfVar19[1] = auVar50._0_4_ + auVar50._4_4_ + auVar37._0_4_;
            *(int *)plVar30 = (int)lVar35 + 1;
            bVar1 = 1 < (long)uVar11;
            lVar35 = lVar35 + 1;
            uVar11 = uVar11 - 1;
          } while (bVar1);
        }
      }
      FUN_030a2448(plVar33);
      if ((int)*plVar30 < 3) {
        lVar32 = lVar32 + (long)iVar51 * 0x10;
        *(undefined4 *)(lVar32 + -8) = 0;
        if ((-1 < (int)*(uint *)(lVar32 + -4)) && (*(long *)(lVar32 + -0x10) != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,*(long *)(lVar32 + -0x10),(ulong)*(uint *)(lVar32 + -4) << 3);
        }
        *(undefined8 *)(lVar32 + -0x10) = 0;
        *(undefined4 *)(lVar32 + -4) = 0x80000000;
        local_170 = CONCAT44(local_170._4_4_,iVar10);
      }
      uVar11 = (ulong)(int)(float)uStack_128;
      lVar15 = lVar15 + 1;
      plVar33 = (long *)PTR_PTR_047d1a50;
    } while (lVar15 < (long)uVar11);
  }
  lVar15 = local_1a8;
  uVar12 = (ulong)local_1a8._4_4_;
  local_1a8 = (ulong)local_1a8._4_4_ << 0x20;
  if ((-1 < lVar15) && (local_1b0 != 0)) {
    (**(code **)(*plVar33 + 0x20))(plVar33,local_1b0,uVar12 << 2);
    uVar11 = uStack_128 & 0xffffffff;
  }
  if (0 < (int)uVar11) {
    lVar15 = 0;
    do {
      lVar35 = *(long *)(local_130 + lVar15 * 8);
      if (lVar35 != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar35,0);
        uVar11 = uStack_128 & 0xffffffff;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)uVar11);
  }
  lVar15 = local_118;
  uVar11 = (ulong)local_118._4_4_;
  local_118 = (ulong)local_118._4_4_ << 0x20;
  if ((-1 < lVar15) && (local_120 != 0)) {
    (**(code **)(*plVar33 + 0x20))(plVar33,local_120,uVar11 << 2);
  }
  uVar11 = uStack_128;
  uVar12 = (ulong)(uint)uStack_128._4_4_;
  local_120 = 0;
  local_118 = CONCAT44(0x80000000,(undefined4)local_118);
  uStack_128 = (ulong)(uint)uStack_128._4_4_ << 0x20;
  if ((-1 < (long)uVar11) && (local_130 != 0)) {
    (**(code **)(*plVar33 + 0x20))(plVar33,local_130,uVar12 << 3);
  }
  if ((int)local_e0 <= (int)local_f0) goto LAB_0309df10;
  piVar34 = (int *)(lStack_e8 + (long)(int)local_f0 * 0xc + 8);
  lVar15 = (long)(int)local_e0 - (long)(int)local_f0;
  while (fVar23 = (float)((int)local_f0 + 1), *piVar34 != -1) {
    piVar34 = piVar34 + 3;
    lVar15 = lVar15 + -1;
    local_f0 = fVar23;
    if (lVar15 == 0) goto LAB_0309df10;
  }
  goto LAB_0309e328;
}


