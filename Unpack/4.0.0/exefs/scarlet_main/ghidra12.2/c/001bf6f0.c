/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001bf6f0; name: FUN_001bf6f0
 */


undefined8
FUN_001bf6f0(int *param_1,long param_2,long param_3,uint *param_4,char *param_5,int param_6,
            uint param_7,long param_8)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong *puVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  long *plVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  uint *puVar21;
  ulong *puVar22;
  char *pcVar23;
  uint uVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  uint *puVar28;
  long lVar29;
  
  plVar17 = (long *)((long)param_4 + 1);
  uVar8 = *param_4;
  *(long **)(param_2 + 0x20) = plVar17;
  uVar16 = *(uint *)(param_2 + 0x10);
  uVar7 = *(uint *)(param_2 + 0x40);
  puVar5 = *(uint **)(param_2 + 0x28);
  puVar6 = *(uint **)(param_2 + 0x30);
  uVar20 = *plVar17 * *(long *)(param_2 + 0x38);
  uVar20 = (ulong)(uint)((int)(uVar20 >> 0x20) << (ulong)(uVar16 & 0x1f)) |
           (uVar20 >> 0x20) >> ((ulong)(0x20 - uVar16) & 0x3f);
  *(int *)(param_2 + 0x40) = (int)uVar20;
  lVar25 = *(long *)(param_2 + 8) + (uVar20 & *(uint *)(param_2 + 0x14)) * 4;
  *(long *)(param_2 + 0x28) = lVar25;
  lVar29 = *(long *)(param_2 + 8) +
           ((ulong)(*plVar17 * -0x30e44323485a9b9d) >> ((ulong)-uVar16 & 0x3f) & 0x3ffffffffffffffc)
           * 4;
  *(long *)(param_2 + 0x30) = lVar29;
  Hint_Prefetch(lVar25,2,0,0);
  Hint_Prefetch(lVar29,2,0,0);
  puVar21 = (uint *)((long)param_4 - (ulong)*(uint *)(param_3 + 0x20));
  uVar16 = *puVar21 ^ uVar8;
  if (uVar16 == 0) {
    puVar2 = (ulong *)(param_4 + 1);
    puVar3 = (ulong *)(puVar21 + 1);
    puVar22 = puVar2;
    if (param_5 + -8 < puVar2) {
LAB_001bf7d0:
      uVar20 = (long)puVar22 - (long)puVar2;
      pcVar23 = (char *)((long)puVar2 + (long)(int)uVar20);
      if (pcVar23 < param_5) {
        uVar20 = (long)(int)uVar20;
        do {
          if (*pcVar23 != *(char *)((long)puVar3 + uVar20)) goto LAB_001bf870;
          uVar16 = (int)uVar20 + 1;
          uVar20 = (ulong)(int)uVar16;
          pcVar23 = (char *)((long)puVar2 + uVar20);
        } while (pcVar23 < param_5);
        uVar20 = (ulong)uVar16;
      }
    }
    else {
      uVar20 = *puVar3 ^ *puVar2;
      if (uVar20 == 0) {
        puVar11 = (ulong *)(param_4 + 3);
        do {
          puVar22 = puVar11;
          if (param_5 + -8 < puVar22) goto LAB_001bf7d0;
          uVar20 = *(ulong *)((long)puVar22 + ((long)puVar3 - (long)puVar2)) ^ *puVar22;
          puVar11 = puVar22 + 1;
        } while (uVar20 == 0);
      }
      uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar20 = (ulong)(((int)puVar22 - (int)puVar2) +
                      ((uint)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3));
    }
LAB_001bf870:
    iVar15 = (int)uVar20 + 4;
  }
  else if ((uVar16 & 0xffff) == 0) {
    iVar15 = 2;
    if ((uVar16 & 0xffffff) == 0) {
      iVar15 = 3;
    }
  }
  else {
    iVar15 = 0;
  }
  uVar16 = iVar15 << 3 | 6;
  if ((int)uVar16 < 8) {
    uVar16 = 7;
  }
  puVar21 = (uint *)((long)param_4 - (ulong)*(uint *)(param_3 + 0x24));
  uVar4 = *puVar21 ^ uVar8;
  if (uVar4 == 0) {
    puVar2 = (ulong *)(param_4 + 1);
    puVar3 = (ulong *)(puVar21 + 1);
    puVar22 = puVar2;
    if (param_5 + -8 < puVar2) {
LAB_001bf8cc:
      uVar20 = (long)puVar22 - (long)puVar2;
      pcVar23 = (char *)((long)puVar2 + (long)(int)uVar20);
      if (pcVar23 < param_5) {
        uVar20 = (long)(int)uVar20;
        do {
          if (*pcVar23 != *(char *)((long)puVar3 + uVar20)) goto LAB_001bf95c;
          uVar4 = (int)uVar20 + 1;
          uVar20 = (ulong)(int)uVar4;
          pcVar23 = (char *)((long)puVar2 + uVar20);
        } while (pcVar23 < param_5);
        uVar20 = (ulong)uVar4;
      }
    }
    else {
      uVar20 = *puVar3 ^ *puVar2;
      if (uVar20 == 0) {
        puVar11 = (ulong *)(param_4 + 3);
        do {
          puVar22 = puVar11;
          if (param_5 + -8 < puVar22) goto LAB_001bf8cc;
          uVar20 = *(ulong *)((long)puVar22 + ((long)puVar3 - (long)puVar2)) ^ *puVar22;
          puVar11 = puVar22 + 1;
        } while (uVar20 == 0);
      }
      uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar20 = (ulong)(((int)puVar22 - (int)puVar2) +
                      ((uint)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3));
    }
LAB_001bf95c:
    iVar15 = (int)uVar20 + 4;
  }
  else {
    iVar18 = 2;
    if ((uVar4 & 0xffffff) == 0) {
      iVar18 = 3;
    }
    iVar15 = 0;
    if ((uVar4 & 0xffff) == 0) {
      iVar15 = iVar18;
    }
  }
  uVar4 = iVar15 << 3 | 5;
  if ((int)uVar16 <= (int)uVar4) {
    uVar16 = uVar4;
  }
  puVar21 = (uint *)((long)param_4 - (ulong)*(uint *)(param_3 + 0x28));
  uVar4 = *puVar21 ^ uVar8;
  if (uVar4 == 0) {
    puVar2 = (ulong *)(param_4 + 1);
    puVar3 = (ulong *)(puVar21 + 1);
    puVar22 = puVar2;
    if (param_5 + -8 < puVar2) {
LAB_001bf9b4:
      uVar20 = (long)puVar22 - (long)puVar2;
      pcVar23 = (char *)((long)puVar2 + (long)(int)uVar20);
      if (pcVar23 < param_5) {
        uVar20 = (long)(int)uVar20;
        do {
          if (*pcVar23 != *(char *)((long)puVar3 + uVar20)) goto LAB_001bfa44;
          uVar4 = (int)uVar20 + 1;
          uVar20 = (ulong)(int)uVar4;
          pcVar23 = (char *)((long)puVar2 + uVar20);
        } while (pcVar23 < param_5);
        uVar20 = (ulong)uVar4;
      }
    }
    else {
      uVar20 = *puVar3 ^ *puVar2;
      if (uVar20 == 0) {
        puVar11 = (ulong *)(param_4 + 3);
        do {
          puVar22 = puVar11;
          if (param_5 + -8 < puVar22) goto LAB_001bf9b4;
          uVar20 = *(ulong *)((long)puVar22 + ((long)puVar3 - (long)puVar2)) ^ *puVar22;
          puVar11 = puVar22 + 1;
        } while (uVar20 == 0);
      }
      uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar20 = (ulong)(((int)puVar22 - (int)puVar2) +
                      ((uint)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3));
    }
LAB_001bfa44:
    iVar15 = (int)uVar20 + 4;
  }
  else {
    iVar18 = 2;
    if ((uVar4 & 0xffffff) == 0) {
      iVar18 = 3;
    }
    iVar15 = 0;
    if ((uVar4 & 0xffff) == 0) {
      iVar15 = iVar18;
    }
  }
  uVar4 = iVar15 << 3 | 4;
  if ((int)uVar16 <= (int)uVar4) {
    uVar16 = uVar4;
  }
  puVar21 = (uint *)((long)param_4 - (ulong)*(uint *)(param_3 + 0x2c));
  uVar4 = *puVar21 ^ uVar8;
  if (uVar4 == 0) {
    puVar2 = (ulong *)(param_4 + 1);
    puVar3 = (ulong *)(puVar21 + 1);
    puVar22 = puVar2;
    if (param_5 + -8 < puVar2) {
LAB_001bfa9c:
      uVar20 = (long)puVar22 - (long)puVar2;
      pcVar23 = (char *)((long)puVar2 + (long)(int)uVar20);
      if (pcVar23 < param_5) {
        uVar20 = (long)(int)uVar20;
        do {
          if (*pcVar23 != *(char *)((long)puVar3 + uVar20)) goto LAB_001bfb2c;
          uVar4 = (int)uVar20 + 1;
          uVar20 = (ulong)(int)uVar4;
          pcVar23 = (char *)((long)puVar2 + uVar20);
        } while (pcVar23 < param_5);
        uVar20 = (ulong)uVar4;
      }
    }
    else {
      uVar20 = *puVar3 ^ *puVar2;
      if (uVar20 == 0) {
        puVar11 = (ulong *)(param_4 + 3);
        do {
          puVar22 = puVar11;
          if (param_5 + -8 < puVar22) goto LAB_001bfa9c;
          uVar20 = *(ulong *)((long)puVar22 + ((long)puVar3 - (long)puVar2)) ^ *puVar22;
          puVar11 = puVar22 + 1;
        } while (uVar20 == 0);
      }
      uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar20 = (ulong)(((int)puVar22 - (int)puVar2) +
                      ((uint)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3));
    }
LAB_001bfb2c:
    iVar15 = (int)uVar20 + 4;
  }
  else {
    iVar18 = 2;
    if ((uVar4 & 0xffffff) == 0) {
      iVar18 = 3;
    }
    iVar15 = 0;
    if ((uVar4 & 0xffff) == 0) {
      iVar15 = iVar18;
    }
  }
  uVar4 = iVar15 << 3 | 3;
  if ((int)uVar16 <= (int)uVar4) {
    uVar16 = uVar4;
  }
  puVar21 = (uint *)((long)param_4 - (ulong)*(uint *)(param_3 + 0x30));
  uVar4 = *puVar21 ^ uVar8;
  if (uVar4 == 0) {
    puVar2 = (ulong *)(param_4 + 1);
    puVar3 = (ulong *)(puVar21 + 1);
    puVar22 = puVar2;
    if (param_5 + -8 < puVar2) {
LAB_001bfb84:
      uVar20 = (long)puVar22 - (long)puVar2;
      pcVar23 = (char *)((long)puVar2 + (long)(int)uVar20);
      if (pcVar23 < param_5) {
        uVar20 = (long)(int)uVar20;
        do {
          if (*pcVar23 != *(char *)((long)puVar3 + uVar20)) goto LAB_001bfc14;
          uVar4 = (int)uVar20 + 1;
          uVar20 = (ulong)(int)uVar4;
          pcVar23 = (char *)((long)puVar2 + uVar20);
        } while (pcVar23 < param_5);
        uVar20 = (ulong)uVar4;
      }
    }
    else {
      uVar20 = *puVar3 ^ *puVar2;
      if (uVar20 == 0) {
        puVar11 = (ulong *)(param_4 + 3);
        do {
          puVar22 = puVar11;
          if (param_5 + -8 < puVar22) goto LAB_001bfb84;
          uVar20 = *(ulong *)((long)puVar22 + ((long)puVar3 - (long)puVar2)) ^ *puVar22;
          puVar11 = puVar22 + 1;
        } while (uVar20 == 0);
      }
      uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar20 = (ulong)(((int)puVar22 - (int)puVar2) +
                      ((uint)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3));
    }
LAB_001bfc14:
    iVar15 = (int)uVar20 + 4;
  }
  else {
    iVar18 = 2;
    if ((uVar4 & 0xffffff) == 0) {
      iVar18 = 3;
    }
    iVar15 = 0;
    if ((uVar4 & 0xffff) == 0) {
      iVar15 = iVar18;
    }
  }
  uVar4 = iVar15 << 3 | 2;
  if ((int)uVar16 <= (int)uVar4) {
    uVar16 = uVar4;
  }
  puVar21 = (uint *)((long)param_4 - (ulong)*(uint *)(param_3 + 0x34));
  uVar4 = *puVar21 ^ uVar8;
  if (uVar4 == 0) {
    puVar2 = (ulong *)(param_4 + 1);
    puVar3 = (ulong *)(puVar21 + 1);
    puVar22 = puVar2;
    if (param_5 + -8 < puVar2) {
LAB_001bfc6c:
      uVar20 = (long)puVar22 - (long)puVar2;
      pcVar23 = (char *)((long)puVar2 + (long)(int)uVar20);
      if (pcVar23 < param_5) {
        uVar20 = (long)(int)uVar20;
        do {
          if (*pcVar23 != *(char *)((long)puVar3 + uVar20)) goto LAB_001bfcfc;
          uVar4 = (int)uVar20 + 1;
          uVar20 = (ulong)(int)uVar4;
          pcVar23 = (char *)((long)puVar2 + uVar20);
        } while (pcVar23 < param_5);
        uVar20 = (ulong)uVar4;
      }
    }
    else {
      uVar20 = *puVar3 ^ *puVar2;
      if (uVar20 == 0) {
        puVar11 = (ulong *)(param_4 + 3);
        do {
          puVar22 = puVar11;
          if (param_5 + -8 < puVar22) goto LAB_001bfc6c;
          uVar20 = *(ulong *)((long)puVar22 + ((long)puVar3 - (long)puVar2)) ^ *puVar22;
          puVar11 = puVar22 + 1;
        } while (uVar20 == 0);
      }
      uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar20 = (ulong)(((int)puVar22 - (int)puVar2) +
                      ((uint)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3));
    }
LAB_001bfcfc:
    iVar15 = (int)uVar20 + 4;
  }
  else {
    iVar18 = 2;
    if ((uVar4 & 0xffffff) == 0) {
      iVar18 = 3;
    }
    iVar15 = 0;
    if ((uVar4 & 0xffff) == 0) {
      iVar15 = iVar18;
    }
  }
  uVar4 = iVar15 << 3 | 1;
  if ((int)uVar16 <= (int)uVar4) {
    uVar16 = uVar4;
  }
  puVar21 = (uint *)((long)param_4 - (ulong)*(uint *)(param_3 + 0x38));
  uVar4 = *puVar21 ^ uVar8;
  if (uVar4 == 0) {
    puVar2 = (ulong *)(param_4 + 1);
    puVar3 = (ulong *)(puVar21 + 1);
    puVar22 = puVar2;
    if (param_5 + -8 < puVar2) {
LAB_001bfd4c:
      uVar20 = (long)puVar22 - (long)puVar2;
      pcVar23 = (char *)((long)puVar2 + (long)(int)uVar20);
      if (pcVar23 < param_5) {
        uVar20 = (long)(int)uVar20;
        do {
          if (*pcVar23 != *(char *)((long)puVar3 + uVar20)) goto LAB_001bfdec;
          uVar4 = (int)uVar20 + 1;
          uVar20 = (ulong)(int)uVar4;
          pcVar23 = (char *)((long)puVar2 + uVar20);
        } while (pcVar23 < param_5);
        uVar20 = (ulong)uVar4;
      }
    }
    else {
      uVar20 = *puVar3 ^ *puVar2;
      if (uVar20 == 0) {
        puVar11 = (ulong *)(param_4 + 3);
        do {
          puVar22 = puVar11;
          if (param_5 + -8 < puVar22) goto LAB_001bfd4c;
          uVar20 = *(ulong *)((long)puVar22 + ((long)puVar3 - (long)puVar2)) ^ *puVar22;
          puVar11 = puVar22 + 1;
        } while (uVar20 == 0);
      }
      uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar20 = (ulong)(((int)puVar22 - (int)puVar2) +
                      ((uint)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3));
    }
LAB_001bfdec:
    iVar15 = (int)uVar20 + 4;
  }
  else if ((uVar4 & 0xffff) == 0) {
    iVar15 = 2;
    if ((uVar4 & 0xffffff) == 0) {
      iVar15 = 3;
    }
  }
  else {
    iVar15 = 0;
  }
  uVar4 = (int)param_4 - *(int *)(param_2 + 0x18);
  if ((int)uVar16 <= iVar15 * 8) {
    uVar16 = iVar15 * 8;
  }
  iVar15 = (int)uVar16 >> 3;
  if (0x1f < (int)uVar16) {
    *param_1 = iVar15;
    param_1[1] = (uVar16 & 7) - 6;
    uVar13 = *(undefined8 *)puVar5;
    uVar14 = *(undefined8 *)(puVar5 + 1);
    uVar16 = uVar7 & 0xfc000000 | uVar4 & 0x3ffffff;
    *puVar5 = uVar16;
    *(undefined8 *)(puVar5 + 1) = uVar13;
    *(undefined8 *)(puVar5 + 2) = uVar14;
    uVar13 = *(undefined8 *)(puVar6 + 1);
    *(undefined8 *)(puVar6 + 1) = *(undefined8 *)puVar6;
    *(undefined8 *)(puVar6 + 2) = uVar13;
    *puVar6 = uVar16;
    return 1;
  }
  uVar19 = 0;
  iVar18 = 0;
  puVar2 = (ulong *)(param_4 + 1);
  puVar21 = puVar5;
