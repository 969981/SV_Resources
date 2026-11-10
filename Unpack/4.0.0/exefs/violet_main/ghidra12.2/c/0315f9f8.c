/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0315f9f8; name: FUN_0315f9f8
 */


undefined8 FUN_0315f9f8(long *param_1,long *param_2)

{
  undefined1 (*pauVar1) [12];
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 (*pauVar16) [16];
  long *plVar17;
  long *plVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  int iVar25;
  undefined8 uVar26;
  float fVar29;
  float fVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  int iVar34;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar35;
  float fVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  float fVar47;
  float fVar49;
  undefined1 auVar48 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  float fVar54;
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fStack_a8;
  float fStack_a4;
  float fStack_98;
  float fStack_94;
  int *local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  
  lVar19 = tpidr_el0;
  lVar13 = *(long *)(lVar19 + 0x1000b8);
  if (lVar13 == 0) {
    lVar13 = FUN_00e5d3b4();
    *(long *)(lVar19 + 0x1000b8) = lVar13;
  }
  plVar18 = *(long **)(lVar13 + 0x3e0);
  if (plVar18 != (long *)0x0) {
    lVar13 = *plVar18;
    if (*(code **)(lVar13 + 0x18) != (code *)0x0) {
      (**(code **)(lVar13 + 0x18))("Convex hull creation",0x14,*(undefined8 *)(lVar13 + 0x28));
    }
    puVar3 = (undefined8 *)plVar18[2];
    uVar14 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar18[3]) && (plVar18[2] = uVar14, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = "TtConvex hull creation";
      uVar12 = nn::os::GetSystemTick();
      puVar3[1] = uVar12;
    }
    if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar18[6] != 0)) {
      puVar3 = (undefined8 *)plVar18[2];
      uVar14 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar18[3]) && (plVar18[2] = uVar14, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_03c4e575;
        puVar3[1] = *(undefined8 *)(plVar18[6] + 8);
      }
    }
  }
  *(undefined4 *)(param_2 + 1) = 0;
  puVar11 = PTR_PTR_047d1a50;
  local_70 = 0;
  local_68 = -0x8000000000000000;
  local_80 = (int *)0x0;
  local_78 = 0x8000000000000000;
  if ((int)param_1[1] < 0) {
    local_80 = (int *)0x0;
    local_78 = -0x8000000000000000;
  }
  else {
    uVar2 = (int)param_1[1] + 1;
    local_80 = (int *)(**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x18))
                                (PTR_PTR_047d1a50 + 0x20,(ulong)uVar2 << 2);
    local_78 = CONCAT44(uVar2,uVar2);
    if (uVar2 != 0) {
      local_78 = (ulong)uVar2 << 0x20;
    }
  }
  auVar21 = *(undefined1 (*) [16])(param_1 + 2);
  pauVar1 = (undefined1 (*) [12])(param_1 + 4);
  uVar12 = *(undefined8 *)*pauVar1;
  auVar10 = *pauVar1;
  auVar9 = *pauVar1;
  fStack_a8 = (float)param_1[5];
  fStack_a4 = (float)((ulong)param_1[5] >> 0x20);
  auVar55 = *(undefined1 (*) [16])param_1[6];
  iVar4 = (int)param_1[1];
  fStack_98 = auVar55._8_4_;
  fStack_94 = auVar55._12_4_;
  if (iVar4 < 1) {
    iVar25 = 0;
  }
  else {
    FUN_0309d388(&local_70,puVar11 + 0x20,iVar4);
    iVar25 = (int)local_68;
  }
  if (iVar25 != iVar4) {
    local_68 = CONCAT44(local_68._4_4_,iVar4);
  }
  if (0 < (int)param_1[1]) {
    fVar58 = (float)uVar12;
    fVar59 = (float)((ulong)uVar12 >> 0x20);
    auVar7._12_4_ = fStack_a4;
    auVar7._0_12_ = auVar9;
    auVar8._12_4_ = fStack_a4;
    auVar8._0_12_ = auVar10;
    auVar27 = NEON_ext(auVar7,auVar8,8,1);
    auVar20 = NEON_ext(auVar21,auVar21,8,1);
    uVar26 = NEON_ext(uVar12,auVar27._0_8_,4,1);
    uVar12 = NEON_ext(auVar21._0_8_,auVar20._0_8_,4,1);
    fVar56 = auVar55._0_4_;
    fVar57 = auVar55._4_4_;
    fVar35 = (float)((ulong)uVar26 >> 0x20);
    auVar20 = NEON_ext(auVar55,auVar55,8,1);
    uVar53 = NEON_ext(auVar55._0_8_,auVar20._0_8_,4,1);
    fVar49 = auVar20._4_4_ * auVar20._4_4_;
    fVar47 = fVar49 + -0.5;
    fVar49 = fVar49 + -0.5;
    lVar15 = 0;
    fVar32 = auVar21._0_4_ * (float)uVar26 - fVar58 * (float)uVar12;
    fVar24 = auVar21._4_4_ * fVar35 - fVar59 * (float)((ulong)uVar12 >> 0x20);
    uVar37 = SUB41(fVar24,0);
    uVar38 = (undefined1)((uint)fVar24 >> 8);
    uVar39 = (undefined1)((uint)fVar24 >> 0x10);
    uVar40 = (undefined1)((uint)fVar24 >> 0x18);
    fVar24 = auVar21._8_4_ * fVar58 - fStack_a8 * auVar21._0_4_;
    uVar41 = (undefined1)((uint)fVar24 >> 8);
    uVar42 = (undefined1)((uint)fVar24 >> 0x10);
    uVar43 = (undefined1)((uint)fVar24 >> 0x18);
    fVar29 = auVar21._12_4_ * fVar59 - fStack_a4 * auVar21._4_4_;
    uVar44 = (undefined1)((uint)fVar29 >> 8);
    uVar45 = (undefined1)((uint)fVar29 >> 0x10);
    uVar46 = (undefined1)((uint)fVar29 >> 0x18);
    auVar21[4] = uVar37;
    auVar21._0_4_ = fVar32;
    auVar21[5] = uVar38;
    auVar21[6] = uVar39;
    auVar21[7] = uVar40;
    auVar21[8] = SUB41(fVar24,0);
    auVar21[9] = uVar41;
    auVar21[10] = uVar42;
    auVar21[0xb] = uVar43;
    auVar21[0xc] = SUB41(fVar29,0);
    auVar21[0xd] = uVar44;
    auVar21[0xe] = uVar45;
    auVar21[0xf] = uVar46;
    auVar55[4] = uVar37;
    auVar55._0_4_ = fVar32;
    auVar55[5] = uVar38;
    auVar55[6] = uVar39;
    auVar55[7] = uVar40;
    auVar55[8] = SUB41(fVar24,0);
    auVar55[9] = uVar41;
    auVar55[10] = uVar42;
    auVar55[0xb] = uVar43;
    auVar55[0xc] = SUB41(fVar29,0);
    auVar55[0xd] = uVar44;
    auVar55[0xe] = uVar45;
    auVar55[0xf] = uVar46;
    auVar21 = NEON_ext(auVar21,auVar55,4,1);
    uVar12 = NEON_ext(auVar21._0_8_,
                      CONCAT17(uVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14(uVar37,fVar32)))),4,1
                     );
    lVar13 = 0;
    fVar30 = (float)((ulong)uVar53 >> 0x20);
    fVar24 = auVar21._0_4_;
    fVar29 = auVar21._4_4_;
    auVar28._0_4_ = fVar58 * (float)uVar53 - fVar56 * (float)uVar26;
    auVar28._4_4_ = fVar59 * fVar30 - fVar57 * fVar35;
    auVar28._8_4_ = fStack_a8 * fVar56 - fStack_98 * fVar58;
    auVar28._12_4_ = fStack_a4 * fVar57 - fStack_94 * fVar59;
    fVar35 = (float)uVar53 * fVar24 - fVar56 * (float)uVar12;
    fVar30 = fVar30 * fVar29 - fVar57 * (float)((ulong)uVar12 >> 0x20);
    uVar37 = (undefined1)((uint)fVar30 >> 8);
    uVar38 = (undefined1)((uint)fVar30 >> 0x10);
    uVar39 = (undefined1)((uint)fVar30 >> 0x18);
    fVar33 = fVar56 * fVar32 - fStack_98 * fVar24;
    uVar40 = (undefined1)((uint)fVar33 >> 8);
    uVar41 = (undefined1)((uint)fVar33 >> 0x10);
    uVar42 = (undefined1)((uint)fVar33 >> 0x18);
    fVar36 = fVar57 * 0.0 - fStack_94 * fVar29;
    uVar43 = (undefined1)((uint)fVar36 >> 8);
    uVar44 = (undefined1)((uint)fVar36 >> 0x10);
    uVar45 = (undefined1)((uint)fVar36 >> 0x18);
    fVar52 = fVar58 * fVar56 + fVar59 * fVar57 + fStack_a8 * fStack_98;
    fVar54 = fVar58 * fVar56 + fVar59 * fVar57 + fStack_a8 * fStack_98;
    fVar50 = fVar56 * fVar24 + fVar57 * fVar29 + fStack_98 * fVar32;
    fVar51 = fVar56 * fVar24 + fVar57 * fVar29 + fStack_98 * fVar32;
    auVar21 = NEON_ext(auVar28,auVar28,4,1);
    auVar20[4] = SUB41(fVar30,0);
    auVar20._0_4_ = fVar35;
    auVar20[5] = uVar37;
    auVar20[6] = uVar38;
    auVar20[7] = uVar39;
    auVar20[8] = SUB41(fVar33,0);
    auVar20[9] = uVar40;
    auVar20[10] = uVar41;
    auVar20[0xb] = uVar42;
    auVar20[0xc] = SUB41(fVar36,0);
    auVar20[0xd] = uVar43;
    auVar20[0xe] = uVar44;
    auVar20[0xf] = uVar45;
    auVar27[4] = SUB41(fVar30,0);
    auVar27._0_4_ = fVar35;
    auVar27[5] = uVar37;
    auVar27[6] = uVar38;
    auVar27[7] = uVar39;
    auVar27[8] = SUB41(fVar33,0);
    auVar27[9] = uVar40;
    auVar27[10] = uVar41;
    auVar27[0xb] = uVar42;
    auVar27[0xc] = SUB41(fVar36,0);
    auVar27[0xd] = uVar43;
    auVar27[0xe] = uVar44;
    auVar27[0xf] = uVar45;
    auVar55 = NEON_ext(auVar20,auVar27,4,1);
    fVar30 = fVar58 * fVar47 + fVar56 * fVar52 + auVar21._0_4_ * fStack_94;
    fVar33 = fVar59 * fVar49 + fVar57 * fVar54 + auVar21._4_4_ * fStack_94;
    fVar36 = fStack_a8 * fVar47 + fStack_98 * fVar52 + auVar28._0_4_ * fStack_94;
    fVar52 = fStack_a4 * fVar49 + fStack_94 * fVar54 + fStack_94 * 0.0;
    fVar24 = fVar47 * fVar24 + fVar56 * fVar50 + auVar55._0_4_ * fStack_94;
    fVar29 = fVar49 * fVar29 + fVar57 * fVar51 + auVar55._4_4_ * fStack_94;
    fVar32 = fVar47 * fVar32 + fStack_98 * fVar50 + fVar35 * fStack_94;
    fVar35 = fVar49 * 0.0 + fStack_94 * fVar51 + fStack_94 * 0.0;
    do {
      puVar3 = (undefined8 *)(*param_1 + lVar13 * 0x10);
      uVar26 = puVar3[1];
      uVar12 = *puVar3;
      lVar13 = lVar13 + 1;
      fVar47 = (float)uVar12;
      auVar48._0_4_ = (fVar30 + fVar30) * fVar47;
      fVar49 = (float)((ulong)uVar12 >> 0x20);
      auVar48._4_4_ = (fVar33 + fVar33) * fVar49;
      fVar50 = (float)uVar26;
      auVar48._8_4_ = (fVar36 + fVar36) * fVar50;
      fVar51 = (float)((ulong)uVar26 >> 0x20);
      auVar48._12_4_ = (fVar52 + fVar52) * fVar51;
      auVar21 = NEON_ext(auVar48,auVar48,8,1);
      fVar47 = (fVar24 + fVar24) * fVar47;
      fVar49 = (fVar29 + fVar29) * fVar49;
      uVar37 = (undefined1)((uint)fVar49 >> 8);
      uVar38 = (undefined1)((uint)fVar49 >> 0x10);
      uVar39 = (undefined1)((uint)fVar49 >> 0x18);
      fVar50 = (fVar32 + fVar32) * fVar50;
      uVar40 = (undefined1)((uint)fVar50 >> 8);
      uVar41 = (undefined1)((uint)fVar50 >> 0x10);
      uVar42 = (undefined1)((uint)fVar50 >> 0x18);
      fVar51 = (fVar35 + fVar35) * fVar51;
      uVar43 = (undefined1)((uint)fVar51 >> 8);
      uVar44 = (undefined1)((uint)fVar51 >> 0x10);
      uVar45 = (undefined1)((uint)fVar51 >> 0x18);
      auVar5[4] = SUB41(fVar49,0);
      auVar5._0_4_ = fVar47;
      auVar5[5] = uVar37;
      auVar5[6] = uVar38;
      auVar5[7] = uVar39;
      auVar5[8] = SUB41(fVar50,0);
      auVar5[9] = uVar40;
      auVar5[10] = uVar41;
      auVar5[0xb] = uVar42;
      auVar5[0xc] = SUB41(fVar51,0);
      auVar5[0xd] = uVar43;
      auVar5[0xe] = uVar44;
      auVar5[0xf] = uVar45;
      auVar6[4] = SUB41(fVar49,0);
      auVar6._0_4_ = fVar47;
      auVar6[5] = uVar37;
      auVar6[6] = uVar38;
      auVar6[7] = uVar39;
      auVar6[8] = SUB41(fVar50,0);
      auVar6[9] = uVar40;
      auVar6[10] = uVar41;
      auVar6[0xb] = uVar42;
      auVar6[0xc] = SUB41(fVar51,0);
      auVar6[0xd] = uVar43;
      auVar6[0xe] = uVar44;
      auVar6[0xf] = uVar45;
      auVar55 = NEON_ext(auVar5,auVar6,8,1);
      fVar47 = fVar47 + fVar49 + auVar55._0_4_;
      *(ulong *)(local_70 + lVar15) =
           CONCAT17((char)((uint)fVar47 >> 0x18),
                    CONCAT16((char)((uint)fVar47 >> 0x10),
                             CONCAT15((char)((uint)fVar47 >> 8),
                                      CONCAT14(SUB41(fVar47,0),
                                               auVar48._0_4_ + auVar48._4_4_ + auVar21._0_4_))));
      lVar15 = lVar15 + 8;
    } while (lVar13 < (int)param_1[1]);
  }
  lVar13 = *(long *)(lVar19 + 0x1000b8);
  if (lVar13 == 0) {
    lVar13 = FUN_00e5d3b4();
    *(long *)(lVar19 + 0x1000b8) = lVar13;
  }
  plVar17 = *(long **)(lVar13 + 0x3e0);
  if (plVar17 != (long *)0x0) {
    lVar19 = *plVar17;
    if (*(code **)(lVar19 + 0x18) != (code *)0x0) {
      (**(code **)(lVar19 + 0x18))
                ("hkMath2d::convexHullIndices",0x1b,*(undefined8 *)(lVar19 + 0x28));
    }
    puVar3 = (undefined8 *)plVar17[2];
    uVar14 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar17[3]) && (plVar17[2] = uVar14, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = "TthkMath2d::convexHullIndices";
      uVar12 = nn::os::GetSystemTick();
      puVar3[1] = uVar12;
    }
    if (((*(byte *)(lVar19 + 0x38) & 1) != 0) && (plVar17[6] != 0)) {
      puVar3 = (undefined8 *)plVar17[2];
      uVar14 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar17[3]) && (plVar17[2] = uVar14, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_03c4e575;
        puVar3[1] = *(undefined8 *)(plVar17[6] + 8);
      }
    }
  }
  FUN_031cd200(&local_70,&local_80);
  if (plVar17 != (long *)0x0) {
    lVar19 = *plVar17;
    if (((*(byte *)(lVar19 + 0x38) & 1) != 0) && (plVar17[6] != 0)) {
      puVar3 = (undefined8 *)plVar17[2];
      uVar14 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar17[3]) && (plVar17[2] = uVar14, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_03c4e575;
        puVar3[1] = *(undefined8 *)(plVar17[6] + 8);
      }
    }
    puVar3 = (undefined8 *)plVar17[2];
    uVar14 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar17[3]) && (plVar17[2] = uVar14, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = &DAT_03c2d363;
      uVar12 = nn::os::GetSystemTick();
      puVar3[1] = uVar12;
    }
    if (*(code **)(lVar19 + 0x20) != (code *)0x0) {
      (**(code **)(lVar19 + 0x20))(*(undefined8 *)(lVar19 + 0x28));
    }
  }
  lVar19 = local_78;
  if ((int)local_78 < (int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff)) {
    if ((int)param_2[1] != (int)local_78) {
      *(int *)(param_2 + 1) = (int)local_78;
    }
    if (0 < (int)local_78) {
      lVar13 = 0;
      do {
        auVar21 = *(undefined1 (*) [16])(*param_1 + (long)local_80[lVar13] * 0x10);
        pauVar16 = (undefined1 (*) [16])param_1[6];
        auVar55 = *pauVar16;
        auVar20 = NEON_ext(auVar55,auVar55,8,1);
        fVar47 = auVar20._4_4_ * auVar20._4_4_;
        fVar24 = auVar21._0_4_;
        fVar35 = auVar55._0_4_;
        fVar29 = auVar21._4_4_;
        fVar30 = auVar55._4_4_;
        fVar32 = auVar21._8_4_;
        fVar33 = auVar55._8_4_;
        fVar36 = auVar55._12_4_;
        fVar49 = fVar24 * fVar35 + fVar29 * fVar30 + fVar32 * fVar33;
        fVar50 = fVar24 * fVar35 + fVar29 * fVar30 + fVar32 * fVar33;
        fVar52 = fVar47 + -0.5;
        fVar47 = fVar47 + -0.5;
        uVar12 = NEON_ext(auVar55._0_8_,auVar20._0_8_,4,1);
        auVar55 = NEON_ext(auVar21,auVar21,8,1);
        uVar26 = NEON_ext(auVar21._0_8_,auVar55._0_8_,4,1);
        auVar22._0_4_ = fVar35 * (float)uVar26 - fVar24 * (float)uVar12;
        auVar22._4_4_ =
             fVar30 * (float)((ulong)uVar26 >> 0x20) - fVar29 * (float)((ulong)uVar12 >> 0x20);
        auVar22._8_4_ = fVar33 * fVar24 - fVar32 * fVar35;
        auVar22._12_4_ = fVar36 * fVar29 - auVar21._12_4_ * fVar30;
        auVar55 = NEON_ext(auVar22,auVar22,4,1);
        fVar24 = fVar24 * fVar52 + fVar35 * fVar49 + auVar55._0_4_ * fVar36;
        fVar29 = fVar29 * fVar47 + fVar30 * fVar50 + auVar55._4_4_ * fVar36;
        fVar32 = fVar32 * fVar52 + fVar33 * fVar49 + auVar22._0_4_ * fVar36;
        fVar35 = auVar21._12_4_ * fVar47 + fVar36 * fVar50 + fVar36 * 0.0;
        auVar23._0_8_ =
             CONCAT44((float)((ulong)*(undefined8 *)pauVar16[1] >> 0x20) + fVar29 + fVar29,
                      (float)*(undefined8 *)pauVar16[1] + fVar24 + fVar24);
        auVar23._8_4_ = (float)*(undefined8 *)(pauVar16[1] + 8) + fVar32 + fVar32;
        auVar23._12_4_ = (float)((ulong)*(undefined8 *)(pauVar16[1] + 8) >> 0x20) + fVar35 + fVar35;
        puVar3 = (undefined8 *)(*param_2 + lVar13 * 0x10);
        puVar3[1] = auVar23._8_8_;
        *puVar3 = auVar23._0_8_;
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)local_78);
    }
    if (*local_80 != local_80[(int)local_78 + -1]) {
      pauVar16 = (undefined1 (*) [16])*param_2;
      iVar4 = (int)param_2[1];
      auVar21 = *pauVar16;
      iVar25 = -(uint)(ABS(auVar21._0_4_ - *(float *)pauVar16[(long)iVar4 + -1]) <= 0.001);
      iVar31 = -(uint)(ABS(auVar21._4_4_ - *(float *)(pauVar16[(long)iVar4 + -1] + 4)) <= 0.001);
      iVar34 = -(uint)(ABS(auVar21._8_4_ - *(float *)(pauVar16[(long)iVar4 + -1] + 8)) <= 0.001);
      if (CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar25 >> 0x18) &
                   (byte)((uint)iVar34 >> 0x18),
                   CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar25 >> 0x10) &
                            (byte)((uint)iVar34 >> 0x10),
                            CONCAT11((byte)((uint)iVar31 >> 8) & (byte)((uint)iVar25 >> 8) &
                                     (byte)((uint)iVar34 >> 8),
                                     (byte)iVar31 & (byte)iVar25 & (byte)iVar34))) == 0) {
        *(long *)(pauVar16[iVar4] + 8) = auVar21._8_8_;
        *(long *)pauVar16[iVar4] = auVar21._0_8_;
        uVar12 = 1;
        *(int *)(param_2 + 1) = iVar4 + 1;
        goto LAB_0315ff24;
      }
    }
    uVar12 = 1;
  }
  else {
    uVar12 = 0;
  }
