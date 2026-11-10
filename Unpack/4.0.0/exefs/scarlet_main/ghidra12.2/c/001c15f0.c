/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c15f0; name: FUN_001c15f0
 */


long FUN_001c15f0(ulong *param_1,void *param_2,long param_3,long param_4,uint param_5,uint param_6,
                 long param_7,uint param_8,long param_9,size_t param_10)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *__src;
  ulong uVar14;
  ulong uVar15;
  void *pvVar16;
  uint *puVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  undefined1 *puVar22;
  long lVar23;
  ulong uVar24;
  
  if ((long)param_2 - (long)param_1 < 0x11) {
    return -1;
  }
  if (param_9 == 0) {
    iVar18 = (int)LZCOUNT(param_8 + 1);
    uVar9 = 0x20 - iVar18;
    uVar20 = (ulong)uVar9;
    uVar15 = 1;
    uVar7 = 0x1f - iVar18;
    lVar12 = (long)param_2 - (ulong)(uVar9 >> 3);
    *(long *)((long)param_2 + -8) = 1L << (-uVar20 & 0x3f);
    lVar23 = ((uVar20 & 0xfffffff8) - uVar20) + 0x3f;
    if (uVar7 != 0) {
      uVar15 = 1L << ((ulong)uVar7 & 0x3f);
      lVar23 = lVar23 - (ulong)uVar7;
      uVar15 = uVar15 | (param_8 + 1) - (int)uVar15;
      *(ulong *)(lVar12 + -8) = uVar15 << (lVar23 + 1U & 0x3f);
      lVar12 = lVar12 - ((long)(0x3fU - lVar23) >> 3);
      lVar23 = (0x3fU - lVar23 & 0xfffffffffffffff8) + lVar23;
    }
    *(ulong *)(lVar12 + -8) = uVar15 << (lVar23 + 1U & 0x3f);
    lVar12 = lVar12 - ((long)(0x3fU - lVar23) >> 3);
    lVar23 = (0x3fU - lVar23 & 0xfffffffffffffff8) + lVar23;
    *(ulong *)(lVar12 + -8) = uVar15 << (lVar23 + 1U & 0x3f);
    lVar19 = (0x3fU - lVar23 & 0xfffffffffffffff8) + lVar23;
    pvVar16 = (void *)(lVar12 - ((long)(0x3fU - lVar23) >> 3));
  }
  else {
    uVar15 = 0;
    lVar19 = 0x3f;
    pvVar16 = param_2;
  }
  puVar21 = param_1;
  if (param_6 == 0) {
    if ((int)(param_5 - 3) < 1) {
      iVar18 = 0;
      uVar20 = 0;
      lVar23 = 0x3f;
      if (0 < (int)param_5) goto LAB_001c1960;
    }
    else {
      uVar20 = 0;
      iVar18 = 0;
      lVar23 = 0x3f;
      do {
        if ((long)pvVar16 - (long)puVar21 < 9) {
          return -1;
        }
        lVar12 = (long)iVar18;
        uVar9 = *(uint *)(param_3 + lVar12);
        if ((uVar9 & 0xefefefef - uVar9 & 0x80808080) != 0) break;
        uVar13 = (ulong)((uVar9 >> 4 & 0xf) + 4);
        iVar2 = iVar18 + 1;
        uVar14 = (ulong)(uVar9 >> 0xc) & 0xf;
        lVar5 = uVar14 + 4;
        uVar24 = (ulong)(uVar9 >> 0x14) & 0xf;
        iVar3 = iVar18 + 2;
        lVar6 = uVar24 + 4;
        lVar23 = (lVar23 - uVar13) - lVar6;
        iVar4 = iVar18 + 3;
        iVar18 = iVar18 + 4;
        uVar20 = (uVar20 << uVar13 |
                 (long)(int)((*(int *)(param_4 + lVar12 * 4) + 0xf8U >> 4) - (1 << uVar13))) <<
                 lVar6 | (long)(int)((*(int *)(param_4 + (long)iVar3 * 4) + 0xf8U >> 4) -
                                    (0x10 << uVar24));
        uVar24 = (ulong)((uVar9 >> 0x1c) + 4);
        lVar19 = (lVar19 - lVar5) - uVar24;
        uVar13 = uVar20 << (lVar23 + 1U & 0x3f);
        uVar15 = (uVar15 << lVar5 |
                 (long)(int)((*(int *)(param_4 + (long)iVar2 * 4) + 0xf8U >> 4) - (0x10 << uVar14)))
                 << uVar24 |
                 (long)(int)((*(int *)(param_4 + (long)iVar4 * 4) + 0xf8U >> 4) -
                            (0x10 << (ulong)(uVar9 >> 0x1c)));
        uVar24 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        *puVar21 = uVar24 >> 0x20 | uVar24 << 0x20;
        puVar21 = (ulong *)((long)puVar21 + ((long)(0x3fU - lVar23) >> 3));
        lVar23 = (0x3fU - lVar23 & 0xfffffffffffffff8) + lVar23;
        *(ulong *)((long)pvVar16 + -8) = uVar15 << (lVar19 + 1U & 0x3f);
        pvVar16 = (void *)((long)pvVar16 - ((long)(0x3fU - lVar19) >> 3));
        lVar19 = (0x3fU - lVar19 & 0xfffffffffffffff8) + lVar19;
      } while (iVar18 < (int)(param_5 - 3));
      if (iVar18 < (int)param_5) {
LAB_001c1960:
        uVar24 = (ulong)iVar18;
        iVar18 = param_5 - iVar18;
        lVar12 = (long)pvVar16 - (long)puVar21;
        do {
          if (lVar12 < 9) {
            return -1;
          }
          bVar8 = *(byte *)(param_3 + uVar24);
          iVar2 = *(int *)(param_4 + uVar24 * 4);
          if (bVar8 < 0xf0) {
            uVar13 = (ulong)((bVar8 >> 4) + 4);
            uVar14 = (ulong)((iVar2 + 0xf8U >> 4) - (1 << uVar13));
            if ((uVar24 & 1) == 0) {
              uVar10 = uVar13;
              goto LAB_001c1a2c;
            }
            uVar15 = uVar15 << uVar13 | uVar14;
LAB_001c19a0:
            lVar19 = lVar19 - uVar13;
            *(ulong *)((long)pvVar16 + -8) = uVar15 << (lVar19 + 1U & 0x3f);
            pvVar16 = (void *)((long)pvVar16 - ((long)(0x3fU - lVar19) >> 3));
            lVar19 = (0x3fU - lVar19 & 0xfffffffffffffff8) + lVar19;
          }
          else {
            uVar13 = (ulong)bVar8 - 0xe0;
            uVar9 = (iVar2 + (-1 << (ulong)((uint)uVar13 & 0x1f))) - 0x7eff00;
            if ((uVar24 & 1) != 0) {
              uVar14 = uVar13 & 0x3f;
              uVar13 = (ulong)(int)(uint)uVar13;
              uVar15 = uVar15 << uVar14 | (ulong)uVar9;
              goto LAB_001c19a0;
            }
            uVar14 = (ulong)uVar9;
            uVar10 = uVar13 & 0x3f;
LAB_001c1a2c:
            lVar23 = lVar23 - uVar13;
            uVar20 = uVar20 << uVar10 | uVar14;
            uVar13 = uVar20 << (lVar23 + 1U & 0x3f);
            uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
            uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
            *puVar21 = uVar13 >> 0x20 | uVar13 << 0x20;
            puVar21 = (ulong *)((long)puVar21 + ((long)(0x3fU - lVar23) >> 3));
            lVar23 = (0x3fU - lVar23 & 0xfffffffffffffff8) + lVar23;
          }
          if (iVar18 == 1) break;
          iVar18 = iVar18 + -1;
          uVar24 = uVar24 + 1;
          lVar12 = (long)pvVar16 - (long)puVar21;
        } while( true );
      }
    }
  }
  else if ((int)param_5 < 1) {
    uVar20 = 0;
    lVar23 = 0x3f;
  }
  else {
    uVar24 = 0;
    uVar20 = 0;
    lVar23 = 0x3f;
    lVar12 = (long)pvVar16 - (long)param_1;
    while( true ) {
      if (lVar12 < 9) {
        return -1;
      }
      uVar9 = 0;
      if (param_6 != 0) {
        uVar9 = *(uint *)(param_4 + uVar24 * 4) / param_6;
      }
      uVar13 = (ulong)(*(byte *)(param_3 + uVar24) >> 3);
      uVar14 = (ulong)(uVar9 + 8 & (-1 << uVar13 ^ 0xffffffffU));
      if ((uVar24 & 1) == 0) {
        lVar23 = lVar23 - uVar13;
        uVar20 = uVar20 << uVar13 | uVar14;
        uVar13 = uVar20 << (lVar23 + 1U & 0x3f);
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        *puVar21 = uVar13 >> 0x20 | uVar13 << 0x20;
        puVar21 = (ulong *)((long)puVar21 + ((long)(0x3fU - lVar23) >> 3));
        lVar23 = (0x3fU - lVar23 & 0xfffffffffffffff8) + lVar23;
      }
      else {
        lVar19 = lVar19 - uVar13;
        uVar15 = uVar15 << uVar13 | uVar14;
        *(ulong *)((long)pvVar16 + -8) = uVar15 << (lVar19 + 1U & 0x3f);
        pvVar16 = (void *)((long)pvVar16 - ((long)(0x3fU - lVar19) >> 3));
        lVar19 = (0x3fU - lVar19 & 0xfffffffffffffff8) + lVar19;
      }
      if ((ulong)param_5 == uVar24 + 1) break;
      uVar24 = uVar24 + 1;
      lVar12 = (long)pvVar16 - (long)puVar21;
    }
  }
  if ((param_9 == 0) && (0 < (int)param_8)) {
    uVar24 = 0;
    do {
      uVar7 = *(uint *)(param_7 + uVar24 * 4);
      iVar18 = (uVar7 >> 6) + 1;
      uVar14 = (ulong)(0x20 - (uint)LZCOUNT(iVar18));
      uVar9 = (uint)LZCOUNT(iVar18) ^ 0x1f;
      uVar13 = (ulong)uVar9;
      if ((uVar24 & 1) == 0) {
        lVar23 = lVar23 - uVar14;
        uVar14 = uVar20 << (uVar14 & 0x3f) | 1;
        uVar20 = uVar14 << (lVar23 + 1U & 0x3f);
        uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
        uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
        *puVar21 = uVar20 >> 0x20 | uVar20 << 0x20;
        puVar21 = (ulong *)((long)puVar21 + ((long)(0x3fU - lVar23) >> 3));
        lVar23 = (0x3fU - lVar23 & 0xfffffffffffffff8) + lVar23;
        if (uVar9 != 0) {
          lVar23 = lVar23 - uVar13;
          uVar14 = uVar14 << uVar13 | (ulong)(uint)(iVar18 - (int)(1L << uVar13));
          uVar20 = uVar14 << (lVar23 + 1U & 0x3f);
          uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
          uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
          *puVar21 = uVar20 >> 0x20 | uVar20 << 0x20;
          puVar21 = (ulong *)((long)puVar21 + ((long)(0x3fU - lVar23) >> 3));
          lVar23 = (0x3fU - lVar23 & 0xfffffffffffffff8) + lVar23;
        }
        uVar20 = (ulong)uVar7 & 0x3f | uVar14 << 6;
        uVar13 = uVar20 << (lVar23 - 5U & 0x3f);
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        *puVar21 = uVar13 >> 0x20 | uVar13 << 0x20;
        puVar21 = (ulong *)((long)puVar21 + ((long)(0x45U - lVar23) >> 3));
        lVar23 = lVar23 + (0x45U - lVar23 & 0xfffffffffffffff8) + -6;
        lVar12 = (long)pvVar16 - (long)puVar21;
      }
      else {
        lVar19 = lVar19 - uVar14;
        uVar15 = uVar15 << (uVar14 & 0x3f) | 1;
        *(ulong *)((long)pvVar16 + -8) = uVar15 << (lVar19 + 1U & 0x3f);
        lVar12 = (long)pvVar16 - ((long)(0x3fU - lVar19) >> 3);
        lVar19 = (0x3fU - lVar19 & 0xfffffffffffffff8) + lVar19;
        if (uVar9 != 0) {
          uVar15 = uVar15 << uVar13 | (ulong)(uint)(iVar18 - (int)(1L << uVar13));
          lVar19 = lVar19 - uVar13;
          *(ulong *)(lVar12 + -8) = uVar15 << (lVar19 + 1U & 0x3f);
          lVar12 = lVar12 - ((long)(0x3fU - lVar19) >> 3);
          lVar19 = (0x3fU - lVar19 & 0xfffffffffffffff8) + lVar19;
        }
        uVar15 = (ulong)(uVar7 & 0x3f) | uVar15 << 6;
        *(ulong *)(lVar12 + -8) = uVar15 << (lVar19 - 5U & 0x3f);
        pvVar16 = (void *)(lVar12 - ((long)(0x45U - lVar19) >> 3));
        lVar19 = lVar19 + (0x45U - lVar19 & 0xfffffffffffffff8) + -6;
        lVar12 = (long)pvVar16 - (long)puVar21;
      }
      if (lVar12 < 9) {
        return -1;
      }
      uVar24 = uVar24 + 1;
    } while (param_8 != uVar24);
  }
  uVar24 = uVar20 << (lVar23 + 1U & 0x3f);
  uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
  uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
  *puVar21 = uVar24 >> 0x20 | uVar24 << 0x20;
  uVar24 = 0x3fU - lVar23 & 0xfffffffffffffff8;
  puVar22 = (undefined1 *)((long)puVar21 + ((long)(0x3fU - lVar23) >> 3));
  lVar12 = uVar24 + lVar23;
  if (0 < 0x3f - lVar12) {
    uVar13 = (ulong)((int)lVar12 + 1) & 7;
    lVar12 = lVar12 - uVar13;
    if (7 < 0x3f - lVar12) {
      uVar20 = uVar20 << uVar13;
      uVar24 = ((uVar13 - lVar23) - uVar24) + 0x37;
      if (((uint)uVar24 >> 3 & 1) == 0) {
        uVar13 = 0x37 - lVar12;
        lVar12 = lVar12 + 8;
        *puVar22 = (char)(uVar20 >> (uVar13 & 0x3f));
        uVar20 = uVar20 & *(uint *)(PTR_DAT_047cb910 + uVar13 * 4);
        puVar22 = puVar22 + 1;
      }
      if (7 < uVar24) {
        lVar23 = -lVar12;
        puVar17 = (uint *)(PTR_DAT_047cb910 + (0x16 - lVar12) * 4 + 0x84);
        do {
          *puVar22 = (char)(uVar20 >> (lVar23 + 0x37U & 0x3f));
          uVar9 = *puVar17;
          uVar24 = lVar23 + 0x2f;
          lVar23 = lVar23 + -0x10;
          puVar22[1] = (char)((uVar20 & uVar9) >> (uVar24 & 0x3f));
          puVar22 = puVar22 + 2;
          uVar20 = uVar20 & uVar9 & (ulong)puVar17[-8];
          puVar17 = puVar17 + -0x10;
        } while (7 < (long)uVar24);
        lVar12 = -lVar23;
      }
    }
  }
  __src = (undefined1 *)((long)pvVar16 - ((long)(0x3fU - lVar19) >> 3));
  uVar20 = 0x3fU - lVar19 & 0xfffffffffffffff8;
  *(ulong *)((long)pvVar16 + -8) = uVar15 << (lVar19 + 1U & 0x3f);
  puVar11 = PTR_DAT_047cb910;
  lVar23 = uVar20 + lVar19;
  if (0 < 0x3f - lVar23) {
    uVar24 = (ulong)((int)lVar23 + 1) & 7;
    lVar23 = lVar23 - uVar24;
    if (7 < 0x3f - lVar23) {
      uVar20 = ((uVar24 - lVar19) - uVar20) + 0x37;
      uVar15 = uVar15 << uVar24;
      if (((uint)uVar20 >> 3 & 1) == 0) {
        uVar24 = 0x37 - lVar23;
        lVar23 = lVar23 + 8;
        __src = __src + -1;
        *__src = (char)(uVar15 >> (uVar24 & 0x3f));
        uVar15 = uVar15 & *(uint *)(puVar11 + uVar24 * 4);
      }
      if (7 < uVar20) {
        puVar17 = (uint *)(puVar11 + (0x16 - lVar23) * 4 + 0x84);
        uVar20 = 0x2f - lVar23;
        do {
          __src[-1] = (char)(uVar15 >> (uVar20 + 8 & 0x3f));
          uVar9 = *puVar17;
          __src = __src + -2;
          *__src = (char)((uVar15 & uVar9) >> (uVar20 & 0x3f));
          uVar15 = uVar15 & uVar9 & (ulong)puVar17[-8];
          puVar17 = puVar17 + -0x10;
          bVar1 = 7 < (long)uVar20;
          uVar20 = uVar20 - 0x10;
        } while (bVar1);
      }
    }
  }
  lVar23 = 0x4d - lVar12;
  if (-1 < 0x46 - lVar12) {
    lVar23 = 0x46 - lVar12;
  }
  puVar22 = puVar22 + (lVar23 >> 3);
  if ((long)__src - (long)puVar22 < 9) {
    return -1;
  }
  memmove(puVar22,__src,(long)param_2 - (long)__src);
  puVar22 = puVar22 + ((long)param_2 - (long)__src);
  if (0 < (long)param_10) {
    memmove(puVar22,param_2,param_10);
    puVar22 = puVar22 + param_10;
  }
  return (long)puVar22 - (long)param_1;
}


