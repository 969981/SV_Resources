/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03250a9c; name: FUN_03250a9c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03250a9c(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  float *pfVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  uint local_148;
  undefined1 local_d0 [16];
  undefined1 auStack_c0 [16];
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  
  uVar6 = *(uint *)(param_2 + 0x24);
  uVar25 = (ulong)uVar6;
  uVar8 = uVar6 - 1;
  if ((int)uVar6 < 1) {
    lVar13 = 0;
    local_148 = 0x80000000;
  }
  else {
    lVar13 = (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,uVar25 << 2);
    local_148 = uVar6;
  }
  uVar11 = _UNK_03cabbd8;
  uVar10 = _DAT_03cabbd0;
  uVar16 = uVar6;
  if ((int)uVar6 < 3) {
    uVar16 = 2;
  }
  fVar40 = 3.40282e+38;
  uVar24 = 0xffffffff;
  local_a8 = 0;
  local_a0 = -0x8000000000000000;
  iVar22 = 0;
  local_98 = 0;
  local_90 = -0x8000000000000000;
  lVar28 = 0;
  local_88 = 0;
  local_80 = -0x8000000000000000;
  uVar14 = 0;
  uVar26 = 0xffffffff;
  while( true ) {
    plVar3 = (long *)(auStack_c0 + lVar28 * 0x10 + 0x18);
    iVar2 = iVar22 + uVar6;
    lVar27 = *(long *)(param_1 + 0x28);
    iVar7 = *(int *)(param_2 + 0x20);
    if ((int)(uVar14 & 0x7fffffff) < iVar2) {
      FUN_02eaf0f8(plVar3,PTR_PTR_047d1a50,(long)iVar2);
    }
    if ((int)uVar6 < 1) {
      *(int *)(&local_a0 + lVar28 * 2) = iVar2;
      lVar27 = *plVar3;
    }
    else {
      puVar15 = (undefined8 *)(lVar27 + (long)iVar7 * 0x10);
      puVar18 = (undefined8 *)(*plVar3 + (long)iVar22 * 0x10);
      if (2 < uVar8) {
        puVar17 = puVar15;
        puVar19 = puVar18;
        iVar22 = -(uVar6 & 0xfffffffc);
        do {
          puVar19[1] = puVar17[1];
          *puVar19 = *puVar17;
          puVar19[3] = puVar17[3];
          puVar19[2] = puVar17[2];
          puVar19[5] = puVar17[5];
          puVar19[4] = puVar17[4];
          puVar19[7] = puVar17[7];
          puVar15 = puVar17 + 8;
          puVar18 = puVar19 + 8;
          iVar22 = iVar22 + 4;
          puVar19[6] = puVar17[6];
          puVar17 = puVar15;
          puVar19 = puVar18;
        } while (iVar22 != 0);
      }
      if ((uVar6 & 3) != 0) {
        uVar14 = uVar6 & 3;
        do {
          puVar18[1] = puVar15[1];
          uVar14 = uVar14 - 1;
          *puVar18 = *puVar15;
          puVar15 = puVar15 + 2;
          puVar18 = puVar18 + 2;
        } while (uVar14 != 0);
      }
      *(int *)(&local_a0 + lVar28 * 2) = iVar2;
      lVar27 = *plVar3;
      if (1 < (int)uVar6) {
        FUN_032532d0(lVar27,0,uVar8,lVar28);
      }
      auVar38._8_4_ = 0xff7fffee;
      auVar38._0_8_ = 0xff7fffeeff7fffee;
      auVar38._12_4_ = 0xff7fffee;
      auVar36._8_4_ = 0x7f7fffee;
      auVar36._0_8_ = 0x7f7fffee7f7fffee;
      auVar36._12_4_ = 0x7f7fffee;
      uVar20 = 0;
      do {
        (**(code **)(**(long **)(param_1 + 0x48) + 0x10))
                  (*(long **)(param_1 + 0x48),*(undefined4 *)(lVar27 + uVar20 * 0x10 + 0xc),local_d0
                  );
        uVar1 = uVar20 + 1;
        auVar36 = NEON_fmin(auVar36,local_d0,4);
        auVar38 = NEON_fmax(auVar38,auStack_c0,4);
        auVar35._8_8_ = uVar11;
        auVar35._0_8_ = uVar10;
        auVar30._0_4_ = auVar38._0_4_ - auVar36._0_4_;
        auVar30._4_4_ = auVar38._4_4_ - auVar36._4_4_;
        auVar30._8_4_ = auVar38._8_4_ - auVar36._8_4_;
        auVar30._12_4_ = auVar38._12_4_ - auVar36._12_4_;
        auVar35 = a64_TBL(ZEXT816(0),auVar30,auVar35);
        auVar31._0_4_ = (auVar30._0_4_ + auVar30._0_4_) * auVar35._0_4_;
        auVar31._4_4_ = (auVar30._4_4_ + auVar30._4_4_) * auVar35._4_4_;
        auVar31._8_4_ = (auVar30._8_4_ + auVar30._8_4_) * auVar35._8_4_;
        auVar31._12_4_ = (auVar30._12_4_ + auVar30._12_4_) * auVar35._12_4_;
        auVar35 = NEON_ext(auVar31,auVar31,8,1);
        *(float *)(lVar13 + uVar20 * 4) =
             (float)(int)uVar1 * (auVar31._0_4_ + auVar31._4_4_ + auVar35._0_4_);
        uVar20 = uVar1;
      } while (uVar25 != uVar1);
    }
    if (1 < (int)uVar6) {
      lVar27 = lVar27 + ((long)(int)uVar6 + -1) * 0x10;
      auVar39._8_4_ = 0xff7fffee;
      auVar39._0_8_ = 0xff7fffeeff7fffee;
      auVar39._12_4_ = 0xff7fffee;
      auVar37._8_4_ = 0x7f7fffee;
      auVar37._0_8_ = 0x7f7fffee7f7fffee;
      auVar37._12_4_ = 0x7f7fffee;
      uVar14 = 1;
      pfVar21 = (float *)(lVar13 + (long)(int)uVar6 * 4 + -8);
      uVar29 = uVar8;
      do {
        (**(code **)(**(long **)(param_1 + 0x48) + 0x10))
                  (*(long **)(param_1 + 0x48),*(undefined4 *)(lVar27 + 0xc),local_d0);
        lVar27 = lVar27 + -0x10;
        auVar37 = NEON_fmin(auVar37,local_d0,4);
        auVar39 = NEON_fmax(auVar39,auStack_c0,4);
        auVar9._8_8_ = uVar11;
        auVar9._0_8_ = uVar10;
        auVar32._0_4_ = auVar39._0_4_ - auVar37._0_4_;
        auVar32._4_4_ = auVar39._4_4_ - auVar37._4_4_;
        auVar32._8_4_ = auVar39._8_4_ - auVar37._8_4_;
        auVar32._12_4_ = auVar39._12_4_ - auVar37._12_4_;
        auVar38 = a64_TBL(ZEXT816(0),auVar32,auVar9);
        auVar33._0_4_ = (auVar32._0_4_ + auVar32._0_4_) * auVar38._0_4_;
        auVar33._4_4_ = (auVar32._4_4_ + auVar32._4_4_) * auVar38._4_4_;
        auVar33._8_4_ = (auVar32._8_4_ + auVar32._8_4_) * auVar38._8_4_;
        auVar33._12_4_ = (auVar32._12_4_ + auVar32._12_4_) * auVar38._12_4_;
        auVar38 = NEON_ext(auVar33,auVar33,8,1);
        fVar34 = (float)(int)uVar14;
        uVar14 = uVar14 + 1;
        fVar34 = *pfVar21 + fVar34 * (auVar33._0_4_ + auVar33._4_4_ + auVar38._0_4_);
        uVar23 = (uint)lVar28;
        uVar12 = uVar29;
        if (fVar40 <= fVar34) {
          uVar23 = (uint)uVar24;
          uVar12 = uVar26;
          fVar34 = fVar40;
        }
        fVar40 = fVar34;
        uVar26 = uVar12;
        uVar24 = (ulong)uVar23;
        uVar29 = uVar29 - 1;
        pfVar21 = pfVar21 + -1;
      } while (uVar16 != uVar14);
    }
    lVar27 = local_80;
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) break;
    iVar22 = *(int *)(&local_a0 + lVar28 * 2);
    uVar14 = *(uint *)((long)&local_a0 + lVar28 * 0x10 + 4);
  }
  iVar22 = *(int *)(param_2 + 0x20);
  *(int *)(param_3 + 0x20) = iVar22;
  *(uint *)(param_3 + 0x24) = uVar26;
  *(uint *)(param_4 + 0x20) = iVar22 + uVar26;
  iVar2 = *(int *)(param_2 + 0x24);
  iVar7 = iVar2 - uVar26;
  *(int *)(param_4 + 0x24) = iVar7;
  if ((int)uVar26 < param_5 || iVar7 < param_5) {
    uVar8 = uVar6;
    if ((int)uVar6 < 0) {
      uVar8 = uVar6 + 1;
    }
    iVar7 = (int)uVar8 >> 1;
    *(int *)(param_3 + 0x20) = iVar22;
    *(int *)(param_3 + 0x24) = iVar7;
    *(int *)(param_4 + 0x20) = iVar22 + iVar7;
    *(int *)(param_4 + 0x24) = iVar2 - iVar7;
  }
  if (0 < (int)uVar6) {
    puVar18 = *(undefined8 **)
               (auStack_c0 + (-(uVar24 >> 0x1f) & 0xfffffff000000000 | uVar24 << 4) + 0x18);
    puVar15 = (undefined8 *)(*(long *)(param_1 + 0x28) + (long)iVar22 * 0x10);
    do {
      uVar6 = (int)uVar25 - 1;
      uVar25 = (ulong)uVar6;
      uVar4 = *(undefined4 *)(puVar18 + 1);
      uVar5 = *(undefined4 *)((long)puVar18 + 0xc);
      *puVar15 = *puVar18;
      *(undefined4 *)(puVar15 + 1) = uVar4;
      *(undefined4 *)((long)puVar15 + 0xc) = uVar5;
      puVar18 = puVar18 + 2;
      puVar15 = puVar15 + 2;
    } while (uVar6 != 0);
  }
  uVar25 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar27) && (local_88 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_88,uVar25 << 4);
  }
  lVar28 = local_90;
  uVar25 = (ulong)local_90._4_4_;
  local_88 = 0;
  local_80 = CONCAT44(0x80000000,(undefined4)local_80);
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < lVar28) && (local_98 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_98,uVar25 << 4);
  }
  lVar28 = local_a0;
  uVar25 = (ulong)local_a0._4_4_;
  local_98 = 0;
  local_90 = CONCAT44(0x80000000,(undefined4)local_90);
  local_a0 = (ulong)local_a0._4_4_ << 0x20;
  if ((-1 < lVar28) && (local_a8 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_a8,uVar25 << 4);
  }
  if ((lVar13 != 0) && (-1 < (int)local_148)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar13,(ulong)local_148 << 2);
  }
  return;
}