LAB_001bfe8c:
  lVar25 = 0;
  iVar26 = 0;
  uVar24 = *puVar21;
  do {
    iVar27 = iVar26;
    if ((uVar24 ^ uVar7) >> 0x1a != 0) goto joined_r0x001bffb4;
    uVar24 = uVar4 - uVar24 & 0x3ffffff;
    uVar9 = uVar19;
    iVar10 = iVar18;
    if (uVar24 < param_7) {
      if (uVar24 < 9) {
        uVar24 = 8;
      }
      puVar28 = (uint *)((long)param_4 - (ulong)uVar24);
      if ((*puVar28 != uVar8) ||
         ((3 < iVar26 &&
          ((lVar29 = (long)iVar26, (long)param_5 - (long)param_4 <= lVar29 ||
           (*(char *)((long)param_4 + lVar29) != *(char *)((long)puVar28 + lVar29))))))) {
        iVar27 = 0;
        if (param_6 < 1) goto LAB_001c0004;
        goto joined_r0x001bffb4;
      }
      puVar3 = (ulong *)(puVar28 + 1);
      puVar22 = puVar2;
      if (param_5 + -8 < puVar2) {
LAB_001bff08:
        uVar20 = (long)puVar22 - (long)puVar2;
        pcVar23 = (char *)((long)puVar2 + (long)(int)uVar20);
        if (pcVar23 < param_5) {
          uVar20 = (long)(int)uVar20;
          do {
            if (*pcVar23 != *(char *)((long)puVar3 + uVar20)) goto LAB_001bfff0;
            uVar1 = (int)uVar20 + 1;
            uVar20 = (ulong)(int)uVar1;
            pcVar23 = (char *)((long)puVar2 + uVar20);
          } while (pcVar23 < param_5);
          uVar20 = (ulong)uVar1;
        }
      }
      else {
        uVar20 = *puVar3 ^ *puVar2;
        if (uVar20 == 0) {
          puVar11 = (ulong *)(param_4 + 3);
          do {
            puVar22 = puVar11;
            if (param_5 + -8 < puVar22) goto LAB_001bff08;
            uVar20 = *(ulong *)((long)puVar22 + ((long)puVar3 - (long)puVar2)) ^ *puVar22;
            puVar11 = puVar22 + 1;
          } while (uVar20 == 0);
        }
        uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
        uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
        uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
        uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
        uVar20 = (ulong)(((int)puVar22 - (int)puVar2) +
                        ((uint)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3));
      }
LAB_001bfff0:
      iVar27 = (int)uVar20 + 4;
      if (iVar27 <= iVar26) {
        iVar27 = 0;
      }
      if (iVar27 < param_6) goto joined_r0x001bffb4;
LAB_001c0004:
      if ((((int)*(uint *)(param_8 + 0x40) < 1) ||
          ((int)uVar24 < 1 << (ulong)(*(uint *)(param_8 + 0x40) & 0x1f))) ||
         (*(int *)(param_8 + 0x3c) <= iVar27)) {
        if (uVar24 < 0x100000) {
LAB_001c0060:
          if ((5 < iVar27) || ((int)uVar24 < (int)(&DAT_03cbfc6c)[iVar27])) {
LAB_001c0074:
            if (iVar18 <= iVar27) {
              uVar9 = uVar24;
              if (iVar27 == iVar18) {
                iVar26 = iVar18;
                if (uVar24 < uVar19) goto joined_r0x001bffb4;
              }
              else {
                iVar26 = iVar27;
                iVar10 = iVar27;
                if ((uVar24 >> 7 <= uVar19) || (iVar18 + 1 < iVar27)) goto joined_r0x001bffb4;
              }
            }
          }
        }
        else if (uVar24 < 0x400000) {
          if (uVar24 < 0x200000) {
            if (4 < iVar27) goto LAB_001c0060;
          }
          else if (5 < iVar27) goto LAB_001c0074;
        }
        else if (7 < iVar27) goto LAB_001c0074;
      }
    }
    else {
joined_r0x001bffb4:
      iVar27 = iVar26;
      uVar19 = uVar9;
      iVar18 = iVar10;
    }
joined_r0x001bffb4:
    iVar26 = iVar27;
    if (lVar25 == 3) break;
    lVar25 = lVar25 + 1;
    uVar24 = puVar21[lVar25];
  } while( true );
  bVar12 = puVar21 == puVar6;
  puVar21 = puVar6;
  if (bVar12) {
    uVar13 = *(undefined8 *)puVar5;
    uVar7 = uVar7 & 0xfc000000 | uVar4 & 0x3ffffff;
    *puVar5 = uVar7;
    uVar14 = *(undefined8 *)(puVar5 + 1);
    *(undefined8 *)(puVar5 + 1) = uVar13;
    *(undefined8 *)(puVar5 + 2) = uVar14;
    uVar13 = *(undefined8 *)puVar6;
    uVar14 = *(undefined8 *)(puVar6 + 1);
    *puVar6 = uVar7;
    *(undefined8 *)(puVar6 + 1) = uVar13;
    *(undefined8 *)(puVar6 + 2) = uVar14;
    if (uVar19 == 0) {
      if ((int)uVar16 < 0x10) {
        return 0;
      }
    }
    else if (((int)uVar16 < 0x10) ||
            (((iVar15 + 1 < iVar18 && ((uVar19 < 0x400 || (iVar15 + 2 < iVar18)))) &&
             ((uVar19 < 0x10000 || (iVar15 + 3 < iVar18)))))) {
      *param_1 = iVar18;
      param_1[1] = uVar19;
      return 1;
    }
    *param_1 = iVar15;
    param_1[1] = (uVar16 & 7) - 6;
    return 1;
  }
  goto LAB_001bfe8c;
}


