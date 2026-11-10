/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f9b6e4; name: FUN_01f9b6e4
 */


long FUN_01f9b6e4(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  char cVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  ushort *puVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  char *local_68;
  
  iVar21 = 0;
  do {
    lVar8 = *(long *)(param_1 + 400);
    uVar4 = (int)((ulong)(*(long *)(lVar8 + 0xa0) - *(long *)(lVar8 + 0x98)) >> 3) * -0x49249249;
    if (uVar4 == 1) {
      uVar12 = 0;
    }
    else {
      if (uVar4 == 0) {
        uVar15 = *(ulong *)(param_1 + 0x78);
        uVar12 = (int)*(ulong *)(param_1 + 0x80) + (int)uVar15;
        uVar13 = *(ulong *)(param_1 + 0x80) ^ uVar15;
        uVar17 = uVar13 >> 0x1b | uVar13 << 0x25;
        *(ulong *)(param_1 + 0x78) = uVar13 ^ (uVar15 >> 0x28 | uVar15 << 0x18) ^ uVar13 << 0x10;
      }
      else {
        lVar20 = 0x1f;
        if ((uVar4 << (ulong)((uint)LZCOUNT(uVar4) & 0x1f) & 0x7fffffff) != 0) {
          lVar20 = 0x20;
        }
        uVar13 = lVar20 - LZCOUNT(uVar4);
        uVar15 = uVar13 >> 6;
        if ((uVar13 & 0x3f) != 0) {
          uVar15 = uVar15 + 1;
        }
        uVar5 = 0;
        if (uVar15 != 0) {
          uVar5 = uVar13 / uVar15;
        }
        uVar17 = *(ulong *)(param_1 + 0x78);
        lVar20 = uVar17 + *(ulong *)(param_1 + 0x80);
        uVar16 = uVar17 ^ *(ulong *)(param_1 + 0x80);
        uVar19 = uVar16 ^ (uVar17 >> 0x28 | uVar17 << 0x18) ^ uVar16 << 0x10;
        uVar17 = uVar16 >> 0x1b | uVar16 << 0x25;
        uVar14 = 0;
        if (uVar15 <= uVar13) {
          uVar14 = (uint)(0xffffffffffffffff >> (-uVar5 & 0x3f));
        }
        while (uVar12 = (uint)lVar20 & uVar14, uVar4 <= uVar12) {
          uVar15 = uVar19 ^ uVar17;
          lVar20 = uVar19 + uVar17;
          uVar17 = uVar15 >> 0x1b | uVar15 << 0x25;
          uVar19 = uVar15 ^ (uVar19 >> 0x28 | uVar19 << 0x18) ^ uVar15 << 0x10;
        }
        *(ulong *)(param_1 + 0x78) = uVar19;
      }
      *(ulong *)(param_1 + 0x80) = uVar17;
    }
    lVar20 = (long)(int)uVar12;
    plVar10 = (long *)(*(long *)(lVar8 + 0x98) + (long)(int)uVar12 * 0x38);
    uVar4 = (int)((ulong)(plVar10[1] - *plVar10) >> 3) * -0x49249249;
    if (uVar4 == 1) {
      uVar12 = 0;
    }
    else {
      if (uVar4 == 0) {
        uVar15 = *(ulong *)(param_1 + 0x78);
        uVar12 = (int)*(ulong *)(param_1 + 0x80) + (int)uVar15;
        uVar13 = *(ulong *)(param_1 + 0x80) ^ uVar15;
        uVar17 = uVar13 >> 0x1b | uVar13 << 0x25;
        *(ulong *)(param_1 + 0x78) = uVar13 ^ (uVar15 >> 0x28 | uVar15 << 0x18) ^ uVar13 << 0x10;
      }
      else {
        lVar1 = 0x1f;
        if ((uVar4 << (ulong)((uint)LZCOUNT(uVar4) & 0x1f) & 0x7fffffff) != 0) {
          lVar1 = 0x20;
        }
        uVar13 = lVar1 - LZCOUNT(uVar4);
        uVar15 = uVar13 >> 6;
        if ((uVar13 & 0x3f) != 0) {
          uVar15 = uVar15 + 1;
        }
        uVar5 = 0;
        if (uVar15 != 0) {
          uVar5 = uVar13 / uVar15;
        }
        uVar17 = *(ulong *)(param_1 + 0x78);
        lVar1 = uVar17 + *(ulong *)(param_1 + 0x80);
        uVar16 = uVar17 ^ *(ulong *)(param_1 + 0x80);
        uVar19 = uVar16 ^ (uVar17 >> 0x28 | uVar17 << 0x18) ^ uVar16 << 0x10;
        uVar17 = uVar16 >> 0x1b | uVar16 << 0x25;
        uVar14 = 0;
        if (uVar15 <= uVar13) {
          uVar14 = (uint)(0xffffffffffffffff >> (-uVar5 & 0x3f));
        }
        while (uVar12 = (uint)lVar1 & uVar14, uVar4 <= uVar12) {
          uVar15 = uVar19 ^ uVar17;
          lVar1 = uVar19 + uVar17;
          uVar17 = uVar15 >> 0x1b | uVar15 << 0x25;
          uVar19 = uVar15 ^ (uVar19 >> 0x28 | uVar19 << 0x18) ^ uVar15 << 0x10;
        }
        *(ulong *)(param_1 + 0x78) = uVar19;
      }
      *(ulong *)(param_1 + 0x80) = uVar17;
    }
    plVar10 = (long *)(*(long *)(*(long *)(lVar8 + 0x98) + lVar20 * 0x38) + (long)(int)uVar12 * 0x38
                      );
    uVar15 = plVar10[1] - *plVar10;
    if (uVar15 != 0) {
      uVar4 = (int)(uVar15 >> 3) * -0x55555555;
      if (uVar4 == 1) {
        uVar14 = 0;
      }
      else if (uVar4 == 0) {
        uVar15 = *(ulong *)(param_1 + 0x78);
        uVar14 = (int)*(ulong *)(param_1 + 0x80) + (int)uVar15;
        uVar17 = *(ulong *)(param_1 + 0x80) ^ uVar15;
        *(ulong *)(param_1 + 0x78) = uVar17 ^ (uVar15 >> 0x28 | uVar15 << 0x18) ^ uVar17 << 0x10;
        *(ulong *)(param_1 + 0x80) = uVar17 >> 0x1b | uVar17 << 0x25;
      }
      else {
        lVar1 = 0x1f;
        if ((uVar4 << (ulong)((uint)LZCOUNT(uVar4) & 0x1f) & 0x7fffffff) != 0) {
          lVar1 = 0x20;
        }
        uVar17 = lVar1 - LZCOUNT(uVar4);
        uVar15 = uVar17 >> 6;
        if ((uVar17 & 0x3f) != 0) {
          uVar15 = uVar15 + 1;
        }
        uVar13 = 0;
        if (uVar15 != 0) {
          uVar13 = uVar17 / uVar15;
        }
        uVar5 = *(ulong *)(param_1 + 0x78);
        lVar1 = uVar5 + *(ulong *)(param_1 + 0x80);
        uVar19 = uVar5 ^ *(ulong *)(param_1 + 0x80);
        uVar2 = 0;
        if (uVar15 <= uVar17) {
          uVar2 = (uint)(0xffffffffffffffff >> (-uVar13 & 0x3f));
        }
        uVar15 = uVar19 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar19 << 0x10;
        uVar17 = uVar19 >> 0x1b | uVar19 << 0x25;
        while (uVar14 = (uint)lVar1 & uVar2, uVar4 <= uVar14) {
          uVar13 = uVar15 ^ uVar17;
          lVar1 = uVar15 + uVar17;
          uVar15 = uVar13 ^ (uVar15 >> 0x28 | uVar15 << 0x18) ^ uVar13 << 0x10;
          uVar17 = uVar13 >> 0x1b | uVar13 << 0x25;
        }
        *(ulong *)(param_1 + 0x78) = uVar15;
        *(ulong *)(param_1 + 0x80) = uVar17;
      }
      if (param_2 == -1) {
LAB_01f9ba8c:
        return *(long *)(*(long *)(*(long *)(lVar8 + 0x98) + lVar20 * 0x38) +
                        (long)(int)uVar12 * 0x38) + (long)(int)uVar14 * 0x18;
      }
      lVar8 = *(long *)(*(long *)(*(long *)(lVar8 + 0x98) + lVar20 * 0x38) +
                       (long)(int)uVar12 * 0x38);
      piVar9 = *(int **)(lVar8 + (long)(int)uVar14 * 0x18 + 8);
      cVar7 = '\0';
      if (piVar9 != (int *)0x0) {
        if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 7) ||
           (uVar15 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3], uVar15 == 0)) {
          puVar6 = (uint *)0x0;
        }
        else {
          puVar6 = (uint *)((long)piVar9 + uVar15);
          puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
        }
        local_68 = "area_no";
        puVar6 = bsearch(&local_68,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar6 == (uint *)0x0) {
          cVar7 = '\0';
        }
        else {
          piVar9 = (int *)((long)puVar6 + (ulong)*puVar6);
          puVar11 = (ushort *)((long)piVar9 - (long)*piVar9);
          uVar3 = *puVar11;
          if (uVar3 < 7) {
            piVar18 = (int *)0x0;
          }
          else {
            piVar18 = (int *)0x0;
            if ((ulong)puVar11[3] != 0) {
              puVar6 = (uint *)((long)piVar9 + (ulong)puVar11[3]);
              piVar18 = (int *)((long)puVar6 + (ulong)*puVar6);
            }
          }
          if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 5) ||
             (uVar15 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2], uVar15 == 0)) {
            uVar15 = 0;
          }
          else {
            uVar15 = (long)*(char *)((long)piVar18 + uVar15) & 0xffffffff;
          }
          if (*(long *)(PTR_DAT_047d5608 + uVar15 * 8) == 1) {
            if ((uVar3 < 0xb) || ((ulong)puVar11[5] == 0)) {
              uVar15 = 0;
            }
            else {
              uVar15 = (ulong)*(ushort *)((long)piVar9 + (ulong)puVar11[5]);
            }
            cVar7 = *(char *)(*(long *)(lVar8 + (long)(int)uVar14 * 0x18) + uVar15);
          }
          else if ((uVar3 < 0xd) || ((ulong)puVar11[6] == 0)) {
            cVar7 = '\0';
          }
          else {
            cVar7 = *(char *)((long)piVar9 + (ulong)puVar11[6]);
          }
        }
      }
      if (param_2 == cVar7) {
        lVar8 = *(long *)(param_1 + 400);
        goto LAB_01f9ba8c;
      }
    }
    iVar21 = iVar21 + 1;
    if (iVar21 == 100) {
      return 0;
    }
  } while( true );
}


