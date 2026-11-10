/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00179ad0; name: FUN_00179ad0
 */


undefined8 FUN_00179ad0(long *param_1,long param_2)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  long lVar8;
  uint *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  uint *puVar18;
  ulong uVar19;
  long lVar20;
  
  uVar11 = 0;
  uVar14 = 0;
  uVar17 = 0;
  puVar16 = (ulong *)param_1[6];
  puVar15 = (ulong *)param_1[8];
  uVar19 = param_1[2] - *param_1;
  if ((0xf < uVar19) && (8 < (ulong)(param_1[7] - (long)puVar15))) {
    puVar12 = (ulong *)(param_1[7] + -8);
    puVar9 = (uint *)(*param_1 + -3);
    lVar20 = uVar19 - 0xf;
    do {
      puVar18 = puVar9;
      lVar8 = lVar20 + -0xf;
      Hint_Prefetch((byte *)((long)puVar16 + 0x27),0,0,1);
      uVar19 = (*puVar12 & 0xff00ff00ff00ff00) >> 8 | (*puVar12 & 0xff00ff00ff00ff) << 8;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
      Hint_Prefetch((byte *)((long)puVar15 + 0x27),0,0,1);
      Hint_Prefetch(puVar12 + -4,0,0,1);
      uVar17 = (*puVar15 | 0x8000000000000000) >> (uVar17 & 7);
      uVar14 = (uVar19 >> 0x20 | uVar19 << 0x20 | 0x8000000000000000) >> (uVar14 & 7);
      uVar11 = (*puVar16 | 0x8000000000000000) >> (uVar11 & 7);
      uVar2 = *(ushort *)(param_2 + (uVar17 & 0x7ff) * 2);
      uVar3 = *(ushort *)(param_2 + (uVar14 & 0x7ff) * 2);
      uVar4 = *(ushort *)(param_2 + (uVar11 & 0x7ff) * 2);
      uVar17 = uVar17 >> ((ulong)uVar2 & 0x3f);
      uVar5 = *(ushort *)(param_2 + (uVar17 & 0x7ff) * 2);
      uVar14 = uVar14 >> ((ulong)uVar3 & 0x3f);
      uVar11 = uVar11 >> ((ulong)uVar4 & 0x3f);
      uVar6 = *(ushort *)(param_2 + (uVar14 & 0x7ff) * 2);
      uVar7 = *(ushort *)(param_2 + (uVar11 & 0x7ff) * 2);
      *(uint *)((long)puVar18 + 3) =
           (uint)(((ulong)(uVar2 >> 8) | ((ulong)uVar2 & 0xff00ff00ff00ff) << 8) << 0x10) |
           uVar3 & 0xffffff00 | (uint)(uVar4 >> 8);
      uVar17 = uVar17 >> ((ulong)uVar5 & 0x3f);
      uVar2 = *(ushort *)(param_2 + (uVar17 & 0x7ff) * 2);
      uVar14 = uVar14 >> ((ulong)uVar6 & 0x3f);
      uVar11 = uVar11 >> ((ulong)uVar7 & 0x3f);
      uVar3 = *(ushort *)(param_2 + (uVar14 & 0x7ff) * 2);
      uVar4 = *(ushort *)(param_2 + (uVar11 & 0x7ff) * 2);
      *(uint *)((long)puVar18 + 6) =
           (uint)(((ulong)(uVar5 >> 8) | ((ulong)uVar5 & 0xff00ff00ff00ff) << 8) << 0x10) |
           uVar6 & 0xffffff00 | (uint)(uVar7 >> 8);
      uVar17 = uVar17 >> ((ulong)uVar2 & 0x3f);
      uVar5 = *(ushort *)(param_2 + (uVar17 & 0x7ff) * 2);
      uVar14 = uVar14 >> ((ulong)uVar3 & 0x3f);
      uVar11 = uVar11 >> ((ulong)uVar4 & 0x3f);
      uVar6 = *(ushort *)(param_2 + (uVar14 & 0x7ff) * 2);
      uVar7 = *(ushort *)(param_2 + (uVar11 & 0x7ff) * 2);
      *(uint *)((long)puVar18 + 9) =
           (uint)(((ulong)(uVar2 >> 8) | ((ulong)uVar2 & 0xff00ff00ff00ff) << 8) << 0x10) |
           uVar3 & 0xffffff00 | (uint)(uVar4 >> 8);
      uVar17 = uVar17 >> ((ulong)uVar5 & 0x3f);
      uVar2 = *(ushort *)(param_2 + (uVar17 & 0x7ff) * 2);
      uVar14 = uVar14 >> ((ulong)uVar6 & 0x3f);
      uVar11 = uVar11 >> ((ulong)uVar7 & 0x3f);
      uVar3 = *(ushort *)(param_2 + (uVar14 & 0x7ff) * 2);
      uVar4 = *(ushort *)(param_2 + (uVar11 & 0x7ff) * 2);
      puVar18[3] = (uint)(((ulong)(uVar5 >> 8) | ((ulong)uVar5 & 0xff00ff00ff00ff) << 8) << 0x10) |
                   uVar6 & 0xffffff00 | (uint)(uVar7 >> 8);
      uVar17 = LZCOUNT(uVar17) + (ulong)(byte)uVar2;
      uVar14 = LZCOUNT(uVar14) + (ulong)(byte)uVar3;
      puVar15 = (ulong *)((long)puVar15 + (uVar17 >> 3));
      uVar11 = LZCOUNT(uVar11) + (ulong)(byte)uVar4;
      puVar12 = (ulong *)((long)puVar12 - (uVar14 >> 3));
      puVar16 = (ulong *)((long)puVar16 + (uVar11 >> 3));
      *(uint *)((long)puVar18 + 0xf) =
           ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8) << 0x10 | uVar3 & 0xffffff00 |
           (uint)(uVar4 >> 8);
      bVar1 = 0xe < lVar20;
      puVar9 = (uint *)((long)puVar18 + 0xf);
      lVar20 = lVar8;
    } while (((lVar8 != 0 && bVar1) && puVar16 <= puVar15) && puVar15 <= puVar12);
    puVar13 = puVar12 + 1;
    *param_1 = (long)puVar18 + 0x12;
    uVar11 = uVar11 & 7;
    uVar14 = uVar14 & 7;
    uVar17 = uVar17 & 7;
    if (((puVar15 < puVar16) || (puVar13 < puVar15)) || (puVar13 == puVar15 && uVar14 + uVar17 != 0)
       ) {
      return 0;
    }
    puVar10 = puVar16;
    if (uVar11 != 0) {
      puVar10 = (ulong *)((long)puVar16 + 1);
      *(uint *)(param_1 + 0xc) = (uint)(byte)((byte)*puVar16 >> uVar11);
      *(int *)(param_1 + 0xf) = 8 - (int)uVar11;
    }
    param_1[6] = (long)puVar10;
    if (uVar14 != 0) {
      puVar13 = (ulong *)((long)puVar12 + 7);
      *(uint *)((long)param_1 + 100) = (uint)(*(byte *)puVar13 >> uVar14);
      *(int *)((long)param_1 + 0x7c) = 8 - (int)uVar14;
    }
    param_1[7] = (long)puVar13;
    puVar16 = puVar15;
    if (uVar17 != 0) {
      puVar16 = (ulong *)((long)puVar15 + 1);
      *(uint *)(param_1 + 0xd) = (uint)(byte)((byte)*puVar15 >> uVar17);
      *(int *)(param_1 + 0x10) = 8 - (int)uVar17;
    }
    param_1[8] = (long)puVar16;
  }
  return 1;
}


