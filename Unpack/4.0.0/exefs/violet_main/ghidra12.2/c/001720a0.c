/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001720a0; name: FUN_001720a0
 */


undefined8
FUN_001720a0(uint *param_1,long param_2,long param_3,uint *param_4,char *param_5,int param_6,
            long param_7,uint param_8,long param_9)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  ulong *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  long *plVar17;
  ulong uVar18;
  uint *puVar19;
  ulong *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  char *pcVar24;
  uint uVar25;
  long lVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  long lVar30;
  
  plVar17 = (long *)((long)param_4 + 1);
  uVar8 = *param_4;
  *(long **)(param_2 + 0x20) = plVar17;
  uVar23 = *(uint *)(param_2 + 0x10);
  uVar7 = *(uint *)(param_2 + 0x40);
  puVar5 = *(uint **)(param_2 + 0x28);
  puVar6 = *(uint **)(param_2 + 0x30);
  uVar18 = *plVar17 * *(long *)(param_2 + 0x38);
  uVar18 = (ulong)(uint)((int)(uVar18 >> 0x20) << (ulong)(uVar23 & 0x1f)) |
           (uVar18 >> 0x20) >> ((ulong)(0x20 - uVar23) & 0x3f);
  *(int *)(param_2 + 0x40) = (int)uVar18;
  lVar26 = *(long *)(param_2 + 8) + (uVar18 & *(uint *)(param_2 + 0x14)) * 4;
  *(long *)(param_2 + 0x28) = lVar26;
  lVar30 = *(long *)(param_2 + 8) +
           ((ulong)(*plVar17 * -0x30e44323485a9b9d) >> ((ulong)-uVar23 & 0x3f) & 0x3ffffffffffffffc)
           * 4;
  *(long *)(param_2 + 0x30) = lVar30;
  Hint_Prefetch(lVar26,2,0,0);
  Hint_Prefetch(lVar30,2,0,0);
  puVar19 = (uint *)((long)param_4 - (ulong)*(uint *)(param_3 + 0x10));
  uVar23 = *puVar19 ^ uVar8;
  if (uVar23 == 0) {
    puVar1 = (ulong *)(param_4 + 1);
    puVar2 = (ulong *)(puVar19 + 1);
    puVar20 = puVar1;
    if (param_5 + -8 < puVar1) {
LAB_0017217c:
      uVar18 = (long)puVar20 - (long)puVar1;
      pcVar24 = (char *)((long)puVar1 + (long)(int)uVar18);
      if (pcVar24 < param_5) {
        uVar18 = (long)(int)uVar18;
        do {
          if (*pcVar24 != *(char *)((long)puVar2 + uVar18)) goto LAB_0017221c;
          uVar23 = (int)uVar18 + 1;
          uVar18 = (ulong)(int)uVar23;
          pcVar24 = (char *)((long)puVar1 + uVar18);
        } while (pcVar24 < param_5);
        uVar18 = (ulong)uVar23;
      }
    }
    else {
      uVar18 = *puVar2 ^ *puVar1;
      if (uVar18 == 0) {
        puVar9 = (ulong *)(param_4 + 3);
        do {
          puVar20 = puVar9;
          if (param_5 + -8 < puVar20) goto LAB_0017217c;
          uVar18 = *(ulong *)((long)puVar20 + ((long)puVar2 - (long)puVar1)) ^ *puVar20;
          puVar9 = puVar20 + 1;
        } while (uVar18 == 0);
      }
      uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
      uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      uVar18 = (ulong)(((int)puVar20 - (int)puVar1) +
                      ((uint)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3));
    }
LAB_0017221c:
    uVar16 = (int)uVar18 + 4;
  }
  else if ((uVar23 & 0xffff) == 0) {
    uVar16 = 2;
    if ((uVar23 & 0xffffff) == 0) {
      uVar16 = 3;
    }
  }
  else {
    uVar16 = 0;
  }
  puVar19 = (uint *)((long)param_4 - (ulong)*(uint *)(param_3 + 0x14));
  uVar23 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
  iVar4 = -(uint)((int)uVar16 < 1);
  uVar16 = *puVar19 ^ uVar8;
  if (uVar16 == 0) {
    puVar1 = (ulong *)(param_4 + 1);
    puVar2 = (ulong *)(puVar19 + 1);
    puVar20 = puVar1;
    if (param_5 + -8 < puVar1) {
LAB_00172270:
      uVar18 = (long)puVar20 - (long)puVar1;
      pcVar24 = (char *)((long)puVar1 + (long)(int)uVar18);
      if (pcVar24 < param_5) {
        uVar18 = (long)(int)uVar18;
        do {
          if (*pcVar24 != *(char *)((long)puVar2 + uVar18)) goto LAB_00172300;
          uVar16 = (int)uVar18 + 1;
          uVar18 = (ulong)(int)uVar16;
          pcVar24 = (char *)((long)puVar1 + uVar18);
        } while (pcVar24 < param_5);
        uVar18 = (ulong)uVar16;
      }
    }
    else {
      uVar18 = *puVar2 ^ *puVar1;
      if (uVar18 == 0) {
        puVar9 = (ulong *)(param_4 + 3);
        do {
          puVar20 = puVar9;
          if (param_5 + -8 < puVar20) goto LAB_00172270;
          uVar18 = *(ulong *)((long)puVar20 + ((long)puVar2 - (long)puVar1)) ^ *puVar20;
          puVar9 = puVar20 + 1;
        } while (uVar18 == 0);
      }
      uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
      uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      uVar18 = (ulong)(((int)puVar20 - (int)puVar1) +
                      ((uint)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3));
    }
LAB_00172300:
    uVar21 = (int)uVar18 + 4;
  }
  else {
    uVar22 = 2;
    if ((uVar16 & 0xffffff) == 0) {
      uVar22 = 3;
    }
    uVar21 = 0;
    if ((uVar16 & 0xffff) == 0) {
      uVar21 = uVar22;
    }
  }
  if ((int)uVar23 < (int)uVar21) {
    iVar4 = 1;
  }
  else {
    uVar21 = uVar23;
  }
  puVar19 = (uint *)((long)param_4 - (ulong)*(uint *)(param_3 + 0x18));
  uVar23 = *puVar19 ^ uVar8;
  if (uVar23 == 0) {
    puVar1 = (ulong *)(param_4 + 1);
    puVar2 = (ulong *)(puVar19 + 1);
    puVar20 = puVar1;
    if (param_5 + -8 < puVar1) {
LAB_0017234c:
      uVar18 = (long)puVar20 - (long)puVar1;
      pcVar24 = (char *)((long)puVar1 + (long)(int)uVar18);
      if (pcVar24 < param_5) {
        uVar18 = (long)(int)uVar18;
        do {
          if (*pcVar24 != *(char *)((long)puVar2 + uVar18)) goto LAB_001723ec;
          uVar23 = (int)uVar18 + 1;
          uVar18 = (ulong)(int)uVar23;
          pcVar24 = (char *)((long)puVar1 + uVar18);
        } while (pcVar24 < param_5);
        uVar18 = (ulong)uVar23;
      }
    }
    else {
      uVar18 = *puVar2 ^ *puVar1;
      if (uVar18 == 0) {
        puVar9 = (ulong *)(param_4 + 3);
        do {
          puVar20 = puVar9;
          if (param_5 + -8 < puVar20) goto LAB_0017234c;
          uVar18 = *(ulong *)((long)puVar20 + ((long)puVar2 - (long)puVar1)) ^ *puVar20;
          puVar9 = puVar20 + 1;
        } while (uVar18 == 0);
      }
      uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
      uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      uVar18 = (ulong)(((int)puVar20 - (int)puVar1) +
                      ((uint)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3));
    }
LAB_001723ec:
    uVar16 = (int)uVar18 + 4;
  }
  else if ((uVar23 & 0xffff) == 0) {
    uVar16 = 2;
    if ((uVar23 & 0xffffff) == 0) {
      uVar16 = 3;
    }
  }
  else {
    uVar16 = 0;
  }
  uVar22 = (int)param_4 - *(int *)(param_2 + 0x18);
  uVar23 = uVar16;
  if ((int)uVar16 <= (int)uVar21) {
    uVar23 = uVar21;
  }
  iVar3 = 2;
  if ((int)uVar16 <= (int)uVar21) {
    iVar3 = iVar4;
  }
  if (3 < (int)uVar23) {
    *param_1 = uVar23;
    param_1[1] = -iVar3;
    uVar14 = *(undefined8 *)puVar5;
    uVar15 = *(undefined8 *)(puVar5 + 1);
    uVar23 = uVar7 & 0xfc000000 | uVar22 & 0x3ffffff;
    *puVar5 = uVar23;
    *(undefined8 *)(puVar5 + 1) = uVar14;
    *(undefined8 *)(puVar5 + 2) = uVar15;
    uVar14 = *(undefined8 *)(puVar6 + 1);
    *(undefined8 *)(puVar6 + 1) = *(undefined8 *)puVar6;
    *(undefined8 *)(puVar6 + 2) = uVar14;
    *puVar6 = uVar23;
    return 1;
  }
  uVar16 = uVar23;
  if (0x37 < (long)param_4 - param_7) {
    uVar16 = 0;
    if (2 < (int)uVar23) {
      uVar16 = uVar23;
    }
    if (param_6 < 6) {
      param_6 = 5;
    }
  }
  uVar21 = 0;
  uVar23 = 0;
  puVar1 = (ulong *)(param_4 + 1);
  puVar19 = puVar5;
