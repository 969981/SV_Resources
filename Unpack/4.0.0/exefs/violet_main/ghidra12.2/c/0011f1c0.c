/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0011f1c0; name: FUN_0011f1c0
 */


void FUN_0011f1c0(long *param_1,uint param_2,uint param_3,uint param_4,uint *param_5,uint param_6,
                 long param_7,ushort *param_8,ushort param_9)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  byte bVar5;
  ushort uVar6;
  uint *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  ushort *puVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint auStack_900 [552];
  
  lVar15 = *param_1;
  if (lVar15 == 0) {
    puVar7 = auStack_900;
    puVar1 = auStack_900;
  }
  else {
    puVar1 = (uint *)(lVar15 + (ulong)(param_4 * param_2) * 2);
    puVar7 = (uint *)param_1[2];
    *(uint *)(param_1[3] + (ulong)param_2 * 4) = (uint)((int)puVar7 - (int)param_1[1]) >> 2;
  }
  if (param_4 != 0) {
    uVar19 = (ulong)param_4;
    puVar10 = puVar1;
    puVar13 = param_8;
    do {
      uVar19 = uVar19 - 1;
      *(ushort *)puVar10 = *puVar13 & 0x1fff | param_9 | 0x6000;
      puVar10 = (uint *)((long)puVar10 + 2);
      puVar13 = puVar13 + 2;
    } while (uVar19 != 0);
  }
  uVar12 = 0x1ff;
  if (0xffff < param_3) {
    uVar12 = 0xff;
  }
  uVar14 = param_3 & (-1 << (ulong)(param_4 & 0x1f) ^ 0xffffffffU);
  uVar17 = uVar14 - (uVar14 >> 1 & 0x5555);
  uVar17 = (uVar17 >> 2 & 0x3333) + (uVar17 & 0x3333);
  *puVar7 = uVar14;
  puVar10 = *(uint **)(param_5 + 2);
  uVar24 = *param_5;
  uVar23 = (ulong)uVar24;
  uVar18 = param_5[4];
  uVar19 = (ulong)uVar18;
  uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
  puVar4 = &UNK_03cb5740;
  if (0xffff < param_3) {
    puVar4 = &DAT_03cb5940;
  }
  puVar9 = (undefined2 *)((long)(puVar7 + 1) + (ulong)((uVar17 + (uVar17 >> 8)) * 8 & 0xf8));
  if (uVar14 != 0) {
    puVar7 = puVar7 + 1;
    do {
      uVar16 = 0;
      uVar17 = 0;
      uVar24 = 0;
      uVar21 = 1;
      puVar8 = puVar9;
      do {
        uVar22 = (uint)uVar23;
        uVar18 = (uint)uVar19;
        uVar24 = uVar24 - 1;
        uVar20 = uVar21;
        if ((int)uVar24 < 1) {
          uVar23 = uVar23 & 0xffffffff;
          if (uVar18 < 9) {
            uVar23 = (ulong)(*puVar10 << (ulong)(uVar18 & 0x1f) | uVar22);
          }
          uVar24 = (byte)puVar4[uVar23 & uVar12] & 0xf;
          bVar5 = (byte)puVar4[uVar23 & uVar12] >> 4;
          if (uVar24 < uVar18 || uVar24 - uVar18 == 0) {
            uVar22 = uVar22 >> (ulong)uVar24;
            puVar11 = puVar10;
          }
          else {
            uVar22 = *puVar10 >> (ulong)(uVar24 - uVar18 & 0x1f);
            uVar18 = uVar18 + 0x20;
            puVar11 = puVar10 + 1;
          }
          uVar23 = (ulong)uVar22;
          uVar18 = uVar18 - uVar24;
          uVar19 = (ulong)uVar18;
          puVar10 = puVar11;
          if (bVar5 == 0xb) {
            uVar20 = uVar23;
            if (uVar18 < 6) {
              puVar10 = puVar11 + 1;
              Hint_Prefetch(puVar11 + 0x100,0,0,0);
              uVar18 = uVar18 + 0x20;
              uVar20 = (ulong)*puVar11 << (uVar19 & 0x3f) | uVar23;
            }
            uVar23 = uVar20 >> 6;
            uVar19 = (ulong)(uVar18 - 6);
            uVar24 = (uint)uVar20 & 0x3f;
          }
          else {
            uVar24 = (uint)(byte)(&DAT_03cb5a4e)[bVar5];
          }
          uVar22 = (uint)uVar23;
          uVar18 = (uint)uVar19;
          uVar24 = uVar24 + (int)uVar21;
          uVar20 = (ulong)uVar24;
          puVar9 = puVar8;
          if (0x3f < uVar24) break;
          uVar24 = (uint)(byte)(&DAT_03cb5a40)[bVar5];
        }
        uVar25 = uVar22;
        if (uVar18 < 0xb) {
          uVar25 = *puVar10 << (ulong)(uVar18 & 0x1f) | uVar22;
        }
        uVar2 = (uVar25 & 0x7ff) + 1 & (uVar25 & 0x7ff ^ 0xffffffff);
        uVar26 = (uint)LZCOUNT(uVar2);
        uVar25 = 0x20 - uVar26;
        if (uVar25 < uVar18 || uVar25 - uVar18 == 0) {
          uVar22 = uVar22 >> (ulong)(uVar25 & 0x1f);
        }
        else {
          uVar22 = *puVar10 >> (ulong)(uVar25 - uVar18 & 0x1f);
          uVar18 = uVar18 + 0x20;
          puVar10 = puVar10 + 1;
        }
        uVar23 = (ulong)uVar22;
        uVar18 = uVar18 - uVar25;
        uVar19 = (ulong)uVar18;
        puVar11 = puVar10;
        if (7 < uVar2) {
          uVar25 = 0x1d - uVar26;
          if (uVar18 < uVar25) {
            puVar11 = puVar10 + 1;
            Hint_Prefetch(puVar10 + 0x100,0,0,0);
            uVar18 = uVar18 + 0x20;
            uVar23 = (ulong)*puVar10 << (uVar19 & 0x3f) | uVar23;
          }
          uVar22 = (uint)(uVar23 >> ((ulong)uVar25 & 0x3f));
          uVar18 = uVar18 - uVar25;
          uVar25 = (1 << (ulong)(uVar25 & 0x1f)) +
                   (0x1fffffffU >> (ulong)(uVar26 & 0x1f) & (uint)uVar23) + 2;
        }
        puVar10 = puVar11;
        if (uVar18 == 0) {
          puVar10 = puVar11 + 1;
          uVar22 = *puVar11;
          uVar18 = 0x20;
        }
        uVar16 = 1L << (uVar20 & 0x3f) | uVar16;
        uVar2 = (int)uVar20 + 1;
        uVar21 = (ulong)uVar2;
        uVar23 = (ulong)(uVar22 >> 1);
        uVar19 = (ulong)(uVar18 - 1);
        puVar9 = puVar8 + 1;
        *puVar8 = (short)((((uVar25 ^ -(uVar22 & 1)) + (uVar22 & 1)) *
                           (uint)*(ushort *)
                                  (param_7 + (ulong)(param_6 & 3) * 0x80 +
                                  (ulong)(byte)(&DAT_03cb5700)[uVar20] * 2) <<
                          (ulong)((int)param_6 >> 2 & 0x1f)) + 0x40 >> 7);
        uVar17 = uVar17 + 1;
        puVar8 = puVar9;
      } while (uVar2 < 0x40);
      uVar18 = (uint)uVar19;
      uVar24 = (uint)uVar23;
      uVar6 = 2;
      if (uVar17 >= 4) {
        uVar6 = 1;
      }
      uVar22 = 0x1f - (int)LZCOUNT(uVar14 & -uVar14);
      uVar3 = (ushort)(uVar17 < 4);
      if (uVar17 < 8) {
        uVar3 = uVar6;
      }
      if (uVar17 == 0) {
        uVar3 = uVar3 + 1;
      }
      *(ushort *)((long)puVar1 + (ulong)uVar22 * 2) =
           (ushort)*(undefined4 *)(param_8 + (ulong)uVar22 * 2) & 0x1fff | uVar3 << 0xd | param_9;
      *puVar7 = (uint)uVar16;
      puVar7[1] = (uint)(uVar16 >> 0x20);
      uVar14 = uVar14 - 1 & uVar14;
      puVar7 = puVar7 + 2;
    } while (uVar14 != 0);
    lVar15 = *param_1;
  }
  if (lVar15 != 0) {
    param_1[2] = (long)puVar9 + 3U & 0xfffffffffffffffc;
  }
  *(uint **)(param_5 + 2) = puVar10;
  *param_5 = uVar24;
  param_5[4] = uVar18;
  return;
}


