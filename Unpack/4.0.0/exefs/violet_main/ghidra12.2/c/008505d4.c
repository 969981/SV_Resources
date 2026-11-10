/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008505d4; name: FUN_008505d4
 */


undefined4
FUN_008505d4(long param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],uint param_4,
            undefined8 *param_5)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  byte bVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  uint uVar20;
  undefined1 (*pauVar21) [16];
  long lVar22;
  ulong uVar23;
  uint uVar24;
  undefined1 (*pauVar25) [16];
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  int *piVar33;
  ulong uVar34;
  undefined1 (*pauVar35) [16];
  undefined1 (*pauVar36) [16];
  ulong uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  float fVar42;
  undefined8 uVar43;
  float fVar44;
  undefined8 uVar45;
  float fVar50;
  undefined1 auVar46 [16];
  float fVar49;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar51;
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar56;
  float fVar57;
  undefined1 auVar55 [16];
  float fVar58;
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined8 uVar64;
  long local_120;
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined8 local_a8;
  long local_a0;
  ulong local_98;
  long local_90;
  long lStack_88;
  ulong local_80 [2];
  
  local_d8 = 0;
  local_d0 = 0x8000000000000000;
  lVar30 = tpidr_el0;
  lVar15 = *(long *)(lVar30 + 0x1000b8);
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar30 + 0x1000b8) = lVar15;
  }
  uVar24 = param_4 * 3;
  local_c8 = *(long *)(*(long *)(lVar15 + 0x3d0) + 0x10);
  if (*(long *)(local_c8 + 8) == 0) {
    local_b8 = -(ulong)(uVar24 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar24 << 4;
    local_80[0] = local_b8;
    if (local_c8 == 0) goto LAB_008506cc;
    local_b0 = local_b8 + 0x3f & 0xffffffffffffffc0;
    if (*(ulong *)(local_c8 + 0x28) < local_b0) {
LAB_0085067c:
      local_c0 = FUN_031cf3b4(local_c8,&local_b0);
    }
    else {
      local_c0 = *(long *)(local_c8 + 0x38);
      if (*(ulong *)(local_c8 + 0x40) < local_b0 + local_c0) goto LAB_0085067c;
      *(ulong *)(local_c8 + 0x38) = local_b0 + local_c0;
    }
  }
  else {
    local_c8 = 0;
    local_80[0] = -(ulong)(uVar24 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar24 << 4;
LAB_008506cc:
    local_b8 = local_80[0];
    local_c0 = (**(code **)PTR_DAT_047d1a08)(1,local_80,0x40);
  }
  local_d0 = CONCAT44(uVar24,(int)local_d0) | 0x8000000000000000;
  iVar29 = (param_4 - 1) * param_4;
  if (iVar29 < 0) {
    iVar29 = iVar29 + 1;
  }
  lVar15 = *(long *)(lVar30 + 0x1000b8);
  local_d8 = local_c0;
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar30 + 0x1000b8) = lVar15;
  }
  uVar24 = iVar29 >> 1;
  lVar15 = *(long *)(*(long *)(lVar15 + 0x3d0) + 0x10);
  if (*(long *)(lVar15 + 8) == 0) {
    uVar32 = -(ulong)(uVar24 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar24 << 2;
    local_80[0] = uVar32;
    if (lVar15 == 0) goto LAB_008507bc;
    local_b0 = uVar32 + 0x3f & 0xffffffffffffffc0;
    if (*(ulong *)(lVar15 + 0x28) < local_b0) {
LAB_00850774:
      local_120 = FUN_031cf3b4(lVar15,&local_b0);
    }
    else {
      local_120 = *(long *)(lVar15 + 0x38);
      if (*(ulong *)(lVar15 + 0x40) < local_b0 + local_120) goto LAB_00850774;
      *(ulong *)(lVar15 + 0x38) = local_b0 + local_120;
    }
  }
  else {
    local_80[0] = -(ulong)(uVar24 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar24 << 2;
LAB_008507bc:
    uVar32 = local_80[0];
    local_120 = (**(code **)PTR_DAT_047d1a08)(1,local_80,0x40);
    lVar15 = 0;
  }
  local_b0 = 0;
  local_a8 = 0x8000000000000000;
  lVar16 = *(long *)(lVar30 + 0x1000b8);
  if (lVar16 == 0) {
    lVar16 = FUN_00e5d3b4();
    *(long *)(lVar30 + 0x1000b8) = lVar16;
  }
  local_a0 = *(long *)(*(long *)(lVar16 + 0x3d0) + 0x10);
  if (*(long *)(local_a0 + 8) != 0) {
    local_a0 = 0;
  }
  local_90 = (long)(int)uVar24 * 0x10;
  lStack_88 = local_90;
  if (local_a0 == 0) {
    local_98 = (**(code **)PTR_DAT_047d1a08)(1,&lStack_88,0x40);
  }
  else {
    local_80[0] = local_90 + 0x3fU & 0xffffffffffffffc0;
    if (local_80[0] <= *(ulong *)(local_a0 + 0x28)) {
      local_98 = *(ulong *)(local_a0 + 0x38);
      if (local_80[0] + local_98 <= *(ulong *)(local_a0 + 0x40)) {
        *(ulong *)(local_a0 + 0x38) = local_80[0] + local_98;
        goto LAB_00850880;
      }
    }
    local_98 = FUN_031cf3b4(local_a0,local_80);
  }
LAB_00850880:
  local_a8 = CONCAT44(uVar24,(int)local_a8) | 0x8000000000000000;
  local_b0 = local_98;
  if (0 < (int)param_4) {
    uVar64 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x60);
    iVar29 = 0;
    uVar23 = (ulong)param_4;
    uVar27 = 1;
    puVar2 = PTR_PTR_047d1a50 + 0x20;
    uVar26 = 0;
    pauVar21 = param_3;
    pauVar25 = param_2;
    do {
      pauVar25 = pauVar25 + 1;
      pauVar21 = pauVar21 + 1;
      uVar37 = uVar26 + 1;
      if (uVar37 < uVar23) {
        piVar33 = (int *)(local_120 + (long)iVar29 * 4);
        uVar34 = uVar23;
        pauVar35 = pauVar25;
        pauVar36 = pauVar21;
        do {
          auVar52 = param_2[uVar26];
          auVar48 = *pauVar35;
          fVar44 = auVar52._0_4_;
          fVar51 = auVar48._0_4_;
          fVar49 = auVar52._4_4_;
          fVar54 = auVar48._4_4_;
          fVar50 = auVar52._8_4_;
          fVar57 = auVar48._8_4_;
          fVar53 = fVar44 * fVar51 + fVar49 * fVar54 + fVar50 * fVar57;
          fVar56 = fVar44 * fVar51 + fVar49 * fVar54 + fVar50 * fVar57;
          fVar60 = (float)uVar64;
          fVar42 = fVar60 - fVar53 * fVar53;
          fVar62 = (float)((ulong)uVar64 >> 0x20);
          if (fVar42 <= 0.0) {
LAB_00850a90:
            *piVar33 = -1;
          }
          else {
            auVar41 = param_3[uVar26];
            fVar38 = fVar44 * auVar41._0_4_;
            fVar39 = fVar49 * auVar41._4_4_;
            fVar40 = fVar50 * auVar41._8_4_;
            fVar58 = fVar38 + fVar39 + fVar40;
            fVar40 = fVar38 + fVar39 + fVar40;
            auVar47 = *pauVar36;
            fVar39 = fVar51 * auVar47._0_4_;
            fVar61 = fVar54 * auVar47._4_4_;
            fVar63 = fVar57 * auVar47._8_4_;
            fVar38 = fVar39 + fVar61 + fVar63;
            fVar63 = fVar39 + fVar61 + fVar63;
            fVar39 = fVar58 - fVar53 * fVar38;
            fVar38 = fVar38 - fVar53 * fVar58;
            fVar60 = fVar60 / fVar42;
            fVar62 = fVar62 / (fVar62 - fVar56 * fVar56);
            auVar59 = NEON_ext(auVar48,auVar48,4,1);
            fVar53 = fVar60 * (fVar51 * fVar38 + fVar44 * fVar39);
            fVar56 = fVar62 * (fVar54 * (fVar63 - fVar56 * fVar40) +
                              fVar49 * (fVar40 - fVar56 * fVar63));
            fVar38 = fVar60 * (fVar57 * fVar38 + fVar50 * fVar39);
            auVar55 = NEON_ext(auVar52,auVar52,4,1);
            fVar39 = fVar53 - auVar41._0_4_;
            fVar40 = fVar56 - auVar41._4_4_;
            fVar58 = fVar38 - auVar41._8_4_;
            auVar41 = NEON_ext(auVar41,auVar41,8,1);
            auVar46._0_4_ = fVar44 * auVar59._0_4_ - fVar51 * auVar55._0_4_;
            auVar46._4_4_ = fVar49 * auVar59._4_4_ - fVar54 * auVar55._4_4_;
            auVar46._8_4_ = fVar50 * fVar51 - fVar57 * fVar44;
            auVar46._12_4_ = auVar52._12_4_ * fVar54 - auVar48._12_4_ * fVar49;
            auVar52 = NEON_ext(auVar46,auVar46,4,1);
            fVar54 = auVar52._0_4_ * SQRT(fVar60);
            fVar57 = auVar52._4_4_ * SQRT(fVar62);
            fVar60 = auVar46._0_4_ * SQRT(fVar60);
            fVar42 = fVar54 * fVar39;
            fVar49 = fVar57 * fVar40;
            fVar50 = fVar60 * fVar58;
            fVar44 = fVar42 + fVar49 + fVar50;
            fVar51 = -fVar44;
            fVar39 = fVar39 + fVar54 * fVar51;
            fVar40 = fVar40 + fVar57 * -(fVar42 + fVar49 + fVar50);
            fVar58 = fVar58 + fVar60 * fVar51;
            fVar42 = auVar41._4_4_ * auVar41._4_4_ -
                     (fVar39 * fVar39 + fVar40 * fVar40 + fVar58 * fVar58);
            if (fVar42 < 0.0) goto LAB_00850a90;
            fVar53 = fVar53 - auVar47._0_4_;
            fVar56 = fVar56 - auVar47._4_4_;
            fVar38 = fVar38 - auVar47._8_4_;
            auVar52 = NEON_ext(auVar47,auVar47,8,1);
            fVar49 = fVar54 * fVar53;
            fVar62 = fVar57 * fVar56;
            fVar39 = fVar60 * fVar38;
            fVar40 = fVar39 + fVar49 + fVar62;
            fVar50 = -fVar40;
            fVar53 = fVar53 + fVar54 * fVar50;
            fVar56 = fVar56 + fVar57 * -(fVar39 + fVar49 + fVar62);
            fVar38 = fVar38 + fVar60 * fVar50;
            fVar49 = auVar52._4_4_ * auVar52._4_4_ -
                     (fVar53 * fVar53 + fVar56 * fVar56 + fVar38 * fVar38);
            if (fVar49 < 0.0) goto LAB_00850a90;
            fVar42 = SQRT(fVar42);
            fVar44 = fVar42 - fVar44;
            fVar49 = SQRT(fVar49);
            fVar50 = fVar50 - fVar49;
            bVar9 = false;
            bVar10 = true;
            if (fVar51 - fVar42 <= fVar49 - fVar40) {
              bVar9 = false;
              bVar10 = true;
              if (!NAN(fVar50) && !NAN(fVar44)) {
                bVar9 = fVar50 == fVar44;
                bVar10 = fVar44 <= fVar50;
              }
            }
            if (bVar10 && !bVar9) goto LAB_00850a90;
            *piVar33 = (int)local_a8;
            lVar30 = (long)(int)local_a8;
            iVar14 = (int)local_a8;
            if ((int)(local_a8._4_4_ & 0x7fffffff) <= (int)local_a8) {
              FUN_02e8df28(&local_b0,puVar2,lVar30 + 1);
              iVar14 = (int)local_a8;
            }
            local_a8 = CONCAT44(local_a8._4_4_,(int)(lVar30 + 1));
            auVar52 = param_2[uVar26];
            auVar48 = *pauVar35;
            auVar47 = NEON_ext(auVar48,auVar48,8,1);
            auVar41 = NEON_ext(auVar52,auVar52,8,1);
            uVar45 = NEON_ext(auVar48._0_8_,auVar47._0_8_,4,1);
            uVar43 = NEON_ext(auVar52._0_8_,auVar41._0_8_,4,1);
            auVar41._0_4_ = auVar52._0_4_ * (float)uVar45 - auVar48._0_4_ * (float)uVar43;
            auVar41._4_4_ =
                 auVar52._4_4_ * (float)((ulong)uVar45 >> 0x20) -
                 auVar48._4_4_ * (float)((ulong)uVar43 >> 0x20);
            auVar41._8_4_ = auVar52._8_4_ * auVar48._0_4_ - auVar48._8_4_ * auVar52._0_4_;
            auVar41._12_4_ = auVar52._12_4_ * auVar48._4_4_ - auVar48._12_4_ * auVar52._4_4_;
            auVar52 = NEON_ext(auVar41,auVar41,4,1);
            puVar19 = (undefined8 *)(local_b0 + (long)iVar14 * 0x10);
            puVar19[1] = (ulong)(uint)auVar41._0_4_;
            *puVar19 = auVar52._0_8_;
          }
          uVar34 = uVar34 - 1;
          pauVar36 = pauVar36 + 1;
          pauVar35 = pauVar35 + 1;
          piVar33 = piVar33 + 1;
          iVar29 = iVar29 + 1;
        } while (uVar27 != uVar34);
      }
      uVar27 = uVar27 + 1;
      uVar26 = uVar37;
    } while (uVar37 != uVar23);
  }
  if ((int)(local_d0._4_4_ & 0x7fffffff) < (int)local_a8 * 3) {
    FUN_02e9b11c(&local_d8,PTR_PTR_047d1a50);
  }
  if ((int)param_4 < 1) {
    bVar9 = false;
  }
  else {
    uVar64 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x60);
    fVar42 = *(float *)(PTR_DAT_047d19b0 + 0x260);
    iVar29 = 2;
    uVar24 = 0;
    bVar9 = false;
    uVar26 = (ulong)param_4;
    iVar14 = param_4 * 2 + -3;
    lVar30 = 1;
    lVar16 = 0x100000000;
    uVar27 = 0;
    do {
      iVar5 = (iVar14 - (int)uVar27) * (int)uVar27;
      uVar23 = uVar27 + 1;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 1;
      }
      if (uVar23 < uVar26) {
        uVar34 = (ulong)iVar29;
        lVar31 = lVar30;
        uVar37 = uVar27;
        do {
          uVar3 = *(uint *)(local_120 + (long)((iVar5 >> 1) + (int)uVar37) * 4);
          if (-1 < (int)uVar3) {
            iVar6 = (iVar14 - (int)lVar31) * (int)lVar31;
            if (iVar6 < 0) {
              iVar6 = iVar6 + 1;
            }
            if (uVar37 + 2 < uVar26) {
              uVar28 = uVar34;
LAB_00850ca8:
              iVar12 = (int)uVar28 + -1;
              uVar20 = *(uint *)(local_120 + (long)(iVar12 + (iVar6 >> 1)) * 4);
              uVar4 = *(uint *)(local_120 + (long)(iVar12 + (iVar5 >> 1)) * 4);
              if (-1 < (int)(uVar4 | uVar20)) {
                auVar52 = *(undefined1 (*) [16])(local_b0 + (ulong)uVar3 * 0x10);
                auVar48 = param_2[uVar28 & 0xffffffff];
                fVar50 = auVar52._0_4_ * auVar48._0_4_;
                fVar51 = auVar52._4_4_ * auVar48._4_4_;
                fVar54 = auVar52._8_4_ * auVar48._8_4_;
                fVar49 = auVar48._12_4_;
                fVar44 = fVar50 + fVar51 + fVar54;
                if (fVar42 < ABS(fVar44)) {
                  pfVar7 = (float *)(local_b0 + (long)(int)uVar4 * 0x10);
                  pfVar8 = (float *)(local_b0 + (long)(int)uVar20 * 0x10);
                  fVar44 = -(float)uVar64 / fVar44;
                  fVar54 = -(float)((ulong)uVar64 >> 0x20) / (fVar50 + fVar51 + fVar54);
                  fVar50 = *(float *)(param_2[uVar27] + 0xc);
                  fVar51 = *(float *)(param_2[lVar31] + 0xc);
                  fVar57 = fVar44 * (auVar52._0_4_ * fVar49 + *pfVar8 * fVar50 + -*pfVar7 * fVar51);
                  fVar53 = fVar54 * (auVar52._4_4_ * fVar49 +
                                    pfVar8[1] * fVar50 + -pfVar7[1] * fVar51);
                  auVar48._0_8_ = CONCAT44(fVar53,fVar57);
                  auVar48._8_4_ =
                       fVar44 * (auVar52._8_4_ * fVar49 + pfVar8[2] * fVar50 + -pfVar7[2] * fVar51);
                  auVar48._12_4_ =
                       fVar54 * (auVar52._12_4_ * fVar49 + pfVar8[3] * fVar50 + pfVar7[3] * fVar51);
                  if (uVar27 != 0) {
                    uVar17 = 0;
                    do {
                      pauVar21 = param_2 + uVar17;
                      auVar52._0_4_ = fVar57 * *(float *)*pauVar21;
                      auVar52._4_4_ = fVar53 * *(float *)(*pauVar21 + 4);
                      auVar52._8_4_ = auVar48._8_4_ * *(float *)(*pauVar21 + 8);
                      auVar52._12_4_ = auVar48._12_4_ * *(float *)(*pauVar21 + 0xc);
                      auVar41 = NEON_ext(auVar52,auVar52,8,1);
                      if (1e-05 < auVar52._0_4_ + auVar52._4_4_ +
                                  auVar41._0_4_ + *(float *)(*pauVar21 + 0xc)) goto LAB_00850c94;
                      uVar17 = uVar17 + 1;
                    } while (uVar27 != uVar17);
                  }
                  uVar18 = uVar28 & 0xffffffff;
                  lVar22 = lVar16;
                  uVar17 = uVar27;
                  uVar20 = uVar24;
                  do {
                    if ((long)uVar37 < lVar22 >> 0x20) {
                      if ((long)uVar28 <= (long)(int)(uVar17 + 2)) {
                        uVar18 = uVar17 + 2 & 0xffffffff;
                        goto LAB_00850e00;
                      }
                      pauVar21 = param_2 + (ulong)uVar20 + 2;
                      lVar22 = ((ulong)uVar20 << 0x20) + 0x300000000;
                      goto LAB_00850dc4;
                    }
                    pauVar21 = param_2 + uVar17 + 1;
                    uVar17 = uVar17 + 1;
                    auVar59._0_4_ = fVar57 * *(float *)*pauVar21;
                    auVar59._4_4_ = fVar53 * *(float *)(*pauVar21 + 4);
                    auVar59._8_4_ = auVar48._8_4_ * *(float *)(*pauVar21 + 8);
                    auVar59._12_4_ = auVar48._12_4_ * *(float *)(*pauVar21 + 0xc);
                    auVar52 = NEON_ext(auVar59,auVar59,8,1);
                    lVar22 = lVar22 + 0x100000000;
                    uVar20 = uVar20 + 1;
                  } while (auVar59._0_4_ + auVar59._4_4_ +
                           auVar52._0_4_ + *(float *)(*pauVar21 + 0xc) <= 1e-05);
                }
                goto LAB_00850c94;
              }
              goto LAB_00850c9c;
            }
          }
LAB_00850c4c:
          uVar37 = uVar37 + 1;
          lVar31 = lVar31 + 1;
          uVar34 = uVar34 + 1;
        } while (uVar37 != param_4 - 1);
      }
      iVar29 = iVar29 + 1;
      lVar30 = lVar30 + 1;
      lVar16 = lVar16 + 0x100000000;
      uVar24 = uVar24 + 1;
      uVar27 = uVar23;
    } while (uVar23 != uVar26);
  }
  if (local_98 == local_b0) {
    local_a8 = local_a8 & 0xffffffff00000000;
  }
  if (local_a0 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar27 = local_90 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(local_a0 + 0x28) < uVar27) || (*(long *)(local_a0 + 0x38) != uVar27 + local_98))
    {
      FUN_031cf710();
    }
    else {
      *(ulong *)(local_a0 + 0x38) = local_98;
      if (*(ulong *)(local_a0 + 0x48) == local_98) {
        FUN_031cf578();
      }
    }
  }
  uVar27 = local_a8;
  uVar26 = (ulong)local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < (long)uVar27) && (local_b0 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_b0,uVar26 << 4);
  }
  if (lVar15 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,local_120,uVar32);
  }
  else {
    uVar32 = uVar32 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(lVar15 + 0x28) < uVar32) || (*(long *)(lVar15 + 0x38) != uVar32 + local_120)) {
      FUN_031cf710(lVar15);
    }
    else {
      *(long *)(lVar15 + 0x38) = local_120;
      if (*(long *)(lVar15 + 0x48) == local_120) {
        FUN_031cf578(lVar15);
      }
    }
  }
  if (bVar9) {
    if ((int)local_d0 < 4) goto LAB_0085102c;
    puVar19 = *(undefined8 **)(param_1 + 0x18);
    uVar64 = *param_5;
    *(undefined8 *)((long)puVar19 + 7) = *(undefined8 *)((long)param_5 + 7);
    *puVar19 = uVar64;
    uVar64 = param_5[2];
    puVar19[3] = param_5[3];
    puVar19[2] = uVar64;
    auVar52 = *(undefined1 (*) [16])(param_5 + 4);
    puVar19[5] = auVar52._8_8_;
    puVar19[4] = auVar52._0_8_;
    uVar11 = FUN_0085f114(*(undefined8 *)(param_1 + 0x18),local_d8,local_d0 & 0xffffffff,0,0);
    if (local_c0 != local_d8) goto joined_r0x00851010;
  }
  else {
LAB_0085102c:
    uVar11 = 0xffffffff;
    if (local_c0 != local_d8) goto joined_r0x00851010;
  }
  local_d0 = local_d0 & 0xffffffff00000000;
