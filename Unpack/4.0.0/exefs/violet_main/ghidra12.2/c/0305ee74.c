/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0305ee74; name: FUN_0305ee74
 */


uint FUN_0305ee74(long *param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  undefined1 (*pauVar1) [12];
  undefined8 *puVar2;
  undefined1 (*pauVar3) [12];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  undefined1 auVar7 [16];
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  float fVar22;
  float fVar24;
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  int iVar23;
  float fVar25;
  int iVar26;
  undefined1 auVar21 [16];
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar9 = *(uint *)(param_4 + 0x20);
  lVar15 = tpidr_el0;
  lVar12 = *(long *)(lVar15 + 0x1000b8);
  if (lVar12 == 0) {
    lVar12 = FUN_00e5d3b4();
    *(long *)(lVar15 + 0x1000b8) = lVar12;
  }
  plVar16 = *(long **)(lVar12 + 0x3e0);
  if (plVar16 != (long *)0x0) {
    lVar12 = *plVar16;
    if (*(code **)(lVar12 + 0x18) != (code *)0x0) {
      (**(code **)(lVar12 + 0x18))("coherentBrc",0xb,*(undefined8 *)(lVar12 + 0x28));
      if (*(code **)(lVar12 + 0x18) != (code *)0x0) {
        (**(code **)(lVar12 + 0x18))("getMesh",7,*(undefined8 *)(lVar12 + 0x28));
      }
    }
    puVar2 = (undefined8 *)plVar16[2];
    uVar13 = (long)puVar2 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar13 <= (ulong)plVar16[3]) && (plVar16[2] = uVar13, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "LtcoherentBrc";
      puVar2[2] = "StgetMesh";
      uVar10 = nn::os::GetSystemTick();
      puVar2[1] = uVar10;
    }
    if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar16[6] != 0)) {
      puVar2 = (undefined8 *)plVar16[2];
      uVar13 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= (ulong)plVar16[3]) && (plVar16[2] = uVar13, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar16[6] + 8);
      }
    }
  }
  if ((uVar9 != 0xffffffff) &&
     (lVar12 = *(long *)(*(long *)(param_2 + 0x38) + ((ulong)(uVar9 >> 0xe) & 0x3ff00)), lVar12 != 0
     )) {
    lVar14 = *(long *)(lVar12 + 0x20);
    iVar8 = (int)((ulong)uVar9 & 0x3fffff);
    if ((iVar8 < *(int *)(lVar14 + 0xd8) + *(int *)(lVar14 + 0x20)) &&
       ((*(int *)(lVar14 + 0x108) == 0 ||
        ((*(byte *)(*(long *)(lVar14 + 0x100) + ((ulong)uVar9 & 0x3fffff)) & 1) == 0)))) {
      plVar11 = *(long **)(param_3 + 0x10);
      if (plVar11 != (long *)0x0) {
        local_90 = CONCAT44(local_90._4_4_,iVar8);
        iVar8 = (**(code **)(*plVar11 + 0x28))
                          (plVar11,lVar12,&local_90,*(undefined8 *)(param_3 + 0x18),
                           *(undefined8 *)(param_3 + 0x20));
        if (iVar8 == 0) goto LAB_0305f20c;
      }
      lVar14 = *(long *)(lVar15 + 0x1000b8);
      if (lVar14 == 0) {
        lVar14 = FUN_00e5d3b4();
        *(long *)(lVar15 + 0x1000b8) = lVar14;
      }
      plVar11 = *(long **)(lVar14 + 0x3e0);
      if (plVar11 != (long *)0x0) {
        lVar14 = *plVar11;
        if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
          puVar2 = (undefined8 *)plVar11[2];
          uVar13 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
          if ((uVar13 <= (ulong)plVar11[3]) && (plVar11[2] = uVar13, puVar2 != (undefined8 *)0x0)) {
            *puVar2 = &DAT_03c4e575;
            puVar2[1] = *(undefined8 *)(plVar11[6] + 8);
          }
        }
        puVar2 = (undefined8 *)plVar11[2];
        uVar13 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
        if ((uVar13 <= (ulong)plVar11[3]) && (plVar11[2] = uVar13, puVar2 != (undefined8 *)0x0)) {
          *puVar2 = "Stprev";
          uVar10 = nn::os::GetSystemTick();
          puVar2[1] = uVar10;
        }
        if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
          (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
        }
        if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
          (**(code **)(lVar14 + 0x18))("prev",4,*(undefined8 *)(lVar14 + 0x28));
        }
      }
      local_98 = 0;
      pauVar1 = (undefined1 (*) [12])(lVar12 + 0x80);
      uVar47 = (undefined4)((ulong)*(undefined8 *)(lVar12 + 0x88) >> 0x20);
      fVar42 = (float)*(undefined8 *)*pauVar1;
      fVar44 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      fVar17 = (float)*(undefined8 *)(param_3 + 0x40);
      fVar51 = (*(float *)(param_3 + 0x30) + *(float *)(param_3 + 0x30)) - fVar17;
      fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
      fVar52 = (*(float *)(param_3 + 0x34) + *(float *)(param_3 + 0x34)) - fVar22;
      fVar24 = (float)*(undefined8 *)(param_3 + 0x48);
      fVar53 = (*(float *)(param_3 + 0x38) + *(float *)(param_3 + 0x38)) - fVar24;
      fVar54 = (*(float *)(param_3 + 0x3c) + *(float *)(param_3 + 0x3c)) -
               (float)((ulong)*(undefined8 *)(param_3 + 0x48) >> 0x20);
      auVar38 = *(undefined1 (*) [16])(lVar12 + 0x60);
      pauVar3 = (undefined1 (*) [12])(lVar12 + 0x70);
      uVar41 = (undefined4)((ulong)*(undefined8 *)(lVar12 + 0x78) >> 0x20);
      fVar39 = (float)*(undefined8 *)*pauVar3;
      fVar40 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
      auVar48 = NEON_ext(auVar38,auVar38,8,1);
      auVar36._12_4_ = uVar41;
      auVar36._0_12_ = *pauVar3;
      auVar49._12_4_ = uVar41;
      auVar49._0_12_ = *pauVar3;
      auVar49 = NEON_ext(auVar36,auVar49,8,1);
      auVar50._12_4_ = uVar47;
      auVar50._0_12_ = *pauVar1;
      auVar7._12_4_ = uVar47;
      auVar7._0_12_ = *pauVar1;
      auVar50 = NEON_ext(auVar50,auVar7,8,1);
      fVar17 = fVar17 - fVar51;
      fVar22 = fVar22 - fVar52;
      fVar24 = fVar24 - fVar53;
      fVar43 = fVar51 - (float)*(undefined8 *)(lVar12 + 0x90);
      fVar45 = fVar52 - (float)((ulong)*(undefined8 *)(lVar12 + 0x90) >> 0x20);
      fVar46 = fVar53 - (float)*(undefined8 *)(lVar12 + 0x98);
      iVar8 = -(uint)(fVar17 == 0.0);
      iVar23 = -(uint)(fVar22 == 0.0);
      iVar26 = -(uint)(fVar24 == 0.0);
      fVar18 = (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                               CONCAT12((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                        CONCAT11((byte)((uint)fVar17 >> 8) &
                                                 ~(byte)((uint)iVar8 >> 8),
                                                 SUB41(fVar17,0) & ~(byte)iVar8)));
      auVar19._0_8_ =
           CONCAT17((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                    CONCAT16((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                             CONCAT15((byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar23 >> 8),
                                      CONCAT14(SUB41(fVar22,0) & ~(byte)iVar23,fVar18))));
      auVar19[8] = SUB41(fVar24,0) & ~(byte)iVar26;
      auVar19[9] = (byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar26 >> 8);
      auVar19[10] = (byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
      auVar19[0xb] = (byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
      fVar24 = (float)((ulong)auVar19._0_8_ >> 0x20);
      fVar25 = auVar19._8_4_;
      auVar36 = NEON_fmov(0x3f800000,4);
      fVar17 = auVar48._0_4_ * fVar25 + auVar38._0_4_ * fVar18 + auVar38._4_4_ * fVar24;
      fVar22 = auVar49._0_4_ * fVar25 + fVar39 * fVar18 + fVar40 * fVar24;
      fVar24 = auVar50._0_4_ * fVar25 + fVar42 * fVar18 + fVar44 * fVar24;
      iVar8 = -(uint)(fVar17 == 0.0);
      iVar23 = -(uint)(fVar22 == 0.0);
      iVar26 = -(uint)(fVar24 == 0.0);
      fVar17 = (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                               CONCAT12((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                        CONCAT11((byte)((uint)fVar17 >> 8) &
                                                 ~(byte)((uint)iVar8 >> 8),
                                                 SUB41(fVar17,0) & ~(byte)iVar8)));
      auVar20._0_8_ =
           CONCAT17((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                    CONCAT16((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                             CONCAT15((byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar23 >> 8),
                                      CONCAT14(SUB41(fVar22,0) & ~(byte)iVar23,fVar17))));
      auVar20[8] = SUB41(fVar24,0) & ~(byte)iVar26;
      auVar20[9] = (byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar26 >> 8);
      auVar20[10] = (byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
      auVar20[0xb] = (byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
      auVar21._12_2_ = 0;
      auVar21._0_12_ = auVar20;
      auVar21[0xe] = 0x80;
      auVar21[0xf] = 0x3f;
      iVar8 = -(uint)(fVar17 == 0.0);
      fVar22 = (float)((ulong)auVar20._0_8_ >> 0x20);
      iVar23 = -(uint)(fVar22 == 0.0);
      iVar26 = -(uint)(auVar20._8_4_ == 0.0);
      iVar6 = -(uint)(auVar21._12_4_ == 0.0);
      uStack_88 = CONCAT44(auVar50._4_4_ * fVar46 + fVar44 * fVar43 + auVar50._4_4_ * fVar45,
                           auVar50._0_4_ * fVar46 + fVar42 * fVar43 + fVar44 * fVar45);
      local_90 = CONCAT44(auVar49._0_4_ * fVar46 + fVar39 * fVar43 + fVar40 * fVar45,
                          auVar48._0_4_ * fVar46 + auVar38._0_4_ * fVar43 + auVar38._4_4_ * fVar45);
      uStack_78 = auVar21._8_8_;
      auVar48._0_4_ = auVar36._0_4_ / fVar17;
      auVar48._4_4_ = auVar36._4_4_ / fVar22;
      auVar48._8_4_ = auVar36._8_4_ / auVar20._8_4_;
      auVar48._12_4_ = auVar36._12_4_ / auVar21._12_4_;
      auVar37._8_4_ = 0x7f7fffee;
      auVar37._0_8_ = 0x7f7fffee7f7fffee;
      auVar37._12_4_ = 0x7f7fffee;
      auVar38[1] = ~(byte)((uint)iVar8 >> 8);
      auVar38[0] = ~(byte)iVar8;
      auVar38[2] = ~(byte)((uint)iVar8 >> 0x10);
      auVar38[3] = ~(byte)((uint)iVar8 >> 0x18);
      auVar38[4] = ~(byte)iVar23;
      auVar38[5] = ~(byte)((uint)iVar23 >> 8);
      auVar38[6] = ~(byte)((uint)iVar23 >> 0x10);
      auVar38[7] = ~(byte)((uint)iVar23 >> 0x18);
      auVar38[8] = ~(byte)iVar26;
      auVar38[9] = ~(byte)((uint)iVar26 >> 8);
      auVar38[10] = ~(byte)((uint)iVar26 >> 0x10);
      auVar38[0xb] = ~(byte)((uint)iVar26 >> 0x18);
      auVar38[0xc] = ~(byte)iVar6;
      auVar38[0xd] = ~(byte)((uint)iVar6 >> 8);
      auVar38[0xe] = ~(byte)((uint)iVar6 >> 0x10);
      auVar38[0xf] = ~(byte)((uint)iVar6 >> 0x18);
      auVar48 = auVar48 ^ (auVar48 ^ auVar37) & ~auVar38;
      uStack_68 = auVar48._8_8_;
      local_70 = auVar48._0_8_;
      uStack_80 = auVar20._0_8_;
      uVar13 = FUN_03098170(*(undefined8 *)(lVar12 + 0x20),*(uint *)(param_4 + 0x20) & 0x3fffff,
                            &local_90,&local_98);
      if ((uVar13 & 1) != 0) {
        fVar25 = (float)local_98;
        fVar39 = (float)((ulong)local_98 >> 0x20);
        fVar17 = (fVar51 + (*(float *)(param_3 + 0x40) - fVar51) * fVar25) -
                 (float)*(undefined8 *)(param_3 + 0x30);
        fVar22 = (fVar52 + (*(float *)(param_3 + 0x44) - fVar52) * fVar39) -
                 (float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20);
        fVar24 = (fVar53 + (*(float *)(param_3 + 0x48) - fVar53) * fVar25) -
                 (float)*(undefined8 *)(param_3 + 0x38);
        fVar18 = (fVar54 + (*(float *)(param_3 + 0x4c) - fVar54) * fVar39) -
                 (float)((ulong)*(undefined8 *)(param_3 + 0x38) >> 0x20);
        fVar17 = fVar17 * fVar17;
        fVar22 = fVar22 * fVar22;
        uVar27 = (undefined1)((uint)fVar22 >> 8);
        uVar28 = (undefined1)((uint)fVar22 >> 0x10);
        uVar29 = (undefined1)((uint)fVar22 >> 0x18);
        fVar24 = fVar24 * fVar24;
        uVar30 = (undefined1)((uint)fVar24 >> 8);
        uVar31 = (undefined1)((uint)fVar24 >> 0x10);
        uVar32 = (undefined1)((uint)fVar24 >> 0x18);
        fVar18 = fVar18 * fVar18;
        uVar33 = (undefined1)((uint)fVar18 >> 8);
        uVar34 = (undefined1)((uint)fVar18 >> 0x10);
        uVar35 = (undefined1)((uint)fVar18 >> 0x18);
        auVar4[4] = SUB41(fVar22,0);
        auVar4._0_4_ = fVar17;
        auVar4[5] = uVar27;
        auVar4[6] = uVar28;
        auVar4[7] = uVar29;
        auVar4[8] = SUB41(fVar24,0);
        auVar4[9] = uVar30;
        auVar4[10] = uVar31;
        auVar4[0xb] = uVar32;
        auVar4[0xc] = SUB41(fVar18,0);
        auVar4[0xd] = uVar33;
        auVar4[0xe] = uVar34;
        auVar4[0xf] = uVar35;
        auVar5[4] = SUB41(fVar22,0);
        auVar5._0_4_ = fVar17;
        auVar5[5] = uVar27;
        auVar5[6] = uVar28;
        auVar5[7] = uVar29;
        auVar5[8] = SUB41(fVar24,0);
        auVar5[9] = uVar30;
        auVar5[10] = uVar31;
        auVar5[0xb] = uVar32;
        auVar5[0xc] = SUB41(fVar18,0);
        auVar5[0xd] = uVar33;
        auVar5[0xe] = uVar34;
        auVar5[0xf] = uVar35;
        auVar38 = NEON_ext(auVar4,auVar5,8,1);
        fVar24 = (float)*(undefined8 *)(param_4 + 0x30);
        if (fVar17 + fVar22 + auVar38._0_4_ < fVar24 * fVar24) {
          *(uint *)(param_5 + 1) = uVar9;
          *param_5 = CONCAT44(fVar39 + -0.5 + fVar39 + -0.5,fVar25 + -0.5 + fVar25 + -0.5);
          uVar9 = 1;
          goto LAB_0305f2ec;
        }
      }
    }
  }
LAB_0305f20c:
  lVar12 = *(long *)(lVar15 + 0x1000b8);
  if (lVar12 == 0) {
    lVar12 = FUN_00e5d3b4();
    *(long *)(lVar15 + 0x1000b8) = lVar12;
  }
  plVar11 = *(long **)(lVar12 + 0x3e0);
  if (plVar11 != (long *)0x0) {
    lVar15 = *plVar11;
    if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
      puVar2 = (undefined8 *)plVar11[2];
      uVar13 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= (ulong)plVar11[3]) && (plVar11[2] = uVar13, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar11[6] + 8);
      }
    }
    puVar2 = (undefined8 *)plVar11[2];
    uVar13 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar13 <= (ulong)plVar11[3]) && (plVar11[2] = uVar13, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "Stfull";
      uVar10 = nn::os::GetSystemTick();
      puVar2[1] = uVar10;
    }
    if (*(code **)(lVar15 + 0x20) != (code *)0x0) {
      (**(code **)(lVar15 + 0x20))(*(undefined8 *)(lVar15 + 0x28));
    }
    if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
      (**(code **)(lVar15 + 0x18))("full",4,*(undefined8 *)(lVar15 + 0x28));
    }
  }
  uVar9 = (**(code **)(*param_1 + 0x38))(param_1,param_3,param_5);
LAB_0305f2ec:
  if (plVar16 != (long *)0x0) {
    lVar15 = *plVar16;
    if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar16[6] != 0)) {
      puVar2 = (undefined8 *)plVar16[2];
      uVar13 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= (ulong)plVar16[3]) && (plVar16[2] = uVar13, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar16[6] + 8);
      }
    }
    puVar2 = (undefined8 *)plVar16[2];
    uVar13 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar13 <= (ulong)plVar16[3]) && (plVar16[2] = uVar13, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c3697b;
      uVar10 = nn::os::GetSystemTick();
      puVar2[1] = uVar10;
    }
    if (*(code **)(lVar15 + 0x20) != (code *)0x0) {
      (**(code **)(lVar15 + 0x20))(*(undefined8 *)(lVar15 + 0x28));
      if (*(code **)(lVar15 + 0x20) != (code *)0x0) {
        (**(code **)(lVar15 + 0x20))(*(undefined8 *)(lVar15 + 0x28));
      }
    }
  }
  return uVar9 & 1;
}


