/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03437a78; name: FUN_03437a78
 */


undefined8 FUN_03437a78(long param_1,float *param_2,int *param_3,long param_4)

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
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  puVar8 = PTR_DAT_047e6dd8;
  puVar7 = PTR_DAT_047e6dd0;
  puVar6 = PTR_DAT_047e6dc8;
  puVar4 = PTR_DAT_047e6db8;
  if (*(int *)(param_1 + 0x284) < 1) {
    if (0 < *(int *)(param_1 + 0x280)) {
      lVar17 = 0;
      do {
        *param_3 = *param_3 + 1;
        puVar12 = *(undefined4 **)(param_1 + 0x200 + lVar17 * 8);
        if ((puVar12 == (undefined4 *)0x0) ||
           (lVar16 = *(long *)(puVar12 + 0xe), lVar16 == *(long *)(param_4 + 0xe0))) {
LAB_03437d68:
          bVar9 = *(byte *)(param_4 + 0x120);
        }
        else {
          if (*(uint *)(lVar16 + 0x38) != 0) {
            lVar15 = (ulong)*(uint *)(lVar16 + 0x38) << 3;
            plVar14 = *(long **)(lVar16 + 0x30);
            do {
              if (*plVar14 == *(long *)(param_4 + 0xe8)) goto LAB_03437d68;
              lVar15 = lVar15 + -8;
              plVar14 = plVar14 + 1;
            } while (lVar15 != 0);
          }
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
          if (iVar10 != 4) goto LAB_03437d68;
          bVar9 = FUN_03437dac(param_4);
          bVar9 = bVar9 & 1 | *(char *)(param_4 + 0x120) != '\0';
          *(byte *)(param_4 + 0x120) = bVar9;
          *(undefined4 *)(param_4 + 0xf8) = 0;
        }
        if (bVar9 != 0) {
          return 0;
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < *(int *)(param_1 + 0x280));
    }
  }
  else if (0 < *(int *)(param_1 + 0x280)) {
    auVar18 = NEON_fmov(0x3f800000,4);
    lVar16 = 0;
    lVar17 = 0;
    pauVar13 = (undefined1 (*) [12])PTR_DAT_047e6dc0;
    do {
      if (((*puVar4 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(puVar4), puVar5 = PTR_DAT_047e6dc0,
         pauVar13 = (undefined1 (*) [12])PTR_DAT_047e6dc0, iVar10 != 0)) {
        *(long *)(PTR_DAT_047e6dc0 + 8) = auVar18._8_8_;
        *(long *)puVar5 = auVar18._0_8_;
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
      puVar1 = (undefined8 *)(param_1 + lVar16);
      fVar30 = (float)*(undefined8 *)(param_2 + 10);
      fVar31 = (float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20);
      fVar28 = (float)*(undefined8 *)(param_2 + 8);
      fVar29 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
      fVar21 = fVar28 * ((float)*puVar1 - *param_2);
      fVar22 = fVar29 * ((float)((ulong)*puVar1 >> 0x20) - param_2[1]);
      fVar23 = fVar30 * ((float)puVar1[1] - param_2[2]);
      fVar24 = fVar31 * ((float)((ulong)puVar1[1] >> 0x20) - param_2[3]);
      auVar19._0_4_ = (*(float *)(puVar1 + 2) - *param_2) * fVar28;
      auVar19._4_4_ = (*(float *)((long)puVar1 + 0x14) - param_2[1]) * fVar29;
      auVar19._8_4_ = (*(float *)(puVar1 + 3) - param_2[2]) * fVar30;
      auVar19._12_4_ = (*(float *)((long)puVar1 + 0x1c) - param_2[3]) * fVar31;
      auVar20._4_4_ = fVar22;
      auVar20._0_4_ = fVar21;
      auVar20._8_4_ = fVar23;
      auVar20._12_4_ = fVar24;
      auVar26 = NEON_fmin(auVar20,auVar19,4);
      auVar27._4_4_ = fVar22;
      auVar27._0_4_ = fVar21;
      auVar27._8_4_ = fVar23;
      auVar27._12_4_ = fVar24;
      auVar20 = NEON_fmax(auVar19,auVar27,4);
      auVar3._12_4_ = (int)((ulong)*(undefined8 *)(puVar7 + 8) >> 0x20);
      auVar3._0_12_ = *(undefined1 (*) [12])puVar7;
      auVar27 = NEON_fmax(auVar26,auVar3,4);
      auVar26._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar13 + 8) >> 0x20);
      auVar26._0_12_ = *pauVar13;
      auVar20 = NEON_fmin(auVar20,auVar26,4);
      uVar25 = NEON_fminnm(auVar20._4_4_,auVar20._8_4_);
      fVar21 = (float)NEON_fminnm(auVar20._0_4_,uVar25);
      *(float *)puVar8 = fVar21;
      if ((auVar27._0_4_ <= fVar21) &&
         (uVar11 = FUN_03437a78(*(undefined8 *)(param_1 + lVar17 * 8 + 0x200),param_2,param_3,
                                param_4), pauVar13 = (undefined1 (*) [12])PTR_DAT_047e6dc0,
         (uVar11 & 1) == 0)) {
        return 0;
      }
      lVar17 = lVar17 + 1;
      lVar16 = lVar16 + 0x20;
    } while (lVar17 < *(int *)(param_1 + 0x280));
  }
  return 1;
}