LAB_0315ff24:
  uVar14 = (ulong)local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < lVar19) && (local_80 != (int *)0x0)) {
    (**(code **)(*(long *)(puVar11 + 0x20) + 0x20))(puVar11 + 0x20,local_80,uVar14 << 2);
  }
  lVar19 = local_68;
  uVar14 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar19) && (local_70 != 0)) {
    (**(code **)(*(long *)(puVar11 + 0x20) + 0x20))(puVar11 + 0x20,local_70,uVar14 << 3);
  }
  if (plVar18 != (long *)0x0) {
    lVar19 = *plVar18;
    if (((*(byte *)(lVar19 + 0x38) & 1) != 0) && (plVar18[6] != 0)) {
      puVar3 = (undefined8 *)plVar18[2];
      uVar14 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar18[3]) && (plVar18[2] = uVar14, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_03c4e575;
        puVar3[1] = *(undefined8 *)(plVar18[6] + 8);
      }
    }
    puVar3 = (undefined8 *)plVar18[2];
    uVar14 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar18[3]) && (plVar18[2] = uVar14, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = &DAT_03c2d363;
      uVar26 = nn::os::GetSystemTick();
      puVar3[1] = uVar26;
    }
    if (*(code **)(lVar19 + 0x20) != (code *)0x0) {
      (**(code **)(lVar19 + 0x20))(*(undefined8 *)(lVar19 + 0x28));
    }
  }
  return uVar12;
}


