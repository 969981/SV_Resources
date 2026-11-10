/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00105820; name: FUN_00105820
 */


void FUN_00105820(float *param_1,uint param_2,uint param_3,long *param_4,long param_5,ulong param_6)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  uint *puVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float local_bc;
  uint auStack_b8 [26];
  
  uVar14 = *(uint *)(param_4 + 2);
  puVar5 = (ulong *)*param_4;
  uVar16 = param_4[1];
  if (uVar14 < 0x1d) {
    uVar19 = *puVar5 >> (0x1d - (ulong)uVar14 & 0x3f);
    uVar16 = *puVar5 << ((ulong)uVar14 & 0x3f) | uVar16;
    uVar14 = uVar14 + 0x23;
    puVar12 = puVar5 + 1;
  }
  else {
    uVar19 = uVar16 >> 0x1d;
    uVar14 = uVar14 - 0x1d;
    puVar12 = puVar5;
  }
  fVar26 = (float)((uint)uVar16 >> 5 & 0x7fffff);
  fVar27 = *(float *)(&DAT_03cac4d4 + (uVar16 & 0x1f) * 4) * fVar26;
  if ((uVar16 & 0x10000000) != 0) {
    fVar27 = -(*(float *)(&DAT_03cac4d4 + (uVar16 & 0x1f) * 4) * fVar26);
  }
  *param_1 = fVar27;
  if (uVar14 < 0x1d) {
    uVar19 = *puVar12 << ((ulong)uVar14 & 0x3f) | uVar19;
    uVar16 = *puVar12 >> ((ulong)(0x1d - uVar14) & 0x3f);
    uVar14 = uVar14 + 0x23;
    puVar12 = puVar12 + 1;
  }
  else {
    uVar16 = uVar19 >> 0x1d;
    uVar14 = uVar14 - 0x1d;
  }
  uVar17 = (ulong)uVar14;
  fVar26 = (float)((uint)uVar19 >> 5 & 0x7fffff);
  fVar27 = *(float *)(&DAT_03cac4d4 + (uVar19 & 0x1f) * 4) * fVar26;
  if ((uVar19 & 0x10000000) != 0) {
    fVar27 = -(*(float *)(&DAT_03cac4d4 + (uVar19 & 0x1f) * 4) * fVar26);
  }
  param_1[1] = fVar27;
  local_bc = 0.0;
  if (param_3 != 0) {
    uVar19 = (ulong)param_3;
    puVar21 = auStack_b8;
    puVar11 = puVar12;
    uVar20 = uVar16;
    if (uVar14 < 8) goto LAB_00105954;
    do {
      uVar16 = uVar20 >> 8;
      uVar14 = (int)uVar17 - 8;
      puVar22 = puVar21;
      while( true ) {
        uVar17 = (ulong)uVar14;
        uVar23 = (uint)uVar20 & 0xff;
        if (0x5e < uVar23) {
          uVar23 = 0x5f;
        }
        uVar19 = uVar19 - 1;
        puVar21 = puVar22 + 1;
        *puVar22 = *(uint *)(&DAT_03cac354 + (ulong)uVar23 * 4);
        if (uVar19 == 0) goto LAB_00105974;
        puVar11 = puVar12;
        uVar20 = uVar16;
        if (7 < uVar14) break;
LAB_00105954:
        puVar12 = puVar11 + 1;
        uVar20 = *puVar11 << (uVar17 & 0x3f) | uVar16;
        uVar14 = (int)uVar17 + 0x38;
        uVar16 = *puVar11 >> ((ulong)(8 - (int)uVar17) & 0x3f);
        puVar22 = puVar21;
      }
    } while( true );
  }
