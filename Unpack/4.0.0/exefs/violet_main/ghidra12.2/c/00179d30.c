/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00179d30; name: FUN_00179d30
 */


undefined8 FUN_00179d30(long *param_1,long param_2)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  ulong uVar27;
  ulong *puVar28;
  ulong *puVar29;
  ulong uVar30;
  ulong *puVar31;
  ulong uVar32;
  uint *puVar33;
  uint *puVar34;
  ulong uVar35;
  long lVar36;
  
  puVar23 = (ulong *)param_1[6];
  puVar22 = (ulong *)param_1[8];
  puVar26 = (ulong *)param_1[9];
  puVar31 = (ulong *)param_1[0xb];
  uVar18 = 0;
  uVar21 = 0;
  uVar24 = 0;
  uVar27 = 0;
  uVar30 = 0;
  uVar32 = 0;
  uVar35 = param_1[3] - param_1[1];
  if (((0xf < uVar35) && (8 < (ulong)(param_1[7] - (long)puVar22))) &&
     (8 < (ulong)(param_1[10] - (long)puVar31))) {
    puVar19 = (ulong *)(param_1[7] + -8);
    puVar28 = (ulong *)(param_1[10] + -8);
    puVar14 = (uint *)(*param_1 + -3);
    puVar15 = (uint *)(param_1[1] + -3);
    lVar36 = uVar35 - 0xf;
    do {
      puVar34 = puVar15;
      puVar33 = puVar14;
      bVar16 = lVar36 + -0xf != 0;
      uVar35 = (*puVar19 & 0xff00ff00ff00ff00) >> 8 | (*puVar19 & 0xff00ff00ff00ff) << 8;
      uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
      uVar25 = (*puVar22 | 0x8000000000000000) >> (uVar24 & 7);
      Hint_Prefetch((byte *)((long)puVar23 + 0x27),0,0,1);
      uVar21 = (uVar35 >> 0x20 | uVar35 << 0x20 | 0x8000000000000000) >> (uVar21 & 7);
      uVar24 = (*puVar23 | 0x8000000000000000) >> (uVar18 & 7);
      Hint_Prefetch((byte *)((long)puVar22 + 0x27),0,0,1);
      uVar18 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      Hint_Prefetch(puVar19 + -4,0,0,1);
      Hint_Prefetch((byte *)((long)puVar26 + 0x27),0,0,1);
      uVar2 = *(ushort *)(param_2 + (uVar25 & 0x7ff) * 2);
      uVar32 = (*puVar31 | 0x8000000000000000) >> (uVar32 & 7);
      uVar3 = *(ushort *)(param_2 + (uVar21 & 0x7ff) * 2);
      uVar4 = *(ushort *)(param_2 + (uVar24 & 0x7ff) * 2);
      uVar30 = (uVar18 >> 0x20 | uVar18 << 0x20 | 0x8000000000000000) >> (uVar30 & 7);
      uVar27 = (*puVar26 | 0x8000000000000000) >> (uVar27 & 7);
      Hint_Prefetch((byte *)((long)puVar31 + 0x27),0,0,1);
      uVar5 = *(ushort *)(param_2 + (uVar32 & 0x7ff) * 2);
      uVar25 = uVar25 >> ((ulong)uVar2 & 0x3f);
      uVar6 = *(ushort *)(param_2 + (uVar30 & 0x7ff) * 2);
      uVar7 = *(ushort *)(param_2 + (uVar27 & 0x7ff) * 2);
      uVar21 = uVar21 >> ((ulong)uVar3 & 0x3f);
      uVar8 = *(ushort *)(param_2 + (uVar25 & 0x7ff) * 2);
      uVar24 = uVar24 >> ((ulong)uVar4 & 0x3f);
      Hint_Prefetch(puVar28 + -4,0,0,1);
      uVar9 = *(ushort *)(param_2 + (uVar21 & 0x7ff) * 2);
      uVar32 = uVar32 >> ((ulong)uVar5 & 0x3f);
      uVar10 = *(ushort *)(param_2 + (uVar24 & 0x7ff) * 2);
      uVar11 = *(ushort *)(param_2 + (uVar32 & 0x7ff) * 2);
      uVar30 = uVar30 >> ((ulong)uVar6 & 0x3f);
      uVar27 = uVar27 >> ((ulong)uVar7 & 0x3f);
      uVar12 = *(ushort *)(param_2 + (uVar30 & 0x7ff) * 2);
      uVar25 = uVar25 >> ((ulong)uVar8 & 0x3f);
      *(uint *)((long)puVar33 + 3) =
           (uint)(((ulong)(uVar2 >> 8) | ((ulong)uVar2 & 0xff00ff00ff00ff) << 8) << 0x10) |
           uVar3 & 0xffffff00 | (uint)(uVar4 >> 8);
      uVar2 = *(ushort *)(param_2 + (uVar27 & 0x7ff) * 2);
      uVar3 = *(ushort *)(param_2 + (uVar25 & 0x7ff) * 2);
      uVar21 = uVar21 >> ((ulong)uVar9 & 0x3f);
      uVar24 = uVar24 >> ((ulong)uVar10 & 0x3f);
      uVar4 = *(ushort *)(param_2 + (uVar21 & 0x7ff) * 2);
      uVar32 = uVar32 >> ((ulong)uVar11 & 0x3f);
      uVar13 = *(ushort *)(param_2 + (uVar24 & 0x7ff) * 2);
      *(uint *)((long)puVar34 + 3) =
           (uint)(((ulong)(uVar5 >> 8) | ((ulong)uVar5 & 0xff00ff00ff00ff) << 8) << 0x10) |
           uVar6 & 0xffffff00 | (uint)(uVar7 >> 8);
      uVar30 = uVar30 >> ((ulong)uVar12 & 0x3f);
      *(uint *)((long)puVar33 + 6) =
           (uint)(((ulong)(uVar8 >> 8) | ((ulong)uVar8 & 0xff00ff00ff00ff) << 8) << 0x10) |
           uVar9 & 0xffffff00 | (uint)(uVar10 >> 8);
      uVar5 = *(ushort *)(param_2 + (uVar32 & 0x7ff) * 2);
      uVar27 = uVar27 >> ((ulong)uVar2 & 0x3f);
      uVar6 = *(ushort *)(param_2 + (uVar27 & 0x7ff) * 2);
      uVar25 = uVar25 >> ((ulong)uVar3 & 0x3f);
      uVar7 = *(ushort *)(param_2 + (uVar30 & 0x7ff) * 2);
      uVar24 = uVar24 >> ((ulong)uVar13 & 0x3f);
      uVar21 = uVar21 >> ((ulong)uVar4 & 0x3f);
      uVar8 = *(ushort *)(param_2 + (uVar25 & 0x7ff) * 2);
      uVar9 = *(ushort *)(param_2 + (uVar24 & 0x7ff) * 2);
      *(uint *)((long)puVar34 + 6) =
           (uint)(((ulong)(uVar11 >> 8) | ((ulong)uVar11 & 0xff00ff00ff00ff) << 8) << 0x10) |
           uVar12 & 0xffffff00 | (uint)(uVar2 >> 8);
      uVar2 = *(ushort *)(param_2 + (uVar21 & 0x7ff) * 2);
      uVar32 = uVar32 >> ((ulong)uVar5 & 0x3f);
      uVar27 = uVar27 >> ((ulong)uVar6 & 0x3f);
      uVar30 = uVar30 >> ((ulong)uVar7 & 0x3f);
      *(uint *)((long)puVar33 + 9) =
           (uint)(((ulong)(uVar3 >> 8) | ((ulong)uVar3 & 0xff00ff00ff00ff) << 8) << 0x10) |
           uVar4 & 0xffffff00 | (uint)(uVar13 >> 8);
      uVar3 = *(ushort *)(param_2 + (uVar32 & 0x7ff) * 2);
      uVar4 = *(ushort *)(param_2 + (uVar27 & 0x7ff) * 2);
      uVar24 = uVar24 >> ((ulong)uVar9 & 0x3f);
      uVar10 = *(ushort *)(param_2 + (uVar30 & 0x7ff) * 2);
      uVar25 = uVar25 >> ((ulong)uVar8 & 0x3f);
      *(uint *)((long)puVar34 + 9) =
           (uint)(((ulong)(uVar5 >> 8) | ((ulong)uVar5 & 0xff00ff00ff00ff) << 8) << 0x10) |
           uVar7 & 0xffffff00 | (uint)(uVar6 >> 8);
      uVar21 = uVar21 >> ((ulong)uVar2 & 0x3f);
      uVar5 = *(ushort *)(param_2 + (uVar24 & 0x7ff) * 2);
      uVar6 = *(ushort *)(param_2 + (uVar25 & 0x7ff) * 2);
      uVar27 = uVar27 >> ((ulong)uVar4 & 0x3f);
      uVar7 = *(ushort *)(param_2 + (uVar21 & 0x7ff) * 2);
      uVar32 = uVar32 >> ((ulong)uVar3 & 0x3f);
      uVar30 = uVar30 >> ((ulong)uVar10 & 0x3f);
      uVar11 = *(ushort *)(param_2 + (uVar27 & 0x7ff) * 2);
      uVar12 = *(ushort *)(param_2 + (uVar32 & 0x7ff) * 2);
      uVar13 = *(ushort *)(param_2 + (uVar30 & 0x7ff) * 2);
      uVar18 = LZCOUNT(uVar24) + (ulong)(byte)uVar5;
      uVar24 = LZCOUNT(uVar25) + (ulong)(byte)uVar6;
      puVar33[3] = (uint)(((ulong)(uVar8 >> 8) | ((ulong)uVar8 & 0xff00ff00ff00ff) << 8) << 0x10) |
                   uVar2 & 0xffffff00 | (uint)(uVar9 >> 8);
      uVar21 = LZCOUNT(uVar21) + (ulong)(byte)uVar7;
      puVar23 = (ulong *)((long)puVar23 + (uVar18 >> 3));
      uVar27 = LZCOUNT(uVar27) + (ulong)(byte)uVar11;
      puVar22 = (ulong *)((long)puVar22 + (uVar24 >> 3));
      uVar32 = LZCOUNT(uVar32) + (ulong)(byte)uVar12;
      puVar19 = (ulong *)((long)puVar19 - (uVar21 >> 3));
      puVar34[3] = (uint)(((ulong)(uVar3 >> 8) | ((ulong)uVar3 & 0xff00ff00ff00ff) << 8) << 0x10) |
                   uVar10 & 0xffffff00 | (uint)(uVar4 >> 8);
      uVar30 = LZCOUNT(uVar30) + (ulong)(byte)uVar13;
      bVar1 = 0xe < lVar36;
      puVar26 = (ulong *)((long)puVar26 + (uVar27 >> 3));
      puVar31 = (ulong *)((long)puVar31 + (uVar32 >> 3));
      puVar28 = (ulong *)((long)puVar28 - (uVar30 >> 3));
      *(uint *)((long)puVar33 + 0xf) =
           ((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8) << 0x10 | uVar7 & 0xffffff00 |
           (uint)(uVar5 >> 8);
      *(uint *)((long)puVar34 + 0xf) =
           ((uint)(uVar12 >> 8) | (uVar12 & 0xff00ff) << 8) << 0x10 | uVar13 & 0xffffff00 |
           (uint)(uVar11 >> 8);
      puVar14 = (uint *)((long)puVar33 + 0xf);
      puVar15 = (uint *)((long)puVar34 + 0xf);
      lVar36 = lVar36 + -0xf;
    } while (((((bVar16 && bVar1) && puVar23 <= puVar22) && puVar22 <= puVar19) && puVar26 < puVar31
             || (((bVar16 && bVar1) && puVar23 <= puVar22) && puVar22 <= puVar19) &&
                puVar26 == puVar31) && puVar31 < puVar28 ||
             ((((bVar16 && bVar1) && puVar23 <= puVar22) && puVar22 <= puVar19) && puVar26 < puVar31
             || (((bVar16 && bVar1) && puVar23 <= puVar22) && puVar22 <= puVar19) &&
                puVar26 == puVar31) && puVar31 == puVar28);
    *param_1 = (long)puVar33 + 0x12;
    param_1[1] = (long)puVar34 + 0x12;
    puVar20 = puVar19 + 1;
    puVar29 = puVar28 + 1;
    uVar18 = uVar18 & 7;
    uVar21 = uVar21 & 7;
    uVar24 = uVar24 & 7;
    uVar27 = uVar27 & 7;
    uVar30 = uVar30 & 7;
    uVar32 = uVar32 & 7;
    if ((((puVar22 < puVar23) || (puVar20 < puVar22)) ||
        ((puVar31 < puVar26 || ((puVar29 < puVar31 || (puVar20 == puVar22 && uVar21 + uVar24 != 0)))
         ))) || (puVar29 == puVar31 && uVar30 + uVar32 != 0)) {
      return 0;
    }
    puVar17 = puVar23;
    if (uVar18 != 0) {
      puVar17 = (ulong *)((long)puVar23 + 1);
      *(uint *)(param_1 + 0xc) = (uint)(byte)((byte)*puVar23 >> uVar18);
      *(int *)(param_1 + 0xf) = 8 - (int)uVar18;
    }
    param_1[6] = (long)puVar17;
    if (uVar21 != 0) {
      puVar20 = (ulong *)((long)puVar19 + 7);
      *(uint *)((long)param_1 + 100) = (uint)(*(byte *)puVar20 >> uVar21);
      *(int *)((long)param_1 + 0x7c) = 8 - (int)uVar21;
    }
    param_1[7] = (long)puVar20;
    puVar23 = puVar22;
    if (uVar24 != 0) {
      puVar23 = (ulong *)((long)puVar22 + 1);
      *(uint *)(param_1 + 0xd) = (uint)(byte)((byte)*puVar22 >> uVar24);
      *(int *)(param_1 + 0x10) = 8 - (int)uVar24;
    }
    param_1[8] = (long)puVar23;
    puVar23 = puVar26;
    if (uVar27 != 0) {
      puVar23 = (ulong *)((long)puVar26 + 1);
      *(uint *)((long)param_1 + 0x6c) = (uint)(byte)((byte)*puVar26 >> uVar27);
      *(int *)((long)param_1 + 0x84) = 8 - (int)uVar27;
    }
    param_1[9] = (long)puVar23;
    if (uVar30 != 0) {
      puVar29 = (ulong *)((long)puVar28 + 7);
      *(uint *)(param_1 + 0xe) = (uint)(*(byte *)puVar29 >> uVar30);
      *(int *)(param_1 + 0x11) = 8 - (int)uVar30;
    }
    param_1[10] = (long)puVar29;
    puVar23 = puVar31;
    if (uVar32 != 0) {
      puVar23 = (ulong *)((long)puVar31 + 1);
      *(uint *)((long)param_1 + 0x74) = (uint)(byte)((byte)*puVar31 >> uVar32);
      *(int *)((long)param_1 + 0x8c) = 8 - (int)uVar32;
    }
    param_1[0xb] = (long)puVar23;
  }
  return 1;
}


