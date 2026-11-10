/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03436338; name: FUN_03436338
 */


void FUN_03436338(long param_1,float *param_2,int *param_3,long param_4,undefined4 *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  int iVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  puVar8 = PTR_DAT_047e6dd8;
  puVar7 = PTR_DAT_047e6dd0;
  puVar6 = PTR_DAT_047e6dc8;
  if (*(int *)(param_1 + 0x284) < 1) {
    if (0 < *(int *)(param_1 + 0x280)) {
      lVar14 = 0;
      do {
        *param_3 = *param_3 + 1;
        puVar11 = *(undefined4 **)(param_1 + 0x200 + lVar14 * 8);
        if (*(long *)(puVar11 + 0xe) == *(long *)(param_4 + 0xe0)) {
LAB_03436604:
          bVar9 = *(byte *)(param_4 + 0xf4);
        }
        else {
          uVar2 = *(uint *)(param_4 + 0xf0);
          *(undefined4 **)(param_4 + (ulong)uVar2 * 8 + 0x108) = puVar11;
          *(undefined4 *)(param_4 + (ulong)uVar2 * 4) = *puVar11;
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf0) * 4 + 0x10) = puVar11[1];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf0) * 4 + 0x20) = puVar11[2];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf0) * 4 + 0x30) = puVar11[3];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf0) * 4 + 0x40) = puVar11[4];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf0) * 4 + 0x50) = puVar11[5];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf0) * 4 + 0x60) = puVar11[6];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf0) * 4 + 0x70) = puVar11[7];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf0) * 4 + 0x80) = puVar11[8];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf0) * 4 + 0x90) = puVar11[9];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf0) * 4 + 0xa0) = puVar11[10];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf0) * 4 + 0xb0) = puVar11[0xb];
          iVar10 = *(int *)(param_4 + 0xf0) + 1;
          *(int *)(param_4 + 0xf0) = iVar10;
          if (iVar10 != 4) goto LAB_03436604;
          bVar9 = FUN_03436698(param_4);
          bVar9 = bVar9 & 1 | *(char *)(param_4 + 0xf4) != '\0';
          *(byte *)(param_4 + 0xf4) = bVar9;
          *(undefined4 *)(param_4 + 0xf0) = 0;
        }
        if (bVar9 != 0) {
          uVar22 = NEON_fminnm(*(undefined4 *)(param_4 + 0xf8),*param_5);
          *param_5 = uVar22;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < *(int *)(param_1 + 0x280));
    }
    if (*(int *)(param_4 + 0xf0) == 0) {
      bVar9 = *(byte *)(param_4 + 0xf4);
    }
    else {
      bVar9 = FUN_03436698(param_4);
      bVar9 = bVar9 & 1 | *(char *)(param_4 + 0xf4) != '\0';
      *(byte *)(param_4 + 0xf4) = bVar9;
      *(undefined4 *)(param_4 + 0xf0) = 0;
    }
    if (bVar9 != 0) {
      uVar22 = NEON_fminnm(*(undefined4 *)(param_4 + 0xf8),*param_5);
      *param_5 = uVar22;
    }
  }
  else if (0 < *(int *)(param_1 + 0x280)) {
    auVar15 = NEON_fmov(0x3f800000,4);
    lVar13 = 0;
    lVar14 = 0;
    pbVar12 = PTR_DAT_047e6db8;
    do {
      if (((*pbVar12 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(pbVar12), puVar5 = PTR_DAT_047e6dc0,
         puVar4 = PTR_DAT_047e6db8, pbVar12 = PTR_DAT_047e6db8, iVar10 != 0)) {
        *(long *)(PTR_DAT_047e6dc0 + 8) = auVar15._8_8_;
        *(long *)puVar5 = auVar15._0_8_;
        __cxa_guard_release(puVar4);
        pbVar12 = PTR_DAT_047e6db8;
      }
      if (((*puVar6 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(puVar6), pbVar12 = PTR_DAT_047e6db8, iVar10 != 0)) {
        *(undefined8 *)puVar7 = 0;
        *(undefined8 *)(puVar7 + 8) = 0;
        __cxa_guard_release(puVar6);
        pbVar12 = PTR_DAT_047e6db8;
      }
      puVar1 = (undefined8 *)(param_1 + lVar13);
      fVar27 = (float)*(undefined8 *)(param_2 + 10);
      fVar28 = (float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20);
      fVar25 = (float)*(undefined8 *)(param_2 + 8);
      fVar26 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
      fVar18 = fVar25 * ((float)*puVar1 - *param_2);
      fVar19 = fVar26 * ((float)((ulong)*puVar1 >> 0x20) - param_2[1]);
      fVar20 = fVar27 * ((float)puVar1[1] - param_2[2]);
      fVar21 = fVar28 * ((float)((ulong)puVar1[1] >> 0x20) - param_2[3]);
      auVar16._0_4_ = (*(float *)(puVar1 + 2) - *param_2) * fVar25;
      auVar16._4_4_ = (*(float *)((long)puVar1 + 0x14) - param_2[1]) * fVar26;
      auVar16._8_4_ = (*(float *)(puVar1 + 3) - param_2[2]) * fVar27;
      auVar16._12_4_ = (*(float *)((long)puVar1 + 0x1c) - param_2[3]) * fVar28;
      auVar17._4_4_ = fVar19;
      auVar17._0_4_ = fVar18;
      auVar17._8_4_ = fVar20;
      auVar17._12_4_ = fVar21;
      auVar23 = NEON_fmin(auVar17,auVar16,4);
      auVar24._4_4_ = fVar19;
      auVar24._0_4_ = fVar18;
      auVar24._8_4_ = fVar20;
      auVar24._12_4_ = fVar21;
      auVar17 = NEON_fmax(auVar16,auVar24,4);
      auVar3._12_4_ = (int)((ulong)*(undefined8 *)(puVar7 + 8) >> 0x20);
      auVar3._0_12_ = *(undefined1 (*) [12])puVar7;
      auVar24 = NEON_fmax(auVar23,auVar3,4);
      auVar23._12_4_ = (int)((ulong)*(undefined8 *)(PTR_DAT_047e6dc0 + 8) >> 0x20);
      auVar23._0_12_ = *(undefined1 (*) [12])PTR_DAT_047e6dc0;
      auVar17 = NEON_fmin(auVar17,auVar23,4);
      uVar22 = NEON_fminnm(auVar17._4_4_,auVar17._8_4_);
      fVar18 = (float)NEON_fminnm(auVar17._0_4_,uVar22);
      *(float *)puVar8 = fVar18;
      if (auVar24._0_4_ <= fVar18) {
        FUN_03436338(*(undefined8 *)(param_1 + lVar14 * 8 + 0x200),param_2,param_3,param_4,param_5);
        pbVar12 = PTR_DAT_047e6db8;
      }
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0x20;
    } while (lVar14 < *(int *)(param_1 + 0x280));
  }
  return;
}


