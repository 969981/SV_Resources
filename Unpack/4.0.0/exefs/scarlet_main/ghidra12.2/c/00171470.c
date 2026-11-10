/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00171470; name: FUN_00171470
 */


undefined8
FUN_00171470(uint *param_1,long param_2,long param_3,uint *param_4,char *param_5,int param_6,
            long param_7,uint param_8,long param_9)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  ulong *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  
  uVar6 = *param_4;
  *(long **)(param_2 + 0x20) = (long *)((long)param_4 + 1);
  uVar13 = *(long *)((long)param_4 + 1) * *(long *)(param_2 + 0x38);
  puVar9 = *(uint **)(param_2 + 0x28);
  uVar13 = (ulong)(uint)((int)(uVar13 >> 0x20) << (ulong)(*(uint *)(param_2 + 0x10) & 0x1f)) |
           (uVar13 >> 0x20) >> ((ulong)(0x20 - *(uint *)(param_2 + 0x10)) & 0x3f);
  uVar5 = *(uint *)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = (int)uVar13;
  lVar21 = *(long *)(param_2 + 8) + (uVar13 & *(uint *)(param_2 + 0x14)) * 4;
  *(long *)(param_2 + 0x28) = lVar21;
  Hint_Prefetch(lVar21,2,0,0);
  puVar14 = (uint *)((long)param_4 - (ulong)*(uint *)(param_3 + 0x10));
  uVar22 = *puVar14 ^ uVar6;
  if (uVar22 == 0) {
    puVar1 = (ulong *)(param_4 + 1);
    puVar2 = (ulong *)(puVar14 + 1);
    puVar15 = puVar1;
    if (param_5 + -8 < puVar1) {
LAB_00171518:
      uVar13 = (long)puVar15 - (long)puVar1;
      pcVar20 = (char *)((long)puVar1 + (long)(int)uVar13);
      if (pcVar20 < param_5) {
        uVar13 = (long)(int)uVar13;
        do {
          if (*pcVar20 != *(char *)((long)puVar2 + uVar13)) goto LAB_001715b8;
          uVar22 = (int)uVar13 + 1;
          uVar13 = (ulong)(int)uVar22;
          pcVar20 = (char *)((long)puVar1 + uVar13);
        } while (pcVar20 < param_5);
        uVar13 = (ulong)uVar22;
      }
    }
    else {
      uVar13 = *puVar2 ^ *puVar1;
      if (uVar13 == 0) {
        puVar8 = (ulong *)(param_4 + 3);
        do {
          puVar15 = puVar8;
          if (param_5 + -8 < puVar15) goto LAB_00171518;
          uVar13 = *(ulong *)((long)puVar15 + ((long)puVar2 - (long)puVar1)) ^ *puVar15;
          puVar8 = puVar15 + 1;
        } while (uVar13 == 0);
      }
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = (ulong)(((int)puVar15 - (int)puVar1) +
                      ((uint)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3));
    }
LAB_001715b8:
    uVar12 = (int)uVar13 + 4;
  }
  else if ((uVar22 & 0xffff) == 0) {
    uVar12 = 2;
    if ((uVar22 & 0xffffff) == 0) {
      uVar12 = 3;
    }
  }
  else {
    uVar12 = 0;
  }
  puVar14 = (uint *)((long)param_4 - (ulong)*(uint *)(param_3 + 0x14));
  uVar22 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
  iVar4 = -(uint)((int)uVar12 < 1);
  uVar12 = *puVar14 ^ uVar6;
  if (uVar12 == 0) {
    puVar1 = (ulong *)(param_4 + 1);
    puVar2 = (ulong *)(puVar14 + 1);
    puVar15 = puVar1;
    if (param_5 + -8 < puVar1) {
LAB_0017160c:
      uVar13 = (long)puVar15 - (long)puVar1;
      pcVar20 = (char *)((long)puVar1 + (long)(int)uVar13);
      if (pcVar20 < param_5) {
        uVar13 = (long)(int)uVar13;
        do {
          if (*pcVar20 != *(char *)((long)puVar2 + uVar13)) goto LAB_0017169c;
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulong)(int)uVar12;
          pcVar20 = (char *)((long)puVar1 + uVar13);
        } while (pcVar20 < param_5);
        uVar13 = (ulong)uVar12;
      }
    }
    else {
      uVar13 = *puVar2 ^ *puVar1;
      if (uVar13 == 0) {
        puVar8 = (ulong *)(param_4 + 3);
        do {
          puVar15 = puVar8;
          if (param_5 + -8 < puVar15) goto LAB_0017160c;
          uVar13 = *(ulong *)((long)puVar15 + ((long)puVar2 - (long)puVar1)) ^ *puVar15;
          puVar8 = puVar15 + 1;
        } while (uVar13 == 0);
      }
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = (ulong)(((int)puVar15 - (int)puVar1) +
                      ((uint)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3));
    }
