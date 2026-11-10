/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03163eb4; name: FUN_03163eb4
 */


undefined8
FUN_03163eb4(float param_1,unkbyte9 *param_2,undefined4 *param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  undefined2 *puVar4;
  ushort uVar5;
  undefined2 uVar6;
  ushort uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined *puVar14;
  undefined1 *__src;
  undefined8 uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  uint uVar21;
  undefined1 (*pauVar22) [16];
  int iVar23;
  long lVar24;
  ushort *puVar25;
  ushort *puVar26;
  int iVar27;
  uint uVar28;
  long lVar29;
  ushort *puVar30;
  long *plVar31;
  undefined8 *puVar32;
  long lVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  float fVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  float fVar50;
  undefined8 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  undefined8 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined1 auVar64 [16];
  long local_230;
  undefined8 local_228;
  long local_220;
  long local_218;
  long local_210;
  undefined *local_208;
  undefined1 *local_200;
  undefined8 local_1f8;
  undefined1 auStack_1f0 [256];
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long *local_b8;
  long local_b0;
  ulong local_a8;
  undefined8 local_a0;
  
  lVar29 = tpidr_el0;
  lVar18 = *(long *)(lVar29 + 0x1000b8);
  if (lVar18 == 0) {
    lVar18 = FUN_00e5d3b4();
    *(long *)(lVar29 + 0x1000b8) = lVar18;
  }
  plVar31 = *(long **)(lVar18 + 0x3e0);
  if (plVar31 != (long *)0x0) {
    lVar18 = *plVar31;
    if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
      (**(code **)(lVar18 + 0x18))("computeCxDecompOfCutFace",0x18,*(undefined8 *)(lVar18 + 0x28));
    }
    puVar32 = (undefined8 *)plVar31[2];
    uVar19 = (long)puVar32 + 0x17U & 0xfffffffffffffff8;
    if ((uVar19 <= (ulong)plVar31[3]) && (plVar31[2] = uVar19, puVar32 != (undefined8 *)0x0)) {
      *puVar32 = "TtcomputeCxDecompOfCutFace";
      uVar15 = nn::os::GetSystemTick();
      puVar32[1] = uVar15;
    }
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar31[6] != 0)) {
      puVar32 = (undefined8 *)plVar31[2];
      uVar19 = (long)puVar32 + 0x17U & 0xfffffffffffffff8;
      if ((uVar19 <= (ulong)plVar31[3]) && (plVar31[2] = uVar19, puVar32 != (undefined8 *)0x0)) {
        *puVar32 = &DAT_03c4e575;
        puVar32[1] = *(undefined8 *)(plVar31[6] + 8);
      }
    }
  }
  local_b8 = plVar31;
  nn::util::ReferSymbol("SDK MW+Microsoft+Havok_AI-2021_1");
  *param_3 = *(undefined4 *)(param_2 + 0x14);
  local_d8 = *(long *)((long)param_2 + 0x148);
  local_200 = auStack_1f0;
  local_f0 = 0;
  local_208 = &DAT_04681270;
  local_1f8 = -0x7fffffc000000000;
  lStack_d0 = local_d8 + (long)*(int *)(param_2 + 0x15) * 8;
  *(undefined ***)((long)param_2 + 200) = &local_208;
  local_e8 = param_7;
  uStack_e0 = param_8;
  local_c8 = param_4;
  uStack_c0 = param_9;
  FUN_03165674(param_2 + 9);
  iVar23 = *(int *)((long)param_2 + 0x108);
  if ((int)(*(uint *)((long)param_2 + 0xb4) & 0x7fffffff) < iVar23) {
    FUN_02eaee40((undefined8 *)((long)param_2 + 0xa8),PTR_PTR_047d1a50,(long)iVar23);
    iVar23 = *(int *)((long)param_2 + 0x108);
  }
  if ((int)(*(uint *)((long)param_2 + 0xc4) & 0x7fffffff) < iVar23) {
    FUN_02eaee40((undefined8 *)((long)param_2 + 0xb8),PTR_PTR_047d1a50,(long)iVar23);
  }
  puVar14 = PTR_DAT_047e4f38;
  iVar23 = *(int *)((long)param_2 + 0x98);
  while (iVar23 != 1) {
    FUN_0316a3b0(param_2);
    iVar23 = *(int *)puVar14;
    lVar18 = *(long *)(lVar29 + 0x1000b8);
    if (lVar18 == 0) {
      lVar18 = FUN_00e5d3b4();
      *(long *)(lVar29 + 0x1000b8) = lVar18;
    }
    if (*(long *)(lVar18 + (long)iVar23 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    iVar23 = *(int *)((long)param_2 + 0x98);
  }
  if (0 < *(int *)((long)param_2 + 0x118)) {
    uVar28 = 0;
    uVar19 = 0;
    do {
      uVar16 = FUN_031684a0(param_2,uVar19);
      if ((uVar16 & 1) == 0) {
        lVar18 = (long)*(int *)((long)param_2 + 0x118) + -1;
        uVar17 = (uint)lVar18;
        *(uint *)((long)param_2 + 0x118) = uVar17;
        if (uVar17 != uVar28) {
          *(undefined8 *)(*(long *)(param_2 + 0x11) + (uVar19 & 0xffff) * 8) =
               *(undefined8 *)(*(long *)(param_2 + 0x11) + lVar18 * 8);
        }
      }
      else {
        uVar19 = (ulong)((int)uVar19 + 1);
      }
      uVar28 = (uint)uVar19 & 0xffff;
    } while ((int)((uint)uVar19 & 0xffff) < *(int *)((long)param_2 + 0x118));
  }
  iVar23 = *(int *)puVar14;
  lVar18 = *(long *)(lVar29 + 0x1000b8);
  if (lVar18 == 0) {
    lVar18 = FUN_00e5d3b4();
    *(long *)(lVar29 + 0x1000b8) = lVar18;
  }
  if (*(long *)(lVar18 + (long)iVar23 * 8 + 1000) != 0) {
    FUN_03231bdc();
    lVar18 = *(long *)(lVar29 + 0x1000b8);
  }
  iVar23 = *(int *)puVar14;
  if (lVar18 == 0) {
    lVar18 = FUN_00e5d3b4();
    *(long *)(lVar29 + 0x1000b8) = lVar18;
  }
  if (*(long *)(lVar18 + (long)iVar23 * 8 + 1000) != 0) {
    FUN_03231bdc();
    lVar18 = *(long *)(lVar29 + 0x1000b8);
  }
  uVar28 = *(uint *)((long)param_2 + 0x118);
  iVar23 = *(int *)((long)param_2 + 0x138);
  iVar27 = *(int *)((long)param_2 + 0x128);
  local_230 = 0;
  local_228 = 0x8000000000000000;
  if (lVar18 == 0) {
    lVar18 = FUN_00e5d3b4();
    *(long *)(lVar29 + 0x1000b8) = lVar18;
  }
  local_220 = *(long *)(*(long *)(lVar18 + 0x3d0) + 0x10);
  if (*(long *)(local_220 + 8) != 0) {
    local_220 = 0;
  }
  local_210 = (long)iVar27 * 4;
  local_b0 = local_210;
  if (local_220 == 0) {
    local_218 = (**(code **)PTR_DAT_047d1a08)(1,&local_b0,0x40);
  }
  else {
    local_a8 = local_210 + 0x3fU & 0xffffffffffffffc0;
    if (local_a8 <= *(ulong *)(local_220 + 0x28)) {
      local_218 = *(long *)(local_220 + 0x38);
      if (local_a8 + local_218 <= *(ulong *)(local_220 + 0x40)) {
        *(ulong *)(local_220 + 0x38) = local_a8 + local_218;
        goto LAB_03164254;
      }
    }
    local_218 = FUN_031cf3b4(local_220,&local_a8);
  }
LAB_03164254:
  iVar2 = (int)local_228;
  local_228 = CONCAT44(iVar27,(int)local_228) | 0x8000000000000000;
  if (iVar2 != *(int *)((long)param_2 + 0x128)) {
    local_228 = CONCAT44(local_228._4_4_,*(int *)((long)param_2 + 0x128));
  }
  uVar17 = *(uint *)((long)param_2 + 0x118);
  if ((int)uVar17 < 1) {
    iVar27 = 0;
  }
  else {
    iVar27 = 0;
    uVar21 = 0;
    do {
      uVar7 = *(ushort *)(*(long *)(param_2 + 0x11) + (ulong)(uVar21 & 0xffff) * 8);
      uVar5 = uVar7;
      do {
        *(int *)(local_218 + (ulong)uVar5 * 4) = iVar27;
        uVar5 = *(ushort *)(*(long *)(param_2 + 0x12) + (ulong)uVar5 * 8 + 2);
        iVar27 = iVar27 + 1;
      } while (uVar5 != uVar7);
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar17);
  }
  local_230 = local_218;
  if ((int)(param_3[5] & 0x7fffffff) < (int)uVar28) {
    FUN_03164ed0(param_3 + 2,(long)(int)uVar28);
  }
  if ((int)(param_3[0xd] & 0x7fffffff) < iVar27) {
    FUN_03164ffc(param_3 + 10,(long)iVar27);
  }
  if ((int)(param_3[0x15] & 0x7fffffff) < iVar23) {
    FUN_02e9b11c(param_3 + 0x12,PTR_PTR_047d1a50,(long)iVar23);
  }
  __src = local_200;
  if (uVar28 != 0) {
    if (&local_200 != (undefined1 **)(param_3 + 6)) {
      iVar23 = (int)local_1f8;
      lVar29 = (long)(int)local_1f8;
      if ((int)(param_3[9] & 0x7fffffff) < (int)local_1f8) {
        FUN_02f5f190(param_3 + 6,PTR_PTR_047d1a50,lVar29);
      }
      memcpy(*(void **)(param_3 + 6),__src,lVar29 << 2);
      param_3[8] = iVar23;
    }
    if (0 < (int)uVar28) {
      uVar17 = 0;
      do {
        FUN_03168240(param_2,*(long *)(param_2 + 0x11) + (ulong)(uVar17 & 0xffff) * 8,&local_230,
                     param_3);
        uVar17 = uVar17 + 1;
      } while (uVar28 != uVar17);
    }
    uVar28 = *(uint *)((long)param_2 + 0x138);
    if (0 < (int)uVar28) {
      uVar62 = *(undefined8 *)((long)param_2 + 0x58);
      uVar15 = *(undefined8 *)(param_2 + 5);
      uVar40 = *(undefined8 *)((long)param_2 + 0x68);
      uVar63 = *(undefined8 *)(param_2 + 6);
      uVar19 = 0;
      uVar51 = *(undefined8 *)((long)param_2 + 0x88);
      uVar41 = *(undefined8 *)(param_2 + 8);
      pauVar22 = *(undefined1 (**) [16])(param_2 + 0x13);
      iVar23 = param_3[0x14];
      do {
        auVar53 = *pauVar22;
        auVar55._0_4_ = auVar53._0_4_ >> 0x10;
        auVar55._4_4_ = auVar53._4_4_ >> 0x10;
        auVar55._8_4_ = auVar53._8_4_ >> 0x10;
        auVar55._12_4_ = auVar53._12_4_ >> 0x10;
        auVar52._0_2_ = auVar53._0_2_;
        auVar52._2_2_ = 0;
        auVar52[4] = auVar53[4];
        auVar52[5] = auVar53[5];
        auVar52._6_2_ = 0;
        auVar52[8] = auVar53[8];
        auVar52[9] = auVar53[9];
        auVar52._10_2_ = 0;
        auVar52[0xc] = auVar53[0xc];
        auVar52[0xd] = auVar53[0xd];
        auVar52._14_2_ = 0;
        auVar55 = NEON_ucvtf(auVar55,4);
        auVar53 = NEON_ucvtf(auVar52,4);
        fVar54 = auVar55._0_4_;
        fVar35 = (float)uVar15;
        fVar36 = (float)((ulong)uVar15 >> 0x20);
        fVar37 = (float)uVar62;
        fVar38 = (float)((ulong)uVar62 >> 0x20);
        fVar50 = auVar53._0_4_;
        fVar39 = (float)uVar63;
        fVar61 = (float)((ulong)uVar63 >> 0x20);
        fVar34 = (float)uVar40;
        fVar56 = (float)((ulong)uVar40 >> 0x20);
        fVar57 = (float)uVar41;
        fVar59 = (float)((ulong)uVar41 >> 0x20);
        fVar60 = (float)uVar51;
        fVar42 = (float)((ulong)uVar51 >> 0x20);
        puVar32 = (undefined8 *)(*(long *)(param_3 + 0x12) + (long)iVar23 * 0x10);
        puVar32[1] = CONCAT44(fVar56 * fVar50 + fVar42 + fVar38 * fVar54,
                              fVar34 * fVar50 + fVar60 + fVar37 * fVar54);
        *puVar32 = CONCAT44(fVar61 * fVar50 + fVar59 + fVar36 * fVar54,
                            fVar39 * fVar50 + fVar57 + fVar35 * fVar54);
        uVar16 = (long)iVar23 + 1;
        param_3[0x14] = (int)uVar16;
        if ((int)uVar16 < (int)uVar28) {
          fVar54 = auVar55._4_4_;
          fVar50 = auVar53._4_4_;
          puVar32 = (undefined8 *)(*(long *)(param_3 + 0x12) + uVar16 * 0x10);
          puVar32[1] = CONCAT44(fVar56 * fVar50 + fVar42 + fVar38 * fVar54,
                                fVar34 * fVar50 + fVar60 + fVar37 * fVar54);
          *puVar32 = CONCAT44(fVar61 * fVar50 + fVar59 + fVar36 * fVar54,
                              fVar39 * fVar50 + fVar57 + fVar35 * fVar54);
          uVar16 = (ulong)(iVar23 + 2U);
          param_3[0x14] = iVar23 + 2U;
        }
        iVar23 = (int)uVar16;
        if (iVar23 < (int)uVar28) {
          fVar54 = auVar55._8_4_;
          fVar50 = auVar53._8_4_;
          puVar32 = (undefined8 *)(*(long *)(param_3 + 0x12) + (long)iVar23 * 0x10);
          puVar32[1] = CONCAT44(fVar56 * fVar50 + fVar42 + fVar38 * fVar54,
                                fVar34 * fVar50 + fVar60 + fVar37 * fVar54);
          *puVar32 = CONCAT44(fVar61 * fVar50 + fVar59 + fVar36 * fVar54,
                              fVar39 * fVar50 + fVar57 + fVar35 * fVar54);
          iVar23 = iVar23 + 1;
          param_3[0x14] = iVar23;
        }
        if (iVar23 < (int)uVar28) {
          fVar54 = auVar55._12_4_;
          fVar50 = auVar53._12_4_;
          auVar53._0_8_ =
               CONCAT44(fVar61 * fVar50 + fVar59 + fVar36 * fVar54,
                        fVar39 * fVar50 + fVar57 + fVar35 * fVar54);
          auVar53._8_4_ = fVar34 * fVar50 + fVar60 + fVar37 * fVar54;
          auVar53._12_4_ = fVar56 * fVar50 + fVar42 + fVar38 * fVar54;
          puVar32 = (undefined8 *)(*(long *)(param_3 + 0x12) + (long)iVar23 * 0x10);
          puVar32[1] = auVar53._8_8_;
          *puVar32 = auVar53._0_8_;
          iVar23 = iVar23 + 1;
          param_3[0x14] = iVar23;
        }
        uVar19 = uVar19 + 4;
        pauVar22 = pauVar22 + 1;
      } while (uVar19 < uVar28);
    }
    FUN_03168620(param_5,param_6,param_2,param_3);
    iVar23 = *(int *)(param_2 + 0x16);
    if (iVar23 != 0) {
      local_a8 = 0;
      local_a0 = 0x8000000000000000;
      if ((int)param_3[4] < 1) {
        iVar27 = 0;
      }
      else {
        uVar15 = NEON_fmov(0x3f800000,4);
        uVar19 = 0;
        iVar27 = 0;
        lVar29 = 0;
        puVar30 = *(ushort **)(param_3 + 10);
        do {
          uVar5 = *(ushort *)(*(long *)(param_3 + 2) + lVar29 * 6);
          puVar3 = puVar30 + (ulong)uVar5 * 4;
          if (0 < iVar23) {
            lVar33 = *(long *)(param_3 + 0x12);
            lVar18 = 0;
            do {
              puVar32 = (undefined8 *)(*(long *)((long)param_2 + 0x158) + lVar18 * 0x30);
              uVar63 = 0;
              fVar35 = (float)*puVar32;
              fVar36 = (float)((ulong)*puVar32 >> 0x20);
              fVar38 = (float)puVar32[2];
              fVar39 = (float)((ulong)puVar32[2] >> 0x20);
              fVar37 = (float)puVar32[1];
              uVar62 = uVar15;
              if (uVar5 != 0) {
                uVar41 = *(undefined8 *)((long)param_2 + 8);
                uVar43 = (undefined1)((ulong)uVar41 >> 8);
                uVar44 = (undefined1)((ulong)uVar41 >> 0x10);
                uVar45 = (undefined1)((ulong)uVar41 >> 0x18);
                uVar46 = (undefined1)((ulong)uVar41 >> 0x20);
                uVar47 = (undefined1)((ulong)uVar41 >> 0x28);
                uVar48 = (undefined1)((ulong)uVar41 >> 0x30);
                uVar49 = (undefined1)((ulong)uVar41 >> 0x38);
                uVar40 = *(undefined8 *)param_2;
                auVar8[9] = uVar43;
                auVar8._0_9_ = *param_2;
                auVar8[10] = uVar44;
                auVar8[0xb] = uVar45;
                auVar8[0xc] = uVar46;
                auVar8[0xd] = uVar47;
                auVar8[0xe] = uVar48;
                auVar8[0xf] = uVar49;
                auVar9[9] = uVar43;
                auVar9._0_9_ = *param_2;
                auVar9[10] = uVar44;
                auVar9[0xb] = uVar45;
                auVar9[0xc] = uVar46;
                auVar9[0xd] = uVar47;
                auVar9[0xe] = uVar48;
                auVar9[0xf] = uVar49;
                auVar53 = NEON_ext(auVar8,auVar9,8,1);
                uVar63 = 0;
                uVar51 = NEON_ext(uVar40,auVar53._0_8_,4,1);
                lVar24 = (ulong)uVar5 << 3;
                puVar25 = puVar3 + -4;
                puVar26 = puVar30;
                auVar53 = *(undefined1 (*) [16])(lVar33 + (ulong)puVar3[-4] * 0x10);
                do {
                  auVar52 = *(undefined1 (*) [16])(lVar33 + (ulong)*puVar26 * 0x10);
                  fVar61 = auVar52._0_4_ - auVar53._0_4_;
                  fVar56 = auVar52._4_4_ - auVar53._4_4_;
                  uVar43 = SUB41(fVar56,0);
                  uVar44 = (undefined1)((uint)fVar56 >> 8);
                  uVar46 = (undefined1)((uint)fVar56 >> 0x10);
                  uVar48 = (undefined1)((uint)fVar56 >> 0x18);
                  fVar59 = auVar52._8_4_ - auVar53._8_4_;
                  fVar60 = auVar52._12_4_ - auVar53._12_4_;
                  auVar10[4] = uVar43;
                  auVar10._0_4_ = fVar61;
                  auVar10[5] = uVar44;
                  auVar10[6] = uVar46;
                  auVar10[7] = uVar48;
                  auVar10._8_4_ = fVar59;
                  auVar10._12_4_ = fVar60;
                  auVar11[4] = uVar43;
                  auVar11._0_4_ = fVar61;
                  auVar11[5] = uVar44;
                  auVar11[6] = uVar46;
                  auVar11[7] = uVar48;
                  auVar11._8_4_ = fVar59;
                  auVar11._12_4_ = fVar60;
                  auVar55 = NEON_ext(auVar10,auVar11,4,1);
                  fVar57 = (float)((ulong)uVar40 >> 0x20);
                  fVar34 = (float)uVar40 * auVar55._0_4_ - (float)uVar51 * fVar61;
                  fVar56 = fVar57 * auVar55._4_4_ - (float)((ulong)uVar51 >> 0x20) * fVar56;
                  uVar45 = (undefined1)((uint)fVar56 >> 8);
                  uVar47 = (undefined1)((uint)fVar56 >> 0x10);
                  uVar49 = (undefined1)((uint)fVar56 >> 0x18);
                  fVar59 = (float)uVar41 * fVar61 - (float)uVar40 * fVar59;
                  fVar61 = (float)((ulong)uVar41 >> 0x20) *
                           (float)(CONCAT17(uVar48,CONCAT16(uVar46,CONCAT15(uVar44,CONCAT14(uVar43,
                                                  fVar61)))) >> 0x20) - fVar57 * fVar60;
                  auVar12[4] = SUB41(fVar56,0);
                  auVar12._0_4_ = fVar34;
                  auVar12[5] = uVar45;
                  auVar12[6] = uVar47;
                  auVar12[7] = uVar49;
                  auVar12._8_4_ = fVar59;
                  auVar12._12_4_ = fVar61;
                  auVar13[4] = SUB41(fVar56,0);
                  auVar13._0_4_ = fVar34;
                  auVar13[5] = uVar45;
                  auVar13[6] = uVar47;
                  auVar13[7] = uVar49;
                  auVar13._8_4_ = fVar59;
                  auVar13._12_4_ = fVar61;
                  auVar55 = NEON_ext(auVar12,auVar13,4,1);
                  fVar57 = auVar55._0_4_;
                  fVar42 = auVar55._4_4_;
                  fVar61 = ((auVar53._0_4_ + auVar52._0_4_) * fVar57 +
                            (auVar53._4_4_ + auVar52._4_4_) * fVar42 +
                           (auVar53._8_4_ + auVar52._8_4_) * fVar34) * -0.5;
                  fVar56 = (fVar38 - fVar35) * fVar57;
                  fVar59 = (fVar39 - fVar36) * fVar42;
                  fVar60 = ((float)puVar32[3] - fVar37) * fVar34;
                  auVar64._0_4_ = fVar35 * fVar57;
                  auVar64._4_4_ = fVar36 * fVar42;
                  auVar64._8_4_ = fVar37 * fVar34;
                  auVar64._12_4_ = (float)((ulong)puVar32[1] >> 0x20) * fVar61;
                  fVar57 = fVar56 + fVar59 + fVar60;
                  auVar53 = NEON_ext(auVar64,auVar64,8,1);
                  fVar61 = auVar53._0_4_ + fVar61;
                  fVar34 = auVar64._0_4_ + auVar64._4_4_ + fVar61;
                  if (fVar57 == 0.0) {
                    if (fVar34 == 0.0) {
                      if (((char)puVar25[1] == '\x02') && (*(int *)(puVar25 + 2) <= lVar29))
                      goto LAB_031646f0;
                    }
                    else if (fVar34 < 0.0) goto LAB_031646f0;
                  }
                  else {
                    fVar34 = -fVar34 / fVar57;
                    uVar58 = CONCAT44(-(auVar64._0_4_ + auVar64._4_4_ + fVar61) /
                                      (fVar56 + fVar59 + fVar60),fVar34);
                    if (fVar57 < 0.0) {
                      if (!(bool)(~(fVar34 <= (float)uVar63) & 1)) goto LAB_031646f0;
                      uVar62 = NEON_fmin(uVar62,uVar58,4);
                    }
                    else {
                      if (!(bool)(~((float)uVar62 <= fVar34) & 1)) goto LAB_031646f0;
                      uVar63 = NEON_fmax(uVar63,uVar58,4);
                    }
                  }
                  lVar24 = lVar24 + -8;
                  puVar25 = puVar26;
                  puVar26 = puVar26 + 4;
                  auVar53 = auVar52;
                } while (lVar24 != 0);
              }
              fVar35 = fVar35 - fVar38;
              fVar36 = fVar36 - fVar39;
              fVar37 = fVar37 - (float)puVar32[3];
              if (param_1 / SQRT(fVar35 * fVar35 + fVar36 * fVar36 + fVar37 * fVar37) <=
                  (float)uVar62 - (float)uVar63) {
                iVar2 = iVar27 + 1;
                if ((int)(local_a0._4_4_ & 0x7fffffff) <= iVar27) {
                  FUN_03165110(&local_a8,(long)iVar2);
                  uVar19 = local_a8;
                  iVar27 = (int)local_a0;
                }
                puVar32 = (undefined8 *)(uVar19 + (long)iVar27 * 0x18);
                local_a0 = CONCAT44(local_a0._4_4_,iVar2);
                *(int *)(puVar32 + 2) = (int)lVar18;
                *(int *)((long)puVar32 + 0x14) = (int)lVar29;
                *puVar32 = uVar63;
                puVar32[1] = uVar62;
                iVar23 = *(int *)(param_2 + 0x16);
                iVar27 = iVar2;
              }
LAB_031646f0:
              lVar18 = lVar18 + 1;
            } while (lVar18 < iVar23);
          }
          lVar29 = lVar29 + 1;
          puVar30 = puVar3;
        } while (lVar29 < (int)param_3[4]);
        if ((int)(param_3[0x11] & 0x7fffffff) < iVar27) {
          FUN_0316529c(param_3 + 0xe,(long)iVar27);
        }
      }
      if ((int)(param_3[0x15] & 0x7fffffff) < param_3[0x14] + iVar27 * 2) {
        FUN_02e9b11c(param_3 + 0x12,PTR_PTR_047d1a50);
      }
      uVar19 = local_a0;
      if (iVar27 != 0) {
        piVar20 = (int *)(local_a8 + 0x10);
        lVar29 = (long)iVar27 * 0x18;
        do {
          puVar32 = (undefined8 *)(*(long *)((long)param_2 + 0x158) + (long)*piVar20 * 0x30);
          iVar23 = param_3[0x14];
          fVar56 = (float)*puVar32;
          fVar38 = (float)puVar32[2] - fVar56;
          fVar57 = (float)((ulong)*puVar32 >> 0x20);
          fVar39 = (float)((ulong)puVar32[2] >> 0x20) - fVar57;
          fVar59 = (float)puVar32[1];
          fVar61 = (float)puVar32[3] - fVar59;
          fVar60 = (float)((ulong)puVar32[1] >> 0x20);
          fVar34 = (float)((ulong)puVar32[3] >> 0x20) - fVar60;
          fVar35 = (float)*(undefined8 *)(piVar20 + -4);
          fVar36 = (float)((ulong)*(undefined8 *)(piVar20 + -4) >> 0x20);
          fVar42 = (float)*(undefined8 *)(piVar20 + -2);
          fVar50 = (float)((ulong)*(undefined8 *)(piVar20 + -2) >> 0x20);
          fVar37 = fVar57 + fVar39 * fVar36;
          fVar36 = fVar60 + fVar34 * fVar36;
          puVar32 = (undefined8 *)(*(long *)(param_3 + 0x12) + (long)iVar23 * 0x10);
          puVar32[1] = CONCAT17((char)((uint)fVar36 >> 0x18),
                                CONCAT16((char)((uint)fVar36 >> 0x10),
                                         CONCAT15((char)((uint)fVar36 >> 8),
                                                  CONCAT14(SUB41(fVar36,0),fVar59 + fVar61 * fVar35)
                                                 )));
          *puVar32 = CONCAT17((char)((uint)fVar37 >> 0x18),
                              CONCAT16((char)((uint)fVar37 >> 0x10),
                                       CONCAT15((char)((uint)fVar37 >> 8),
                                                CONCAT14(SUB41(fVar37,0),fVar56 + fVar38 * fVar35)))
                             );
          puVar32 = (undefined8 *)(*(long *)(param_3 + 0x12) + (long)(iVar23 + 1) * 0x10);
          puVar32[1] = CONCAT44(fVar60 + fVar34 * fVar50,fVar59 + fVar61 * fVar42);
          *puVar32 = CONCAT44(fVar57 + fVar39 * fVar50,fVar56 + fVar38 * fVar42);
          param_3[0x14] = iVar23 + 2;
          iVar27 = param_3[0x10];
          param_3[0x10] = iVar27 + 1;
          puVar4 = (undefined2 *)(*(long *)(param_3 + 0xe) + (long)iVar27 * 8);
          *puVar4 = (short)iVar23;
          puVar4[1] = (short)(iVar23 + 1);
          uVar6 = *(undefined2 *)(*(long *)((long)param_2 + 0x158) + (long)*piVar20 * 0x30 + 0x20);
          *(undefined1 *)(puVar4 + 2) = 0;
          puVar4[3] = uVar6;
          if ((float)*(undefined8 *)(piVar20 + -4) != 0.0) {
            *(undefined1 *)(puVar4 + 2) = 4;
          }
          *(undefined1 *)((long)puVar4 + 5) = 0;
          if ((float)*(undefined8 *)(piVar20 + -2) != 1.0) {
            *(undefined1 *)((long)puVar4 + 5) = 4;
          }
          piVar1 = piVar20 + 1;
          lVar29 = lVar29 + -0x18;
          piVar20 = piVar20 + 6;
          lVar18 = *(long *)(param_3 + 2) + (long)*piVar1 * 6;
          *(short *)(lVar18 + 2) = *(short *)(lVar18 + 2) + 1;
        } while (lVar29 != 0);
      }
      uVar16 = local_a0 >> 0x20;
      local_a0 = uVar16 << 0x20;
      if ((local_a8 != 0) && (-1 < (long)uVar19)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                  (PTR_PTR_047d1a50 + 0x20,local_a8,uVar16 * 0x18);
      }
    }
  }
  if (local_218 == local_230) {
    local_228 = local_228 & 0xffffffff00000000;
  }
  if (local_220 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_03164964;
  }
  uVar19 = local_210 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_220 + 0x28) < uVar19) || (*(long *)(local_220 + 0x38) != uVar19 + local_218)
     ) {
    if (local_218 == 0) goto LAB_03164964;
    if (*(ulong *)(local_220 + 0x28) < uVar19 + 0x40) {
      *(int *)(*(long *)(local_220 + 0x30) + 0x20) =
           *(int *)(*(long *)(local_220 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(local_220 + 0x10) + 0x18))
                (*(long **)(local_220 + 0x10),local_218 - *(int *)(local_218 + -4),uVar19 + 0x44);
      goto LAB_03164964;
    }
    if (*(long *)(local_220 + 0x38) != uVar19 + local_218) {
      FUN_031cf778();
      goto LAB_03164964;
    }
    *(long *)(local_220 + 0x38) = local_218;
  }
  else {
    *(long *)(local_220 + 0x38) = local_218;
    if (*(long *)(local_220 + 0x48) != local_218) goto LAB_03164964;
  }
  FUN_031cf578();