joined_r0x00851010:
  if (local_c8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar32 = local_b8 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_c8 + 0x28) < uVar32) || (*(long *)(local_c8 + 0x38) != uVar32 + local_c0))
    {
      FUN_031cf710();
    }
    else {
      *(long *)(local_c8 + 0x38) = local_c0;
      if (*(long *)(local_c8 + 0x48) == local_c0) {
        FUN_031cf578();
      }
    }
  }
  uVar32 = local_d0;
  uVar27 = (ulong)local_d0._4_4_;
  local_d0 = (ulong)local_d0._4_4_ << 0x20;
  if ((-1 < (long)uVar32) && (local_d8 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_d8,uVar27 << 4);
  }
  return uVar11;
  while( true ) {
    lVar1 = lVar22 >> 0x20;
    lVar22 = lVar22 + 0x100000000;
    pauVar21 = pauVar21 + 1;
    if ((long)uVar28 <= lVar1) break;
LAB_00850dc4:
    auVar47._0_4_ = fVar57 * *(float *)*pauVar21;
    auVar47._4_4_ = fVar53 * *(float *)(*pauVar21 + 4);
    auVar47._8_4_ = auVar48._8_4_ * *(float *)(*pauVar21 + 8);
    auVar47._12_4_ = auVar48._12_4_ * *(float *)(*pauVar21 + 0xc);
    auVar52 = NEON_ext(auVar47,auVar47,8,1);
    if (1e-05 < auVar47._0_4_ + auVar47._4_4_ + auVar52._0_4_ + *(float *)(*pauVar21 + 0xc))
    goto LAB_00850c94;
  }
