/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dc183c; name: FUN_00dc183c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dc183c(undefined1 param_1 [16],long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  float *pfVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  
  uVar4 = *(uint *)(param_2 + 0xd0);
  fVar38 = *(float *)(param_2 + 0xd4);
  fVar33 = fVar38 * (float)uVar4 * 0.5;
  fVar31 = param_1._0_4_ - fVar33;
  fVar30 = param_1._8_4_ - fVar33;
  fVar18 = param_1._0_4_ + fVar33;
  fVar33 = param_1._8_4_ + fVar33;
  fVar32 = (float)((ulong)*(undefined8 *)(param_2 + 0xe0) >> 0x20);
  fVar34 = (float)((ulong)*(undefined8 *)(param_2 + 0xf0) >> 0x20);
  auVar35._0_4_ = fVar18 - (float)*(undefined8 *)(param_2 + 0xe0);
  auVar35._4_4_ = fVar34 - fVar32;
  auVar35._8_4_ = fVar33 - (float)*(undefined8 *)(param_2 + 0xe8);
  auVar35._12_4_ = 0.0 - (float)((ulong)*(undefined8 *)(param_2 + 0xe8) >> 0x20);
  auVar36._4_4_ = fVar34 - fVar32;
  auVar36._0_4_ = (float)*(undefined8 *)(param_2 + 0xf0) - fVar31;
  auVar36._8_4_ = (float)*(undefined8 *)(param_2 + 0xf8) - fVar30;
  auVar36._12_4_ = (float)((ulong)*(undefined8 *)(param_2 + 0xf8) >> 0x20) - 0.0;
  auVar36 = NEON_fmin(auVar35,auVar36,4);
  if ((((auVar36._8_4_ < 0.0) || (auVar36._0_4_ < 0.0)) || (auVar36._4_4_ < 0.0)) ||
     (auVar36._12_4_ < 0.0)) {
    *(undefined1 *)(param_2 + 0x100) = 1;
  }
  else {
    *(undefined1 *)(param_2 + 0x100) = 0;
    puVar7 = PTR_DAT_047d88d8;
    uVar6 = _UNK_03cabe58;
    uVar5 = _DAT_03cabe50;
    if (uVar4 != 0) {
      fVar25 = fVar38 * 0.5;
      fVar31 = fVar25 + fVar31;
      fVar30 = fVar25 + fVar30;
      uVar16 = 0;
      puVar10 = (undefined8 *)PTR_DAT_047d88e0;
      pbVar14 = PTR_DAT_047d88d0;
      do {
        fVar19 = (float)(int)(fVar30 / fVar38) + (float)uVar16;
        fVar26 = fVar38 * fVar19;
        auVar37._4_12_ = SUB1612(ZEXT816(0),4);
        auVar37._0_4_ = fVar26;
        uVar15 = 0;
        do {
          fVar20 = (float)(int)(fVar31 / fVar38) + (float)uVar15;
          fVar21 = fVar38 * fVar20;
          uVar22 = *(undefined4 *)(param_2 + 0xe4);
          uVar28 = *(undefined4 *)(param_2 + 0xf4);
          uVar1 = (uVar4 - 1 & (int)fVar20) + (uVar4 - 1 & (int)fVar19) * uVar4;
          uVar11 = -(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5;
          puVar2 = (undefined8 *)(*(long *)(param_2 + 0x68) + uVar11);
          puVar2[1] = auVar37._0_8_;
          *puVar2 = CONCAT44(uVar22,fVar21);
          puVar2[3] = (ulong)(uint)(fVar38 + fVar26);
          puVar2[2] = CONCAT44(uVar28,fVar38 + fVar21);
          lVar12 = *(long *)(*(long *)(*(long *)(param_2 + 0x30) + (long)(int)uVar1 * 8) + 0x30);
          pfVar3 = (float *)(*(long *)(param_2 + 0x68) + uVar11);
          lVar13 = *(long *)(pfVar3 + 4);
          if (((0.0 < (float)*(long *)(pfVar3 + 6) - pfVar3[2]) && (0.0 < (float)lVar13 - *pfVar3))
             && ((0.0 < (float)((ulong)lVar13 >> 0x20) - pfVar3[1] &&
                 ((*(long *)(lVar12 + 0x130) != *(long *)pfVar3 ||
                  *(long *)(lVar12 + 0x138) != *(long *)(pfVar3 + 2)) ||
                  (*(long *)(lVar12 + 0x140) != *(long *)(pfVar3 + 4) ||
                  *(long *)(lVar12 + 0x148) != *(long *)(pfVar3 + 6)))))) {
            lVar13 = *(long *)(pfVar3 + 6);
            *(long *)(lVar12 + 0x138) = *(long *)(pfVar3 + 2);
            *(long *)(lVar12 + 0x148) = lVar13;
            lVar13 = *(long *)pfVar3;
            *(long *)(lVar12 + 0x140) = *(long *)(pfVar3 + 4);
            *(long *)(lVar12 + 0x130) = lVar13;
            *(undefined1 *)(lVar12 + 0x1b0) = 1;
            *(undefined1 *)(lVar12 + 0x170) = 0;
            *(undefined8 *)(lVar12 + 0x174) = 0;
            *(undefined8 *)(lVar12 + 0x17c) = 0;
            lVar12 = *(long *)(lVar12 + 0x1d0);
            if (lVar12 != 0) {
              fVar20 = pfVar3[4];
              fVar27 = (float)*(long *)pfVar3;
              fVar29 = (float)((ulong)*(long *)pfVar3 >> 0x20);
              fVar21 = fVar20 - fVar27;
              fVar23 = pfVar3[5] - fVar29;
              local_b0 = CONCAT44(fVar23,fVar21);
              fVar24 = pfVar3[6] - (float)*(long *)(pfVar3 + 2);
              uStack_88 = (ulong)(uint)((pfVar3[6] + (float)*(long *)(pfVar3 + 2)) * 0.5);
              uStack_a8 = (ulong)(uint)fVar24;
              local_90 = CONCAT44((pfVar3[5] + fVar29) * 0.5,(fVar20 + fVar27) * 0.5);
              if ((((*(ulong *)(lVar12 + 0x60) < 0xfffffffffffffffe) &&
                   ((*(long *)(lVar12 + 0x40) != 0 || (*(long *)(lVar12 + 0x48) != 0)))) &&
                  (auVar17._0_4_ = fVar21 * fVar21 + fVar23 * fVar23,
                  auVar17._4_4_ = fVar24 * fVar24 + 0.0,
                  auVar17._8_4_ = fVar21 * fVar21 + fVar23 * fVar23,
                  auVar17._12_4_ = fVar24 * fVar24 + 0.0, auVar36 = NEON_ext(auVar17,auVar17,4,1),
                  1.1920929e-07 < auVar36._0_4_ + auVar36._4_4_)) &&
                 (*(char *)(lVar12 + 0x68) == '\0')) {
                uStack_a0 = uVar5;
                uStack_98 = uVar6;
                if (((*pbVar14 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_047d88d0),
                   puVar10 = (undefined8 *)PTR_DAT_047d88e0, iVar8 != 0)) {
                  FUN_00100190(PTR_LAB_047dbdd8,puVar7,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d88d0);
                  puVar10 = (undefined8 *)PTR_DAT_047d88e0;
                }
                uVar9 = *(undefined8 *)puVar7;
                *puVar10 = uVar9;
                FUN_00dc21b8(uVar9,*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x48),
                             *(undefined8 *)(lVar12 + 0x60),&local_b0);
                puVar10 = (undefined8 *)PTR_DAT_047d88e0;
                pbVar14 = PTR_DAT_047d88d0;
              }
            }
          }
          uVar15 = uVar15 + 1;
          lVar12 = *(long *)(*(long *)(*(long *)(param_2 + 0x30) + (long)(int)uVar1 * 8) + 0x30);
          *(float *)(lVar12 + 0x158) = fVar30;
          *(undefined4 *)(lVar12 + 0x15c) = 0;
          *(ulong *)(lVar12 + 0x150) = CONCAT44(fVar32,fVar31);
          *(ulong *)(lVar12 + 0x168) = (ulong)(uint)(fVar33 - fVar25);
          *(ulong *)(lVar12 + 0x160) = CONCAT44(fVar34,fVar18 - fVar25);
        } while (uVar4 != uVar15);
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar4);
    }
  }
  return;
}


