/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0017e600; name: FUN_0017e600
 */


undefined8 FUN_0017e600(long *param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  
  uVar6 = param_1[2] - param_1[1];
  if (9 < uVar6) {
    puVar7 = (ulong *)param_1[3];
    lVar13 = param_1[4];
    if (0xe < (ulong)(lVar13 - (long)puVar7)) {
      puVar12 = (ulong *)(lVar13 + -0xf);
      lVar4 = *param_1;
      puVar5 = (undefined1 *)(param_1[1] + -1);
      uVar9 = (ulong)*(uint *)(param_1 + 7);
      uVar10 = (ulong)*(uint *)((long)param_1 + 0x3c);
      uVar22 = (ulong)*(uint *)(param_1 + 8);
      uVar15 = (ulong)*(uint *)((long)param_1 + 0x44);
      uVar27 = (ulong)*(uint *)(param_1 + 9);
      uVar2 = -(int)param_1[6];
      if (uVar2 != 0) {
        puVar7 = (ulong *)((long)puVar7 - 1);
        uVar2 = uVar2 + 8;
      }
      uVar8 = (*puVar7 | 0x8000000000000000) >> ((ulong)uVar2 & 0x3f);
      uVar2 = -*(int *)((long)param_1 + 0x34);
      if (uVar2 != 0) {
        puVar12 = (ulong *)(lVar13 + -0xe);
        uVar2 = uVar2 + 8;
      }
      uVar18 = *(ulong *)(lVar4 + uVar9 * 8);
      uVar20 = *(ulong *)(lVar4 + uVar10 * 8);
      uVar23 = *(ulong *)(lVar4 + uVar22 * 8);
      uVar25 = *(ulong *)(lVar4 + uVar15 * 8);
      uVar14 = (*(ulong *)((long)puVar12 + 7) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)((long)puVar12 + 7) & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar28 = *(ulong *)(lVar4 + uVar27 * 8);
      uVar14 = (uVar14 >> 0x20 | uVar14 << 0x20 | 0x8000000000000000) >> ((ulong)uVar2 & 0x3f);
      lVar13 = uVar6 - 9;
      if (puVar7 <= puVar12) {
        do {
          Hint_Prefetch(puVar12 + -0x10,0,0,1);
          uVar6 = uVar8 >> (uVar18 >> 0x20 & 0x3f);
          uVar9 = uVar6 >> (uVar20 >> 0x20 & 0x3f);
          Hint_Prefetch((long)puVar7 + 0x87,0,0,1);
          uVar19 = *(ulong *)(lVar4 + ((ulong)((uint)uVar8 & (uint)uVar18) + (uVar18 >> 0x30)) * 8);
          uVar10 = uVar9 >> (uVar23 >> 0x20 & 0x3f);
          uVar21 = *(ulong *)(lVar4 + ((ulong)((uint)uVar6 & (uint)uVar20) + (uVar20 >> 0x30)) * 8);
          uVar6 = uVar10 >> (uVar25 >> 0x20 & 0x3f);
          uVar24 = *(ulong *)(lVar4 + ((ulong)((uint)uVar9 & (uint)uVar23) + (uVar23 >> 0x30)) * 8);
          uVar26 = *(ulong *)(lVar4 + ((ulong)((uint)uVar10 & (uint)uVar25) + (uVar25 >> 0x30)) * 8)
          ;
          puVar5[1] = (char)(uVar18 >> 0x28);
          uVar29 = *(ulong *)(lVar4 + ((ulong)((uint)uVar6 & (uint)uVar28) + (uVar28 >> 0x30)) * 8);
          uVar10 = uVar14 >> (uVar19 >> 0x20 & 0x3f);
          puVar5[2] = (char)(uVar20 >> 0x28);
          uVar9 = (ulong)((uint)uVar14 & (uint)uVar19) + (uVar19 >> 0x30);
          puVar5[3] = (char)(uVar23 >> 0x28);
          uVar18 = *(ulong *)(lVar4 + uVar9 * 8);
          uVar15 = uVar10 >> (uVar21 >> 0x20 & 0x3f);
          puVar5[4] = (char)(uVar25 >> 0x28);
          uVar10 = (ulong)((uint)uVar10 & (uint)uVar21) + (uVar21 >> 0x30);
          uVar22 = (ulong)((uint)uVar15 & (uint)uVar24) + (uVar24 >> 0x30);
          uVar20 = *(ulong *)(lVar4 + uVar10 * 8);
          uVar15 = uVar15 >> (uVar24 >> 0x20 & 0x3f);
          puVar5[5] = (char)(uVar28 >> 0x28);
          uVar23 = *(ulong *)(lVar4 + uVar22 * 8);
          uVar27 = uVar15 >> (uVar26 >> 0x20 & 0x3f);
          uVar6 = LZCOUNT(uVar6 >> (uVar28 >> 0x20 & 0x3f));
          uVar15 = (ulong)((uint)uVar15 & (uint)uVar26) + (uVar26 >> 0x30);
          puVar7 = (ulong *)((long)puVar7 + (uVar6 >> 3));
          uVar25 = *(ulong *)(lVar4 + uVar15 * 8);
          uVar14 = LZCOUNT(uVar27 >> (uVar29 >> 0x20 & 0x3f));
          uVar27 = (ulong)((uint)uVar27 & (uint)uVar29) + (uVar29 >> 0x30);
          uVar8 = *puVar7;
          puVar12 = (ulong *)((long)puVar12 - (uVar14 >> 3));
          uVar28 = *(ulong *)(lVar4 + uVar27 * 8);
          uVar17 = *(ulong *)((long)puVar12 + 7);
          puVar5[6] = (char)(uVar19 >> 0x28);
          lVar3 = lVar13 + -10;
          puVar5[7] = (char)(uVar21 >> 0x28);
          uVar8 = (uVar8 | 0x8000000000000000) >> (uVar6 & 7);
          bVar1 = 9 < lVar13;
          puVar5[8] = (char)(uVar24 >> 0x28);
          uVar6 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          puVar5[9] = (char)(uVar26 >> 0x28);
          puVar5 = puVar5 + 10;
          *puVar5 = (char)(uVar29 >> 0x28);
          uVar14 = (uVar6 >> 0x20 | uVar6 << 0x20 | 0x8000000000000000) >> (uVar14 & 7);
          lVar13 = lVar3;
        } while ((lVar3 != 0 && bVar1) && puVar7 <= puVar12);
      }
      iVar11 = (int)LZCOUNT(uVar8);
      param_1[1] = (long)(puVar5 + 1);
      lVar13 = (long)puVar12 + 0xf;
      *(int *)(param_1 + 7) = (int)uVar9;
      *(int *)((long)param_1 + 0x3c) = (int)uVar10;
      *(int *)(param_1 + 8) = (int)uVar22;
      *(int *)((long)param_1 + 0x44) = (int)uVar15;
      *(int *)(param_1 + 9) = (int)uVar27;
      if (LZCOUNT(uVar8) != 0) {
        puVar7 = (ulong *)((long)puVar7 + 1);
        iVar11 = 8 - iVar11;
      }
      iVar16 = (int)LZCOUNT(uVar14);
      if (LZCOUNT(uVar14) != 0) {
        lVar13 = (long)puVar12 + 0xe;
        iVar16 = 8 - iVar16;
      }
      *(int *)(param_1 + 5) = (int)uVar8;
      *(int *)((long)param_1 + 0x2c) = (int)uVar14;
      param_1[3] = (long)puVar7;
      param_1[4] = lVar13;
      *(int *)(param_1 + 6) = iVar11;
      *(int *)((long)param_1 + 0x34) = iVar16;
    }
  }
  return 1;
}


