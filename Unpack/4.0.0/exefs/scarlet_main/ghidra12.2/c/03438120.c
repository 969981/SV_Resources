/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03438120; name: FUN_03438120
 */


undefined8 FUN_03438120(long param_1,float *param_2,int *param_3,long param_4)

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
  ulong uVar11;
  undefined4 *puVar12;
  undefined1 (*pauVar13) [12];
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  puVar8 = PTR_DAT_047e6dd8;
  puVar7 = PTR_DAT_047e6dd0;
  puVar6 = PTR_DAT_047e6dc8;
  puVar4 = PTR_DAT_047e6db8;
  if (*(int *)(param_1 + 0x284) < 1) {
    if (0 < *(int *)(param_1 + 0x280)) {
      lVar15 = 0;
      do {
        *param_3 = *param_3 + 1;
        puVar12 = *(undefined4 **)(param_1 + 0x200 + lVar15 * 8);
        if ((puVar12 == (undefined4 *)0x0) ||
           (*(long *)(puVar12 + 0xe) == *(long *)(param_4 + 0xe0) ||
            *(long *)(puVar12 + 0xe) == *(long *)(param_4 + 0xe8))) {
LAB_034383ec:
          bVar9 = *(byte *)(param_4 + 0x120);
        }
        else {
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf8) * 4) = *puVar12;
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf8) * 4 + 0x10) = puVar12[1];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf8) * 4 + 0x20) = puVar12[2];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf8) * 4 + 0x30) = puVar12[3];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf8) * 4 + 0x40) = puVar12[4];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf8) * 4 + 0x50) = puVar12[5];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf8) * 4 + 0x60) = puVar12[6];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf8) * 4 + 0x70) = puVar12[7];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf8) * 4 + 0x80) = puVar12[8];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf8) * 4 + 0x90) = puVar12[9];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf8) * 4 + 0xa0) = puVar12[10];
          *(undefined4 *)(param_4 + (ulong)*(uint *)(param_4 + 0xf8) * 4 + 0xb0) = puVar12[0xb];
          uVar2 = *(uint *)(param_4 + 0xf8);
          *(long *)(param_4 + (ulong)uVar2 * 8 + 0x100) = *(long *)(puVar12 + 0xe) + 0x20;
          iVar10 = uVar2 + 1;
          *(int *)(param_4 + 0xf8) = iVar10;
          if (iVar10 != 4) goto LAB_034383ec;
          bVar9 = FUN_03438430(param_4);
          bVar9 = bVar9 & 1 | *(char *)(param_4 + 0x120) != '\0';
          *(byte *)(param_4 + 0x120) = bVar9;
          *(undefined4 *)(param_4 + 0xf8) = 0;
        }
        if (bVar9 != 0) {
          return 0;
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)(param_1 + 0x280));
    }
  }
  else if (0 < *(int *)(param_1 + 0x280)) {
    auVar16 = NEON_fmov(0x3f800000,4);
    lVar14 = 0;
    lVar15 = 0;
    pauVar13 = (undefined1 (*) [12])PTR_DAT_047e6dc0;
    do {
      if (((*puVar4 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(puVar4), puVar5 = PTR_DAT_047e6dc0,
         pauVar13 = (undefined1 (*) [12])PTR_DAT_047e6dc0, iVar10 != 0)) {
        *(long *)(PTR_DAT_047e6dc0 + 8) = auVar16._8_8_;
        *(long *)puVar5 = auVar16._0_8_;
        __cxa_guard_release(puVar4);
        pauVar13 = (undefined1 (*) [12])PTR_DAT_047e6dc0;
      }
      if (((*puVar6 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(puVar6), pauVar13 = (undefined1 (*) [12])PTR_DAT_047e6dc0,
         iVar10 != 0)) {
        *(undefined8 *)puVar7 = 0;
        *(undefined8 *)(puVar7 + 8) = 0;
        __cxa_guard_release(puVar6);
        pauVar13 = (undefined1 (*) [12])PTR_DAT_047e6dc0;
      }
      puVar1 = (undefined8 *)(param_1 + lVar14);
      fVar28 = (float)*(undefined8 *)(param_2 + 10);
      fVar29 = (float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20);
      fVar26 = (float)*(undefined8 *)(param_2 + 8);
      fVar27 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
      fVar19 = fVar26 * ((float)*puVar1 - *param_2);
      fVar20 = fVar27 * ((float)((ulong)*puVar1 >> 0x20) - param_2[1]);
      fVar21 = fVar28 * ((float)puVar1[1] - param_2[2]);
      fVar22 = fVar29 * ((float)((ulong)puVar1[1] >> 0x20) - param_2[3]);
      auVar17._0_4_ = (*(float *)(puVar1 + 2) - *param_2) * fVar26;
      auVar17._4_4_ = (*(float *)((long)puVar1 + 0x14) - param_2[1]) * fVar27;
      auVar17._8_4_ = (*(float *)(puVar1 + 3) - param_2[2]) * fVar28;
      auVar17._12_4_ = (*(float *)((long)puVar1 + 0x1c) - param_2[3]) * fVar29;
      auVar18._4_4_ = fVar20;
      auVar18._0_4_ = fVar19;
      auVar18._8_4_ = fVar21;
      auVar18._12_4_ = fVar22;
      auVar24 = NEON_fmin(auVar18,auVar17,4);
      auVar25._4_4_ = fVar20;
      auVar25._0_4_ = fVar19;
      auVar25._8_4_ = fVar21;
      auVar25._12_4_ = fVar22;
      auVar18 = NEON_fmax(auVar17,auVar25,4);
      auVar3._12_4_ = (int)((ulong)*(undefined8 *)(puVar7 + 8) >> 0x20);
      auVar3._0_12_ = *(undefined1 (*) [12])puVar7;
      auVar25 = NEON_fmax(auVar24,auVar3,4);
      auVar24._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar13 + 8) >> 0x20);
      auVar24._0_12_ = *pauVar13;
      auVar18 = NEON_fmin(auVar18,auVar24,4);
      uVar23 = NEON_fminnm(auVar18._4_4_,auVar18._8_4_);
      fVar19 = (float)NEON_fminnm(auVar18._0_4_,uVar23);
      *(float *)puVar8 = fVar19;
      if ((auVar25._0_4_ <= fVar19) &&
         (uVar11 = FUN_03438120(*(undefined8 *)(param_1 + lVar15 * 8 + 0x200),param_2,param_3,
                                param_4), pauVar13 = (undefined1 (*) [12])PTR_DAT_047e6dc0,
         (uVar11 & 1) == 0)) {
        return 0;
      }
      lVar15 = lVar15 + 1;
      lVar14 = lVar14 + 0x20;
    } while (lVar15 < *(int *)(param_1 + 0x280));
  }
  return 1;
}


