/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011c561c; name: FUN_011c561c
 */


void FUN_011c561c(long param_1,long *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float extraout_s0;
  float fVar16;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  float fVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  undefined1 in_q3 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  short sVar28;
  short sVar29;
  undefined2 uVar30;
  undefined2 uVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  uVar6 = 0;
  uVar32 = 0;
  lVar9 = *(long *)(*param_2 + 0x70);
  lVar1 = *param_2 + 0x68;
  if (lVar9 != lVar1) {
    auVar18 = ZEXT816(0);
    do {
      fVar16 = auVar18._12_4_;
      lVar7 = *(long *)(lVar9 + 0x10);
      uVar32 = *(undefined8 *)(lVar7 + 0x1a8);
      uVar6 = *(undefined8 *)(lVar7 + 0x1a0);
      if (0.0 < fVar16) {
        fVar24 = (float)((ulong)uVar32 >> 0x20);
        in_q3 = ZEXT416((uint)fVar24);
        if (fVar24 <= 0.0) {
LAB_011c56d0:
          uVar6 = auVar18._0_8_;
          uVar32 = auVar18._8_8_;
        }
        else {
          fVar33 = (float)uVar6 - auVar18._0_4_;
          fVar35 = (float)((ulong)uVar6 >> 0x20) - auVar18._4_4_;
          fVar37 = (float)uVar32 - auVar18._8_4_;
          fVar24 = fVar24 - fVar16;
          in_q3 = ZEXT416((uint)fVar24);
          auVar17._0_4_ = fVar33 * fVar33 + fVar35 * fVar35;
          auVar17._4_4_ = fVar37 * fVar37 + 0.0;
          auVar17._8_4_ = fVar33 * fVar33 + fVar35 * fVar35;
          auVar17._12_4_ = fVar37 * fVar37 + 0.0;
          auVar17 = NEON_ext(auVar17,auVar17,4,1);
          fVar10 = auVar17._0_4_ + auVar17._4_4_;
          if (fVar24 * fVar24 < fVar10) {
            fVar15 = SQRT(fVar10);
            if (NAN(fVar15)) {
              fVar15 = sqrtf(fVar10);
            }
            in_q3 = ZEXT416((uint)(fVar15 + fVar15));
            fVar24 = (fVar24 + fVar15) / (fVar15 + fVar15);
            uVar6 = CONCAT44(auVar18._4_4_ + fVar35 * fVar24,auVar18._0_4_ + fVar33 * fVar24);
            uVar32 = CONCAT44((fVar16 + fVar15 + *(float *)(lVar7 + 0x1ac)) * 0.5,
                              auVar18._8_4_ + fVar37 * fVar24);
          }
          else if (fVar24 < 0.0) goto LAB_011c56d0;
        }
      }
      lVar9 = *(long *)(lVar9 + 8);
      auVar18._8_8_ = uVar32;
      auVar18._0_8_ = uVar6;
    } while (lVar9 != lVar1);
  }
  fStack_48 = (float)uVar32;
  fVar35 = fStack_48;
  fStack_44 = (float)((ulong)uVar32 >> 0x20);
  fVar37 = fStack_44;
  iVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x30) + 0x18))();
  fVar16 = 0.0;
  fVar24 = 0.0;
  fVar10 = 0.0;
  fVar33 = 0.0;
  if (iVar4 != 0) {
    auVar26._8_4_ = fStack_48;
    auVar26._0_8_ = uVar6;
    auVar26._12_4_ = fStack_44;
    fVar15 = (float)uVar6;
    fVar21 = (float)((ulong)uVar6 >> 0x20);
    auVar22._4_4_ = fStack_48;
    auVar22._0_4_ = fStack_48;
    auVar22._8_4_ = fStack_48;
    auVar22._12_4_ = fStack_48;
    iVar8 = 0;
    uVar6 = 0;
    uVar32 = 0;
    do {
      fStack_48 = (float)uVar32;
      fStack_44 = (float)((ulong)uVar32 >> 0x20);
      local_50 = (float)uVar6;
      fStack_4c = (float)((ulong)uVar6 >> 0x20);
      plVar5 = (long *)(*(long *)(param_1 + 0x70) + 0x30);
      (**(code **)(*plVar5 + 0x28))(plVar5,iVar8);
      fVar16 = auVar26._0_4_;
      fVar24 = auVar26._4_4_;
      fVar10 = auVar26._8_4_;
      fVar33 = auVar26._12_4_ * auVar26._12_4_;
      fVar25 = auVar22._0_4_;
      fVar34 = auVar22._4_4_;
      fVar36 = auVar22._8_4_;
      auVar11._0_4_ = extraout_s0 * extraout_s0 + extraout_var * extraout_var;
      auVar11._4_4_ = extraout_var_00 * extraout_var_00 + extraout_var_01 * extraout_var_01;
      auVar11._8_4_ = extraout_s0 * extraout_s0 + extraout_var * extraout_var;
      auVar11._12_4_ = extraout_var_00 * extraout_var_00 + extraout_var_01 * extraout_var_01;
      auVar12._0_4_ = fVar16 * fVar16 + fVar24 * fVar24;
      auVar12._4_4_ = fVar10 * fVar10 + fVar33;
      auVar12._8_4_ = fVar16 * fVar16 + fVar24 * fVar24;
      auVar12._12_4_ = fVar10 * fVar10 + fVar33;
      auVar18 = NEON_ext(auVar12,auVar12,4,1);
      fVar16 = in_q3._0_4_ + fVar15 * extraout_s0 + fVar16 * fVar21 + fVar25 * fVar35;
      fVar24 = in_q3._4_4_ + fVar15 * extraout_var + fVar24 * fVar21 + fVar34 * fVar35;
      fVar10 = in_q3._8_4_ + fVar15 * extraout_var_00 + fVar10 * fVar21 + fVar36 * fVar35;
      auVar26 = NEON_ext(auVar11,auVar11,4,1);
      fVar33 = auVar22._12_4_ * auVar22._12_4_;
      auVar13._0_4_ = fVar25 * fVar25 + fVar34 * fVar34;
      auVar13._4_4_ = fVar36 * fVar36 + fVar33;
      auVar13._8_4_ = fVar25 * fVar25 + fVar34 * fVar34;
      auVar13._12_4_ = fVar36 * fVar36 + fVar33;
      auVar17 = NEON_ext(auVar13,auVar13,4,1);
      auVar19._0_4_ = SQRT(auVar18._0_4_ + auVar18._4_4_);
      auVar19._4_4_ = SQRT(auVar18._8_4_ + auVar18._12_4_);
      auVar19._8_4_ = SQRT(auVar18._0_4_ + auVar18._4_4_);
      auVar19._12_4_ = SQRT(auVar18._8_4_ + auVar18._12_4_);
      auVar27._0_4_ = SQRT(auVar26._0_4_ + auVar26._4_4_);
      auVar27._4_4_ = SQRT(auVar26._8_4_ + auVar26._12_4_);
      auVar27._8_4_ = SQRT(auVar26._0_4_ + auVar26._4_4_);
      auVar27._12_4_ = SQRT(auVar26._8_4_ + auVar26._12_4_);
      sVar28 = -(ushort)(auVar27._0_4_ < auVar19._0_4_);
      auVar23._0_4_ = SQRT(auVar17._0_4_ + auVar17._4_4_);
      auVar23._4_4_ = SQRT(auVar17._8_4_ + auVar17._12_4_);
      auVar23._8_4_ = SQRT(auVar17._0_4_ + auVar17._4_4_);
      auVar23._12_4_ = SQRT(auVar17._8_4_ + auVar17._12_4_);
      sVar29 = sVar28 >> 0xf;
      auVar2._4_2_ = sVar28;
      auVar2._0_4_ = (int)sVar28;
      auVar2._6_2_ = sVar29;
      auVar2._8_2_ = sVar28;
      auVar2._10_2_ = sVar29;
      auVar2._12_2_ = sVar28;
      auVar2._14_2_ = sVar29;
      auVar19 = auVar19 ^ (auVar19 ^ auVar27) & ~auVar2;
      in_q3._0_4_ = -(uint)(auVar19._0_4_ < auVar23._0_4_);
      in_q3._4_4_ = -(uint)(auVar19._4_4_ < auVar23._4_4_);
      in_q3._8_4_ = -(uint)(auVar19._8_4_ < auVar23._8_4_);
      in_q3._12_4_ = -(uint)(auVar19._12_4_ < auVar23._12_4_);
      auVar26 = auVar19 ^ (auVar19 ^ auVar23) & in_q3;
      fVar33 = fVar37 * auVar26._0_4_;
      if (0.0 < fStack_44) {
        if (fVar33 <= 0.0) {
LAB_011c5868:
          fVar33 = fStack_44;
          fVar16 = local_50;
          fVar24 = fStack_4c;
          fVar10 = fStack_48;
        }
        else {
          fVar25 = fVar33 - fStack_44;
          in_q3 = ZEXT416((uint)fVar25);
          fVar34 = fVar16 - local_50;
          fVar36 = fVar24 - fStack_4c;
          fVar38 = fVar10 - fStack_48;
          auVar14._0_4_ = fVar34 * fVar34 + fVar36 * fVar36;
          auVar14._4_4_ = fVar38 * fVar38 + 0.0;
          auVar14._8_4_ = fVar34 * fVar34 + fVar36 * fVar36;
          auVar14._12_4_ = fVar38 * fVar38 + 0.0;
          auVar18 = NEON_ext(auVar14,auVar14,4,1);
          auVar26._0_4_ = auVar18._0_4_ + auVar18._4_4_;
          auVar26._4_4_ = auVar18._8_4_ + auVar18._12_4_;
          auVar26._8_4_ = auVar18._0_4_ + auVar18._4_4_;
          auVar26._12_4_ = auVar18._8_4_ + auVar18._12_4_;
          if (fVar25 * fVar25 < auVar26._0_4_) {
            fVar16 = SQRT(auVar26._0_4_);
            if (NAN(fVar16)) {
              fVar16 = sqrtf(auVar26._0_4_);
            }
            in_q3 = ZEXT416((uint)(fVar16 + fVar16));
            fVar10 = (fVar25 + fVar16) / (fVar16 + fVar16);
            fVar33 = (fVar33 + fStack_44 + fVar16) * 0.5;
            fVar16 = local_50 + fVar34 * fVar10;
            fVar24 = fStack_4c + fVar36 * fVar10;
            fVar10 = fStack_48 + fVar38 * fVar10;
            auVar20._4_4_ = fVar10;
            auVar20._0_4_ = fVar10;
            auVar20._8_4_ = fVar10;
            auVar20._12_4_ = fVar10;
            auVar26._8_8_ = auVar20._8_8_;
            auVar26._4_4_ = fVar33;
            auVar26._0_4_ = fVar10;
          }
          else if (fVar25 < 0.0) goto LAB_011c5868;
        }
      }
      auVar22 = ZEXT416((uint)fStack_44);
      uVar32 = CONCAT26((short)((uint)fVar33 >> 0x10),CONCAT24(SUB42(fVar33,0),fVar10));
      uVar6 = CONCAT26((short)((uint)fVar24 >> 0x10),CONCAT24(SUB42(fVar24,0),fVar16));
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  uVar30 = (undefined2)((uint)fVar24 >> 0x10);
  uVar31 = (undefined2)((uint)fVar33 >> 0x10);
  lVar1 = *param_2 + 0x68;
  lVar9 = *(long *)(*param_2 + 0x70);
  if (lVar9 != lVar1) {
    lVar7 = *(long *)(lVar9 + 0x10);
    fStack_44 = (float)(CONCAT26(uVar31,CONCAT24(SUB42(fVar33,0),fVar10)) >> 0x20);
    fStack_4c = (float)(CONCAT26(uVar30,CONCAT24(SUB42(fVar24,0),fVar16)) >> 0x20);
    *(ulong *)(lVar7 + 0x1c8) = CONCAT26(uVar31,CONCAT24(SUB42(fVar33,0),fVar10));
    *(ulong *)(lVar7 + 0x1c0) = CONCAT26(uVar30,CONCAT24(SUB42(fVar24,0),fVar16));
    uVar6 = *(undefined8 *)(lVar9 + 0x10);
    while( true ) {
      FUN_00c4bccc(uVar6);
      auVar3._8_4_ = fVar10;
      auVar3._0_8_ = CONCAT44(fStack_4c,fVar16);
      auVar3._12_4_ = fStack_44;
      lVar9 = *(long *)(lVar9 + 8);
      if (lVar9 == lVar1) break;
      lVar7 = *(long *)(lVar9 + 0x10);
      *(long *)(lVar7 + 0x1c8) = auVar3._8_8_;
      *(ulong *)(lVar7 + 0x1c0) = CONCAT44(fStack_4c,fVar16);
      uVar6 = *(undefined8 *)(lVar9 + 0x10);
    }
  }
  return;
}


