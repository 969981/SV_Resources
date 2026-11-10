/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001a0e70; name: FUN_001a0e70
 */


/* WARNING: Removing unreachable block (ram,0x001a0ec8) */

undefined8
FUN_001a0e70(uint *param_1,int param_2,uint *param_3,char *param_4,int param_5,int param_6,
            long param_7,long param_8,uint param_9)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  ulong *puVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  
  iVar11 = param_6;
  if (param_6 < 0) {
    iVar11 = param_6 + 1;
  }
  iVar2 = 2;
  if (0x3f < param_5) {
    iVar2 = param_6 + -1;
  }
  uVar3 = *param_3;
  if (0x3f < param_5) {
    param_6 = param_6 + (iVar11 >> 1);
  }
  uVar7 = *(uint *)((long)param_3 - (long)param_2) ^ uVar3;
  if (uVar7 == 0) {
    puVar1 = (ulong *)(param_3 + 1);
    puVar19 = (ulong *)((uint *)((long)param_3 - (long)param_2) + 1);
    puVar18 = puVar1;
    if (param_4 + -8 < puVar1) {
LAB_001a0ee4:
      uVar20 = (long)puVar18 - (long)puVar1;
      pcVar12 = (char *)((long)puVar1 + (long)(int)uVar20);
      if (pcVar12 < param_4) {
        uVar20 = (long)(int)uVar20;
        do {
          if (*pcVar12 != *(char *)((long)puVar19 + uVar20)) goto LAB_001a0f94;
          uVar7 = (int)uVar20 + 1;
          uVar20 = (ulong)(int)uVar7;
          pcVar12 = (char *)((long)puVar1 + uVar20);
        } while (pcVar12 < param_4);
        uVar20 = (ulong)uVar7;
      }
    }
    else {
      uVar20 = *puVar19 ^ *puVar1;
      if (uVar20 == 0) {
        puVar9 = (ulong *)(param_3 + 3);
        do {
          puVar18 = puVar9;
          if (param_4 + -8 < puVar18) goto LAB_001a0ee4;
          uVar20 = *(ulong *)((long)puVar18 + ((long)puVar19 - (long)puVar1)) ^ *puVar18;
          puVar9 = puVar18 + 1;
        } while (uVar20 == 0);
      }
      uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar20 = (ulong)(((int)puVar18 - (int)puVar1) +
                      ((uint)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3));
    }
LAB_001a0f94:
    uVar7 = (int)uVar20 + 4;
    uVar14 = 0;
    if (iVar2 <= (int)uVar7) {
      uVar14 = uVar7;
    }
    if ((int)uVar14 < 4) goto LAB_001a0fa8;
  }
  else {
    if ((uVar7 & 0xffff) == 0) {
      uVar15 = 2;
      if ((uVar7 & 0xffffff) == 0) {
        uVar15 = 3;
      }
      uVar14 = 0;
      if (iVar2 <= (int)uVar15) {
        uVar14 = uVar15;
      }
      if (3 < uVar14) goto LAB_001a13b0;
    }
    else {
      uVar14 = 0;
    }
LAB_001a0fa8:
    uVar7 = (int)param_4 - (int)param_3;
    puVar1 = (ulong *)(param_3 + 1);
    puVar19 = (ulong *)(param_4 + -8);
    if ((int)uVar7 < param_6) {
      uVar20 = 0;
      uVar16 = 0;
      uVar17 = 0;
      do {
        uVar7 = *(uint *)((long)param_1 + (-(uVar20 >> 0x1f) & 0xfffffff800000000 | uVar20 << 3));
        if ((int)uVar7 < param_6 || param_4 < (char *)((long)param_3 + (long)(int)uVar7)) break;
        uVar15 = param_1[(long)(int)uVar20 * 2 + 1];
        if (param_9 <= uVar15) goto LAB_001a11dc;
        uVar6 = uVar15;
        if (uVar15 < 8) {
          do {
            uVar6 = uVar6 + uVar15;
          } while (uVar6 < 8);
          if ((long)(ulong)uVar6 <= (long)param_3 - param_8) {
            puVar8 = (uint *)((long)param_3 - (ulong)uVar6);
            if (*puVar8 == uVar3) {
              puVar18 = (ulong *)(puVar8 + 1);
              puVar9 = puVar1;
              if (puVar19 < puVar1) {
LAB_001a125c:
                uVar21 = (ulong)(int)((long)puVar9 - (long)puVar1);
                pcVar12 = (char *)((long)puVar1 + uVar21);
                uVar13 = (long)puVar9 - (long)puVar1;
                if (param_4 <= pcVar12) goto LAB_001a1368;
                do {
                  uVar13 = uVar21;
                  if (*pcVar12 != *(char *)((long)puVar18 + uVar21)) goto LAB_001a1368;
                  iVar11 = (int)uVar21;
                  uVar21 = (ulong)(iVar11 + 1);
                  pcVar12 = (char *)((long)puVar1 + uVar21);
                } while (pcVar12 < param_4);
                uVar7 = iVar11 + 5;
              }
              else {
                uVar13 = *puVar18 ^ *puVar1;
                if (uVar13 == 0) {
                  puVar4 = (ulong *)(param_3 + 3);
                  do {
                    puVar9 = puVar4;
                    if (puVar19 < puVar9) goto LAB_001a125c;
                    uVar13 = *(ulong *)((long)puVar9 + ((long)puVar18 - (long)puVar1)) ^ *puVar9;
                    puVar4 = puVar9 + 1;
                  } while (uVar13 == 0);
                }
                uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
                uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
                uVar13 = (ulong)(((int)puVar9 - (int)puVar1) +
                                ((uint)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3));
LAB_001a1368:
                uVar7 = (int)uVar13 + 4;
              }
              if (param_6 <= (int)uVar7) goto LAB_001a12b0;
            }
            else {
              uVar7 = 0;
              if (param_6 < 1) goto LAB_001a12b0;
            }
          }
        }
        else {
LAB_001a12b0:
          if (*(int *)(param_7 + LZCOUNT(uVar6) * 4) <= (int)uVar7) {
            if (uVar7 == uVar17) {
              bVar5 = SBORROW4(uVar6,uVar16);
              iVar11 = uVar6 - uVar16;
LAB_001a12cc:
              bVar5 = iVar11 < 0 != bVar5;
            }
            else if (((int)(uVar6 | uVar16) < 0x10000) ||
                    ((int)uVar16 < 0x10000 == (int)uVar6 < 0x10000)) {
              bVar5 = (int)uVar17 < (int)uVar7;
            }
            else {
              if ((int)uVar16 < 0x10000) {
                bVar5 = SBORROW4(uVar17 + 5,uVar7);
                iVar11 = (uVar17 + 5) - uVar7;
                goto LAB_001a12cc;
              }
              bVar5 = (int)(uVar17 - 5) <= (int)uVar7;
            }
            if (!bVar5) {
              uVar6 = uVar16;
              uVar7 = uVar17;
            }
            uVar17 = uVar7;
            uVar16 = uVar6;
          }
        }
LAB_001a11dc:
        uVar7 = (int)uVar20 + 1;
        uVar20 = (ulong)uVar7;
      } while (uVar7 != 4);
    }
    else {
      uVar20 = 0;
      uVar16 = 0;
      uVar17 = 0;
      for (uVar15 = *param_1; param_6 <= (int)uVar15;
          uVar15 = *(uint *)((long)param_1 +
                            (-(ulong)(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar20 << 3))) {
        uVar6 = param_1[(long)(int)uVar20 * 2 + 1];
        if (uVar6 < param_9) {
          uVar10 = uVar7;
          if ((char *)((long)param_3 + (long)(int)uVar15) <= param_4) {
            uVar10 = uVar15;
          }
          uVar15 = uVar6;
          if (uVar6 < 8) {
            do {
              uVar15 = uVar15 + uVar6;
            } while (uVar15 < 8);
            if ((long)param_3 - param_8 < (long)(ulong)uVar15) goto LAB_001a100c;
            puVar8 = (uint *)((long)param_3 - (ulong)uVar15);
            if (*puVar8 == uVar3) {
              puVar18 = (ulong *)(puVar8 + 1);
              puVar9 = puVar1;
              if (puVar19 < puVar1) {
LAB_001a108c:
                uVar21 = (ulong)(int)((long)puVar9 - (long)puVar1);
                pcVar12 = (char *)((long)puVar1 + uVar21);
                uVar13 = (long)puVar9 - (long)puVar1;
                if (param_4 <= pcVar12) goto LAB_001a11a8;
                do {
                  uVar13 = uVar21;
                  if (*pcVar12 != *(char *)((long)puVar18 + uVar21)) goto LAB_001a11a8;
                  iVar11 = (int)uVar21;
                  uVar21 = (ulong)(iVar11 + 1);
                  pcVar12 = (char *)((long)puVar1 + uVar21);
                } while (pcVar12 < param_4);
                uVar10 = iVar11 + 5;
              }
              else {
                uVar13 = *puVar18 ^ *puVar1;
                if (uVar13 == 0) {
                  puVar4 = (ulong *)(param_3 + 3);
                  do {
                    puVar9 = puVar4;
                    if (puVar19 < puVar9) goto LAB_001a108c;
                    uVar13 = *(ulong *)((long)puVar9 + ((long)puVar18 - (long)puVar1)) ^ *puVar9;
                    puVar4 = puVar9 + 1;
                  } while (uVar13 == 0);
                }
                uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
                uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
                uVar13 = (ulong)(((int)puVar9 - (int)puVar1) +
                                ((uint)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3));
LAB_001a11a8:
                uVar10 = (int)uVar13 + 4;
              }
              if ((int)uVar10 < param_6) goto LAB_001a100c;
            }
            else {
              uVar10 = 0;
              if (0 < param_6) goto LAB_001a100c;
            }
            if ((int)uVar10 < *(int *)(param_7 + LZCOUNT(uVar15) * 4)) goto LAB_001a100c;
          }
          else if ((int)uVar10 < *(int *)(param_7 + LZCOUNT(uVar6) * 4)) goto LAB_001a100c;
          if (uVar10 == uVar17) {
            bVar5 = SBORROW4(uVar15,uVar16);
            iVar11 = uVar15 - uVar16;
LAB_001a10fc:
            bVar5 = iVar11 < 0 != bVar5;
          }
          else if (((int)(uVar15 | uVar16) < 0x10000) ||
                  ((int)uVar16 < 0x10000 == (int)uVar15 < 0x10000)) {
            bVar5 = (int)uVar17 < (int)uVar10;
          }
          else {
            if ((int)uVar16 < 0x10000) {
              bVar5 = SBORROW4(uVar17 + 5,uVar10);
              iVar11 = (uVar17 + 5) - uVar10;
              goto LAB_001a10fc;
            }
            bVar5 = (int)(uVar17 - 5) <= (int)uVar10;
          }
          if (!bVar5) {
            uVar15 = uVar16;
            uVar10 = uVar17;
          }
          uVar17 = uVar10;
          uVar16 = uVar15;
        }
LAB_001a100c:
        uVar15 = (int)uVar20 + 1;
        uVar20 = (ulong)uVar15;
        if (uVar15 == 4) break;
      }
    }
    if (((int)uVar14 < 2) ||
       (((int)(uVar14 + 1) < (int)uVar17 &&
        (((int)(uVar14 + 4) < (int)uVar17 || ((int)uVar16 < 0x10000)))))) goto LAB_001a13b8;
  }
LAB_001a13b0:
  uVar16 = 0;
  uVar17 = uVar14;
LAB_001a13b8:
  return CONCAT44(uVar16,uVar17);
}


