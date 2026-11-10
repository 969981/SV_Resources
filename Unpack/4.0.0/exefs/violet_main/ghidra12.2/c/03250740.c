/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03250740; name: FUN_03250740
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03250740(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  uint uVar17;
  float fVar18;
  float fVar22;
  undefined1 auVar19 [12];
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar24;
  undefined1 auVar25 [12];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  
  lVar10 = *(long *)(param_1 + 0x28);
  iVar14 = *(int *)(param_2 + 0x20);
  uVar3 = *(uint *)(param_2 + 0x24);
  uVar4 = (ulong)uVar3;
  lVar2 = lVar10 + (long)iVar14 * 0x10;
  if ((int)uVar3 < 1) {
    auVar25._8_4_ = 0xff7fffee;
    auVar25._0_8_ = 0xff7fffeeff7fffee;
    auVar19._8_4_ = 0x7f7fffee;
    auVar19._0_8_ = 0x7f7fffee7f7fffee;
  }
  else {
    auVar28._8_4_ = 0x7f7fffee;
    auVar28._0_8_ = 0x7f7fffee7f7fffee;
    auVar28._12_4_ = 0x7f7fffee;
    auVar29._8_4_ = 0xff7fffee;
    auVar29._0_8_ = 0xff7fffeeff7fffee;
    auVar29._12_4_ = 0xff7fffee;
    lVar9 = lVar2;
    uVar11 = uVar4;
    do {
      (**(code **)(**(long **)(param_1 + 0x48) + 0x10))
                (*(long **)(param_1 + 0x48),*(undefined4 *)(lVar9 + 0xc),local_90);
      uVar11 = uVar11 - 1;
      lVar9 = lVar9 + 0x10;
      auVar28 = NEON_fmin(auVar28,local_90,4);
      auVar19 = auVar28._0_12_;
      auVar29 = NEON_fmax(auVar29,local_80,4);
      auVar25 = auVar29._0_12_;
    } while (uVar11 != 0);
  }
  puVar8 = PTR_PTR_047d1a50;
  if (uVar3 - 1 == 0 || (int)uVar3 < 1) {
    if (uVar3 != 1) {
      lVar9 = 0;
      uVar17 = 0x80000000;
      goto LAB_032508ac;
    }
  }
  else {
    fVar18 = auVar25._0_4_ - auVar19._0_4_;
    fVar22 = auVar25._4_4_ - auVar19._4_4_;
    uVar24 = CONCAT44(fVar22,fVar18);
    fVar23 = auVar25._8_4_ - auVar19._8_4_;
    uVar24 = NEON_fmaxp(uVar24,uVar24,4);
    uVar24 = NEON_fmax(CONCAT44(fVar23,fVar23),uVar24,4);
    FUN_032530d0(lVar2,0,uVar3 - 1,
                 (int)(char)PTR_DAT_047d1a18
                            [-(uint)((float)((ulong)uVar24 >> 0x20) <= fVar22) & 2 |
                             -(uint)((float)uVar24 <= fVar18) & 1 |
                             -(uint)((float)uVar24 <= fVar23) & 4]);
  }
  lVar9 = (**(code **)(*(long *)puVar8 + 0x18))(puVar8,uVar4 << 2);
  uVar17 = uVar3;
LAB_032508ac:
  uVar7 = _UNK_03cabbd8;
  uVar24 = _DAT_03cabbd0;
  if (0 < (int)uVar3) {
    auVar30._8_4_ = 0xff7fffee;
    auVar30._0_8_ = 0xff7fffeeff7fffee;
    auVar30._12_4_ = 0xff7fffee;
    auVar31._8_4_ = 0x7f7fffee;
    auVar31._0_8_ = 0x7f7fffee7f7fffee;
    auVar31._12_4_ = 0x7f7fffee;
    uVar11 = 0;
    do {
      (**(code **)(**(long **)(param_1 + 0x48) + 0x10))
                (*(long **)(param_1 + 0x48),*(undefined4 *)(lVar2 + uVar11 * 0x10 + 0xc),local_90);
      uVar1 = uVar11 + 1;
      auVar30 = NEON_fmax(auVar30,local_80,4);
      auVar5._8_8_ = uVar7;
      auVar5._0_8_ = uVar24;
      auVar31 = NEON_fmin(auVar31,local_90,4);
      auVar20._0_4_ = auVar30._0_4_ - auVar31._0_4_;
      auVar20._4_4_ = auVar30._4_4_ - auVar31._4_4_;
      auVar20._8_4_ = auVar30._8_4_ - auVar31._8_4_;
      auVar20._12_4_ = auVar30._12_4_ - auVar31._12_4_;
      auVar28 = a64_TBL(ZEXT816(0),auVar20,auVar5);
      auVar21._0_4_ = (auVar20._0_4_ + auVar20._0_4_) * auVar28._0_4_;
      auVar21._4_4_ = (auVar20._4_4_ + auVar20._4_4_) * auVar28._4_4_;
      auVar21._8_4_ = (auVar20._8_4_ + auVar20._8_4_) * auVar28._8_4_;
      auVar21._12_4_ = (auVar20._12_4_ + auVar20._12_4_) * auVar28._12_4_;
      auVar28 = NEON_ext(auVar21,auVar21,8,1);
      *(float *)(lVar9 + uVar11 * 4) =
           (float)(int)uVar1 * (auVar21._0_4_ + auVar21._4_4_ + auVar28._0_4_);
      uVar11 = uVar1;
    } while (uVar4 != uVar1);
  }
  uVar7 = _UNK_03cabbd8;
  uVar24 = _DAT_03cabbd0;
  iVar16 = uVar3 - 1;
  if (iVar16 == 0 || (int)uVar3 < 1) {
    iVar14 = -1;
  }
  else {
    auVar32._8_4_ = 0xff7fffee;
    auVar32._0_8_ = 0xff7fffeeff7fffee;
    auVar32._12_4_ = 0xff7fffee;
    auVar33._8_4_ = 0x7f7fffee;
    auVar33._0_8_ = 0x7f7fffee7f7fffee;
    auVar33._12_4_ = 0x7f7fffee;
    fVar18 = 3.40282e+38;
    iVar12 = 1;
    pfVar15 = (float *)(lVar9 + uVar4 * 4 + -8);
    iVar13 = -1;
    lVar2 = lVar10 + ((long)iVar14 + uVar4) * 0x10;
    do {
      (**(code **)(**(long **)(param_1 + 0x48) + 0x10))
                (*(long **)(param_1 + 0x48),*(undefined4 *)(lVar2 + -4),local_90);
      auVar6._8_8_ = uVar7;
      auVar6._0_8_ = uVar24;
      fVar22 = (float)iVar12;
      iVar12 = iVar12 + 1;
      auVar32 = NEON_fmax(auVar32,local_80,4);
      auVar33 = NEON_fmin(auVar33,local_90,4);
      auVar26._0_4_ = auVar32._0_4_ - auVar33._0_4_;
      auVar26._4_4_ = auVar32._4_4_ - auVar33._4_4_;
      auVar26._8_4_ = auVar32._8_4_ - auVar33._8_4_;
      auVar26._12_4_ = auVar32._12_4_ - auVar33._12_4_;
      auVar28 = a64_TBL(ZEXT816(0),auVar26,auVar6);
      auVar27._0_4_ = (auVar26._0_4_ + auVar26._0_4_) * auVar28._0_4_;
      auVar27._4_4_ = (auVar26._4_4_ + auVar26._4_4_) * auVar28._4_4_;
      auVar27._8_4_ = (auVar26._8_4_ + auVar26._8_4_) * auVar28._8_4_;
      auVar27._12_4_ = (auVar26._12_4_ + auVar26._12_4_) * auVar28._12_4_;
      auVar28 = NEON_ext(auVar27,auVar27,8,1);
      fVar22 = *pfVar15 + fVar22 * (auVar27._0_4_ + auVar27._4_4_ + auVar28._0_4_);
      iVar14 = iVar16;
      if (fVar18 <= fVar22) {
        iVar14 = iVar13;
        fVar22 = fVar18;
      }
      fVar18 = fVar22;
      iVar16 = iVar16 + -1;
      pfVar15 = pfVar15 + -1;
      iVar13 = iVar14;
      lVar2 = lVar2 + -0x10;
    } while (iVar16 != 0);
  }
  iVar16 = *(int *)(param_2 + 0x20);
  *(int *)(param_3 + 0x20) = iVar16;
  *(int *)(param_3 + 0x24) = iVar14;
  *(int *)(param_4 + 0x20) = iVar16 + iVar14;
  iVar12 = *(int *)(param_2 + 0x24);
  iVar13 = iVar12 - iVar14;
  *(int *)(param_4 + 0x24) = iVar13;
  if (iVar14 < param_5 || iVar13 < param_5) {
    if ((int)uVar3 < 0) {
      uVar3 = uVar3 + 1;
    }
    iVar14 = (int)uVar3 >> 1;
    *(int *)(param_3 + 0x20) = iVar16;
    *(int *)(param_3 + 0x24) = iVar14;
    *(int *)(param_4 + 0x20) = iVar16 + iVar14;
    *(int *)(param_4 + 0x24) = iVar12 - iVar14;
  }
  if ((lVar9 != 0) && (-1 < (int)uVar17)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar9,(ulong)uVar17 << 2);
  }
  return;
}


