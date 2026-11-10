/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0016f000; name: FUN_0016f000
 */


ulong FUN_0016f000(long param_1,long param_2,uint *param_3,char *param_4,uint param_5,int param_6,
                  long param_7,uint param_8,long param_9)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  ulong *puVar10;
  uint uVar11;
  char *pcVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  
  puVar9 = (uint *)((long)param_3 - (ulong)*(uint *)(param_2 + 0x10));
  uVar4 = *param_3;
  uVar8 = *puVar9 ^ uVar4;
  if (uVar8 == 0) {
    puVar1 = (ulong *)(param_3 + 1);
    puVar2 = (ulong *)(puVar9 + 1);
    puVar10 = puVar1;
    if (param_4 + -8 < puVar1) {
LAB_0016f058:
      uVar17 = (long)puVar10 - (long)puVar1;
      pcVar12 = (char *)((long)puVar1 + (long)(int)uVar17);
      if (pcVar12 < param_4) {
        uVar17 = (long)(int)uVar17;
        do {
          if (*pcVar12 != *(char *)((long)puVar2 + uVar17)) goto LAB_0016f0e8;
          uVar8 = (int)uVar17 + 1;
          uVar17 = (ulong)(int)uVar8;
          pcVar12 = (char *)((long)puVar1 + uVar17);
        } while (pcVar12 < param_4);
        uVar17 = (ulong)uVar8;
      }
    }
    else {
      uVar17 = *puVar2 ^ *puVar1;
      if (uVar17 == 0) {
        puVar5 = (ulong *)(param_3 + 3);
        do {
          puVar10 = puVar5;
          if (param_4 + -8 < puVar10) goto LAB_0016f058;
          uVar17 = *(ulong *)((long)puVar10 + ((long)puVar2 - (long)puVar1)) ^ *puVar10;
          puVar5 = puVar10 + 1;
        } while (uVar17 == 0);
      }
      uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = (ulong)(((int)puVar10 - (int)puVar1) +
                      ((uint)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3));
    }
LAB_0016f0e8:
    uVar11 = (int)uVar17 + 4;
  }
  else {
    uVar7 = 2;
    if ((uVar8 & 0xffffff) == 0) {
      uVar7 = 3;
    }
    uVar11 = 0;
    if ((uVar8 & 0xffff) == 0) {
      uVar11 = uVar7;
    }
  }
  uVar8 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
  puVar9 = (uint *)((long)param_3 - (ulong)*(uint *)(param_2 + 0x14));
  iVar18 = -(uint)((int)uVar11 < 1);
  uVar11 = *puVar9 ^ uVar4;
  if (uVar11 == 0) {
    puVar1 = (ulong *)(param_3 + 1);
    puVar2 = (ulong *)(puVar9 + 1);
    puVar10 = puVar1;
    if (param_4 + -8 < puVar1) {
LAB_0016f13c:
      uVar17 = (long)puVar10 - (long)puVar1;
      pcVar12 = (char *)((long)puVar1 + (long)(int)uVar17);
      if (pcVar12 < param_4) {
        uVar17 = (long)(int)uVar17;
        do {
          if (*pcVar12 != *(char *)((long)puVar2 + uVar17)) goto LAB_0016f1cc;
          uVar11 = (int)uVar17 + 1;
          uVar17 = (ulong)(int)uVar11;
          pcVar12 = (char *)((long)puVar1 + uVar17);
        } while (pcVar12 < param_4);
        uVar17 = (ulong)uVar11;
      }
    }
    else {
      uVar17 = *puVar2 ^ *puVar1;
      if (uVar17 == 0) {
        puVar5 = (ulong *)(param_3 + 3);
        do {
          puVar10 = puVar5;
          if (param_4 + -8 < puVar10) goto LAB_0016f13c;
          uVar17 = *(ulong *)((long)puVar10 + ((long)puVar2 - (long)puVar1)) ^ *puVar10;
          puVar5 = puVar10 + 1;
        } while (uVar17 == 0);
      }
      uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = (ulong)(((int)puVar10 - (int)puVar1) +
                      ((uint)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3));
    }
LAB_0016f1cc:
    uVar7 = (int)uVar17 + 4;
  }
  else {
    uVar6 = 2;
    if ((uVar11 & 0xffffff) == 0) {
      uVar6 = 3;
    }
    uVar7 = 0;
    if ((uVar11 & 0xffff) == 0) {
      uVar7 = uVar6;
    }
  }
  if ((int)uVar8 < (int)uVar7) {
    iVar18 = 1;
  }
  else {
    uVar7 = uVar8;
  }
  puVar9 = (uint *)((long)param_3 - (ulong)*(uint *)(param_2 + 0x18));
  uVar8 = *puVar9 ^ uVar4;
  if (uVar8 == 0) {
    puVar1 = (ulong *)(param_3 + 1);
    puVar2 = (ulong *)(puVar9 + 1);
    puVar10 = puVar1;
    if (param_4 + -8 < puVar1) {
LAB_0016f218:
      uVar17 = (long)puVar10 - (long)puVar1;
      pcVar12 = (char *)((long)puVar1 + (long)(int)uVar17);
      if (pcVar12 < param_4) {
        uVar17 = (long)(int)uVar17;
        do {
          if (*pcVar12 != *(char *)((long)puVar2 + uVar17)) goto LAB_0016f2b8;
          uVar8 = (int)uVar17 + 1;
          uVar17 = (ulong)(int)uVar8;
          pcVar12 = (char *)((long)puVar1 + uVar17);
        } while (pcVar12 < param_4);
        uVar17 = (ulong)uVar8;
      }
    }
    else {
      uVar17 = *puVar2 ^ *puVar1;
      if (uVar17 == 0) {
        puVar5 = (ulong *)(param_3 + 3);
        do {
          puVar10 = puVar5;
          if (param_4 + -8 < puVar10) goto LAB_0016f218;
          uVar17 = *(ulong *)((long)puVar10 + ((long)puVar2 - (long)puVar1)) ^ *puVar10;
          puVar5 = puVar10 + 1;
        } while (uVar17 == 0);
      }
      uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = (ulong)(((int)puVar10 - (int)puVar1) +
                      ((uint)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3));
    }
LAB_0016f2b8:
    uVar11 = (int)uVar17 + 4;
  }
  else if ((uVar8 & 0xffff) == 0) {
    uVar11 = 2;
    if ((uVar8 & 0xffffff) == 0) {
      uVar11 = 3;
    }
  }
  else {
    uVar11 = 0;
  }
  uVar8 = uVar11;
  if ((int)uVar11 <= (int)uVar7) {
    uVar8 = uVar7;
  }
  iVar3 = 2;
  if ((int)uVar11 <= (int)uVar7) {
    iVar3 = iVar18;
  }
  if ((int)uVar8 < 4) {
    if (0x37 < param_6) {
      uVar11 = 0;
      if (2 < (int)uVar8) {
        uVar11 = uVar8;
      }
      param_5 = param_5 + 1;
      uVar8 = uVar11;
    }
    uVar17 = 0;
    uVar7 = 0;
    lVar16 = (long)param_4 - (long)param_3;
    puVar1 = (ulong *)(param_3 + 1);
    uVar11 = 0;
    do {
      uVar6 = *(uint *)(param_1 + (-(uVar17 >> 0x1f) & 0xfffffff800000000 | uVar17 << 3));
      lVar14 = (long)(int)uVar6;
      if ((int)uVar6 < (int)param_5) {
LAB_0016f55c:
        uVar13 = (ulong)uVar7;
        uVar6 = uVar11;
        break;
      }
      uVar15 = (uint)lVar16;
      if (lVar16 < lVar14) {
        uVar6 = uVar15;
      }
      if ((lVar14 > lVar16 && param_5 != uVar15) &&
          (lVar14 <= lVar16 || (int)uVar15 <= (int)param_5)) goto LAB_0016f55c;
      uVar15 = *(uint *)(param_1 + (long)(int)uVar17 * 8 + 4);
      uVar13 = (ulong)uVar15;
      if (uVar15 < param_8) {
        if (uVar15 < 8) {
          uVar13 = (ulong)*(uint *)(&DAT_03cbf820 + uVar13 * 4);
          if ((long)uVar13 <= (long)param_3 - param_7) {
            uVar15 = *(uint *)((long)param_3 - uVar13) ^ uVar4;
            if (uVar15 == 0) {
              puVar2 = (ulong *)((uint *)((long)param_3 - uVar13) + 1);
              puVar10 = puVar1;
              if (param_4 + -8 < puVar1) {
LAB_0016f400:
                uVar20 = (ulong)(int)((long)puVar10 - (long)puVar1);
                pcVar12 = (char *)((long)puVar1 + uVar20);
                uVar19 = (long)puVar10 - (long)puVar1;
                if (pcVar12 < param_4) {
                  do {
                    uVar19 = uVar20;
                    if (*pcVar12 != *(char *)((long)puVar2 + uVar20)) goto LAB_0016f4ec;
                    iVar18 = (int)uVar20;
                    uVar20 = (ulong)(iVar18 + 1);
                    pcVar12 = (char *)((long)puVar1 + uVar20);
                  } while (pcVar12 < param_4);
                  uVar6 = iVar18 + 5;
                  goto joined_r0x0016f448;
                }
              }
              else {
                uVar19 = *puVar2 ^ *puVar1;
                if (uVar19 == 0) {
                  puVar5 = (ulong *)(param_3 + 3);
                  do {
                    puVar10 = puVar5;
                    if (param_4 + -8 < puVar10) goto LAB_0016f400;
                    uVar19 = *(ulong *)((long)puVar10 + ((long)puVar2 - (long)puVar1)) ^ *puVar10;
                    puVar5 = puVar10 + 1;
                  } while (uVar19 == 0);
                }
                uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
                uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
                uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
                uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
                uVar19 = (ulong)(((int)puVar10 - (int)puVar1) +
                                ((uint)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3));
              }
LAB_0016f4ec:
              uVar6 = (int)uVar19 + 4;
            }
            else {
              uVar6 = 3;
              if ((uVar15 & 0xffffff) != 0) {
                uVar6 = 0;
              }
            }
joined_r0x0016f448:
            if ((int)param_5 <= (int)uVar6) goto LAB_0016f39c;
          }
          goto LAB_0016f4f8;
        }
LAB_0016f39c:
        iVar18 = (int)uVar13;
        if (((0 < (int)*(uint *)(param_9 + 0x40)) &&
            (1 << (ulong)(*(uint *)(param_9 + 0x40) & 0x1f) <= iVar18)) &&
           ((int)uVar6 < *(int *)(param_9 + 0x3c))) goto LAB_0016f4f8;
        if (0xfffff < iVar18) {
          if (iVar18 < 0x400000) {
            if (iVar18 < 0x200000) {
              if (4 < (int)uVar6) goto LAB_0016f458;
            }
            else if (5 < (int)uVar6) goto LAB_0016f46c;
          }
          else if (7 < (int)uVar6) goto LAB_0016f46c;
          goto LAB_0016f4f8;
        }
LAB_0016f458:
        if (((int)uVar6 < 6) && ((int)(&DAT_03cbeee8)[(int)uVar6] <= iVar18)) goto LAB_0016f4f8;
LAB_0016f46c:
        if ((int)uVar6 < (int)uVar11) goto LAB_0016f4f8;
        if (uVar6 == uVar11) {
          if ((int)uVar7 <= iVar18) goto LAB_0016f4f8;
          goto LAB_0016f4fc;
        }
        if (((int)uVar6 <= (int)(uVar11 + 1)) && ((int)uVar7 < iVar18 >> 7)) goto LAB_0016f4f8;
      }
      else {
LAB_0016f4f8:
        uVar13 = (ulong)uVar7;
LAB_0016f4fc:
        uVar6 = uVar11;
      }
      uVar15 = (int)uVar17 + 1;
      uVar17 = (ulong)uVar15;
      uVar7 = (uint)uVar13;
      uVar11 = uVar6;
    } while (uVar15 != 4);
    if ((1 < (int)uVar8) &&
       ((((int)uVar6 <= (int)(uVar8 + 1) ||
         (((int)uVar6 <= (int)(uVar8 + 2) && (0x3ff < (int)uVar13)))) ||
        (((int)uVar6 <= (int)(uVar8 + 3) && (0xffff < (int)uVar13)))))) {
      uVar13 = (ulong)(uint)-iVar3;
      uVar6 = uVar8;
    }
  }
  else {
    uVar13 = (ulong)(uint)-iVar3;
    uVar6 = uVar8;
  }
  return (ulong)uVar6 | uVar13 << 0x20;
}


