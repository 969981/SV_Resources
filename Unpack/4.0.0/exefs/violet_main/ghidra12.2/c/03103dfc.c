/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03103dfc; name: FUN_03103dfc
 */


void FUN_03103dfc(long param_1,undefined8 *param_2,long param_3,uint *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  int local_134;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_b8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  byte local_88;
  
  iVar12 = *(int *)(param_2 + 2);
  iVar11 = *(int *)(param_1 + 0x20);
  uVar13 = (iVar11 - iVar12) - 2;
  uVar13 = uVar13 | (int)uVar13 >> 0x10;
  uVar13 = uVar13 | (int)uVar13 >> 8;
  uVar13 = uVar13 | (int)uVar13 >> 4;
  uVar13 = uVar13 | (int)uVar13 >> 2;
  uVar3 = 0;
  if ((int)*(uint *)(param_1 + 0x28) <= (int)(uVar13 | (int)uVar13 >> 1)) {
    uVar3 = *(uint *)(param_1 + 0x28);
  }
  *(uint *)(param_1 + 0x28) = uVar3 + 1;
  fVar38 = *(float *)(param_3 + 0x10);
  fVar20 = *(float *)(param_3 + 0x14);
  local_e8 = CONCAT44(fVar38 * fVar38,fVar38 * fVar38);
  if (iVar12 < iVar11) {
    uVar16 = (ulong)(iVar12 - 1) | 0x200000000;
    local_134 = 0;
    bVar7 = true;
    do {
      lVar19 = *(long *)(param_1 + 0x18);
      lVar14 = (long)iVar12;
      lVar1 = lVar19 + lVar14 * 0x40;
      if (*(char *)(lVar1 + 0x28) != -1) {
        iVar11 = *(int *)(param_2 + 2);
        lVar18 = lVar14 * 0x40;
        lVar15 = lVar19;
        if (iVar12 == iVar11) {
          uStack_98 = param_2[1];
          local_a0 = *param_2;
        }
        else {
          uStack_d8 = ((undefined8 *)(lVar19 + lVar18))[1];
          local_e0 = *(undefined8 *)(lVar19 + lVar18);
          uVar13 = iVar12 - 1;
          lVar17 = (-(ulong)(uVar13 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar13 << 6) + 0x40;
          local_b8 = 0xfe;
          uVar9 = ~(long)(int)uVar13 + (long)iVar11;
          do {
            lVar2 = lVar15 + lVar17;
            if (*(byte *)(lVar2 + -0x18) == 0xff) {
              uVar27 = (undefined4)*(undefined8 *)(lVar2 + -0x38);
              uVar30 = (undefined4)((ulong)*(undefined8 *)(lVar2 + -0x38) >> 0x20);
              uVar21 = (undefined4)*(undefined8 *)(lVar2 + -0x40);
              uVar24 = (undefined4)((ulong)*(undefined8 *)(lVar2 + -0x40) >> 0x20);
              goto LAB_03103fa8;
            }
            uStack_98 = *(undefined8 *)(lVar2 + -0x28);
            local_a0 = *(undefined8 *)(lVar2 + -0x30);
            uStack_8c = *(undefined4 *)(lVar2 + -0x20);
            local_90 = *(undefined4 *)(lVar2 + -0x1c);
            local_88 = *(byte *)(lVar2 + -0x18) ^ 1;
            FUN_03104ec8(&local_e0,&local_a0);
            bVar8 = 0xfffffffffffffffe < uVar9;
            uVar9 = uVar9 + 1;
            if (bVar8) {
              uVar9 = FUN_0310570c(&local_e0,param_2);
              if ((uVar9 & 1) == 0) {
                lVar15 = *(long *)(param_1 + 0x18);
                puVar4 = (undefined8 *)(lVar15 + (long)iVar11 * 0x40);
                uVar5 = puVar4[1];
                uVar27 = (undefined4)uVar5;
                uVar30 = (undefined4)((ulong)uVar5 >> 0x20);
                uVar5 = *puVar4;
                uVar21 = (undefined4)uVar5;
                uVar24 = (undefined4)((ulong)uVar5 >> 0x20);
                goto LAB_03103fa8;
              }
              uStack_98 = param_2[1];
              local_a0 = *param_2;
              lVar15 = *(long *)(param_1 + 0x18);
              goto LAB_03103fac;
            }
            lVar15 = *(long *)(param_1 + 0x18) + lVar17;
            lVar17 = lVar17 + -0x40;
            uVar10 = FUN_0310570c(&local_e0,lVar15 + -0x80);
            lVar15 = *(long *)(param_1 + 0x18);
          } while ((uVar10 & 1) != 0);
          uVar5 = ((undefined8 *)(lVar15 + lVar17))[1];
          uVar27 = (undefined4)uVar5;
          uVar30 = (undefined4)((ulong)uVar5 >> 0x20);
          uVar5 = *(undefined8 *)(lVar15 + lVar17);
          uVar21 = (undefined4)uVar5;
          uVar24 = (undefined4)((ulong)uVar5 >> 0x20);
LAB_03103fa8:
          uStack_98 = CONCAT44(uVar30,uVar27);
          local_a0 = CONCAT44(uVar24,uVar21);
        }
LAB_03103fac:
        lVar17 = lVar14 + 1;
        lVar2 = lVar15 + lVar17 * 0x40;
        if (*(char *)(lVar2 + 0x28) == -1) {
          uVar27 = (undefined4)*(undefined8 *)(lVar2 + 0x18);
          uVar30 = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20);
          uVar21 = (undefined4)*(undefined8 *)(lVar2 + 0x10);
          uVar24 = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20);
        }
        else {
          uStack_d8 = ((undefined8 *)(lVar15 + lVar18))[1];
          local_e0 = *(undefined8 *)(lVar15 + lVar18);
          local_b8 = 0xfe;
          FUN_03104ec8(&local_e0,lVar2 + 0x10);
          lVar15 = *(long *)(param_1 + 0x18);
          lVar14 = lVar14 + 2;
          uVar9 = FUN_0310570c(&local_e0,lVar15 + lVar14 * 0x40);
          if ((uVar9 & 1) != 0) {
            uVar9 = lVar14 * 0x40 | 0x28;
            lVar14 = lVar14 << 0x20;
            do {
              lVar17 = lVar14;
              if (*(char *)(lVar15 + uVar9) == -1) break;
              FUN_03104ec8(&local_e0,lVar15 + uVar9 + -0x18);
              lVar15 = *(long *)(param_1 + 0x18);
              uVar10 = FUN_0310570c(&local_e0,lVar15 + uVar9 + 0x18);
              uVar9 = uVar9 + 0x40;
              lVar14 = lVar17 + 0x100000000;
            } while ((uVar10 & 1) != 0);
            lVar17 = lVar17 >> 0x20;
          }
          puVar4 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar17 * 0x40);
          uVar5 = puVar4[1];
          uVar27 = (undefined4)uVar5;
          uVar30 = (undefined4)((ulong)uVar5 >> 0x20);
          uVar5 = *puVar4;
          uVar21 = (undefined4)uVar5;
          uVar24 = (undefined4)((ulong)uVar5 >> 0x20);
        }
        uStack_f8 = CONCAT44(uVar30,uVar27);
        local_100 = CONCAT44(uVar24,uVar21);
        uVar6 = ((undefined8 *)(lVar19 + lVar18))[1];
        uVar5 = *(undefined8 *)(lVar19 + lVar18);
        FUN_031046c0(lVar1 + 0x10,&local_a0,&local_100,&local_e8,&local_e0);
        ((undefined8 *)(lVar19 + lVar18))[1] = uStack_d8;
        *(undefined8 *)(lVar19 + lVar18) = local_e0;
        fVar23 = (float)uVar5;
        fVar26 = (float)((ulong)uVar5 >> 0x20);
        fVar29 = (float)uVar6;
        fVar32 = (float)((ulong)uVar6 >> 0x20);
        if (iVar12 == *(int *)(param_2 + 2)) {
          fVar28 = (float)param_2[1];
          fVar31 = (float)((ulong)param_2[1] >> 0x20);
          fVar22 = (float)*param_2;
          fVar25 = (float)((ulong)*param_2 >> 0x20);
          auVar35._0_4_ = fVar23 - fVar22;
          auVar35._4_4_ = fVar26 - fVar25;
          auVar35._8_4_ = fVar29 - fVar28;
          auVar35._12_4_ = fVar32 - fVar31;
          auVar34._0_4_ = (float)local_e0 - fVar22;
          auVar34._4_4_ = local_e0._4_4_ - fVar25;
          auVar34._8_4_ = (float)uStack_d8 - fVar28;
          auVar34._12_4_ = uStack_d8._4_4_ - fVar31;
          fVar22 = (auVar35._0_4_ * auVar35._0_4_ + auVar35._4_4_ * auVar35._4_4_ +
                   auVar35._8_4_ * auVar35._8_4_) *
                   (auVar34._0_4_ * auVar34._0_4_ + auVar34._4_4_ * auVar34._4_4_ +
                   auVar34._8_4_ * auVar34._8_4_);
          if (fVar22 != 0.0) {
            auVar36 = NEON_ext(auVar35,auVar35,4,1);
            auVar37 = NEON_ext(auVar34,auVar34,4,1);
            auVar33._0_4_ = auVar35._0_4_ * auVar37._0_4_ - auVar34._0_4_ * auVar36._0_4_;
            auVar33._4_4_ = auVar35._4_4_ * auVar37._4_4_ - auVar34._4_4_ * auVar36._4_4_;
            auVar33._8_4_ = auVar35._8_4_ * auVar34._0_4_ - auVar34._8_4_ * auVar35._0_4_;
            auVar33._12_4_ = auVar35._12_4_ * auVar34._4_4_ - auVar34._12_4_ * auVar35._4_4_;
            auVar35 = NEON_ext(auVar33,auVar33,4,1);
            local_134 = -(uint)((auVar33._0_4_ * auVar33._0_4_ +
                                auVar35._0_4_ * auVar35._0_4_ + auVar35._4_4_ * auVar35._4_4_) /
                                fVar22 < fVar20 * fVar20);
          }
        }
        if (bVar7) {
          fVar23 = fVar23 - (float)local_e0;
          fVar26 = fVar26 - local_e0._4_4_;
          fVar29 = fVar29 - (float)uStack_d8;
          fVar32 = fVar32 - uStack_d8._4_4_;
          fVar23 = fVar23 * fVar23;
          fVar26 = fVar26 * fVar26;
          fVar29 = fVar29 * fVar29;
          fVar32 = fVar32 * fVar32;
          auVar36._4_4_ = fVar26;
          auVar36._0_4_ = fVar23;
          auVar36._8_4_ = fVar29;
          auVar36._12_4_ = fVar32;
          auVar37._4_4_ = fVar26;
          auVar37._0_4_ = fVar23;
          auVar37._8_4_ = fVar29;
          auVar37._12_4_ = fVar32;
          auVar35 = NEON_ext(auVar36,auVar37,8,1);
          bVar7 = fVar23 + fVar26 + auVar35._0_4_ < fVar38;
        }
        iVar11 = *(int *)(param_1 + 0x20);
      }
      uVar13 = (uint)(uVar16 >> 0x20);
      iVar12 = (uVar13 - 1 & uVar3 | uVar13) + (int)uVar16;
      uVar16 = uVar16 & 0xffffffff | (uVar16 >> 0x20) << 0x21;
    } while (iVar12 < iVar11);
  }
  else {
    bVar7 = true;
    local_134 = 0;
  }
  *param_4 = (uint)(bVar7 || local_134 != 0);
  return;
}