LAB_001724a8:
  lVar26 = 0;
  uVar27 = 0;
  uVar25 = *puVar19;
  do {
    uVar10 = uVar23;
    uVar12 = uVar21;
    if ((uVar25 ^ uVar7) >> 0x1a != 0) goto LAB_001724c4;
    uVar25 = uVar22 - uVar25 & 0x3ffffff;
    uVar11 = uVar27;
    if (uVar25 < param_8) {
      if (uVar25 < 9) {
        uVar25 = 8;
      }
      puVar29 = (uint *)((long)param_4 - (ulong)uVar25);
      if ((*puVar29 == uVar8) &&
         (((int)uVar27 < 4 ||
          ((lVar30 = (long)(int)uVar27, lVar30 < (long)param_5 - (long)param_4 &&
           (*(char *)((long)param_4 + lVar30) == *(char *)((long)puVar29 + lVar30))))))) {
        puVar2 = (ulong *)(puVar29 + 1);
        puVar20 = puVar1;
        if (param_5 + -8 < puVar1) {
LAB_00172524:
          uVar18 = (long)puVar20 - (long)puVar1;
          pcVar24 = (char *)((long)puVar1 + (long)(int)uVar18);
          if (pcVar24 < param_5) {
            uVar18 = (long)(int)uVar18;
            do {
              if (*pcVar24 != *(char *)((long)puVar2 + uVar18)) goto LAB_0017260c;
              uVar28 = (int)uVar18 + 1;
              uVar18 = (ulong)(int)uVar28;
              pcVar24 = (char *)((long)puVar1 + uVar18);
            } while (pcVar24 < param_5);
            uVar18 = (ulong)uVar28;
          }
        }
        else {
          uVar18 = *puVar2 ^ *puVar1;
          if (uVar18 == 0) {
            puVar9 = (ulong *)(param_4 + 3);
            do {
              puVar20 = puVar9;
              if (param_5 + -8 < puVar20) goto LAB_00172524;
              uVar18 = *(ulong *)((long)puVar20 + ((long)puVar2 - (long)puVar1)) ^ *puVar20;
              puVar9 = puVar20 + 1;
            } while (uVar18 == 0);
          }
          uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
          uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
          uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
          uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
          uVar18 = (ulong)(((int)puVar20 - (int)puVar1) +
                          ((uint)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3));
        }
LAB_0017260c:
        uVar28 = (int)uVar18 + 4;
        if ((int)uVar28 <= (int)uVar27) {
          uVar28 = 0;
        }
        if (param_6 <= (int)uVar28) goto LAB_00172620;
      }
      else {
        uVar28 = 0;
        if (param_6 < 1) {
LAB_00172620:
          uVar27 = uVar28;
          if ((((int)*(uint *)(param_9 + 0x40) < 1) ||
              ((int)uVar25 < 1 << (ulong)(*(uint *)(param_9 + 0x40) & 0x1f))) ||
             (*(int *)(param_9 + 0x3c) <= (int)uVar28)) {
            if (uVar25 < 0x100000) {
LAB_0017267c:
              if ((5 < (int)uVar28) || ((int)uVar25 < (int)(&DAT_03cbeee8)[(int)uVar28])) {
LAB_00172690:
                if ((int)uVar21 <= (int)uVar28) {
                  uVar10 = uVar25;
                  if (uVar28 == uVar21) {
                    uVar11 = uVar21;
                    if (uVar23 <= uVar25) goto LAB_001724c4;
                  }
                  else {
                    uVar11 = uVar28;
                    uVar12 = uVar28;
                    if ((uVar23 < uVar25 >> 7) && ((int)uVar28 <= (int)(uVar21 + 1)))
                    goto LAB_001724c4;
                  }
                  goto joined_r0x001726e8;
                }
              }
            }
            else if (uVar25 < 0x400000) {
              if (uVar25 < 0x200000) {
                if (4 < (int)uVar28) goto LAB_0017267c;
              }
              else if (5 < (int)uVar28) goto LAB_00172690;
            }
            else if (7 < (int)uVar28) goto LAB_00172690;
          }
LAB_001724c4:
          uVar10 = uVar23;
          uVar11 = uVar27;
          uVar12 = uVar21;
        }
      }
    }
joined_r0x001726e8:
    uVar21 = uVar12;
    uVar27 = uVar11;
    uVar23 = uVar10;
    if (lVar26 == 3) break;
    lVar26 = lVar26 + 1;
    uVar25 = puVar19[lVar26];
  } while( true );
  bVar13 = puVar19 == puVar6;
  puVar19 = puVar6;
  if (bVar13) {
    uVar14 = *(undefined8 *)puVar5;
    uVar7 = uVar7 & 0xfc000000 | uVar22 & 0x3ffffff;
    *puVar5 = uVar7;
    uVar15 = *(undefined8 *)(puVar5 + 1);
    *(undefined8 *)(puVar5 + 1) = uVar14;
    *(undefined8 *)(puVar5 + 2) = uVar15;
    uVar14 = *(undefined8 *)puVar6;
    uVar15 = *(undefined8 *)(puVar6 + 1);
    *puVar6 = uVar7;
    *(undefined8 *)(puVar6 + 1) = uVar14;
    *(undefined8 *)(puVar6 + 2) = uVar15;
    if (uVar23 == 0) {
      if ((int)uVar16 < 2) {
        return 0;
      }
    }
    else if (((int)uVar16 < 2) ||
            ((((int)(uVar16 + 1) < (int)uVar21 &&
              (((int)(uVar16 + 2) < (int)uVar21 || (uVar23 < 0x400)))) &&
             (((int)(uVar16 + 3) < (int)uVar21 || (uVar23 < 0x10000)))))) {
      *param_1 = uVar21;
      param_1[1] = uVar23;
      return 1;
    }
    *param_1 = uVar16;
    param_1[1] = -iVar3;
    return 1;
  }
  goto LAB_001724a8;
}