LAB_00105974:
  uVar14 = (uint)uVar17;
  if (2 < param_2) {
    uVar19 = 0;
    uVar20 = 2;
    do {
      iVar24 = (int)uVar17;
      if (uVar14 < 9) {
        uVar10 = *puVar12;
        puVar12 = (ulong *)((long)puVar12 + (ulong)(0x40U - iVar24 >> 3));
        iVar24 = (0x40U - iVar24 & 0xfffffff8) + iVar24;
        uVar16 = uVar10 << (uVar17 & 0x3f) | uVar16;
      }
      if ((uVar16 & 1) == 0) {
        uVar10 = uVar16 >> 1 & 0x7fffffff;
        uVar16 = uVar16 >> 5;
        uVar14 = iVar24 - 5;
        iVar24 = 8;
      }
      else {
        uVar17 = uVar16 >> 1;
        uVar10 = uVar16 >> 5 & 0x7ffffff;
        uVar16 = uVar16 >> 9;
        uVar14 = iVar24 - 9;
        iVar24 = (uint)(byte)(&DAT_03cabc90)[uVar17 & 0xf] << 3;
      }
      uVar17 = (ulong)uVar14;
      uVar23 = (uint)uVar20;
      uVar14 = param_2;
      if (iVar24 + uVar23 <= param_2) {
        uVar14 = iVar24 + uVar23;
      }
      uVar3 = (uint)uVar10 & 0xf;
      if ((uVar10 & 0xf) == 0) {
        puVar11 = puVar12;
        uVar15 = uVar14;
LAB_00105c30:
        puVar12 = puVar11;
        uVar10 = (ulong)((uVar15 - uVar23) * 4) + 0x1f >> 5;
        pfVar13 = param_1 + (uVar20 & 0xffffffff);
        do {
          uVar10 = uVar10 - 1;
          pfVar13[4] = 0.0;
          pfVar13[5] = 0.0;
          pfVar13[6] = 0.0;
          pfVar13[7] = 0.0;
          pfVar13[0] = 0.0;
          pfVar13[1] = 0.0;
          pfVar13[2] = 0.0;
          pfVar13[3] = 0.0;
          pfVar13 = pfVar13 + 8;
        } while (uVar10 != 0);
        uVar20 = (ulong)uVar15;
      }
      else {
        uVar2 = uVar3 + 1;
        puVar11 = puVar5;
        uVar15 = param_2;
        if (param_6 < (long)puVar12 + (ulong)((uVar14 - uVar23) * uVar2 + 9 >> 3))
        goto LAB_00105c30;
        if (uVar23 < uVar14) {
          uVar23 = ~(-1 << (ulong)uVar3);
          uVar10 = uVar19;
          do {
            do {
              uVar19 = uVar10;
              uVar15 = *(int *)(param_5 + uVar19 * 4) << 1;
              uVar10 = (ulong)((int)uVar19 + 1);
            } while (uVar15 <= (uint)uVar20);
            uVar4 = uVar14;
            if (uVar15 <= uVar14) {
              uVar4 = uVar15;
            }
            pfVar13 = param_1 + (uVar20 & 0xffffffff);
            pfVar1 = param_1 + uVar4;
            if ((uVar2 < 0xf) && ((uint)uVar20 + 4 <= uVar4)) {
              uVar15 = (uint)uVar17;
              do {
                iVar24 = (int)uVar17;
                if (uVar15 < uVar2 * 4) {
                  uVar20 = *puVar12;
                  puVar12 = (ulong *)((long)puVar12 + (ulong)(0x40U - iVar24 >> 3));
                  iVar24 = (0x40U - iVar24 & 0xfffffff8) + iVar24;
                  uVar16 = uVar20 << (uVar17 & 0x3f) | uVar16;
                }
                bVar6 = ((uint)uVar16 & uVar23) != 0;
                uVar17 = (uVar16 >> uVar3) >> (ulong)bVar6;
                uVar15 = (uint)uVar17;
                bVar7 = (uVar15 & uVar23) != 0;
                uVar17 = uVar17 >> uVar3;
                uVar20 = uVar17 >> (ulong)bVar7;
                uVar18 = (uint)uVar20;
                bVar8 = (uVar18 & uVar23) != 0;
                *pfVar13 = (&local_bc)[(uVar16 >> uVar3 & 1) - 2] *
                           (float)(int)((uint)uVar16 & uVar23);
                uVar20 = uVar20 >> uVar3;
                uVar10 = uVar20 >> (ulong)bVar8;
                uVar25 = (uint)uVar10;
                bVar9 = (uVar25 & uVar23) != 0;
                pfVar13[1] = (&local_bc)[(uVar17 & 1) - 2] * (float)(int)(uVar15 & uVar23);
                uVar10 = uVar10 >> uVar3;
                pfVar13[2] = (&local_bc)[(uVar20 & 1) - 2] * (float)(int)(uVar18 & uVar23);
                uVar16 = uVar10 >> (ulong)bVar9;
                uVar15 = ((((iVar24 - (uint)bVar6) - (uint)bVar7) - (uint)bVar8) - (uint)bVar9) +
                         uVar3 * -4;
                uVar17 = (ulong)uVar15;
                pfVar13[3] = (&local_bc)[(uVar10 & 1) - 2] * (float)(int)(uVar25 & uVar23);
                pfVar13 = pfVar13 + 4;
              } while (pfVar13 <= pfVar1 + -4);
              uVar20 = (ulong)((long)pfVar1 - (long)pfVar13) >> 2;
              if ((uint)uVar20 < uVar4) goto LAB_00105bf4;
            }
            else {
LAB_00105bf4:
              for (; uVar15 = (uint)uVar17, pfVar13 < pfVar1; pfVar13 = pfVar13 + 1) {
                if (uVar15 <= uVar3) {
                  uVar20 = *puVar12;
                  puVar12 = (ulong *)((long)puVar12 + (ulong)(0x40 - uVar15 >> 3));
                  uVar15 = (0x40 - uVar15 & 0xfffffff8) + uVar15;
                  uVar16 = uVar20 << (uVar17 & 0x3f) | uVar16;
                }
                uVar18 = (uint)uVar16;
                uVar20 = uVar16 >> uVar3;
                bVar6 = (uVar18 & uVar23) != 0;
                uVar16 = uVar20 >> (ulong)bVar6;
                uVar17 = (ulong)((uVar15 - uVar3) - (uint)bVar6);
                *pfVar13 = (&local_bc)[(uVar20 & 1) - 2] * (float)(int)(uVar18 & uVar23);
              }
              uVar20 = (ulong)uVar4;
            }
            uVar10 = uVar19;
          } while ((uint)uVar20 < uVar14);
        }
      }
      uVar14 = (uint)uVar17;
    } while ((uint)uVar20 < param_2);
  }
  *param_4 = (long)puVar12;
  param_4[1] = uVar16;
  *(uint *)(param_4 + 2) = uVar14;
  return;
}


