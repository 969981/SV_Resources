/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001798b0; name: FUN_001798b0
 */


void FUN_001798b0(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong *puVar30;
  ulong uVar31;
  
  uVar21 = (ulong)(uint)param_1[9];
  uVar25 = (ulong)*(uint *)((long)param_1 + 0x4c);
  puVar19 = (ulong *)*param_1;
  uVar3 = param_1[1];
  uVar1 = param_1[2];
  puVar22 = (ulong *)param_1[3];
  uVar29 = (ulong)(uint)param_1[10];
  uVar26 = param_1[4];
  puVar30 = (ulong *)param_1[5];
  uVar20 = param_1[6] | 1L << (uVar21 & 0x3f);
  uVar23 = 0;
  uVar24 = param_1[7] | 1L << (uVar25 & 0x3f);
  uVar27 = 0;
  uVar28 = param_1[8] | 1L << (uVar29 & 0x3f);
  uVar31 = 0;
  do {
    uVar2 = *puVar19;
    uVar4 = puVar19[1];
    uVar26 = uVar26 - (uVar27 >> 3);
    puVar22 = (ulong *)((long)puVar22 + (uVar23 >> 3));
    puVar30 = (ulong *)((long)puVar30 + (uVar31 >> 3));
    puVar19 = (ulong *)((long)puVar19 + 0xf);
    uVar5 = *(uint *)(uVar1 + (uVar4 >> 0x20 & 0xff) * 4);
    uVar6 = *(uint *)(uVar1 + (uVar4 >> 0x30 & 0xff) * 4);
    uVar7 = *(uint *)(uVar1 + (uVar4 >> 0x10 & 0xff) * 4);
    uVar8 = *(uint *)(uVar1 + (uVar4 >> 8 & 0xff) * 4);
    uVar9 = *(uint *)(uVar1 + (uVar4 >> 0x18 & 0xff) * 4);
    uVar10 = *(uint *)(uVar1 + (uVar2 >> 0x38) * 4);
    uVar11 = *(uint *)(uVar1 + (uVar2 >> 0x30 & 0xff) * 4);
    uVar12 = *(uint *)(uVar1 + (uVar4 & 0xff) * 4);
    uVar13 = *(uint *)(uVar1 + (uVar2 >> 0x20 & 0xff) * 4);
    uVar14 = *(uint *)(uVar1 + (uVar2 >> 0x18 & 0xff) * 4);
    uVar15 = *(uint *)(uVar1 + (uVar2 >> 0x28 & 0xff) * 4);
    uVar16 = *(uint *)(uVar1 + (uVar2 >> 8 & 0xff) * 4);
    uVar17 = *(uint *)(uVar1 + (uVar2 & 0xff) * 4);
    uVar18 = *(uint *)(uVar1 + (uVar2 >> 0x10 & 0xff) * 4);
    uVar24 = ((((((ulong)(*(uint *)(uVar1 + (uVar4 >> 0x28 & 0xff) * 4) >> 8) <<
                 ((ulong)uVar7 & 0x3f)) + (ulong)(uVar7 >> 8) << ((ulong)uVar10 & 0x3f)) +
                (ulong)(uVar10 >> 8) << ((ulong)uVar13 & 0x3f)) + (ulong)(uVar13 >> 8) <<
              ((ulong)uVar16 & 0x3f)) + (ulong)(uVar16 >> 8) << (uVar25 & 0x3f)) +
             (uVar24 >> uVar27);
    uVar25 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
    uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
    *(ulong *)(uVar26 - 8) = uVar25 >> 0x20 | uVar25 << 0x20;
    uVar20 = ((((((ulong)(uVar5 >> 8) << ((ulong)uVar8 & 0x3f)) + (ulong)(uVar8 >> 8) <<
                ((ulong)uVar11 & 0x3f)) + (ulong)(uVar11 >> 8) << ((ulong)uVar14 & 0x3f)) +
               (ulong)(uVar14 >> 8) << ((ulong)uVar17 & 0x3f)) + (ulong)(uVar17 >> 8) <<
             (uVar21 & 0x3f)) + (uVar20 >> uVar23);
    uVar28 = ((((((ulong)(uVar6 >> 8) << ((ulong)uVar9 & 0x3f)) + (ulong)(uVar9 >> 8) <<
                ((ulong)uVar12 & 0x3f)) + (ulong)(uVar12 >> 8) << ((ulong)uVar15 & 0x3f)) +
               (ulong)(uVar15 >> 8) << ((ulong)uVar18 & 0x3f)) + (ulong)(uVar18 >> 8) <<
             (uVar29 & 0x3f)) + (uVar28 >> uVar31);
    uVar25 = (LZCOUNT(uVar24) ^ 0xffffffffffffffffU) & 7;
    uVar27 = (LZCOUNT(uVar24) ^ 0xffffffffffffffffU) & 0x38;
    uVar21 = (LZCOUNT(uVar20) ^ 0xffffffffffffffffU) & 7;
    uVar23 = (LZCOUNT(uVar20) ^ 0xffffffffffffffffU) & 0x38;
    uVar29 = (LZCOUNT(uVar28) ^ 0xffffffffffffffffU) & 7;
    uVar31 = (LZCOUNT(uVar28) ^ 0xffffffffffffffffU) & 0x38;
    *puVar22 = uVar20;
    *puVar30 = uVar28;
  } while (puVar19 <= (ulong *)(uVar3 - 0x10));
  *param_1 = (ulong)puVar19;
  param_1[3] = (long)puVar22 + (uVar23 >> 3);
  param_1[4] = uVar26 - (uVar27 >> 3);
  param_1[5] = (long)puVar30 + (uVar31 >> 3);
  param_1[6] = uVar20 >> uVar23 & (1L << uVar21 ^ 0xffffffffffffffffU);
  param_1[7] = uVar24 >> uVar27 & (1L << uVar25 ^ 0xffffffffffffffffU);
  param_1[8] = uVar28 >> uVar31 & (1L << uVar29 ^ 0xffffffffffffffffU);
  *(int *)(param_1 + 9) = (int)uVar21;
  *(int *)((long)param_1 + 0x4c) = (int)uVar25;
  *(int *)(param_1 + 10) = (int)uVar29;
  return;
}


