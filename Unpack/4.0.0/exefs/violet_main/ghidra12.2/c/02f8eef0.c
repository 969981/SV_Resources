/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f8eef0; name: FUN_02f8eef0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f8eef0(undefined8 *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4,
                 int *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  float fVar15;
  float fVar19;
  int iVar20;
  undefined1 auVar16 [12];
  int iVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar33;
  undefined8 uVar32;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  fVar1 = (float)param_5[4];
  fVar2 = (float)param_5[5];
  fVar3 = (float)param_5[6];
  fVar4 = (float)param_5[7];
  uVar9 = param_1[1];
  uVar6 = *param_1;
  fVar5 = (float)uVar6;
  fVar7 = (float)((ulong)uVar6 >> 0x20);
  fVar8 = (float)uVar9;
  iVar20 = -(uint)(fVar3 == fVar8);
  fVar10 = (float)((ulong)uVar9 >> 0x20);
  iVar21 = -(uint)(fVar4 == fVar10);
  uVar14 = (uint)(byte)(-(fVar1 == fVar5) & (byte)_DAT_03cab270);
  auVar16._0_8_ =
       CONCAT17((byte)(-(uint)(fVar2 == fVar7) >> 0x18) & (byte)((ulong)_DAT_03cab270 >> 0x38),
                (uint7)CONCAT14((byte)-(uint)(fVar2 == fVar7) & (byte)((ulong)_DAT_03cab270 >> 0x20)
                                ,uVar14));
  auVar16[8] = (byte)iVar20 & (byte)_UNK_03cab278;
  auVar16[9] = (byte)((uint)iVar20 >> 8) & (byte)((ulong)_UNK_03cab278 >> 8);
  auVar16[10] = (byte)((uint)iVar20 >> 0x10) & (byte)((ulong)_UNK_03cab278 >> 0x10);
  auVar16[0xb] = (byte)((uint)iVar20 >> 0x18) & (byte)((ulong)_UNK_03cab278 >> 0x18);
  auVar18[0xc] = (byte)iVar21 & (byte)((ulong)_UNK_03cab278 >> 0x20);
  auVar18._0_12_ = auVar16;
  auVar18[0xd] = (byte)((uint)iVar21 >> 8) & (byte)((ulong)_UNK_03cab278 >> 0x28);
  auVar18[0xe] = (byte)((uint)iVar21 >> 0x10) & (byte)((ulong)_UNK_03cab278 >> 0x30);
  auVar18[0xf] = (byte)((uint)iVar21 >> 0x18) & (byte)((ulong)_UNK_03cab278 >> 0x38);
  if ((~(uVar14 + (int)((ulong)auVar16._0_8_ >> 0x20) + auVar16._8_4_ + auVar18._12_4_) & 7) != 0) {
    fVar24 = ABS(fVar3 * fVar8 + fVar1 * fVar5 + fVar2 * fVar7);
    fVar25 = ABS(fVar3 * fVar8 + fVar1 * fVar5 + fVar2 * fVar7);
    fVar15 = (float)*param_3;
    fVar22 = (float)*param_4;
    fVar26 = fVar15 + fVar22;
    fVar19 = (float)((ulong)*param_3 >> 0x20);
    fVar23 = (float)((ulong)*param_4 >> 0x20);
    fVar27 = fVar19 + fVar23;
    if ((param_2 & 1) == 0) {
      fVar28 = 0.0;
      fVar29 = 0.0;
    }
    else {
      fVar28 = (fVar24 * (fVar26 + (float)param_5[1]) - fVar26) - fVar10;
      fVar29 = (fVar25 * (fVar27 + (float)param_5[1]) - fVar27) - fVar10;
    }
    if (*param_5 < 1) {
      auVar13._8_4_ = 0x7f7fffee;
      auVar13._0_8_ = 0x7f7fffee7f7fffee;
      auVar13._12_4_ = 0x7f7fffee;
    }
    else {
      fVar22 = fVar22 + fVar28;
      fVar23 = fVar23 + fVar29;
      fVar28 = (float)*(undefined8 *)(param_5 + 0xc);
      fVar34 = fVar15 + fVar28;
      fVar29 = (float)((ulong)*(undefined8 *)(param_5 + 0xc) >> 0x20);
      fVar35 = fVar19 + fVar29;
      fVar31 = (float)*(undefined8 *)(param_5 + 0xe);
      fVar36 = fVar15 + fVar31;
      fVar33 = (float)((ulong)*(undefined8 *)(param_5 + 0xe) >> 0x20);
      fVar37 = fVar19 + fVar33;
      fVar28 = fVar24 * (fVar26 + fVar28) - fVar22;
      fVar29 = fVar25 * (fVar27 + fVar29) - fVar23;
      fVar22 = fVar24 * (fVar26 + fVar31) - fVar22;
      fVar23 = fVar25 * (fVar27 + fVar33) - fVar23;
      uVar32 = *(undefined8 *)(param_5 + 0x1e);
      uVar30 = *(undefined8 *)(param_5 + 0x1c);
      auVar17._0_4_ = fVar28 - fVar15;
      auVar17._4_4_ = fVar29 - fVar19;
      auVar17._8_4_ = fVar22 - fVar15;
      auVar17._12_4_ = fVar23 - fVar19;
      *(ulong *)(param_5 + 0x12) =
           CONCAT44(((float)((ulong)*(undefined8 *)(param_5 + 0x12) >> 0x20) + fVar4 * fVar34) -
                    fVar10 * fVar28,
                    ((float)*(undefined8 *)(param_5 + 0x12) + fVar3 * fVar34) - fVar8 * fVar28);
      *(ulong *)(param_5 + 0x10) =
           CONCAT44(((float)((ulong)*(undefined8 *)(param_5 + 0x10) >> 0x20) + fVar2 * fVar34) -
                    fVar7 * fVar28,
                    ((float)*(undefined8 *)(param_5 + 0x10) + fVar1 * fVar34) - fVar5 * fVar28);
      *(ulong *)(param_5 + 0x16) =
           CONCAT44(((float)((ulong)*(undefined8 *)(param_5 + 0x16) >> 0x20) + fVar4 * fVar35) -
                    fVar10 * fVar29,
                    ((float)*(undefined8 *)(param_5 + 0x16) + fVar3 * fVar35) - fVar8 * fVar29);
      *(ulong *)(param_5 + 0x14) =
           CONCAT44(((float)((ulong)*(undefined8 *)(param_5 + 0x14) >> 0x20) + fVar2 * fVar35) -
                    fVar7 * fVar29,
                    ((float)*(undefined8 *)(param_5 + 0x14) + fVar1 * fVar35) - fVar5 * fVar29);
      *(ulong *)(param_5 + 0x1a) =
           CONCAT44((fVar4 * fVar36 + (float)((ulong)*(undefined8 *)(param_5 + 0x1a) >> 0x20)) -
                    fVar10 * fVar22,
                    (fVar3 * fVar36 + (float)*(undefined8 *)(param_5 + 0x1a)) - fVar8 * fVar22);
      *(ulong *)(param_5 + 0x18) =
           CONCAT44((fVar2 * fVar36 + (float)((ulong)*(undefined8 *)(param_5 + 0x18) >> 0x20)) -
                    fVar7 * fVar22,
                    (fVar1 * fVar36 + (float)*(undefined8 *)(param_5 + 0x18)) - fVar5 * fVar22);
      param_5[0x1e] = (int)((fVar3 * fVar37 + (float)uVar32) - fVar8 * fVar23);
      param_5[0x1f] = (int)((fVar4 * fVar37 + (float)((ulong)uVar32 >> 0x20)) - fVar10 * fVar23);
      param_5[0x1c] = (int)((fVar1 * fVar37 + (float)uVar30) - fVar5 * fVar23);
      param_5[0x1d] = (int)((fVar2 * fVar37 + (float)((ulong)uVar30 >> 0x20)) - fVar7 * fVar23);
      auVar11._8_4_ = 0xff7fffee;
      auVar11._0_8_ = 0xff7fffeeff7fffee;
      auVar11._12_4_ = 0xff7fffee;
      auVar18 = NEON_fmax(auVar17,auVar11,4);
      auVar12._8_4_ = 0x7f7fffee;
      auVar12._0_8_ = 0x7f7fffee7f7fffee;
      auVar12._12_4_ = 0x7f7fffee;
      *(long *)(param_5 + 0xe) = auVar18._8_8_;
      *(long *)(param_5 + 0xc) = auVar18._0_8_;
      auVar13 = NEON_fmin(auVar18,auVar12,4);
    }
    iVar20 = NEON_fminnmv(auVar13,4);
    param_5[1] = iVar20;
    *(undefined8 *)(param_5 + 6) = uVar9;
    *(undefined8 *)(param_5 + 4) = uVar6;
  }
  return;
}


