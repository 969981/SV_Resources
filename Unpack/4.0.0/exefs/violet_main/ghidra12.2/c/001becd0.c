/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001becd0; name: FUN_001becd0
 */


undefined8
FUN_001becd0(int *param_1,long param_2,long param_3,uint *param_4,char *param_5,int param_6,
            uint param_7,long param_8)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  ulong *puVar18;
  int iVar19;
  char *pcVar20;
  long lVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  
  uVar6 = *param_4;
  *(long **)(param_2 + 0x20) = (long *)((long)param_4 + 1);
  uVar14 = *(long *)((long)param_4 + 1) * *(long *)(param_2 + 0x38);
  puVar9 = *(uint **)(param_2 + 0x28);
  uVar14 = (ulong)(uint)((int)(uVar14 >> 0x20) << (ulong)(*(uint *)(param_2 + 0x10) & 0x1f)) |
           (uVar14 >> 0x20) >> ((ulong)(0x20 - *(uint *)(param_2 + 0x10)) & 0x3f);
  uVar5 = *(uint *)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = (int)uVar14;
  lVar21 = *(long *)(param_2 + 8) + (uVar14 & *(uint *)(param_2 + 0x14)) * 4;
  *(long *)(param_2 + 0x28) = lVar21;
  Hint_Prefetch(lVar21,2,0,0);
  puVar17 = (uint *)((long)param_4 - (ulong)*(uint *)(param_3 + 0x20));
  uVar13 = *puVar17 ^ uVar6;
  if (uVar13 == 0) {
    puVar2 = (ulong *)(param_4 + 1);
    puVar3 = (ulong *)(puVar17 + 1);
    puVar18 = puVar2;
    if (param_5 + -8 < puVar2) {
LAB_001bed7c:
      uVar14 = (long)puVar18 - (long)puVar2;
      pcVar20 = (char *)((long)puVar2 + (long)(int)uVar14);
      if (pcVar20 < param_5) {
        uVar14 = (long)(int)uVar14;
        do {
          if (*pcVar20 != *(char *)((long)puVar3 + uVar14)) goto LAB_001bee1c;
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulong)(int)uVar13;
          pcVar20 = (char *)((long)puVar2 + uVar14);
        } while (pcVar20 < param_5);
        uVar14 = (ulong)uVar13;
      }
    }
    else {
      uVar14 = *puVar3 ^ *puVar2;
      if (uVar14 == 0) {
        puVar8 = (ulong *)(param_4 + 3);
        do {
          puVar18 = puVar8;
          if (param_5 + -8 < puVar18) goto LAB_001bed7c;
          uVar14 = *(ulong *)((long)puVar18 + ((long)puVar3 - (long)puVar2)) ^ *puVar18;
          puVar8 = puVar18 + 1;
        } while (uVar14 == 0);
      }
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = (ulong)(((int)puVar18 - (int)puVar2) +
                      ((uint)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3));
    }
