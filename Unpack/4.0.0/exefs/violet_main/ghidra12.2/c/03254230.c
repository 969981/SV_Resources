/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03254230; name: FUN_03254230
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03254230(long param_1,long param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  uint uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  ulong uVar29;
  uint uVar30;
  int iVar31;
  undefined8 *puVar32;
  ulong uVar33;
  ulong uVar34;
  uint uVar35;
  ulong uVar36;
  long lVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_110 [32];
  int local_f0;
  int local_ec;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int local_c0;
  uint uStack_bc;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  
  uVar23 = _UNK_03cabbd8;
  uVar22 = _DAT_03cabbd0;
  uVar7 = *(uint *)(param_2 + 0x24);
  uVar33 = (ulong)uVar7;
  if ((int)uVar7 < 5) {
    return;
  }
  uVar35 = 4;
  do {
    uVar24 = uVar35;
    uVar35 = uVar24 << 1;
  } while ((int)uVar24 < (int)uVar7);
  uVar24 = uVar24 >> 1;
  uVar36 = 0xffffffff;
  auVar42._8_4_ = 0x7f7fffee;
  auVar42._0_8_ = 0x7f7fffee7f7fffee;
  auVar42._12_4_ = 0x7f7fffee;
  fVar49 = 3.40282e+38;
  uVar45 = auVar42._8_8_;
  iVar31 = 0;
  uVar34 = 0;
  local_a8 = 0;
  local_a0 = -0x8000000000000000;
  local_98 = 0;
  local_90 = -0x8000000000000000;
  local_88 = 0;
  local_80 = 0x8000000000000000;
  uVar35 = 0;
  do {
    plVar4 = &local_a8 + uVar34 * 2;
    iVar3 = iVar31 + uVar7;
    lVar37 = *(long *)(param_1 + 0x28);
    iVar8 = *(int *)(param_2 + 0x20);
    if ((int)(uVar35 & 0x7fffffff) < iVar3) {
      FUN_02eaf0f8(plVar4,PTR_PTR_047d1a50,(long)iVar3);
    }
    uVar35 = (uint)uVar34;
    if ((int)uVar7 < 1) {
      auVar46._8_8_ = 0xff7fffeeff7fffee;
      auVar46._0_8_ = 0xff7fffeeff7fffee;
      fVar40 = 3.40282e+38;
      fVar41 = 3.40282e+38;
      auVar47._8_8_ = uVar45;
      auVar47._0_8_ = 0x7f7fffee7f7fffee;
      fVar38 = 3.40282e+38;
      fVar39 = 3.40282e+38;
      *(int *)(&local_a0 + uVar34 * 2) = iVar3;
      auVar48 = auVar46;
    }
    else {
      puVar32 = (undefined8 *)(lVar37 + (long)iVar8 * 0x10);
      puVar27 = (undefined8 *)(*plVar4 + (long)iVar31 * 0x10);
      if (2 < uVar7 - 1) {
        puVar25 = puVar32;
        puVar28 = puVar27;
        iVar31 = -(uVar7 & 0xfffffffc);
        do {
          puVar28[1] = puVar25[1];
          *puVar28 = *puVar25;
          puVar28[3] = puVar25[3];
          puVar28[2] = puVar25[2];
          puVar28[5] = puVar25[5];
          puVar28[4] = puVar25[4];
          puVar28[7] = puVar25[7];
          puVar32 = puVar25 + 8;
          puVar27 = puVar28 + 8;
          iVar31 = iVar31 + 4;
          puVar28[6] = puVar25[6];
          puVar25 = puVar32;
          puVar28 = puVar27;
        } while (iVar31 != 0);
      }
      if ((uVar7 & 3) != 0) {
        uVar30 = uVar7 & 3;
        do {
          puVar27[1] = puVar32[1];
          uVar30 = uVar30 - 1;
          *puVar27 = *puVar32;
          puVar32 = puVar32 + 2;
          puVar27 = puVar27 + 2;
        } while (uVar30 != 0);
      }
      *(int *)(&local_a0 + uVar34 * 2) = iVar3;
      puVar32 = (undefined8 *)*plVar4;
      uVar26 = 0;
      puVar27 = puVar32;
      do {
        uVar18 = (puVar32 + uVar26 * 2)[1];
        uVar17 = puVar32[uVar26 * 2];
        if (uVar26 == 0) goto LAB_032544f8;
        uVar29 = uVar26;
        switch(uVar34 & 0xffffffff) {
        case 0:
          puVar25 = puVar27;
          do {
            piVar2 = (int *)(puVar32 + (ulong)((int)uVar29 - 1) * 2);
            if (*piVar2 <= (int)uVar17) goto switchD_03254408_default;
            puVar25[1] = *(undefined8 *)(piVar2 + 2);
            *puVar25 = *(undefined8 *)piVar2;
            uVar9 = uVar29 - 1;
            bVar1 = 0 < (long)uVar29;
            uVar29 = uVar9;
            puVar25 = puVar25 + -2;
          } while (uVar9 != 0 && bVar1);
          break;
        case 1:
          puVar25 = puVar27;
          do {
            puVar28 = puVar32 + (ulong)((int)uVar29 - 1) * 2;
            if (*(int *)((long)puVar28 + 4) <= (int)((ulong)uVar17 >> 0x20))
            goto switchD_03254408_default;
            puVar25[1] = puVar28[1];
            *puVar25 = *puVar28;
            uVar9 = uVar29 - 1;
            bVar1 = 0 < (long)uVar29;
            uVar29 = uVar9;
            puVar25 = puVar25 + -2;
          } while (uVar9 != 0 && bVar1);
          break;
        case 2:
          puVar25 = puVar27;
          do {
            puVar28 = puVar32 + (ulong)((int)uVar29 - 1) * 2;
            if (*(int *)(puVar28 + 1) <= (int)uVar18) goto switchD_03254408_default;
            puVar25[1] = puVar28[1];
            *puVar25 = *puVar28;
            uVar9 = uVar29 - 1;
            bVar1 = 0 < (long)uVar29;
            uVar29 = uVar9;
            puVar25 = puVar25 + -2;
          } while (uVar9 != 0 && bVar1);
          break;
        case 3:
          puVar25 = puVar27;
          do {
            puVar28 = puVar32 + (ulong)((int)uVar29 - 1) * 2;
            if (*(int *)((long)puVar28 + 0xc) <= (int)((ulong)uVar18 >> 0x20))
            goto switchD_03254408_default;
            puVar25[1] = puVar28[1];
            *puVar25 = *puVar28;
            uVar9 = uVar29 - 1;
            bVar1 = 0 < (long)uVar29;
            uVar29 = uVar9;
            puVar25 = puVar25 + -2;
          } while (uVar9 != 0 && bVar1);
          break;
        default:
          goto switchD_03254408_default;
        }
LAB_032544f8:
        uVar29 = 0;
switchD_03254408_default:
        uVar26 = uVar26 + 1;
        puVar27 = puVar27 + 2;
        puVar25 = (undefined8 *)
                  ((long)puVar32 +
                  (-(uVar29 >> 0x1f & 1) & 0xfffffff000000000 | (uVar29 & 0xffffffff) << 4));
        puVar25[1] = uVar18;
        *puVar25 = uVar17;
      } while (uVar26 != uVar33);
      auVar48._8_8_ = 0xff7fffeeff7fffee;
      auVar48._0_8_ = 0xff7fffeeff7fffee;
      auVar47._8_8_ = uVar45;
      auVar47._0_8_ = 0x7f7fffee7f7fffee;
      uVar26 = 0;
      local_150 = 0x7f7fffee7f7fffee;
      uStack_138 = 0xff7fffeeff7fffee;
      local_140 = 0xff7fffeeff7fffee;
      uStack_148 = uVar45;
      do {
        (**(code **)(**(long **)(param_1 + 0x48) + 0x10))
                  (*(long **)(param_1 + 0x48),*(undefined4 *)((long)puVar32 + uVar26 * 0x10 + 0xc),
                   &local_e0);
        auVar15._8_4_ = uStack_d8;
        auVar15._0_8_ = local_e0;
        auVar10._8_4_ = uStack_d8;
        auVar10._0_8_ = local_e0;
        if (uVar26 < uVar24) {
          auVar20._8_8_ = uStack_148;
          auVar20._0_8_ = local_150;
          auVar10._12_4_ = uStack_d4;
          auVar46 = NEON_fmin(auVar20,auVar10,4);
          auVar21._8_8_ = uStack_138;
          auVar21._0_8_ = local_140;
          auVar11._8_4_ = uStack_c8;
          auVar11._0_8_ = local_d0;
          auVar11._12_4_ = uStack_c4;
          auVar42 = NEON_fmax(auVar21,auVar11,4);
          uStack_148 = auVar46._8_8_;
          local_150 = auVar46._0_8_;
          uStack_138 = auVar42._8_8_;
          local_140 = auVar42._0_8_;
        }
        else {
          auVar15._12_4_ = uStack_d4;
          auVar47 = NEON_fmin(auVar47,auVar15,4);
          auVar16._8_4_ = uStack_c8;
          auVar16._0_8_ = local_d0;
          auVar16._12_4_ = uStack_c4;
          auVar48 = NEON_fmax(auVar48,auVar16,4);
        }
        uVar26 = uVar26 + 1;
      } while (uVar33 != uVar26);
      fVar40 = (float)uStack_148;
      fVar41 = (float)((ulong)uStack_148 >> 0x20);
      fVar38 = (float)local_150;
      fVar39 = (float)((ulong)local_150 >> 0x20);
      auVar46._8_8_ = uStack_138;
      auVar46._0_8_ = local_140;
    }
    uVar26 = local_80;
    fVar38 = auVar46._0_4_ - fVar38;
    fVar39 = auVar46._4_4_ - fVar39;
    fVar40 = auVar46._8_4_ - fVar40;
    fVar41 = auVar46._12_4_ - fVar41;
    auVar19._8_8_ = uVar23;
    auVar19._0_8_ = uVar22;
    auVar12._4_4_ = fVar39;
    auVar12._0_4_ = fVar38;
    auVar12._8_4_ = fVar40;
    auVar12._12_4_ = fVar41;
    auVar42 = a64_TBL(ZEXT816(0),auVar12,auVar19);
    fVar38 = (fVar38 + fVar38) * auVar42._0_4_;
    fVar39 = (fVar39 + fVar39) * auVar42._4_4_;
    fVar40 = (fVar40 + fVar40) * auVar42._8_4_;
    fVar41 = (fVar41 + fVar41) * auVar42._12_4_;
    auVar43._0_4_ = auVar48._0_4_ - auVar47._0_4_;
    auVar43._4_4_ = auVar48._4_4_ - auVar47._4_4_;
    auVar43._8_4_ = auVar48._8_4_ - auVar47._8_4_;
    auVar43._12_4_ = auVar48._12_4_ - auVar47._12_4_;
    auVar13._4_4_ = fVar39;
    auVar13._0_4_ = fVar38;
    auVar13._8_4_ = fVar40;
    auVar13._12_4_ = fVar41;
    auVar14._4_4_ = fVar39;
    auVar14._0_4_ = fVar38;
    auVar14._8_4_ = fVar40;
    auVar14._12_4_ = fVar41;
    auVar48 = NEON_ext(auVar13,auVar14,8,1);
    auVar42 = a64_TBL(ZEXT816(0),auVar43,auVar19);
    auVar44._0_4_ = (auVar43._0_4_ + auVar43._0_4_) * auVar42._0_4_;
    auVar44._4_4_ = (auVar43._4_4_ + auVar43._4_4_) * auVar42._4_4_;
    auVar44._8_4_ = (auVar43._8_4_ + auVar43._8_4_) * auVar42._8_4_;
    auVar44._12_4_ = (auVar43._12_4_ + auVar43._12_4_) * auVar42._12_4_;
    auVar42 = NEON_ext(auVar44,auVar44,8,1);
    fVar38 = fVar38 + fVar39 + auVar48._0_4_ + auVar44._0_4_ + auVar44._4_4_ + auVar42._0_4_;
    if (fVar49 <= fVar38) {
      uVar35 = (uint)uVar36;
    }
    uVar36 = (ulong)uVar35;
    uVar34 = uVar34 + 1;
    if (uVar34 == 3) {
      if (0 < (int)uVar7) {
        puVar27 = *(undefined8 **)
                   ((long)&local_a8 + (-(ulong)(uVar35 >> 0x1f) & 0xfffffff000000000 | uVar36 << 4))
        ;
        puVar32 = (undefined8 *)(*(long *)(param_1 + 0x28) + (long)*(int *)(param_2 + 0x20) * 0x10);
        do {
          uVar7 = (int)uVar33 - 1;
          uVar33 = (ulong)uVar7;
          uVar5 = *(undefined4 *)(puVar27 + 1);
          uVar6 = *(undefined4 *)((long)puVar27 + 0xc);
          *puVar32 = *puVar27;
          *(undefined4 *)(puVar32 + 1) = uVar5;
          *(undefined4 *)((long)puVar32 + 0xc) = uVar6;
          puVar27 = puVar27 + 2;
          puVar32 = puVar32 + 2;
        } while (uVar7 != 0);
      }
      local_c0 = *(int *)(param_2 + 0x20);
      local_f0 = local_c0 + uVar24;
      uVar33 = local_80 >> 0x20;
      local_80 = uVar33 << 0x20;
      local_ec = *(int *)(param_2 + 0x24) - uVar24;
      uStack_bc = uVar24;
      if ((-1 < (long)uVar26) && (local_88 != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_88,uVar33 << 4);
      }
      lVar37 = local_90;
      uVar33 = (ulong)local_90._4_4_;
      local_88 = 0;
      local_80 = CONCAT44(0x80000000,(undefined4)local_80);
      local_90 = (ulong)local_90._4_4_ << 0x20;
      if ((-1 < lVar37) && (local_98 != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_98,uVar33 << 4);
      }
      lVar37 = local_a0;
      uVar33 = (ulong)local_a0._4_4_;
      local_98 = 0;
      local_90 = CONCAT44(0x80000000,(undefined4)local_90);
      local_a0 = (ulong)local_a0._4_4_ << 0x20;
      if ((-1 < lVar37) && (local_a8 != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_a8,uVar33 << 4);
      }
      FUN_03254230(param_1,&local_e0);
      FUN_03254230(param_1,auStack_110);
      return;
    }
    if (fVar49 <= fVar38) {
      fVar38 = fVar49;
    }
    fVar49 = fVar38;
    iVar31 = *(int *)(&local_a0 + uVar34 * 2);
    uVar35 = *(uint *)((long)&local_a0 + uVar34 * 0x10 + 4);
  } while( true );
}


