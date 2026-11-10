/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034371cc; name: FUN_034371cc
 */


void FUN_034371cc(long param_1,float *param_2,int *param_3,long param_4,undefined4 *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  byte bVar13;
  int iVar14;
  undefined4 *puVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  puVar12 = PTR_DAT_047e6dd8;
  puVar11 = PTR_DAT_047e6dd0;
  puVar10 = PTR_DAT_047e6dc8;
  puVar9 = PTR_DAT_047e6dc0;
  puVar8 = PTR_DAT_047e6db8;
  if (*(int *)(param_1 + 0x284) < 1) {
    if (0 < *(int *)(param_1 + 0x280)) {
      auVar18 = NEON_fmov(0x3f800000,4);
      lVar16 = 0;
      lVar17 = 0;
      do {
        if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
          *(long *)(puVar9 + 8) = auVar18._8_8_;
          *(long *)puVar9 = auVar18._0_8_;
          __cxa_guard_release(puVar8);
        }
        if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar10), iVar14 != 0)) {
          *(undefined8 *)puVar11 = 0;
          *(undefined8 *)(puVar11 + 8) = 0;
          __cxa_guard_release(puVar10);
        }
        puVar1 = (undefined8 *)(param_1 + lVar16);
        fVar31 = (float)*(undefined8 *)(param_2 + 10);
        fVar32 = (float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20);
        fVar29 = (float)*(undefined8 *)(param_2 + 8);
        fVar30 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
        fVar22 = fVar29 * ((float)*puVar1 - *param_2);
        fVar23 = fVar30 * ((float)((ulong)*puVar1 >> 0x20) - param_2[1]);
        fVar24 = fVar31 * ((float)puVar1[1] - param_2[2]);
        fVar25 = fVar32 * ((float)((ulong)puVar1[1] >> 0x20) - param_2[3]);
        auVar21._0_4_ = (*(float *)(puVar1 + 2) - *param_2) * fVar29;
        auVar21._4_4_ = (*(float *)((long)puVar1 + 0x14) - param_2[1]) * fVar30;
        auVar21._8_4_ = (*(float *)(puVar1 + 3) - param_2[2]) * fVar31;
        auVar21._12_4_ = (*(float *)((long)puVar1 + 0x1c) - param_2[3]) * fVar32;
        auVar20._4_4_ = fVar23;
        auVar20._0_4_ = fVar22;
        auVar20._8_4_ = fVar24;
        auVar20._12_4_ = fVar25;
        auVar28 = NEON_fmin(auVar20,auVar21,4);
        auVar27._4_4_ = fVar23;
        auVar27._0_4_ = fVar22;
        auVar27._8_4_ = fVar24;
        auVar27._12_4_ = fVar25;
        auVar20 = NEON_fmax(auVar21,auVar27,4);
        auVar7._12_4_ = (int)((ulong)*(undefined8 *)(puVar11 + 8) >> 0x20);
        auVar7._0_12_ = *(undefined1 (*) [12])puVar11;
        auVar27 = NEON_fmax(auVar28,auVar7,4);
        auVar28._12_4_ = (int)((ulong)*(undefined8 *)(puVar9 + 8) >> 0x20);
        auVar28._0_12_ = *(undefined1 (*) [12])puVar9;
        auVar20 = NEON_fmin(auVar20,auVar28,4);
        uVar26 = NEON_fminnm(auVar20._4_4_,auVar20._8_4_);
        fVar22 = (float)NEON_fminnm(auVar20._0_4_,uVar26);
        *(float *)puVar12 = fVar22;
        if (auVar27._0_4_ <= fVar22) {
          *param_3 = *param_3 + 1;
          uVar2 = *(uint *)(param_4 + 0xe4);
          puVar15 = *(undefined4 **)(param_1 + lVar17 * 8 + 0x200);
          *(undefined4 **)(param_4 + (ulong)uVar2 * 8 + 0xf8) = puVar15;
          *(undefined4 *)(param_4 + (ulong)uVar2 * 4) = *puVar15;
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xe4) * 4 + 0x10) = puVar15[1];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xe4) * 4 + 0x20) = puVar15[2];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xe4) * 4 + 0x30) = puVar15[3];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xe4) * 4 + 0x40) = puVar15[4];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xe4) * 4 + 0x50) = puVar15[5];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xe4) * 4 + 0x60) = puVar15[6];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xe4) * 4 + 0x70) = puVar15[7];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xe4) * 4 + 0x80) = puVar15[8];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xe4) * 4 + 0x90) = puVar15[9];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xe4) * 4 + 0xa0) = puVar15[10];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xe4) * 4 + 0xb0) = puVar15[0xb];
          iVar14 = *(int *)(param_4 + 0xe4) + 1;
          *(int *)(param_4 + 0xe4) = iVar14;
          if (iVar14 == 4) {
            bVar13 = FUN_034375e4(param_4);
            bVar13 = bVar13 & 1 | *(char *)(param_4 + 0xe8) != '\0';
            *(byte *)(param_4 + 0xe8) = bVar13;
            *(undefined4 *)(param_4 + 0xe4) = 0;
          }
          else {
            bVar13 = *(byte *)(param_4 + 0xe8);
          }
          if (bVar13 != 0) {
            uVar26 = NEON_fminnm(*(undefined4 *)(param_4 + 0xec),*param_5);
            *param_5 = uVar26;
          }
        }
        lVar17 = lVar17 + 1;
        lVar16 = lVar16 + 0x20;
      } while (lVar17 < *(int *)(param_1 + 0x280));
    }
    if (*(int *)(param_4 + 0xe4) == 0) {
      bVar13 = *(byte *)(param_4 + 0xe8);
    }
    else {
      bVar13 = FUN_034375e4(param_4);
      bVar13 = bVar13 & 1 | *(char *)(param_4 + 0xe8) != '\0';
      *(byte *)(param_4 + 0xe8) = bVar13;
      *(undefined4 *)(param_4 + 0xe4) = 0;
    }
    if (bVar13 != 0) {
      uVar26 = NEON_fminnm(*(undefined4 *)(param_4 + 0xec),*param_5);
      *param_5 = uVar26;
    }
  }
  else if (0 < *(int *)(param_1 + 0x280)) {
    auVar18 = NEON_fmov(0x3f800000,4);
    lVar16 = 0;
    lVar17 = 0;
    do {
      if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
        *(long *)(puVar9 + 8) = auVar18._8_8_;
        *(long *)puVar9 = auVar18._0_8_;
        __cxa_guard_release(puVar8);
      }
      if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar10), iVar14 != 0)) {
        *(undefined8 *)puVar11 = 0;
        *(undefined8 *)(puVar11 + 8) = 0;
        __cxa_guard_release(puVar10);
      }
      puVar1 = (undefined8 *)(param_1 + lVar16);
      fVar31 = (float)*(undefined8 *)(param_2 + 10);
      fVar32 = (float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20);
      fVar29 = (float)*(undefined8 *)(param_2 + 8);
      fVar30 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
      fVar22 = fVar29 * ((float)*puVar1 - *param_2);
      fVar23 = fVar30 * ((float)((ulong)*puVar1 >> 0x20) - param_2[1]);
      fVar24 = fVar31 * ((float)puVar1[1] - param_2[2]);
      fVar25 = fVar32 * ((float)((ulong)puVar1[1] >> 0x20) - param_2[3]);
      auVar19._0_4_ = (*(float *)(puVar1 + 2) - *param_2) * fVar29;
      auVar19._4_4_ = (*(float *)((long)puVar1 + 0x14) - param_2[1]) * fVar30;
      auVar19._8_4_ = (*(float *)(puVar1 + 3) - param_2[2]) * fVar31;
      auVar19._12_4_ = (*(float *)((long)puVar1 + 0x1c) - param_2[3]) * fVar32;
      auVar3._4_4_ = fVar23;
      auVar3._0_4_ = fVar22;
      auVar3._8_4_ = fVar24;
      auVar3._12_4_ = fVar25;
      auVar27 = NEON_fmin(auVar3,auVar19,4);
      auVar4._4_4_ = fVar23;
      auVar4._0_4_ = fVar22;
      auVar4._8_4_ = fVar24;
      auVar4._12_4_ = fVar25;
      auVar20 = NEON_fmax(auVar19,auVar4,4);
      auVar6._12_4_ = (int)((ulong)*(undefined8 *)(puVar11 + 8) >> 0x20);
      auVar6._0_12_ = *(undefined1 (*) [12])puVar11;
      auVar27 = NEON_fmax(auVar27,auVar6,4);
      auVar5._12_4_ = (int)((ulong)*(undefined8 *)(puVar9 + 8) >> 0x20);
      auVar5._0_12_ = *(undefined1 (*) [12])puVar9;
      auVar20 = NEON_fmin(auVar20,auVar5,4);
      uVar26 = NEON_fminnm(auVar20._4_4_,auVar20._8_4_);
      fVar22 = (float)NEON_fminnm(auVar20._0_4_,uVar26);
      *(float *)puVar12 = fVar22;
      if (auVar27._0_4_ <= fVar22) {
        FUN_034371cc(*(undefined8 *)(param_1 + lVar17 * 8 + 0x200),param_2,param_3,param_4,param_5);
      }
      lVar17 = lVar17 + 1;
      lVar16 = lVar16 + 0x20;
    } while (lVar17 < *(int *)(param_1 + 0x280));
  }
  return;
}


