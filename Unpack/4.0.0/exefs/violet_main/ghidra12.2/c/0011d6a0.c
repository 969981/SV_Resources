/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0011d6a0; name: FUN_0011d6a0
 */


ulong FUN_0011d6a0(uint param_1,short *param_2,uint *param_3,uint param_4,long param_5,long param_6,
                  long param_7,ushort param_8)

{
  short *psVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  short sVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  
  if ((param_1 & 0xf) == 0) {
    lVar9 = 0;
    do {
      uVar13 = (ushort)*(undefined4 *)(param_6 + lVar9 * 4);
      *(ushort *)(param_7 + lVar9 * 2) = uVar13 & 0x1fff | param_8 | 0x6000;
      lVar9 = lVar9 + 1;
      *param_2 = uVar13 * 8 + 0x20;
      param_2 = param_2 + 0x40;
    } while (lVar9 != 4);
    uVar7 = 0;
  }
  else {
    uVar8 = (ulong)param_1;
    puVar10 = *(uint **)(param_3 + 2);
    uVar19 = (ulong)*param_3;
    uVar16 = (ulong)param_3[4];
    uVar12 = 0x1ff;
    if (0xffff < param_1) {
      uVar12 = 0xff;
    }
    lVar9 = 0;
    uVar7 = 0;
    puVar4 = &UNK_03cb5740;
    if (0xffff < param_1) {
      puVar4 = &DAT_03cb5940;
    }
    do {
      psVar1 = param_2 + lVar9 * 0x40;
      if ((uVar8 & 1) == 0) {
        uVar14 = 0;
        uVar17 = 0;
      }
      else {
        uVar14 = 0;
        uVar20 = 0;
        psVar1[0] = 0;
        psVar1[1] = 0;
        psVar1[2] = 0;
        psVar1[3] = 0;
        psVar1[4] = 0;
        psVar1[5] = 0;
        psVar1[6] = 0;
        psVar1[7] = 0;
        psVar1[8] = 0;
        psVar1[9] = 0;
        psVar1[10] = 0;
        psVar1[0xb] = 0;
        psVar1[0xc] = 0;
        psVar1[0xd] = 0;
        psVar1[0xe] = 0;
        psVar1[0xf] = 0;
        psVar1[0x10] = 0;
        psVar1[0x11] = 0;
        psVar1[0x12] = 0;
        psVar1[0x13] = 0;
        psVar1[0x14] = 0;
        psVar1[0x15] = 0;
        psVar1[0x16] = 0;
        psVar1[0x17] = 0;
        psVar1[0x18] = 0;
        psVar1[0x19] = 0;
        psVar1[0x1a] = 0;
        psVar1[0x1b] = 0;
        psVar1[0x1c] = 0;
        psVar1[0x1d] = 0;
        psVar1[0x1e] = 0;
        psVar1[0x1f] = 0;
        psVar1[0x20] = 0;
        psVar1[0x21] = 0;
        psVar1[0x22] = 0;
        psVar1[0x23] = 0;
        psVar1[0x24] = 0;
        psVar1[0x25] = 0;
        psVar1[0x26] = 0;
        psVar1[0x27] = 0;
        psVar1[0x28] = 0;
        psVar1[0x29] = 0;
        psVar1[0x2a] = 0;
        psVar1[0x2b] = 0;
        psVar1[0x2c] = 0;
        psVar1[0x2d] = 0;
        psVar1[0x2e] = 0;
        psVar1[0x2f] = 0;
        psVar1[0x30] = 0;
        psVar1[0x31] = 0;
        psVar1[0x32] = 0;
        psVar1[0x33] = 0;
        psVar1[0x34] = 0;
        psVar1[0x35] = 0;
        psVar1[0x36] = 0;
        psVar1[0x37] = 0;
        psVar1[0x38] = 0;
        psVar1[0x39] = 0;
        psVar1[0x3a] = 0;
        psVar1[0x3b] = 0;
        psVar1[0x3c] = 0;
        psVar1[0x3d] = 0;
        psVar1[0x3e] = 0;
        psVar1[0x3f] = 0;
        uVar15 = 1;
        uVar17 = 0;
        do {
          uVar21 = uVar15;
          uVar18 = (uint)uVar19;
          uVar15 = (uint)uVar16;
          uVar20 = uVar20 - 1;
          if ((int)uVar20 < 1) {
            uVar19 = uVar19 & 0xffffffff;
            if (uVar15 < 9) {
              uVar19 = (ulong)(*puVar10 << (ulong)(uVar15 & 0x1f) | uVar18);
            }
            uVar20 = (byte)puVar4[uVar19 & uVar12] & 0xf;
            bVar6 = (byte)puVar4[uVar19 & uVar12] >> 4;
            if (uVar20 < uVar15 || uVar20 - uVar15 == 0) {
              uVar18 = uVar18 >> (ulong)uVar20;
              puVar11 = puVar10;
            }
            else {
              uVar18 = *puVar10 >> (ulong)(uVar20 - uVar15 & 0x1f);
              uVar15 = uVar15 + 0x20;
              puVar11 = puVar10 + 1;
            }
            uVar19 = (ulong)uVar18;
            uVar15 = uVar15 - uVar20;
            uVar16 = (ulong)uVar15;
            puVar10 = puVar11;
            if (bVar6 == 0xb) {
              uVar23 = uVar19;
              if (uVar15 < 6) {
                puVar10 = puVar11 + 1;
                Hint_Prefetch(puVar11 + 0x100,0,0,0);
                uVar15 = uVar15 + 0x20;
                uVar23 = (ulong)*puVar11 << (uVar16 & 0x3f) | uVar19;
              }
              uVar19 = uVar23 >> 6;
              uVar16 = (ulong)(uVar15 - 6);
              uVar20 = (uint)uVar23 & 0x3f;
            }
            else {
              uVar20 = (uint)(byte)(&DAT_03cb5a4e)[bVar6];
            }
            uVar18 = (uint)uVar19;
            uVar15 = (uint)uVar16;
            uVar21 = uVar20 + uVar21;
            if (0x3f < uVar21) break;
            uVar20 = (uint)(byte)(&DAT_03cb5a40)[bVar6];
          }
          uVar17 = uVar18;
          if (uVar15 < 0xb) {
            uVar17 = *puVar10 << (ulong)(uVar15 & 0x1f) | uVar18;
          }
          uVar2 = (uVar17 & 0x7ff) + 1 & (uVar17 & 0x7ff ^ 0xffffffff);
          uVar22 = (uint)LZCOUNT(uVar2);
          uVar17 = 0x20 - uVar22;
          if (uVar17 < uVar15 || uVar17 - uVar15 == 0) {
            uVar18 = uVar18 >> (ulong)(uVar17 & 0x1f);
          }
          else {
            uVar18 = *puVar10 >> (ulong)(uVar17 - uVar15 & 0x1f);
            uVar15 = uVar15 + 0x20;
            puVar10 = puVar10 + 1;
          }
          uVar19 = (ulong)uVar18;
          uVar15 = uVar15 - uVar17;
          uVar16 = (ulong)uVar15;
          puVar11 = puVar10;
          if (7 < uVar2) {
            uVar17 = 0x1d - uVar22;
            if (uVar15 < uVar17) {
              puVar11 = puVar10 + 1;
              Hint_Prefetch(puVar10 + 0x100,0,0,0);
              uVar15 = uVar15 + 0x20;
              uVar19 = (ulong)*puVar10 << (uVar16 & 0x3f) | uVar19;
            }
            uVar18 = (uint)(uVar19 >> ((ulong)uVar17 & 0x3f));
            uVar15 = uVar15 - uVar17;
            uVar17 = (1 << (ulong)(uVar17 & 0x1f)) +
                     (0x1fffffffU >> (ulong)(uVar22 & 0x1f) & (uint)uVar19) + 2;
          }
          puVar10 = puVar11;
          if (uVar15 == 0) {
            puVar10 = puVar11 + 1;
            uVar18 = *puVar11;
            uVar15 = 0x20;
          }
          uVar19 = (ulong)(uVar18 >> 1);
          uVar16 = (ulong)(uVar15 - 1);
          psVar1[(byte)(&DAT_03cb5700)[uVar21]] =
               (short)((((uVar17 ^ -(uVar18 & 1)) + (uVar18 & 1)) *
                        (uint)*(ushort *)
                               (param_5 + (ulong)(param_4 & 3) * 0x80 +
                               (ulong)(byte)(&DAT_03cb5700)[uVar21] * 2) <<
                       (ulong)((int)param_4 >> 2 & 0x1f)) + 0x40 >> 7);
          uVar14 = uVar14 + 1;
          uVar15 = uVar21 + 1;
          uVar17 = uVar21;
        } while (uVar21 + 1 < 0x40);
      }
      uVar7 = ((ulong)uVar17 << 0x20 | uVar7) >> 8 & 0xffffffff;
      uVar13 = 2;
      if (uVar14 >= 4) {
        uVar13 = 1;
      }
      uVar3 = (ushort)(uVar14 < 4);
      if (uVar14 < 8) {
        uVar3 = uVar13;
      }
      if (uVar14 == 0) {
        uVar3 = uVar3 + 1;
      }
      sVar5 = *(short *)(param_6 + lVar9 * 4);
      *(ushort *)(param_7 + lVar9 * 2) =
           (ushort)*(undefined4 *)(param_6 + lVar9 * 4) & 0x1fff | uVar3 << 0xd | param_8;
      lVar9 = lVar9 + 1;
      *psVar1 = sVar5 * 8 + 0x20;
      uVar8 = uVar8 >> 1;
    } while (lVar9 != 4);
    *(uint **)(param_3 + 2) = puVar10;
    *param_3 = (uint)uVar19;
    param_3[4] = (uint)uVar16;
  }
  return uVar7;
}


