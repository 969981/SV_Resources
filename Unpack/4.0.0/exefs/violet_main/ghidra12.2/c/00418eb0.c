/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00418eb0; name: FUN_00418eb0
 */


void FUN_00418eb0(ushort *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  
  uVar28 = (ulong)(*(uint3 *)((long)param_1 + 0x2f) >> 2) & 0x1fffff;
  uVar22 = (ulong)(*(uint *)((long)param_1 + 0x31) >> 7) & 0x1fffff;
  uVar24 = (ulong)(*(uint *)(param_1 + 0x1a) >> 4) & 0x1fffff;
  lVar30 = ((ulong)(*(uint *)((long)param_1 + 0xf) >> 6) & 0x1fffff) + uVar28 * 0xa2c13;
  uVar1 = lVar30 + 0x100000;
  uVar25 = (ulong)(*(uint3 *)((long)param_1 + 0x37) >> 1) & 0x1fffff;
  uVar26 = (ulong)(*(uint *)((long)param_1 + 0x39) >> 6) & 0x1fffff;
  lVar21 = uVar28 * 0x72d18 +
           (((ulong)(byte)param_1[9] & 0xf8 | (ulong)*(byte *)((long)param_1 + 0x13) << 8 |
            (ulong)(byte)param_1[10] << 0x10) >> 3) + (uVar1 >> 0x15) + uVar22 * 0xa2c13;
  uVar27 = ((ulong)(byte)param_1[0x1e] & 0xf8 | (ulong)*(byte *)((long)param_1 + 0x3d) << 8 |
            (ulong)(byte)param_1[0x1f] << 0x10 | (ulong)*(byte *)((long)param_1 + 0x3f) << 0x18) >>
           3;
  lVar13 = ((ulong)(*(uint *)((long)param_1 + 0x1f) >> 4) & 0x1fffff) + uVar22 * -0xa6f7d +
           uVar24 * 0x215d1 + uVar25 * -0xf39ad + uVar26 * 0x9fb67 + uVar27 * 0x72d18;
  lVar17 = ((ulong)(*(uint *)(param_1 + 0x12) >> 6) & 0x1fffff) + uVar25 * -0xa6f7d +
           uVar26 * 0x215d1 + uVar27 * -0xf39ad;
  lVar29 = ((ulong)*(ushort *)((long)param_1 + 0x15) |
           ((ulong)*(byte *)((long)param_1 + 0x17) & 0x1f) << 0x10) + uVar28 * 0x9fb67 +
           uVar22 * 0x72d18 + uVar24 * 0xa2c13;
  uVar2 = lVar29 + 0x100000;
  lVar12 = ((ulong)param_1[0x15] | ((ulong)(byte)*(uint *)(param_1 + 0x16) & 0x1f) << 0x10) +
           uVar27 * -0xa6f7d;
  lVar31 = ((ulong)(*(uint3 *)(param_1 + 0xd) >> 2) & 0x1fffff) + uVar28 * 0x215d1 +
           uVar22 * -0xf39ad + uVar24 * 0x9fb67 + uVar25 * 0x72d18 + uVar26 * 0xa2c13;
  uVar3 = lVar13 + 0x100000;
  lVar14 = ((ulong)(*(uint3 *)(param_1 + 0x11) >> 1) & 0x1fffff) + uVar24 * -0xa6f7d +
           uVar25 * 0x215d1 + uVar26 * -0xf39ad + uVar27 * 0x9fb67 + ((long)uVar3 >> 0x15);
  uVar4 = lVar17 + 0x100000;
  lVar15 = uVar26 * -0xa6f7d +
           (((ulong)*(byte *)((long)param_1 + 0x27) & 0xf8 | (ulong)(byte)param_1[0x14] << 8 |
            (ulong)*(byte *)((long)param_1 + 0x29) << 0x10) >> 3) + uVar27 * 0x215d1 +
           ((long)uVar4 >> 0x15);
  uVar5 = lVar12 + 0x100000;
  lVar8 = ((ulong)(*(uint *)(param_1 + 0x16) >> 5) & 0x1fffff) + ((long)uVar5 >> 0x15);
  lVar9 = ((ulong)(*(uint *)((long)param_1 + 0x17) >> 5) & 0x1fffff) + uVar28 * -0xf39ad +
          uVar22 * 0x9fb67 + uVar24 * 0x72d18 + uVar25 * 0xa2c13 + (uVar2 >> 0x15);
  uVar6 = lVar21 + 0x100000;
  uVar7 = lVar31 + 0x100000;
  lVar10 = ((ulong)(*(uint *)(param_1 + 0xe) >> 7) & 0x1fffff) + uVar28 * -0xa6f7d +
           uVar22 * 0x215d1 + uVar24 * -0xf39ad + uVar25 * 0x9fb67 + uVar26 * 0x72d18 +
           uVar27 * 0xa2c13 + ((long)uVar7 >> 0x15);
  uVar22 = lVar9 + 0x100000;
  uVar24 = lVar10 + 0x100000;
  lVar13 = (lVar13 - (uVar3 & 0xffffffffffe00000)) + ((long)uVar24 >> 0x15);
  uVar3 = lVar14 + 0x100000;
  lVar17 = (lVar17 - (uVar4 & 0xffffffffffe00000)) + ((long)uVar3 >> 0x15);
  lVar14 = lVar14 - (uVar3 & 0xffffffffffe00000);
  uVar3 = lVar15 + 0x100000;
  lVar12 = (lVar12 - (uVar5 & 0xffffffffffe00000)) + ((long)uVar3 >> 0x15);
  lVar15 = lVar15 - (uVar3 & 0xffffffffffe00000);
  lVar11 = ((ulong)*param_1 | ((ulong)(byte)*(uint *)(param_1 + 1) & 0x1f) << 0x10) +
           lVar13 * 0xa2c13;
  lVar23 = ((lVar31 + ((long)uVar22 >> 0x15)) - (uVar7 & 0xffffffffffe00000)) + lVar8 * -0xa6f7d;
  lVar31 = ((lVar29 + (uVar6 >> 0x15)) - (uVar2 & 0x1fffffe00000)) + lVar8 * -0xf39ad +
           lVar12 * 0x215d1 + lVar15 * -0xa6f7d;
  uVar2 = lVar11 + 0x100000;
  lVar29 = ((ulong)(*(uint *)(param_1 + 1) >> 5) & 0x1fffff) + lVar13 * 0x72d18 + lVar14 * 0xa2c13 +
           ((long)uVar2 >> 0x15);
  lVar16 = (lVar30 - (uVar1 & 0x7ffffe00000)) + lVar8 * 0x72d18 + lVar12 * 0x9fb67 +
           lVar15 * -0xf39ad + lVar17 * 0x215d1 + lVar14 * -0xa6f7d;
  uVar1 = lVar23 + 0x100000;
  lVar10 = (lVar10 - (uVar24 & 0xffffffffffe00000)) + ((long)uVar1 >> 0x15);
  lVar19 = ((ulong)(*(uint3 *)((long)param_1 + 5) >> 2) & 0x1fffff) + lVar13 * 0x9fb67 +
           lVar17 * 0xa2c13 + lVar14 * 0x72d18;
  lVar20 = ((ulong)(*(uint *)(param_1 + 5) >> 4) & 0x1fffff) + lVar12 * 0xa2c13 + lVar15 * 0x72d18 +
           lVar13 * 0x215d1 + lVar17 * 0x9fb67 + lVar14 * -0xf39ad;
  uVar3 = lVar29 + 0x100000;
  uVar4 = lVar16 + 0x100000;
  lVar21 = (lVar21 - (uVar6 & 0xffffffffffe00000)) + lVar8 * 0x9fb67 + lVar12 * -0xf39ad +
           lVar15 * 0x215d1 + lVar17 * -0xa6f7d + ((long)uVar4 >> 0x15);
  uVar5 = lVar31 + 0x100000;
  lVar9 = (lVar9 - (uVar22 & 0xffffffffffe00000)) + lVar8 * 0x215d1 + lVar12 * -0xa6f7d +
          ((long)uVar5 >> 0x15);
  uVar6 = lVar21 + 0x100000;
  uVar7 = lVar9 + 0x100000;
  uVar22 = lVar19 + 0x100000;
  lVar30 = ((ulong)(*(uint *)((long)param_1 + 7) >> 7) & 0x1fffff) + lVar15 * 0xa2c13 +
           lVar13 * -0xf39ad + lVar17 * 0x72d18 + lVar14 * 0x9fb67 + ((long)uVar22 >> 0x15);
  uVar24 = lVar10 + 0x100000;
  lVar18 = (long)uVar24 >> 0x15;
  uVar25 = lVar30 + 0x100000;
  uVar26 = lVar20 + 0x100000;
  uVar28 = (lVar11 - (uVar2 & 0xffffffffffe00000)) + lVar18 * 0xa2c13;
  lVar14 = ((ulong)(*(uint3 *)((long)param_1 + 0xd) >> 1) & 0x1fffff) + lVar8 * 0xa2c13 +
           lVar12 * 0x72d18 + lVar15 * 0x9fb67 + lVar13 * -0xa6f7d + lVar17 * -0xf39ad +
           lVar14 * 0x215d1 + ((long)uVar26 >> 0x15);
  uVar2 = lVar14 + 0x100000;
  uVar27 = ((lVar29 + lVar18 * 0x72d18) - (uVar3 & 0xffffffffffe00000)) + ((long)uVar28 >> 0x15);
  uVar3 = ((lVar19 + lVar18 * 0x9fb67) - (uVar22 & 0xffffffffffe00000)) + ((long)uVar3 >> 0x15) +
          ((long)uVar27 >> 0x15);
  uVar22 = ((lVar30 + lVar18 * -0xf39ad) - (uVar25 & 0xffffffffffe00000)) + ((long)uVar3 >> 0x15);
  uVar25 = ((lVar20 + lVar18 * 0x215d1) - (uVar26 & 0xffffffffffe00000)) + ((long)uVar25 >> 0x15) +
           ((long)uVar22 >> 0x15);
  uVar26 = ((lVar14 + lVar18 * -0xa6f7d) - (uVar2 & 0xffffffffffe00000)) + ((long)uVar25 >> 0x15);
  uVar2 = (lVar16 - (uVar4 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15) + ((long)uVar26 >> 0x15);
  uVar4 = (lVar21 - (uVar6 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  uVar5 = (lVar31 - (uVar5 & 0xffffffffffe00000)) + ((long)uVar6 >> 0x15) + ((long)uVar4 >> 0x15);
  uVar6 = (lVar9 - (uVar7 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15);
  uVar1 = (lVar23 - (uVar1 & 0xffffffffffe00000)) + ((long)uVar7 >> 0x15) + ((long)uVar6 >> 0x15);
  uVar7 = (lVar10 - (uVar24 & 0xffffffffffe00000)) + ((long)uVar1 >> 0x15);
  lVar14 = (long)uVar7 >> 0x15;
  lVar15 = (uVar28 & 0x1fffff) + lVar14 * 0xa2c13;
  *(char *)((long)param_1 + 1) = (char)((ulong)lVar15 >> 8);
  uVar24 = (uVar27 & 0x1fffff) + lVar14 * 0x72d18 + (lVar15 >> 0x15);
  *(char *)((long)param_1 + 3) = (char)(uVar24 >> 3);
  *(char *)(param_1 + 2) = (char)(uVar24 >> 0xb);
  uVar3 = (uVar3 & 0x1fffff) + lVar14 * 0x9fb67 + ((long)uVar24 >> 0x15);
  *(byte *)(param_1 + 1) =
       (byte)((ulong)lVar15 >> 0x10) & 0x1f | (byte)(((uint)uVar24 & 0x1fffff) << 5);
  *(byte *)((long)param_1 + 5) =
       (byte)((uint)uVar24 >> 0x13) & 3 | (byte)(((uint)uVar3 & 0x1fffff) << 2);
  *(char *)(param_1 + 3) = (char)(uVar3 >> 6);
  uVar22 = (uVar22 & 0x1fffff) + lVar14 * -0xf39ad + ((long)uVar3 >> 0x15);
  *(byte *)((long)param_1 + 7) =
       (byte)((uint)uVar3 >> 0xe) & 0x7f | (byte)(((uint)uVar22 & 0x1fffff) << 7);
  uVar3 = (uVar25 & 0x1fffff) + lVar14 * 0x215d1 + ((long)uVar22 >> 0x15);
  uVar24 = (uVar26 & 0x1fffff) + lVar14 * -0xa6f7d + ((long)uVar3 >> 0x15);
  *(char *)(param_1 + 4) = (char)(uVar22 >> 1);
  *(char *)((long)param_1 + 9) = (char)(uVar22 >> 9);
  *(byte *)(param_1 + 5) =
       (byte)((uint)uVar22 >> 0x11) & 0xf | (byte)(((uint)uVar3 & 0x1fffff) << 4);
  *(char *)((long)param_1 + 0xb) = (char)(uVar3 >> 4);
  *(char *)(param_1 + 6) = (char)(uVar3 >> 0xc);
  *(byte *)((long)param_1 + 0xd) =
       (byte)((uint)uVar3 >> 0x14) & 1 | (byte)(((uint)uVar24 & 0x1fffff) << 1);
  *(char *)(param_1 + 7) = (char)(uVar24 >> 7);
  uVar2 = (uVar2 & 0x1fffff) + ((long)uVar24 >> 0x15);
  *(byte *)((long)param_1 + 0xf) =
       (byte)((uint)uVar24 >> 0xf) & 0x3f | (byte)(((uint)uVar2 & 0x1fffff) << 6);
  *(char *)(param_1 + 8) = (char)(uVar2 >> 2);
  *(char *)((long)param_1 + 0x11) = (char)(uVar2 >> 10);
  uVar3 = (uVar4 & 0x1fffff) + ((long)uVar2 >> 0x15);
  *(byte *)(param_1 + 9) = (byte)((uint)uVar2 >> 0x12) & 7 | (byte)((int)uVar3 << 3);
  *(char *)((long)param_1 + 0x13) = (char)(uVar3 >> 5);
  lVar14 = (uVar5 & 0x1fffff) + ((long)uVar3 >> 0x15);
  *(char *)(param_1 + 0xb) = (char)((ulong)lVar14 >> 8);
  uVar2 = (uVar6 & 0x1fffff) + (lVar14 >> 0x15);
  *(char *)((long)param_1 + 0x15) = (char)lVar14;
  *(byte *)((long)param_1 + 0x17) =
       (byte)((ulong)lVar14 >> 0x10) & 0x1f | (byte)(((uint)uVar2 & 0x1fffff) << 5);
  *(char *)(param_1 + 0xc) = (char)(uVar2 >> 3);
  uVar1 = (uVar1 & 0x1fffff) + ((long)uVar2 >> 0x15);
  *(char *)((long)param_1 + 0x19) = (char)(uVar2 >> 0xb);
  uVar4 = (uVar7 & 0x1fffff) + ((long)uVar1 >> 0x15);
  *(byte *)(param_1 + 0xe) = (byte)((uint)uVar1 >> 0xe) & 0x7f | (byte)((int)uVar4 << 7);
  *(char *)((long)param_1 + 0x1d) = (char)(uVar4 >> 1);
  *(char *)param_1 = (char)lVar15;
  *(char *)(param_1 + 10) = (char)(uVar3 >> 0xd);
  *(byte *)(param_1 + 0xd) = (byte)((uint)uVar2 >> 0x13) & 3 | (byte)(((uint)uVar1 & 0x1fffff) << 2)
  ;
  *(char *)((long)param_1 + 0x1b) = (char)(uVar1 >> 6);
  *(char *)(param_1 + 0xf) = (char)(uVar4 >> 9);
  *(char *)((long)param_1 + 0x1f) = (char)(uVar4 >> 0x11);
  return;
}


