/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c11e0; name: FUN_001c11e0
 */


long FUN_001c11e0(ulong *param_1,long param_2,long param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  size_t __n;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  
  if (param_2 - (long)param_1 < 0x10) {
    return -1;
  }
  if (param_4 == 0) {
    return 0;
  }
  puVar6 = param_1;
  lVar16 = param_2;
  if ((int)param_4 < 1) {
    uVar10 = 0;
    uVar17 = 0;
    lVar11 = 0x3f;
    lVar18 = 0x3f;
  }
  else {
    uVar14 = 0;
    uVar17 = 0;
    uVar10 = 0;
    lVar18 = 0x3f;
    lVar11 = 0x3f;
    do {
      uVar4 = *(uint *)(param_3 + uVar14 * 4);
      iVar2 = (uVar4 >> 6) + 1;
      uVar9 = (ulong)(0x20 - (uint)LZCOUNT(iVar2));
      uVar3 = (uint)LZCOUNT(iVar2) ^ 0x1f;
      uVar8 = (ulong)uVar3;
      if ((uVar14 & 1) == 0) {
        lVar18 = lVar18 - uVar9;
        uVar9 = uVar17 << (uVar9 & 0x3f) | 1;
        uVar17 = uVar9 << (lVar18 + 1U & 0x3f);
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        *puVar6 = uVar17 >> 0x20 | uVar17 << 0x20;
        puVar6 = (ulong *)((long)puVar6 + ((long)(0x3fU - lVar18) >> 3));
        lVar18 = (0x3fU - lVar18 & 0xfffffffffffffff8) + lVar18;
        if (uVar3 != 0) {
          lVar18 = lVar18 - uVar8;
          uVar9 = uVar9 << uVar8 | (ulong)(uint)(iVar2 - (int)(1L << uVar8));
          uVar17 = uVar9 << (lVar18 + 1U & 0x3f);
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          *puVar6 = uVar17 >> 0x20 | uVar17 << 0x20;
          puVar6 = (ulong *)((long)puVar6 + ((long)(0x3fU - lVar18) >> 3));
          lVar18 = (0x3fU - lVar18 & 0xfffffffffffffff8) + lVar18;
        }
        uVar17 = (ulong)uVar4 & 0x3f | uVar9 << 6;
        uVar8 = uVar17 << (lVar18 - 5U & 0x3f);
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        *puVar6 = uVar8 >> 0x20 | uVar8 << 0x20;
        puVar6 = (ulong *)((long)puVar6 + ((long)(0x45U - lVar18) >> 3));
        lVar18 = lVar18 + (0x45U - lVar18 & 0xfffffffffffffff8) + -6;
        lVar7 = lVar16 - (long)puVar6;
      }
      else {
        lVar11 = lVar11 - uVar9;
        uVar10 = uVar10 << (uVar9 & 0x3f) | 1;
        *(ulong *)(lVar16 + -8) = uVar10 << (lVar11 + 1U & 0x3f);
        lVar16 = lVar16 - ((long)(0x3fU - lVar11) >> 3);
        lVar11 = (0x3fU - lVar11 & 0xfffffffffffffff8) + lVar11;
        if (uVar3 != 0) {
          uVar10 = uVar10 << uVar8 | (ulong)(uint)(iVar2 - (int)(1L << uVar8));
          lVar11 = lVar11 - uVar8;
          *(ulong *)(lVar16 + -8) = uVar10 << (lVar11 + 1U & 0x3f);
          lVar16 = lVar16 - ((long)(0x3fU - lVar11) >> 3);
          lVar11 = (0x3fU - lVar11 & 0xfffffffffffffff8) + lVar11;
        }
        uVar10 = (ulong)(uVar4 & 0x3f) | uVar10 << 6;
        *(ulong *)(lVar16 + -8) = uVar10 << (lVar11 - 5U & 0x3f);
        lVar16 = lVar16 - ((long)(0x45U - lVar11) >> 3);
        lVar11 = lVar11 + (0x45U - lVar11 & 0xfffffffffffffff8) + -6;
        lVar7 = lVar16 - (long)puVar6;
      }
      if (lVar7 < 9) {
        return -1;
      }
      uVar14 = uVar14 + 1;
    } while (param_4 != uVar14);
  }
  uVar14 = uVar17 << (lVar18 + 1U & 0x3f);
  uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
  uVar8 = 0x3fU - lVar18 & 0xfffffffffffffff8;
  *puVar6 = uVar14 >> 0x20 | uVar14 << 0x20;
  puVar15 = (undefined1 *)((long)puVar6 + ((long)(0x3fU - lVar18) >> 3));
  lVar7 = uVar8 + lVar18;
  if (0 < 0x3f - lVar7) {
    uVar14 = (ulong)((int)lVar7 + 1) & 7;
    lVar7 = lVar7 - uVar14;
    if (7 < 0x3f - lVar7) {
      uVar17 = uVar17 << uVar14;
      uVar14 = ((uVar14 - lVar18) - uVar8) + 0x37;
      if (((uint)uVar14 >> 3 & 1) == 0) {
        uVar8 = 0x37 - lVar7;
        lVar7 = lVar7 + 8;
        *puVar15 = (char)(uVar17 >> (uVar8 & 0x3f));
        uVar17 = uVar17 & *(uint *)(PTR_DAT_047cb910 + uVar8 * 4);
        puVar15 = puVar15 + 1;
      }
      if (7 < uVar14) {
        lVar18 = -lVar7;
        puVar12 = (uint *)(PTR_DAT_047cb910 + (0x16 - lVar7) * 4 + 0x84);
        do {
          *puVar15 = (char)(uVar17 >> (lVar18 + 0x37U & 0x3f));
          uVar3 = *puVar12;
          uVar14 = lVar18 + 0x2f;
          lVar18 = lVar18 + -0x10;
          puVar15[1] = (char)((uVar17 & uVar3) >> (uVar14 & 0x3f));
          puVar15 = puVar15 + 2;
          uVar17 = uVar17 & uVar3 & (ulong)puVar12[-8];
          puVar12 = puVar12 + -0x10;
        } while (7 < (long)uVar14);
        lVar7 = -lVar18;
      }
    }
  }
  *(ulong *)(lVar16 + -8) = uVar10 << (lVar11 + 1U & 0x3f);
  puVar5 = PTR_DAT_047cb910;
  uVar17 = 0x3fU - lVar11 & 0xfffffffffffffff8;
  puVar13 = (undefined1 *)(lVar16 - ((long)(0x3fU - lVar11) >> 3));
  lVar16 = uVar17 + lVar11;
  if (0 < 0x3f - lVar16) {
    uVar14 = (ulong)((int)lVar16 + 1) & 7;
    lVar16 = lVar16 - uVar14;
    if (7 < 0x3f - lVar16) {
      uVar17 = ((uVar14 - lVar11) - uVar17) + 0x37;
      uVar10 = uVar10 << uVar14;
      if (((uint)uVar17 >> 3 & 1) == 0) {
        uVar14 = 0x37 - lVar16;
        lVar16 = lVar16 + 8;
        puVar13 = puVar13 + -1;
        *puVar13 = (char)(uVar10 >> (uVar14 & 0x3f));
        uVar10 = uVar10 & *(uint *)(puVar5 + uVar14 * 4);
      }
      if (7 < uVar17) {
        puVar12 = (uint *)(puVar5 + (0x16 - lVar16) * 4 + 0x84);
        uVar17 = 0x2f - lVar16;
        do {
          puVar13[-1] = (char)(uVar10 >> (uVar17 + 8 & 0x3f));
          uVar3 = *puVar12;
          puVar13 = puVar13 + -2;
          *puVar13 = (char)((uVar10 & uVar3) >> (uVar17 & 0x3f));
          uVar10 = uVar10 & uVar3 & (ulong)puVar12[-8];
          puVar12 = puVar12 + -0x10;
          bVar1 = 7 < (long)uVar17;
          uVar17 = uVar17 - 0x10;
        } while (bVar1);
      }
    }
  }
  lVar16 = 0x4d - lVar7;
  if (-1 < 0x46 - lVar7) {
    lVar16 = 0x46 - lVar7;
  }
  if ((long)puVar13 - (long)(puVar15 + (lVar16 >> 3)) < 9) {
    return -1;
  }
  __n = (long)(puVar15 + (lVar16 >> 3)) - (long)param_1;
  memmove(puVar13 + -__n,param_1,__n);
  return param_2 - (long)(puVar13 + -__n);
}


