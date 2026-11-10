/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0086cfcc; name: FUN_0086cfcc
 */


void FUN_0086cfcc(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  ushort *puVar6;
  undefined2 *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  float *pfVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  byte *pbVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar33;
  undefined8 uVar32;
  float fVar34;
  float fVar36;
  undefined8 uVar35;
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 uVar48;
  float fVar49;
  
  puVar4 = (uint *)(param_1 + 0x4be0);
  uVar8 = *(undefined4 *)(param_1 + 0xc0);
  if (*(int *)(param_1 + 0xd54) == *(int *)(param_1 + 0x4de4) + 2) {
    *(int *)(param_1 + 0x4be4 + (long)*(int *)(param_1 + 0xd58) * 4) = *(int *)(param_1 + 0xd58) + 1
    ;
    iVar9 = *(int *)(param_1 + 0xd58);
    iVar22 = iVar9 + 1;
    *(int *)(param_1 + 0xd58) = iVar22;
    *(int *)(param_1 + 0x4de4) = *(int *)(param_1 + 0x4de4) + 1;
    *(int *)(param_1 + 0x4be4 + (long)iVar22 * 4) = iVar9 + 2;
    *(int *)(param_1 + 0xd58) = *(int *)(param_1 + 0xd58) + 1;
    *(int *)(param_1 + 0x4de4) = *(int *)(param_1 + 0x4de4) + 1;
  }
  else if (*(int *)(param_1 + 0xd54) < *(int *)(param_1 + 0x4de4)) {
    uVar20 = *puVar4;
    do {
      lVar2 = param_1 + (long)(int)uVar20 * 0x10;
      *(undefined8 *)(lVar2 + 0x1d68) = 0;
      *(undefined8 *)(lVar2 + 0x1d60) = 0;
      *(undefined4 *)(param_1 + (long)(int)*puVar4 * 4 + 0x2760) = 0xff7fffee;
      uVar20 = *(uint *)(param_1 + (long)(int)*puVar4 * 4 + 0x4be4);
      iVar22 = *(int *)(param_1 + 0x4de4) + -1;
      *(int *)(param_1 + 0x4de4) = iVar22;
      *puVar4 = uVar20;
    } while (*(int *)(param_1 + 0xd54) < iVar22);
  }
  puVar5 = (uint *)(param_1 + (long)(int)(*(uint *)(param_1 + 0xd58) - 1) * 4 + 0x4be4);
  if (*puVar5 == *(uint *)(param_1 + 0xd58)) {
    *puVar5 = *puVar4;
    iVar22 = *(int *)(param_1 + 0xd54);
  }
  else {
    uVar20 = *puVar4;
    iVar22 = *(int *)(param_1 + 0xd54);
    uVar21 = uVar20;
    if (1 < iVar22) {
      uVar10 = iVar22 - 1U & 3;
      if (2 < iVar22 - 2U) {
        iVar22 = (uVar10 - iVar22) + 1;
        lVar2 = param_1 + 0x4be4;
        do {
          iVar22 = iVar22 + 4;
          uVar21 = *(uint *)(lVar2 + (long)*(int *)(lVar2 + (long)*(int *)(lVar2 + (long)*(int *)(
                                                  lVar2 + (long)(int)uVar21 * 4) * 4) * 4) * 4);
        } while (iVar22 != 0);
      }
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        uVar21 = *(uint *)(param_1 + (long)(int)uVar21 * 4 + 0x4be4);
      }
    }
    *(uint *)(param_1 + (long)(int)uVar21 * 4 + 0x4be4) = uVar20;
    iVar22 = *(int *)(param_1 + 0xd54);
  }
  if (0 < iVar22) {
    bVar1 = (char)uVar8 - 1;
    uVar18 = (ulong)*(uint *)(param_1 + 0xcd0);
    lVar2 = param_1 + (ulong)bVar1 * 0x10;
    fVar49 = *(float *)(PTR_DAT_047d19b0 + 0xd0);
    uVar48 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x60);
    iVar22 = 0;
    uVar20 = *puVar4;
    uVar21 = *(uint *)(param_1 + (long)(int)*puVar4 * 4 + 0x4be4);
    do {
      lVar3 = param_1 + 0xd60;
      uVar10 = *(uint *)(param_1 + (long)(int)uVar21 * 4 + 0x4be4);
      uVar13 = uVar21 << 2;
      puVar6 = (ushort *)
               (lVar3 + (-(ulong)((uVar21 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                        (ulong)uVar13 << 2));
      bVar12 = *(byte *)(lVar3 + (long)(int)(0x2dU >> (ulong)(((uint)uVar18 & 3) << 1) & 3 ^
                                            (uint)uVar18) * 4 + 2);
      *puVar6 = (ushort)(uVar20 << 2) | 2;
      uVar19 = (long)(int)uVar13 | 1;
      *(byte *)(puVar6 + 1) = bVar1;
      puVar7 = (undefined2 *)(lVar3 + uVar19 * 4);
      *puVar7 = (short)uVar18;
      uVar18 = -(uVar18 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar18 & 0xffffffff) << 2;
      *(byte *)(puVar7 + 1) = bVar12;
      pbVar23 = (byte *)(lVar3 + uVar18 + 2);
      bVar11 = *pbVar23;
      puVar7 = (undefined2 *)(lVar3 + (((ulong)(long)(int)uVar13 >> 2) << 4 | 8));
      *(byte *)(puVar7 + 1) = bVar11;
      *puVar7 = (short)(uVar10 << 2);
      *(short *)(lVar3 + uVar18) = (short)uVar19;
      pfVar14 = (float *)(param_1 + 0x8d0 + (ulong)bVar12 * 0x10);
      fVar41 = *pfVar14;
      fVar43 = pfVar14[1];
      fVar36 = pfVar14[2];
      fVar39 = pfVar14[3];
      uVar35 = *(undefined8 *)(lVar2 + 0x8d8);
      uVar32 = *(undefined8 *)(lVar2 + 0x8d0);
      pfVar14 = (float *)(param_1 + 0x8d0 + (ulong)bVar11 * 0x10);
      fVar45 = *pfVar14;
      fVar38 = pfVar14[1];
      fVar40 = pfVar14[2];
      fVar42 = pfVar14[3];
      lVar3 = param_1 + (long)(int)uVar21 * 0x10;
      *(undefined8 *)(lVar3 + 0x1568) = uVar35;
      *(undefined8 *)(lVar3 + 0x1560) = uVar32;
      fVar31 = (float)uVar32;
      auVar28._0_4_ = fVar41 - fVar31;
      fVar33 = (float)((ulong)uVar32 >> 0x20);
      auVar28._4_4_ = fVar43 - fVar33;
      fVar34 = (float)uVar35;
      auVar28._8_4_ = fVar36 - fVar34;
      fVar36 = (float)((ulong)uVar35 >> 0x20);
      auVar28._12_4_ = fVar39 - fVar36;
      auVar25 = NEON_ext(auVar28,auVar28,4,1);
      auVar30._0_4_ = fVar45 - fVar31;
      auVar30._4_4_ = fVar38 - fVar33;
      auVar30._8_4_ = fVar40 - fVar34;
      auVar30._12_4_ = fVar42 - fVar36;
      auVar37 = NEON_ext(auVar30,auVar30,4,1);
      uVar35 = *(undefined8 *)(param_1 + 0x98);
      uVar32 = *(undefined8 *)(param_1 + 0x90);
      fVar39 = auVar28._0_4_ * auVar37._0_4_ - auVar30._0_4_ * auVar25._0_4_;
      fVar41 = auVar28._4_4_ * auVar37._4_4_ - auVar30._4_4_ * auVar25._4_4_;
      fVar43 = auVar28._8_4_ * auVar30._0_4_ - auVar30._8_4_ * auVar28._0_4_;
      fVar45 = auVar28._12_4_ * auVar30._4_4_ - auVar30._12_4_ * auVar28._4_4_;
      auVar25._4_4_ = fVar41;
      auVar25._0_4_ = fVar39;
      auVar25._8_4_ = fVar43;
      auVar25._12_4_ = fVar45;
      auVar37._4_4_ = fVar41;
      auVar37._0_4_ = fVar39;
      auVar37._8_4_ = fVar43;
      auVar37._12_4_ = fVar45;
      auVar25 = NEON_ext(auVar25,auVar37,4,1);
      fVar41 = auVar25._0_4_;
      fVar43 = auVar25._4_4_;
      fVar45 = fVar41 * fVar41 + fVar43 * fVar43 + fVar39 * fVar39;
      *(ulong *)(lVar3 + 0x1d68) = (ulong)(uint)fVar39;
      *(long *)(lVar3 + 0x1d60) = auVar25._0_8_;
      if ((float)*(undefined8 *)(param_1 + 0x68) < fVar45) {
        fVar31 = (float)uVar32 - fVar31;
        fVar33 = (float)((ulong)uVar32 >> 0x20) - fVar33;
        fVar34 = (float)uVar35 - fVar34;
        fVar36 = (float)((ulong)uVar35 >> 0x20) - fVar36;
        auVar26._0_4_ = ABS(auVar28._0_4_);
        auVar26._4_4_ = ABS(auVar28._4_4_);
        auVar26._8_4_ = ABS(auVar28._8_4_);
        auVar26._12_4_ = ABS(auVar28._12_4_);
        auVar29._0_4_ = ABS(auVar30._0_4_);
        auVar29._4_4_ = ABS(auVar30._4_4_);
        auVar29._8_4_ = ABS(auVar30._8_4_);
        auVar29._12_4_ = ABS(auVar30._12_4_);
        fVar38 = ABS(fVar31);
        fVar40 = ABS(fVar33);
        fVar42 = ABS(fVar34);
        fVar44 = ABS(fVar36);
        auVar25 = NEON_ext(auVar26,auVar26,8,1);
        auVar37 = NEON_ext(auVar29,auVar29,8,1);
        auVar46._4_4_ = auVar37._0_4_;
        auVar46._0_4_ = auVar25._0_4_;
        auVar27._4_4_ = auVar29._4_4_;
        auVar27._0_4_ = auVar26._4_4_;
        auVar24._0_4_ = fVar31 * fVar41;
        auVar24._4_4_ = fVar33 * fVar43;
        auVar24._8_4_ = fVar34 * fVar39;
        auVar24._12_4_ = fVar36 * 0.0;
        *(undefined1 *)(param_1 + (int)uVar21 + 0x2b60) = 0;
        lVar3 = param_1 + (long)(int)uVar21 * 4;
        auVar15._4_4_ = fVar40;
        auVar15._0_4_ = fVar38;
        auVar15._8_4_ = fVar42;
        auVar15._12_4_ = fVar44;
        auVar16._4_4_ = fVar40;
        auVar16._0_4_ = fVar38;
        auVar16._8_4_ = fVar42;
        auVar16._12_4_ = fVar44;
        auVar25 = NEON_ext(auVar15,auVar16,8,1);
        auVar46._8_8_ = auVar25._0_8_;
        auVar47._4_12_ = auVar25._4_12_;
        auVar47._0_4_ = fVar40;
        fVar43 = (float)uVar48 / SQRT(fVar45);
        auVar17._12_4_ = fVar40;
        auVar17._8_4_ = fVar38;
        *(float *)(lVar3 + 0x2560) = fVar43;
        auVar27._8_8_ = auVar47._0_8_;
        auVar17._4_4_ = auVar29._0_4_;
        auVar17._0_4_ = auVar26._0_4_;
        auVar25 = NEON_fmax(auVar17,auVar27,4);
        auVar25 = NEON_fmax(auVar25,auVar46,4);
        auVar37 = NEON_ext(auVar25,auVar25,8,1);
        fVar41 = fVar43 * fVar49 * auVar37._0_4_ * auVar25._0_4_ * auVar25._4_4_ * 1.1920929e-07;
        auVar25 = NEON_ext(auVar24,auVar24,8,1);
        *(float *)(lVar3 + 0x2960) = fVar41;
        *(float *)(lVar3 + 0x2760) =
             fVar43 * (auVar25._0_4_ + auVar24._0_4_ + auVar24._4_4_) + fVar41;
      }
      else {
        FUN_0086d3b0(param_1);
      }
      uVar18 = (ulong)*(short *)(param_1 + (ulong)*pbVar23 * 2 + 0xcd4);
      iVar22 = iVar22 + 1;
      uVar20 = uVar21;
      uVar21 = uVar10;
    } while (iVar22 < *(int *)(param_1 + 0xd54));
  }
  return;
}