LAB_0017169c:
    uVar16 = (int)uVar13 + 4;
  }
  else {
    uVar18 = 2;
    if ((uVar12 & 0xffffff) == 0) {
      uVar18 = 3;
    }
    uVar16 = 0;
    if ((uVar12 & 0xffff) == 0) {
      uVar16 = uVar18;
    }
  }
  if ((int)uVar22 < (int)uVar16) {
    iVar4 = 1;
  }
  else {
    uVar16 = uVar22;
  }
  puVar14 = (uint *)((long)param_4 - (ulong)*(uint *)(param_3 + 0x18));
  uVar22 = *puVar14 ^ uVar6;
  if (uVar22 == 0) {
    puVar1 = (ulong *)(param_4 + 1);
    puVar2 = (ulong *)(puVar14 + 1);
    puVar15 = puVar1;
    if (param_5 + -8 < puVar1) {
LAB_001716e8:
      uVar13 = (long)puVar15 - (long)puVar1;
      pcVar20 = (char *)((long)puVar1 + (long)(int)uVar13);
      if (pcVar20 < param_5) {
        uVar13 = (long)(int)uVar13;
        do {
          if (*pcVar20 != *(char *)((long)puVar2 + uVar13)) goto LAB_00171788;
          uVar22 = (int)uVar13 + 1;
          uVar13 = (ulong)(int)uVar22;
          pcVar20 = (char *)((long)puVar1 + uVar13);
        } while (pcVar20 < param_5);
        uVar13 = (ulong)uVar22;
      }
    }
    else {
      uVar13 = *puVar2 ^ *puVar1;
      if (uVar13 == 0) {
        puVar8 = (ulong *)(param_4 + 3);
        do {
          puVar15 = puVar8;
          if (param_5 + -8 < puVar15) goto LAB_001716e8;
          uVar13 = *(ulong *)((long)puVar15 + ((long)puVar2 - (long)puVar1)) ^ *puVar15;
          puVar8 = puVar15 + 1;
        } while (uVar13 == 0);
      }
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = (ulong)(((int)puVar15 - (int)puVar1) +
                      ((uint)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3));
    }
LAB_00171788:
    uVar12 = (int)uVar13 + 4;
  }
  else if ((uVar22 & 0xffff) == 0) {
    uVar12 = 2;
    if ((uVar22 & 0xffffff) == 0) {
      uVar12 = 3;
    }
  }
  else {
    uVar12 = 0;
  }
  uVar18 = (int)param_4 - *(int *)(param_2 + 0x18);
  uVar22 = uVar12;
  if ((int)uVar12 <= (int)uVar16) {
    uVar22 = uVar16;
  }
  iVar3 = 2;
  if ((int)uVar12 <= (int)uVar16) {
    iVar3 = iVar4;
  }
  if (3 < (int)uVar22) {
    *param_1 = uVar22;
    param_1[1] = -iVar3;
    uVar10 = *(undefined8 *)puVar9;
    uVar11 = *(undefined8 *)(puVar9 + 1);
    *puVar9 = uVar5 & 0xfc000000 | uVar18 & 0x3ffffff;
    *(undefined8 *)(puVar9 + 1) = uVar10;
    *(undefined8 *)(puVar9 + 2) = uVar11;
    return 1;
  }
  uVar12 = uVar22;
  if (0x37 < (long)param_4 - param_7) {
    uVar12 = 0;
    if (2 < (int)uVar22) {
      uVar12 = uVar22;
    }
    if (param_6 < 6) {
      param_6 = 5;
    }
  }
  lVar21 = 0;
  uVar16 = 0;
  uVar19 = 0;
  uVar17 = 0;
  puVar1 = (ulong *)(param_4 + 1);
  uVar22 = *puVar9;
  do {
    uVar23 = uVar16;
    if ((uVar22 ^ uVar5) >> 0x1a != 0) goto joined_r0x00171a2c;
    uVar22 = uVar18 - uVar22 & 0x3ffffff;
    uVar7 = uVar19;
    if (uVar22 < param_8) {
      if (uVar22 < 9) {
        uVar22 = 8;
      }
      puVar14 = (uint *)((long)param_4 - (ulong)uVar22);
      if ((*puVar14 != uVar6) ||
         ((3 < (int)uVar16 &&
          ((lVar24 = (long)(int)uVar16, (long)param_5 - (long)param_4 <= lVar24 ||
           (*(char *)((long)param_4 + lVar24) != *(char *)((long)puVar14 + lVar24))))))) {
        uVar23 = 0;
        if (param_6 < 1) goto LAB_00171994;
        goto joined_r0x00171a2c;
      }
      puVar2 = (ulong *)(puVar14 + 1);
      puVar15 = puVar1;
      if (param_5 + -8 < puVar1) {
LAB_00171898:
        uVar13 = (long)puVar15 - (long)puVar1;
        pcVar20 = (char *)((long)puVar1 + (long)(int)uVar13);
        if (pcVar20 < param_5) {
          uVar13 = (long)(int)uVar13;
          do {
            if (*pcVar20 != *(char *)((long)puVar2 + uVar13)) goto LAB_00171980;
            uVar23 = (int)uVar13 + 1;
            uVar13 = (ulong)(int)uVar23;
            pcVar20 = (char *)((long)puVar1 + uVar13);
          } while (pcVar20 < param_5);
          uVar13 = (ulong)uVar23;
        }
      }
      else {
        uVar13 = *puVar2 ^ *puVar1;
        if (uVar13 == 0) {
          puVar8 = (ulong *)(param_4 + 3);
          do {
            puVar15 = puVar8;
            if (param_5 + -8 < puVar15) goto LAB_00171898;
            uVar13 = *(ulong *)((long)puVar15 + ((long)puVar2 - (long)puVar1)) ^ *puVar15;
            puVar8 = puVar15 + 1;
          } while (uVar13 == 0);
        }
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = (ulong)(((int)puVar15 - (int)puVar1) +
                        ((uint)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3));
      }
LAB_00171980:
      uVar23 = (int)uVar13 + 4;
      if ((int)uVar23 <= (int)uVar16) {
        uVar23 = 0;
      }
      if ((int)uVar23 < param_6) goto joined_r0x00171a2c;
LAB_00171994:
      if ((((int)*(uint *)(param_9 + 0x40) < 1) ||
          ((int)uVar22 < 1 << (ulong)(*(uint *)(param_9 + 0x40) & 0x1f))) ||
         (*(int *)(param_9 + 0x3c) <= (int)uVar23)) {
        if (uVar22 < 0x100000) {
LAB_001719f0:
          if ((5 < (int)uVar23) || ((int)uVar22 < (int)(&DAT_03cbeee8)[(int)uVar23])) {
LAB_00171a04:
            if ((int)uVar17 <= (int)uVar23) {
              if (uVar23 == uVar17) {
                uVar7 = uVar22;
                uVar16 = uVar17;
                if (uVar22 < uVar19) goto joined_r0x00171a2c;
              }
              else if ((uVar22 >> 7 <= uVar19) || ((int)(uVar17 + 1) < (int)uVar23)) {
                uVar17 = uVar23;
                uVar19 = uVar22;
              }
            }
          }
        }
        else if (uVar22 < 0x400000) {
          if (uVar22 < 0x200000) {
            if (4 < (int)uVar23) goto LAB_001719f0;
          }
          else if (5 < (int)uVar23) goto LAB_00171a04;
        }
        else if (7 < (int)uVar23) goto LAB_00171a04;
      }
    }
    else {
joined_r0x00171a2c:
      uVar19 = uVar7;
      uVar23 = uVar16;
    }
joined_r0x00171a2c:
    uVar16 = uVar23;
    if (lVar21 == 3) {
      uVar10 = *(undefined8 *)puVar9;
      uVar11 = *(undefined8 *)(puVar9 + 1);
      *puVar9 = uVar5 & 0xfc000000 | uVar18 & 0x3ffffff;
      *(undefined8 *)(puVar9 + 1) = uVar10;
      *(undefined8 *)(puVar9 + 2) = uVar11;
      if (uVar19 == 0) {
        if ((int)uVar12 < 2) {
          return 0;
        }
      }
      else if (((int)uVar12 < 2) ||
              ((((int)(uVar12 + 1) < (int)uVar17 &&
                (((int)(uVar12 + 2) < (int)uVar17 || (uVar19 < 0x400)))) &&
               (((int)(uVar12 + 3) < (int)uVar17 || (uVar19 < 0x10000)))))) {
        *param_1 = uVar17;
        param_1[1] = uVar19;
        return 1;
      }
      *param_1 = uVar12;
      param_1[1] = -iVar3;
      return 1;
    }
    lVar21 = lVar21 + 1;
    uVar22 = puVar9[lVar21];
  } while( true );
}


