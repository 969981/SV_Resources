/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029d0594; name: FUN_029d0594
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_029d0594(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  float *pfVar3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar11 [16];
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  lVar5 = param_1 + (long)param_2 * 0xd0;
  uVar12 = *(undefined8 *)(lVar5 + 0x108);
  uVar7 = *(undefined8 *)(lVar5 + 0x100);
  if (*(int *)(param_1 + 0x68) == 3) {
    if ((*(long *)(param_1 + 0x78) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar6 == 0)) {
      lVar5 = param_1 + (long)param_2 * 0xd0;
      uVar12 = *(undefined8 *)(lVar5 + 0x118);
      uVar7 = *(undefined8 *)(lVar5 + 0x110);
    }
    else {
      plVar2 = (long *)(lVar6 + -0x28);
      if ((*(long *)(param_1 + 0x90) == 0) || (*(short *)(*(long *)(param_1 + 0x90) + 0x1a) == 0)) {
        lVar6 = (**(code **)(*plVar2 + 0x68))();
        auVar22 = *(undefined1 (*) [16])(lVar5 + 0x100);
        uVar7 = CONCAT44(auVar22._4_4_ + (float)((ulong)*(undefined8 *)(lVar6 + 0x30) >> 0x20),
                         auVar22._0_4_ + (float)*(undefined8 *)(lVar6 + 0x30));
        uVar12 = CONCAT44(auVar22._12_4_ + 0.0,auVar22._8_4_ + (float)*(undefined8 *)(lVar6 + 0x38))
        ;
      }
      else if ((*(long *)(param_1 + 0x90) != 0) &&
              (lVar6 = *(long *)(*(long *)(param_1 + 0x90) + 0x10), lVar6 != 0)) {
        pfVar3 = (float *)(**(code **)(*plVar2 + 0x68))();
        auVar22 = *(undefined1 (*) [16])(pfVar3 + 8);
        fVar19 = (float)_UNK_03cabe58;
        fVar20 = (float)((ulong)_UNK_03cabe58 >> 0x20);
        fVar17 = (float)_DAT_03cabe50;
        fVar18 = (float)((ulong)_DAT_03cabe50 >> 0x20);
        if ((~*(uint *)(param_1 + 0x88) & 0xffff) != 0) {
          for (lVar1 = *(long *)(lVar6 + 0x120); lVar1 != *(long *)(lVar6 + 0x128);
              lVar1 = lVar1 + 0x50) {
            if ((uint)*(ushort *)(lVar1 + 0x40) == (*(uint *)(param_1 + 0x88) & 0xffff)) {
              fVar19 = (float)*(undefined8 *)(lVar1 + 0x38);
              fVar20 = (float)((ulong)*(undefined8 *)(lVar1 + 0x38) >> 0x20);
              fVar17 = (float)*(undefined8 *)(lVar1 + 0x30);
              fVar18 = (float)((ulong)*(undefined8 *)(lVar1 + 0x30) >> 0x20);
              break;
            }
          }
        }
        uVar7 = *(undefined8 *)*(undefined1 (*) [16])(lVar5 + 0x100);
        uVar7 = CONCAT44((float)((ulong)uVar7 >> 0x20) +
                         pfVar3[1] * fVar17 +
                         (float)((ulong)*(undefined8 *)(pfVar3 + 4) >> 0x20) * fVar18 +
                         auVar22._4_4_ * fVar19 +
                         (float)((ulong)*(undefined8 *)(pfVar3 + 0xc) >> 0x20) * fVar20,
                         (float)uVar7 +
                         *pfVar3 * fVar17 + (float)*(undefined8 *)(pfVar3 + 4) * fVar18 +
                         auVar22._0_4_ * fVar19 + (float)*(undefined8 *)(pfVar3 + 0xc) * fVar20);
        uVar12 = CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x108) >> 0x20) + 0.0,
                          (float)*(undefined8 *)(lVar5 + 0x108) +
                          pfVar3[2] * fVar17 + (float)*(undefined8 *)(pfVar3 + 6) * fVar18 +
                          auVar22._8_4_ * fVar19 + (float)*(undefined8 *)(pfVar3 + 0xe) * fVar20);
      }
    }
  }
  if ((*(char *)(param_1 + 200) != '\0') && (-1 < *(int *)(param_1 + 0xf0))) {
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x30) + 0xe8);
    if (lVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = *(long **)(lVar5 + 0x48);
    }
    pauVar4 = (undefined1 (*) [16])(**(code **)(*plVar2 + 0x68))();
    auVar22 = *pauVar4;
    uVar13 = *(undefined8 *)(pauVar4[1] + 8);
    uVar8 = *(undefined8 *)pauVar4[1];
    uVar14 = *(undefined8 *)(pauVar4[2] + 8);
    uVar9 = *(undefined8 *)pauVar4[2];
    uVar15 = *(undefined8 *)(pauVar4[3] + 8);
    uVar10 = *(undefined8 *)pauVar4[3];
    lVar5 = FUN_00c4c40c(*(undefined8 *)(param_1 + 0x2d8),*(undefined4 *)(param_1 + 0xf0));
    fVar17 = *(float *)(lVar5 + 0x30);
    fVar18 = *(float *)(lVar5 + 0x34);
    fVar19 = *(float *)(lVar5 + 0x38);
    fVar20 = *(float *)(lVar5 + 0x3c);
    fVar25 = auVar22._0_4_ * fVar17 + (float)uVar8 * fVar18 + (float)uVar9 * fVar19 +
             (float)uVar10 * fVar20;
    fVar26 = auVar22._4_4_ * fVar17 + (float)((ulong)uVar8 >> 0x20) * fVar18 +
             (float)((ulong)uVar9 >> 0x20) * fVar19 + (float)((ulong)uVar10 >> 0x20) * fVar20;
    fVar27 = auVar22._8_4_ * fVar17 + (float)uVar13 * fVar18 + (float)uVar14 * fVar19 +
             (float)uVar15 * fVar20;
    fVar17 = (float)uVar7 - fVar25;
    fVar18 = (float)((ulong)uVar7 >> 0x20) - fVar26;
    fVar19 = (float)uVar12 - fVar27;
    fVar20 = (float)((ulong)uVar12 >> 0x20) - 0.0;
    auVar22._0_4_ = fVar17 * fVar17 + fVar18 * fVar18;
    auVar22._4_4_ = fVar19 * fVar19 + fVar20 * fVar20;
    auVar22._8_4_ = fVar17 * fVar17 + fVar18 * fVar18;
    auVar22._12_4_ = fVar19 * fVar19 + fVar20 * fVar20;
    auVar22 = NEON_ext(auVar22,auVar22,4,1);
    fVar23 = SQRT(auVar22._0_4_ + auVar22._4_4_);
    fVar21 = *(float *)(param_1 + 0xcc);
    if (fVar23 < fVar21) {
      uVar16 = -(uint)(0.0 < fVar23);
      uVar24 = (uint)((ulong)_UNK_03caa5b8 >> 0x20);
      uVar7 = CONCAT44(fVar26 + (float)(_UNK_03caa5b4 ^
                                       (_UNK_03caa5b4 ^
                                       (uint)(fVar18 / SQRT(auVar22._8_4_ + auVar22._12_4_))) &
                                       uVar16) * fVar21,
                       fVar25 + (float)(_DAT_03caa5b0 ^
                                       (_DAT_03caa5b0 ^ (uint)(fVar17 / fVar23)) & uVar16) * fVar21)
      ;
      uVar12 = CONCAT44((float)(uVar24 ^ (uVar24 ^ (uint)(fVar20 / SQRT(auVar22._8_4_ +
                                                                        auVar22._12_4_))) & uVar16)
                        * fVar21 + 0.0,
                        fVar27 + (float)((uint)_UNK_03caa5b8 ^
                                        ((uint)_UNK_03caa5b8 ^
                                        (uint)(fVar19 / SQRT(auVar22._0_4_ + auVar22._4_4_))) &
                                        uVar16) * fVar21);
    }
  }
  auVar11._8_8_ = uVar12;
  auVar11._0_8_ = uVar7;
  return auVar11;
}


