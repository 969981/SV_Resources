/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033c5f28; name: FUN_033c5f28
 */


void FUN_033c5f28(float param_1,long param_2,uint param_3,long param_4,long param_5,
                 undefined8 param_6,long param_7)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar11 = *(float *)(param_4 + 0x14);
  fVar15 = *(float *)(param_4 + 0x18) * param_1;
  fVar7 = fVar15 + param_1 * *(float *)(param_4 + 0x20);
  fVar14 = *(float *)(param_2 + 0xc);
  fVar8 = fVar11 + fVar14 * fVar7;
  fVar17 = fVar7 + fVar15;
  lVar1 = param_7 + (ulong)param_3 * 4;
  fVar16 = fVar17 + fVar15;
  fVar9 = fVar8 + fVar14 * fVar17;
  fVar10 = fVar9 + fVar14 * fVar16;
  auVar13._0_8_ = CONCAT44(fVar8 - (float)(int)fVar8,fVar11 - (float)(int)fVar11);
  auVar13._8_4_ = fVar9 - (float)(int)fVar9;
  auVar13._12_4_ = fVar10 - (float)(int)fVar10;
  if (param_3 != 0) {
    fVar9 = fVar15 * 4.0;
    fVar10 = fVar14 * 4.0;
    fVar11 = fVar14 * 6.0 * fVar15;
    uVar5 = 0;
    fVar8 = fVar16 + fVar15;
    do {
      fVar20 = auVar13._0_4_ * 512.0;
      fVar21 = auVar13._4_4_ * 512.0;
      fVar22 = auVar13._8_4_ * 512.0;
      fVar23 = auVar13._12_4_ * 512.0;
      lVar6 = uVar5 * 4;
      uVar2 = (int)uVar5 + 4;
      uVar5 = (ulong)uVar2;
      auVar12 = NEON_fcvtzs(auVar13,9,4);
      fVar14 = auVar13._0_4_ + fVar11 + fVar10 * fVar7;
      fVar15 = auVar13._4_4_ + fVar11 + fVar10 * fVar17;
      fVar18 = auVar13._8_4_ + fVar11 + fVar10 * fVar16;
      fVar19 = auVar13._12_4_ + fVar11 + fVar10 * fVar8;
      ((undefined8 *)(param_7 + lVar6))[1] = auVar12._8_8_;
      *(undefined8 *)(param_7 + lVar6) = auVar12._0_8_;
      auVar13._0_8_ = CONCAT44(fVar15 - (float)(int)fVar15,fVar14 - (float)(int)fVar14);
      auVar13._12_4_ = fVar19 - (float)(int)fVar19;
      auVar13._8_4_ = fVar18 - (float)(int)fVar18;
      iVar3 = auVar12._4_4_ + 1;
      iVar4 = auVar12._12_4_ + 1;
      ((ulong *)(lVar1 + lVar6))[1] =
           (ulong)(CONCAT15((char)((uint)iVar4 >> 8),
                            CONCAT14((char)iVar4,(uint)(auVar12._8_2_ + 1U & 0x1ff))) &
                  0x1ffffffffff);
      *(ulong *)(lVar1 + lVar6) =
           (ulong)(CONCAT15((char)((uint)iVar3 >> 8),
                            CONCAT14((char)iVar3,(uint)(auVar12._0_2_ + 1U & 0x1ff))) &
                  0x1ffffffffff);
      ((undefined8 *)(param_5 + lVar6))[1] =
           CONCAT44(fVar23 - (float)(int)fVar23,fVar22 - (float)(int)fVar22);
      *(undefined8 *)(param_5 + lVar6) =
           CONCAT44(fVar21 - (float)(int)fVar21,fVar20 - (float)(int)fVar20);
      fVar16 = fVar16 + fVar9;
      fVar8 = fVar8 + fVar9;
      fVar7 = fVar7 + fVar9;
      fVar17 = fVar17 + fVar9;
    } while (uVar2 < param_3);
  }
  *(int *)(param_4 + 0x14) = (int)auVar13._0_8_;
  FUN_033c5e00(*(undefined8 *)(param_4 + 8),param_3,param_7,lVar1);
  FUN_033c5eb0(param_3,*(undefined1 *)(param_4 + 0x3c),param_7,lVar1,param_5,param_5);
  return;
}