LAB_001bee1c:
    iVar12 = (int)uVar14 + 4;
  }
  else if ((uVar13 & 0xffff) == 0) {
    iVar12 = 2;
    if ((uVar13 & 0xffffff) == 0) {
      iVar12 = 3;
    }
  }
  else {
    iVar12 = 0;
  }
  uVar13 = iVar12 << 3 | 6;
  if ((int)uVar13 < 8) {
    uVar13 = 7;
  }
  puVar17 = (uint *)((long)param_4 - (ulong)*(uint *)(param_3 + 0x24));
  uVar4 = *puVar17 ^ uVar6;
  if (uVar4 == 0) {
    puVar2 = (ulong *)(param_4 + 1);
    puVar3 = (ulong *)(puVar17 + 1);
    puVar18 = puVar2;
    if (param_5 + -8 < puVar2) {
LAB_001bee78:
      uVar14 = (long)puVar18 - (long)puVar2;
      pcVar20 = (char *)((long)puVar2 + (long)(int)uVar14);
      if (pcVar20 < param_5) {
        uVar14 = (long)(int)uVar14;
        do {
          if (*pcVar20 != *(char *)((long)puVar3 + uVar14)) goto LAB_001bef08;
          uVar4 = (int)uVar14 + 1;
          uVar14 = (ulong)(int)uVar4;
          pcVar20 = (char *)((long)puVar2 + uVar14);
        } while (pcVar20 < param_5);
        uVar14 = (ulong)uVar4;
      }
    }
    else {
      uVar14 = *puVar3 ^ *puVar2;
      if (uVar14 == 0) {
        puVar8 = (ulong *)(param_4 + 3);
        do {
          puVar18 = puVar8;
          if (param_5 + -8 < puVar18) goto LAB_001bee78;
          uVar14 = *(ulong *)((long)puVar18 + ((long)puVar3 - (long)puVar2)) ^ *puVar18;
          puVar8 = puVar18 + 1;
        } while (uVar14 == 0);
      }
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = (ulong)(((int)puVar18 - (int)puVar2) +
                      ((uint)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3));
    }
LAB_001bef08:
    iVar12 = (int)uVar14 + 4;
  }
  else {
    iVar15 = 2;
    if ((uVar4 & 0xffffff) == 0) {
      iVar15 = 3;
    }
    iVar12 = 0;
    if ((uVar4 & 0xffff) == 0) {
      iVar12 = iVar15;
    }
  }
  uVar4 = iVar12 << 3 | 5;
  if ((int)uVar13 <= (int)uVar4) {
    uVar13 = uVar4;
  }
  puVar17 = (uint *)((long)param_4 - (ulong)*(uint *)(param_3 + 0x28));
  uVar4 = *puVar17 ^ uVar6;
  if (uVar4 == 0) {
    puVar2 = (ulong *)(param_4 + 1);
    puVar3 = (ulong *)(puVar17 + 1);
    puVar18 = puVar2;
    if (param_5 + -8 < puVar2) {
LAB_001bef60:
      uVar14 = (long)puVar18 - (long)puVar2;
      pcVar20 = (char *)((long)puVar2 + (long)(int)uVar14);
      if (pcVar20 < param_5) {
        uVar14 = (long)(int)uVar14;
        do {
          if (*pcVar20 != *(char *)((long)puVar3 + uVar14)) goto LAB_001beff0;
          uVar4 = (int)uVar14 + 1;
          uVar14 = (ulong)(int)uVar4;
          pcVar20 = (char *)((long)puVar2 + uVar14);
        } while (pcVar20 < param_5);
        uVar14 = (ulong)uVar4;
      }
    }
    else {
      uVar14 = *puVar3 ^ *puVar2;
      if (uVar14 == 0) {
        puVar8 = (ulong *)(param_4 + 3);
        do {
          puVar18 = puVar8;
          if (param_5 + -8 < puVar18) goto LAB_001bef60;
          uVar14 = *(ulong *)((long)puVar18 + ((long)puVar3 - (long)puVar2)) ^ *puVar18;
          puVar8 = puVar18 + 1;
        } while (uVar14 == 0);
      }
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = (ulong)(((int)puVar18 - (int)puVar2) +
                      ((uint)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3));
    }
LAB_001beff0:
    iVar12 = (int)uVar14 + 4;
  }
  else {
    iVar15 = 2;
    if ((uVar4 & 0xffffff) == 0) {
      iVar15 = 3;
    }
    iVar12 = 0;
    if ((uVar4 & 0xffff) == 0) {
      iVar12 = iVar15;
    }
  }
  uVar4 = iVar12 << 3 | 4;
  if ((int)uVar13 <= (int)uVar4) {
    uVar13 = uVar4;
  }
  puVar17 = (uint *)((long)param_4 - (ulong)*(uint *)(param_3 + 0x2c));
  uVar4 = *puVar17 ^ uVar6;
  if (uVar4 == 0) {
    puVar2 = (ulong *)(param_4 + 1);
    puVar3 = (ulong *)(puVar17 + 1);
    puVar18 = puVar2;
    if (param_5 + -8 < puVar2) {
LAB_001bf048:
      uVar14 = (long)puVar18 - (long)puVar2;
      pcVar20 = (char *)((long)puVar2 + (long)(int)uVar14);
      if (pcVar20 < param_5) {
        uVar14 = (long)(int)uVar14;
        do {
          if (*pcVar20 != *(char *)((long)puVar3 + uVar14)) goto LAB_001bf0d8;
          uVar4 = (int)uVar14 + 1;
          uVar14 = (ulong)(int)uVar4;
          pcVar20 = (char *)((long)puVar2 + uVar14);
        } while (pcVar20 < param_5);
        uVar14 = (ulong)uVar4;
      }
    }
    else {
      uVar14 = *puVar3 ^ *puVar2;
      if (uVar14 == 0) {
        puVar8 = (ulong *)(param_4 + 3);
        do {
          puVar18 = puVar8;
          if (param_5 + -8 < puVar18) goto LAB_001bf048;
          uVar14 = *(ulong *)((long)puVar18 + ((long)puVar3 - (long)puVar2)) ^ *puVar18;
          puVar8 = puVar18 + 1;
        } while (uVar14 == 0);
      }
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = (ulong)(((int)puVar18 - (int)puVar2) +
                      ((uint)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3));
    }
LAB_001bf0d8:
    iVar12 = (int)uVar14 + 4;
  }
  else {
    iVar15 = 2;
    if ((uVar4 & 0xffffff) == 0) {
      iVar15 = 3;
    }
    iVar12 = 0;
    if ((uVar4 & 0xffff) == 0) {
      iVar12 = iVar15;
    }
  }
  uVar4 = iVar12 << 3 | 3;
  if ((int)uVar13 <= (int)uVar4) {
    uVar13 = uVar4;
  }
  puVar17 = (uint *)((long)param_4 - (ulong)*(uint *)(param_3 + 0x30));
  uVar4 = *puVar17 ^ uVar6;
  if (uVar4 == 0) {
    puVar2 = (ulong *)(param_4 + 1);
    puVar3 = (ulong *)(puVar17 + 1);
    puVar18 = puVar2;
    if (param_5 + -8 < puVar2) {
LAB_001bf130:
      uVar14 = (long)puVar18 - (long)puVar2;
      pcVar20 = (char *)((long)puVar2 + (long)(int)uVar14);
      if (pcVar20 < param_5) {
        uVar14 = (long)(int)uVar14;
        do {
          if (*pcVar20 != *(char *)((long)puVar3 + uVar14)) goto LAB_001bf1c0;
          uVar4 = (int)uVar14 + 1;
          uVar14 = (ulong)(int)uVar4;
          pcVar20 = (char *)((long)puVar2 + uVar14);
        } while (pcVar20 < param_5);
        uVar14 = (ulong)uVar4;
      }
    }
    else {
      uVar14 = *puVar3 ^ *puVar2;
      if (uVar14 == 0) {
        puVar8 = (ulong *)(param_4 + 3);
        do {
          puVar18 = puVar8;
          if (param_5 + -8 < puVar18) goto LAB_001bf130;
          uVar14 = *(ulong *)((long)puVar18 + ((long)puVar3 - (long)puVar2)) ^ *puVar18;
          puVar8 = puVar18 + 1;
        } while (uVar14 == 0);
      }
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = (ulong)(((int)puVar18 - (int)puVar2) +
                      ((uint)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3));
    }
LAB_001bf1c0:
    iVar12 = (int)uVar14 + 4;
  }
  else {
    iVar15 = 2;
    if ((uVar4 & 0xffffff) == 0) {
      iVar15 = 3;
    }
    iVar12 = 0;
    if ((uVar4 & 0xffff) == 0) {
      iVar12 = iVar15;
    }
  }
  uVar4 = iVar12 << 3 | 2;
  if ((int)uVar13 <= (int)uVar4) {
    uVar13 = uVar4;
  }
  puVar17 = (uint *)((long)param_4 - (ulong)*(uint *)(param_3 + 0x34));
  uVar4 = *puVar17 ^ uVar6;
  if (uVar4 == 0) {
    puVar2 = (ulong *)(param_4 + 1);
    puVar3 = (ulong *)(puVar17 + 1);
    puVar18 = puVar2;
    if (param_5 + -8 < puVar2) {
LAB_001bf218:
      uVar14 = (long)puVar18 - (long)puVar2;
      pcVar20 = (char *)((long)puVar2 + (long)(int)uVar14);
      if (pcVar20 < param_5) {
        uVar14 = (long)(int)uVar14;
        do {
          if (*pcVar20 != *(char *)((long)puVar3 + uVar14)) goto LAB_001bf2a8;
          uVar4 = (int)uVar14 + 1;
          uVar14 = (ulong)(int)uVar4;
          pcVar20 = (char *)((long)puVar2 + uVar14);
        } while (pcVar20 < param_5);
        uVar14 = (ulong)uVar4;
      }
    }
    else {
      uVar14 = *puVar3 ^ *puVar2;
      if (uVar14 == 0) {
        puVar8 = (ulong *)(param_4 + 3);
        do {
          puVar18 = puVar8;
          if (param_5 + -8 < puVar18) goto LAB_001bf218;
          uVar14 = *(ulong *)((long)puVar18 + ((long)puVar3 - (long)puVar2)) ^ *puVar18;
          puVar8 = puVar18 + 1;
        } while (uVar14 == 0);
      }
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = (ulong)(((int)puVar18 - (int)puVar2) +
                      ((uint)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3));
    }
LAB_001bf2a8:
    iVar12 = (int)uVar14 + 4;
  }
  else {
    iVar15 = 2;
    if ((uVar4 & 0xffffff) == 0) {
      iVar15 = 3;
    }
    iVar12 = 0;
    if ((uVar4 & 0xffff) == 0) {
      iVar12 = iVar15;
    }
  }
  uVar4 = iVar12 << 3 | 1;
  if ((int)uVar13 <= (int)uVar4) {
    uVar13 = uVar4;
  }
  puVar17 = (uint *)((long)param_4 - (ulong)*(uint *)(param_3 + 0x38));
  uVar4 = *puVar17 ^ uVar6;
  if (uVar4 == 0) {
    puVar2 = (ulong *)(param_4 + 1);
    puVar3 = (ulong *)(puVar17 + 1);
    puVar18 = puVar2;
    if (param_5 + -8 < puVar2) {
LAB_001bf2f8:
      uVar14 = (long)puVar18 - (long)puVar2;
      pcVar20 = (char *)((long)puVar2 + (long)(int)uVar14);
      if (pcVar20 < param_5) {
        uVar14 = (long)(int)uVar14;
        do {
          if (*pcVar20 != *(char *)((long)puVar3 + uVar14)) goto LAB_001bf398;
          uVar4 = (int)uVar14 + 1;
          uVar14 = (ulong)(int)uVar4;
          pcVar20 = (char *)((long)puVar2 + uVar14);
        } while (pcVar20 < param_5);
        uVar14 = (ulong)uVar4;
      }
    }
    else {
      uVar14 = *puVar3 ^ *puVar2;
      if (uVar14 == 0) {
        puVar8 = (ulong *)(param_4 + 3);
        do {
          puVar18 = puVar8;
          if (param_5 + -8 < puVar18) goto LAB_001bf2f8;
          uVar14 = *(ulong *)((long)puVar18 + ((long)puVar3 - (long)puVar2)) ^ *puVar18;
          puVar8 = puVar18 + 1;
        } while (uVar14 == 0);
      }
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = (ulong)(((int)puVar18 - (int)puVar2) +
                      ((uint)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3));
    }
LAB_001bf398:
    iVar12 = (int)uVar14 + 4;
  }
  else if ((uVar4 & 0xffff) == 0) {
    iVar12 = 2;
    if ((uVar4 & 0xffffff) == 0) {
      iVar12 = 3;
    }
  }
  else {
    iVar12 = 0;
  }
  uVar4 = (int)param_4 - *(int *)(param_2 + 0x18);
  if ((int)uVar13 <= iVar12 * 8) {
    uVar13 = iVar12 * 8;
  }
  iVar12 = (int)uVar13 >> 3;
  if (0x1f < (int)uVar13) {
    *param_1 = iVar12;
    param_1[1] = (uVar13 & 7) - 6;
    uVar10 = *(undefined8 *)puVar9;
    uVar11 = *(undefined8 *)(puVar9 + 1);
    *puVar9 = uVar5 & 0xfc000000 | uVar4 & 0x3ffffff;
    *(undefined8 *)(puVar9 + 1) = uVar10;
    *(undefined8 *)(puVar9 + 2) = uVar11;
    return 1;
  }
  lVar21 = 0;
  iVar19 = 0;
  iVar15 = 0;
  uVar16 = 0;
  puVar2 = (ulong *)(param_4 + 1);
  uVar22 = *puVar9;
  do {
    iVar23 = iVar15;
    if ((uVar22 ^ uVar5) >> 0x1a != 0) goto joined_r0x001bf61c;
    uVar22 = uVar4 - uVar22 & 0x3ffffff;
    uVar7 = uVar16;
    if (uVar22 < param_7) {
      if (uVar22 < 9) {
        uVar22 = 8;
      }
      puVar17 = (uint *)((long)param_4 - (ulong)uVar22);
      if ((*puVar17 != uVar6) ||
         ((3 < iVar15 &&
          ((lVar24 = (long)iVar15, (long)param_5 - (long)param_4 <= lVar24 ||
           (*(char *)((long)param_4 + lVar24) != *(char *)((long)puVar17 + lVar24))))))) {
        iVar23 = 0;
        if (param_6 < 1) goto LAB_001bf584;
        goto joined_r0x001bf61c;
      }
      puVar3 = (ulong *)(puVar17 + 1);
      puVar18 = puVar2;
      if (param_5 + -8 < puVar2) {
LAB_001bf488:
        uVar14 = (long)puVar18 - (long)puVar2;
        pcVar20 = (char *)((long)puVar2 + (long)(int)uVar14);
        if (pcVar20 < param_5) {
          uVar14 = (long)(int)uVar14;
          do {
            if (*pcVar20 != *(char *)((long)puVar3 + uVar14)) goto LAB_001bf570;
            uVar1 = (int)uVar14 + 1;
            uVar14 = (ulong)(int)uVar1;
            pcVar20 = (char *)((long)puVar2 + uVar14);
          } while (pcVar20 < param_5);
          uVar14 = (ulong)uVar1;
        }
      }
      else {
        uVar14 = *puVar3 ^ *puVar2;
        if (uVar14 == 0) {
          puVar8 = (ulong *)(param_4 + 3);
          do {
            puVar18 = puVar8;
            if (param_5 + -8 < puVar18) goto LAB_001bf488;
            uVar14 = *(ulong *)((long)puVar18 + ((long)puVar3 - (long)puVar2)) ^ *puVar18;
            puVar8 = puVar18 + 1;
          } while (uVar14 == 0);
        }
        uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = (ulong)(((int)puVar18 - (int)puVar2) +
                        ((uint)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3));
      }
LAB_001bf570:
      iVar23 = (int)uVar14 + 4;
      if (iVar23 <= iVar15) {
        iVar23 = 0;
      }
      if (iVar23 < param_6) goto joined_r0x001bf61c;
LAB_001bf584:
      if ((((int)*(uint *)(param_8 + 0x40) < 1) ||
          ((int)uVar22 < 1 << (ulong)(*(uint *)(param_8 + 0x40) & 0x1f))) ||
         (*(int *)(param_8 + 0x3c) <= iVar23)) {
        if (uVar22 < 0x100000) {
LAB_001bf5e0:
          if ((5 < iVar23) || ((int)uVar22 < (int)(&DAT_03cbfc6c)[iVar23])) {
LAB_001bf5f4:
            if (iVar19 <= iVar23) {
              if (iVar23 == iVar19) {
                uVar7 = uVar22;
                iVar15 = iVar19;
                if (uVar22 < uVar16) goto joined_r0x001bf61c;
              }
              else if ((uVar22 >> 7 <= uVar16) || (iVar19 + 1 < iVar23)) {
                iVar19 = iVar23;
                uVar16 = uVar22;
              }
            }
          }
        }
        else if (uVar22 < 0x400000) {
          if (uVar22 < 0x200000) {
            if (4 < iVar23) goto LAB_001bf5e0;
          }
          else if (5 < iVar23) goto LAB_001bf5f4;
        }
        else if (7 < iVar23) goto LAB_001bf5f4;
      }
    }
    else {
joined_r0x001bf61c:
      uVar16 = uVar7;
      iVar23 = iVar15;
    }
joined_r0x001bf61c:
    iVar15 = iVar23;
    if (lVar21 == 3) {
      uVar10 = *(undefined8 *)puVar9;
      uVar11 = *(undefined8 *)(puVar9 + 1);
      *puVar9 = uVar5 & 0xfc000000 | uVar4 & 0x3ffffff;
      *(undefined8 *)(puVar9 + 1) = uVar10;
      *(undefined8 *)(puVar9 + 2) = uVar11;
      if (uVar16 == 0) {
        if ((int)uVar13 < 0x10) {
          return 0;
        }
      }
      else if (((int)uVar13 < 0x10) ||
              (((iVar12 + 1 < iVar19 && ((uVar16 < 0x400 || (iVar12 + 2 < iVar19)))) &&
               ((uVar16 < 0x10000 || (iVar12 + 3 < iVar19)))))) {
        *param_1 = iVar19;
        param_1[1] = uVar16;
        return 1;
      }
      *param_1 = iVar12;
      param_1[1] = (uVar13 & 7) - 6;
      return 1;
    }
    lVar21 = lVar21 + 1;
    uVar22 = puVar9[lVar21];
  } while( true );
}