LAB_03164964:
  uVar19 = local_228;
  uVar16 = (ulong)local_228._4_4_;
  local_228 = (ulong)local_228._4_4_ << 0x20;
  if ((-1 < (long)uVar19) && (local_230 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_230,uVar16 << 2);
  }
  lVar29 = local_1f8;
  uVar19 = (ulong)local_1f8._4_4_;
  local_208 = &DAT_04681270;
  local_1f8 = (ulong)local_1f8._4_4_ << 0x20;
  if ((-1 < lVar29) && (local_200 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_200,uVar19 << 2);
  }
  if (plVar31 != (long *)0x0) {
    lVar29 = *plVar31;
    if (((*(byte *)(lVar29 + 0x38) & 1) != 0) && (plVar31[6] != 0)) {
      puVar32 = (undefined8 *)plVar31[2];
      uVar19 = (long)puVar32 + 0x17U & 0xfffffffffffffff8;
      if ((uVar19 <= (ulong)plVar31[3]) && (plVar31[2] = uVar19, puVar32 != (undefined8 *)0x0)) {
        *puVar32 = &DAT_03c4e575;
        puVar32[1] = *(undefined8 *)(plVar31[6] + 8);
      }
    }
    puVar32 = (undefined8 *)plVar31[2];
    uVar19 = (long)puVar32 + 0x17U & 0xfffffffffffffff8;
    if ((uVar19 <= (ulong)plVar31[3]) && (plVar31[2] = uVar19, puVar32 != (undefined8 *)0x0)) {
      *puVar32 = &DAT_03c2d363;
      uVar15 = nn::os::GetSystemTick();
      puVar32[1] = uVar15;
    }
    if (*(code **)(lVar29 + 0x20) != (code *)0x0) {
      (**(code **)(lVar29 + 0x20))(*(undefined8 *)(lVar29 + 0x28));
    }
  }
  return 1;
}


