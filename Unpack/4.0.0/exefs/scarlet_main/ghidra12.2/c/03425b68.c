/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03425b68; name: FUN_03425b68
 */


void FUN_03425b68(long param_1,float *param_2,int *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 (*pauVar10) [12];
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  puVar7 = PTR_DAT_047e6dd8;
  puVar6 = PTR_DAT_047e6dd0;
  puVar5 = PTR_DAT_047e6dc8;
  puVar3 = PTR_DAT_047e6db8;
  if (*(int *)(param_1 + 0x284) < 1) {
    if (0 < *(int *)(param_1 + 0x280)) {
      lVar12 = 0;
      do {
        *param_3 = *param_3 + 1;
        puVar9 = *(undefined4 **)(param_1 + 0x200 + lVar12 * 8);
        *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0x120) * 4) = *puVar9;
        *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0x120) * 4 + 0x10) = puVar9[1];
        *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0x120) * 4 + 0x20) = puVar9[2];
        *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0x120) * 4 + 0x30) = puVar9[3];
        *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0x120) * 4 + 0x40) = puVar9[4];
        *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0x120) * 4 + 0x50) = puVar9[5];
        *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0x120) * 4 + 0x60) = puVar9[6];
        *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0x120) * 4 + 0x70) = puVar9[7];
        *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0x120) * 4 + 0x80) = puVar9[8];
        *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0x120) * 4 + 0x90) = puVar9[9];
        *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0x120) * 4 + 0xa0) = puVar9[10];
        *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0x120) * 4 + 0xb0) = puVar9[0xb];
        *(undefined4 **)(param_4 + (ulong)*(uint *)(param_4 + 0x120) * 8 + 0xe0) = puVar9;
        iVar8 = *(int *)(param_4 + 0x120) + 1;
        *(int *)(param_4 + 0x120) = iVar8;
        if (iVar8 == 4) {
          FUN_034257b4(param_4);
          *(undefined4 *)(param_4 + 0x120) = 0;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)(param_1 + 0x280));
    }
  }
  else if (0 < *(int *)(param_1 + 0x280)) {
    auVar13 = NEON_fmov(0x3f800000,4);
    lVar11 = 0;
    lVar12 = 0;
    pauVar10 = (undefined1 (*) [12])PTR_DAT_047e6dc0;
    do {
      if (((*puVar3 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(puVar3), puVar4 = PTR_DAT_047e6dc0,
         pauVar10 = (undefined1 (*) [12])PTR_DAT_047e6dc0, iVar8 != 0)) {
        *(long *)(PTR_DAT_047e6dc0 + 8) = auVar13._8_8_;
        *(long *)puVar4 = auVar13._0_8_;
        __cxa_guard_release(puVar3);
        pauVar10 = (undefined1 (*) [12])PTR_DAT_047e6dc0;
      }
      if (((*puVar5 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(puVar5), pauVar10 = (undefined1 (*) [12])PTR_DAT_047e6dc0,
         iVar8 != 0)) {
        *(undefined8 *)puVar6 = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        __cxa_guard_release(puVar5);
        pauVar10 = (undefined1 (*) [12])PTR_DAT_047e6dc0;
      }
      puVar1 = (undefined8 *)(param_1 + lVar11);
      fVar25 = (float)*(undefined8 *)(param_2 + 10);
      fVar26 = (float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20);
      fVar23 = (float)*(undefined8 *)(param_2 + 8);
      fVar24 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
      fVar16 = fVar23 * ((float)*puVar1 - *param_2);
      fVar17 = fVar24 * ((float)((ulong)*puVar1 >> 0x20) - param_2[1]);
      fVar18 = fVar25 * ((float)puVar1[1] - param_2[2]);
      fVar19 = fVar26 * ((float)((ulong)puVar1[1] >> 0x20) - param_2[3]);
      auVar14._0_4_ = (*(float *)(puVar1 + 2) - *param_2) * fVar23;
      auVar14._4_4_ = (*(float *)((long)puVar1 + 0x14) - param_2[1]) * fVar24;
      auVar14._8_4_ = (*(float *)(puVar1 + 3) - param_2[2]) * fVar25;
      auVar14._12_4_ = (*(float *)((long)puVar1 + 0x1c) - param_2[3]) * fVar26;
      auVar15._4_4_ = fVar17;
      auVar15._0_4_ = fVar16;
      auVar15._8_4_ = fVar18;
      auVar15._12_4_ = fVar19;
      auVar21 = NEON_fmin(auVar15,auVar14,4);
      auVar22._4_4_ = fVar17;
      auVar22._0_4_ = fVar16;
      auVar22._8_4_ = fVar18;
      auVar22._12_4_ = fVar19;
      auVar15 = NEON_fmax(auVar14,auVar22,4);
      auVar2._12_4_ = (int)((ulong)*(undefined8 *)(puVar6 + 8) >> 0x20);
      auVar2._0_12_ = *(undefined1 (*) [12])puVar6;
      auVar22 = NEON_fmax(auVar21,auVar2,4);
      auVar21._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
      auVar21._0_12_ = *pauVar10;
      auVar15 = NEON_fmin(auVar15,auVar21,4);
      uVar20 = NEON_fminnm(auVar15._4_4_,auVar15._8_4_);
      fVar16 = (float)NEON_fminnm(auVar15._0_4_,uVar20);
      *(float *)puVar7 = fVar16;
      if (auVar22._0_4_ <= fVar16) {
        FUN_03425b68(*(undefined8 *)(param_1 + lVar12 * 8 + 0x200),param_2,param_3,param_4);
        pauVar10 = (undefined1 (*) [12])PTR_DAT_047e6dc0;
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x20;
    } while (lVar12 < *(int *)(param_1 + 0x280));
  }
  return;
}