LAB_00850e00:
  do {
    if ((int)param_4 <= (int)(uVar18 + 1)) {
      iVar12 = (int)local_d0 + 1;
      if ((int)(local_d0._4_4_ & 0x7fffffff) <= (int)local_d0) {
        FUN_02e9b11c(&local_d8,PTR_PTR_047d1a50);
        auVar48._8_8_ = auVar48._8_8_;
      }
      puVar19 = (undefined8 *)(local_d8 + (long)(int)local_d0 * 0x10);
      puVar19[1] = auVar48._8_8_;
      *puVar19 = auVar48._0_8_;
      bVar13 = 1;
      local_d0 = CONCAT44(local_d0._4_4_,iVar12);
      goto LAB_00850c98;
    }
    pauVar21 = param_2 + uVar18 + 1;
    auVar55._0_4_ = fVar57 * *(float *)*pauVar21;
    auVar55._4_4_ = fVar53 * *(float *)(*pauVar21 + 4);
    auVar55._8_4_ = auVar48._8_4_ * *(float *)(*pauVar21 + 8);
    auVar55._12_4_ = auVar48._12_4_ * *(float *)(*pauVar21 + 0xc);
    auVar52 = NEON_ext(auVar55,auVar55,8,1);
    uVar18 = uVar18 + 1;
  } while (auVar55._0_4_ + auVar55._4_4_ + auVar52._0_4_ + *(float *)(*pauVar21 + 0xc) <= 1e-05);
LAB_00850c94:
  bVar13 = 0;
LAB_00850c98:
  bVar9 = (bool)(bVar9 | bVar13);
LAB_00850c9c:
  uVar28 = uVar28 + 1;
  if ((uint)uVar28 == param_4) goto LAB_00850c4c;
  goto LAB_00850ca8;
}


