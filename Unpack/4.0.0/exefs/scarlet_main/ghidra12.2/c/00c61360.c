/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c61360; name: FUN_00c61360
 */


uint * FUN_00c61360(uint *param_1,long param_2)

{
  size_t __len;
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  
  if (param_2 == 0) {
    return param_1;
  }
  if ((((byte)param_1[0xdc] >> 1 & 1) != 0) &&
     (iVar6 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xde)), iVar6 != 0)) {
    return param_1;
  }
  puVar12 = *(ulong **)(param_1 + 6);
  puVar8 = (ulong *)(param_2 + -0x10);
  if (puVar8 < puVar12) goto LAB_00c61a98;
  uVar11 = *(ulong *)(param_2 + -8);
  if ((uVar11 & 3) == 1) goto LAB_00c61a98;
  uVar10 = uVar11 & 0xfffffffffffffff8;
  puVar1 = (ulong *)((long)puVar8 + uVar10);
  if ((uVar11 & 1) != 0) goto LAB_00c613a4;
  uVar13 = *puVar8;
  if ((uVar11 & 3) == 0) {
    __len = uVar13 + uVar10 + 0x20;
    iVar6 = munmap((void *)((long)puVar8 - uVar13),__len);
    if (iVar6 == 0) {
      *(size_t *)(param_1 + 0xd6) = *(long *)(param_1 + 0xd6) - __len;
    }
    goto LAB_00c61640;
  }
  puVar8 = (ulong *)((long)puVar8 - uVar13);
  if (puVar8 < puVar12) goto LAB_00c61a98;
  uVar10 = uVar13 + uVar10;
  if (*(ulong **)(param_1 + 8) == puVar8) {
    if ((~(uint)puVar1[1] & 3) == 0) {
      *(ulong *)(param_1 + 2) = uVar10;
      puVar1[1] = puVar1[1] & 0xfffffffffffffffe;
      puVar8[1] = uVar10 | 1;
      *(ulong *)((long)puVar8 + uVar10) = uVar10;
      goto LAB_00c61640;
    }
  }
  else if (uVar13 < 0x100) {
    puVar17 = (ulong *)puVar8[2];
    puVar18 = (ulong *)puVar8[3];
    puVar14 = (ulong *)((long)param_1 + (uVar13 & 0x3fffffff8) * 2 + 0x48);
    if ((puVar17 != puVar14) && ((puVar17 < puVar12 || ((ulong *)puVar17[3] != puVar8))))
    goto LAB_00c61a98;
    if (puVar18 == puVar17) {
      *param_1 = *param_1 & (1 << (ulong)((uint)(uVar13 >> 3) & 0x1f) ^ 0xffffffffU);
    }
    else {
      if ((puVar18 != puVar14) && ((puVar18 < puVar12 || ((ulong *)puVar18[2] != puVar8))))
      goto LAB_00c61a98;
      puVar17[3] = (ulong)puVar18;
      puVar18[2] = (ulong)puVar17;
    }
  }
  else {
    puVar14 = (ulong *)puVar8[3];
    uVar11 = puVar8[6];
    if (puVar14 == puVar8) {
      puVar18 = (ulong *)puVar8[5];
      puVar17 = puVar8 + 5;
      if (puVar18 == (ulong *)0x0) {
        puVar18 = (ulong *)puVar8[4];
        puVar17 = puVar8 + 4;
        if (puVar18 == (ulong *)0x0) {
          puVar14 = (ulong *)0x0;
          goto LAB_00c61730;
        }
      }
      do {
        do {
          puVar14 = puVar18;
          puVar16 = puVar17;
          puVar18 = (ulong *)puVar14[5];
          puVar17 = puVar14 + 5;
        } while (puVar18 != (ulong *)0x0);
        puVar18 = (ulong *)puVar14[4];
        puVar17 = puVar14 + 4;
      } while (puVar18 != (ulong *)0x0);
      if (puVar16 < puVar12) goto LAB_00c61a98;
      *puVar16 = 0;
    }
    else {
      puVar17 = (ulong *)puVar8[2];
      if (((puVar17 < puVar12) || ((ulong *)puVar17[3] != puVar8)) ||
         ((ulong *)puVar14[2] != puVar8)) goto LAB_00c61a98;
      puVar17[3] = (ulong)puVar14;
      puVar14[2] = (ulong)puVar17;
    }
LAB_00c61730:
    if (uVar11 != 0) {
      if (*(ulong **)(param_1 + (ulong)(uint)puVar8[7] * 2 + 0x96) == puVar8) {
        *(ulong **)(param_1 + (ulong)(uint)puVar8[7] * 2 + 0x96) = puVar14;
        if (puVar14 == (ulong *)0x0) {
          param_1[1] = param_1[1] & (1 << (ulong)((uint)puVar8[7] & 0x1f) ^ 0xffffffffU);
        }
        else {
LAB_00c61770:
          if (puVar14 < *(ulong **)(param_1 + 6)) goto LAB_00c61a98;
          puVar14[6] = uVar11;
          uVar11 = puVar8[4];
          if (uVar11 != 0) {
            if (uVar11 < *(ulong *)(param_1 + 6)) goto LAB_00c61a98;
            puVar14[4] = uVar11;
            *(ulong **)(uVar11 + 0x30) = puVar14;
          }
          uVar11 = puVar8[5];
          if (uVar11 != 0) {
            if (uVar11 < *(ulong *)(param_1 + 6)) goto LAB_00c61a98;
            puVar14[5] = uVar11;
            *(ulong **)(uVar11 + 0x30) = puVar14;
          }
        }
      }
      else {
        if (uVar11 < *(ulong *)(param_1 + 6)) goto LAB_00c61a98;
        lVar9 = 0x20;
        if (*(ulong **)(uVar11 + 0x20) != puVar8) {
          lVar9 = 0x28;
        }
        *(ulong **)(uVar11 + lVar9) = puVar14;
        if (puVar14 != (ulong *)0x0) goto LAB_00c61770;
      }
    }
  }
LAB_00c613a4:
  if (puVar1 <= puVar8) goto LAB_00c61a98;
  uVar11 = puVar1[1];
  if ((uVar11 & 1) == 0) goto LAB_00c61a98;
  if (((uint)uVar11 >> 1 & 1) == 0) {
    if (*(ulong **)(param_1 + 10) == puVar1) {
      uVar10 = *(long *)(param_1 + 4) + uVar10;
      *(ulong *)(param_1 + 4) = uVar10;
      *(ulong **)(param_1 + 10) = puVar8;
      puVar8[1] = uVar10 | 1;
      if (puVar8 == *(ulong **)(param_1 + 8)) {
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      if (*(ulong *)(param_1 + 0xc) < uVar10) {
        FUN_00c63410(param_1,0);
      }
    }
    else if (*(ulong **)(param_1 + 8) == puVar1) {
      uVar10 = *(long *)(param_1 + 2) + uVar10;
      *(ulong *)(param_1 + 2) = uVar10;
      *(ulong **)(param_1 + 8) = puVar8;
      puVar8[1] = uVar10 | 1;
      *(ulong *)((long)puVar8 + uVar10) = uVar10;
    }
    else {
      if (uVar11 < 0x100) {
        uVar15 = puVar1[2];
        uVar4 = puVar1[3];
        uVar13 = (long)param_1 + (uVar11 & 0x3fffffff8) * 2 + 0x48;
        if ((uVar15 != uVar13) &&
           ((uVar15 < *(ulong *)(param_1 + 6) || (*(ulong **)(uVar15 + 0x18) != puVar1))))
        goto LAB_00c61a98;
        if (uVar4 == uVar15) {
          *param_1 = *param_1 & (1 << (ulong)((uint)(uVar11 >> 3) & 0x1f) ^ 0xffffffffU);
        }
        else {
          if ((uVar4 != uVar13) &&
             ((uVar4 < *(ulong *)(param_1 + 6) || (*(ulong **)(uVar4 + 0x10) != puVar1))))
          goto LAB_00c61a98;
          *(ulong *)(uVar15 + 0x18) = uVar4;
          *(ulong *)(uVar4 + 0x10) = uVar15;
        }
      }
      else {
        puVar12 = (ulong *)puVar1[3];
        uVar13 = puVar1[6];
        if (puVar12 == puVar1) {
          puVar17 = (ulong *)puVar1[5];
          puVar14 = puVar1 + 5;
          if (puVar17 == (ulong *)0x0) {
            puVar17 = (ulong *)puVar1[4];
            puVar14 = puVar1 + 4;
            if (puVar17 == (ulong *)0x0) {
              puVar12 = (ulong *)0x0;
              goto LAB_00c6168c;
            }
          }
          do {
            do {
              puVar12 = puVar17;
              puVar18 = puVar14;
              puVar17 = (ulong *)puVar12[5];
              puVar14 = puVar12 + 5;
            } while (puVar17 != (ulong *)0x0);
            puVar17 = (ulong *)puVar12[4];
            puVar14 = puVar12 + 4;
          } while (puVar17 != (ulong *)0x0);
          if (puVar18 < *(ulong **)(param_1 + 6)) goto LAB_00c61a98;
          *puVar18 = 0;
        }
        else {
          uVar15 = puVar1[2];
          if (((uVar15 < *(ulong *)(param_1 + 6)) || (*(ulong **)(uVar15 + 0x18) != puVar1)) ||
             ((ulong *)puVar12[2] != puVar1)) goto LAB_00c61a98;
          *(ulong **)(uVar15 + 0x18) = puVar12;
          puVar12[2] = uVar15;
        }
LAB_00c6168c:
        if (uVar13 != 0) {
          if (*(ulong **)(param_1 + (ulong)(uint)puVar1[7] * 2 + 0x96) == puVar1) {
            *(ulong **)(param_1 + (ulong)(uint)puVar1[7] * 2 + 0x96) = puVar12;
            if (puVar12 == (ulong *)0x0) {
              param_1[1] = param_1[1] & (1 << (ulong)((uint)puVar1[7] & 0x1f) ^ 0xffffffffU);
            }
            else {
LAB_00c61804:
              if (puVar12 < *(ulong **)(param_1 + 6)) goto LAB_00c61a98;
              puVar12[6] = uVar13;
              uVar13 = puVar1[4];
              if (uVar13 != 0) {
                if (uVar13 < *(ulong *)(param_1 + 6)) goto LAB_00c61a98;
                puVar12[4] = uVar13;
                *(ulong **)(uVar13 + 0x30) = puVar12;
              }
              uVar13 = puVar1[5];
              if (uVar13 != 0) {
                if (uVar13 < *(ulong *)(param_1 + 6)) goto LAB_00c61a98;
                puVar12[5] = uVar13;
                *(ulong **)(uVar13 + 0x30) = puVar12;
              }
            }
          }
          else {
            if (uVar13 < *(ulong *)(param_1 + 6)) goto LAB_00c61a98;
            lVar9 = 0x20;
            if (*(ulong **)(uVar13 + 0x20) != puVar1) {
              lVar9 = 0x28;
            }
            *(ulong **)(uVar13 + lVar9) = puVar12;
            if (puVar12 != (ulong *)0x0) goto LAB_00c61804;
          }
        }
      }
      uVar10 = (uVar11 & 0xfffffffffffffff8) + uVar10;
      puVar8[1] = uVar10 | 1;
      *(ulong *)((long)puVar8 + uVar10) = uVar10;
      if (puVar8 != *(ulong **)(param_1 + 8)) goto LAB_00c613cc;
      *(ulong *)(param_1 + 2) = uVar10;
    }
  }
  else {
    puVar1[1] = uVar11 & 0xfffffffffffffffe;
    puVar8[1] = uVar10 | 1;
    *(ulong *)((long)puVar8 + uVar10) = uVar10;
LAB_00c613cc:
    if (uVar10 < 0x100) {
      uVar13 = uVar10 & 0x3fffffff8;
      uVar7 = 1 << (ulong)((uint)(uVar10 >> 3) & 0x1f);
      uVar11 = (long)param_1 + uVar13 * 2 + 0x48;
      if ((*param_1 & uVar7) == 0) {
        *param_1 = *param_1 | uVar7;
        uVar10 = uVar11;
      }
      else {
        uVar10 = *(ulong *)((long)param_1 + uVar13 * 2 + 0x58);
        if (uVar10 < *(ulong *)(param_1 + 6)) {
LAB_00c61a98:
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      *(ulong **)((long)param_1 + uVar13 * 2 + 0x58) = puVar8;
      *(ulong **)(uVar10 + 0x18) = puVar8;
      puVar8[2] = uVar10;
      puVar8[3] = uVar11;
      bVar5 = (byte)param_1[0xdc];
      goto joined_r0x00c6141c;
    }
    if (uVar10 >> 0x18 == 0) {
      iVar6 = (int)(uVar10 >> 8);
      uVar7 = iVar6 + 0xfff00U >> 0x10 & 8;
      iVar6 = iVar6 << (ulong)uVar7;
      uVar2 = iVar6 + 0x7f000U >> 0x10 & 4;
      iVar6 = iVar6 << (ulong)uVar2;
      uVar3 = iVar6 + 0x3c000U >> 0x10 & 2;
      iVar6 = ((uint)(iVar6 << (ulong)uVar3) >> 0xf) - (uVar2 | uVar7 | uVar3);
      uVar7 = ((uint)(uVar10 >> ((ulong)(iVar6 + 0x15) & 0x3f)) & 1 | iVar6 * 2) + 0x1c;
    }
    else {
      uVar7 = 0x1f;
    }
    *(uint *)(puVar8 + 7) = uVar7;
    puVar8[4] = 0;
    puVar8[5] = 0;
    uVar2 = 1 << (ulong)(uVar7 & 0x1f);
    puVar12 = (ulong *)(param_1 + (ulong)uVar7 * 2 + 0x96);
    if ((param_1[1] & uVar2) == 0) {
      param_1[1] = param_1[1] | uVar2;
      *puVar12 = (ulong)puVar8;
      puVar8[6] = (ulong)puVar12;
    }
    else {
      uVar11 = 0;
      if (uVar7 != 0x1f) {
        uVar11 = 0x3f - (ulong)((uVar7 >> 1) + 6);
      }
      uVar13 = uVar10 << (uVar11 & 0x3f);
      uVar11 = *puVar12;
      do {
        uVar15 = uVar11;
        if ((*(ulong *)(uVar15 + 8) & 0xfffffffffffffff8) == uVar10) {
          if ((uVar15 < *(ulong *)(param_1 + 6)) ||
             (uVar11 = *(ulong *)(uVar15 + 0x10), uVar11 < *(ulong *)(param_1 + 6)))
          goto LAB_00c61a98;
          *(ulong **)(uVar11 + 0x18) = puVar8;
          *(ulong **)(uVar15 + 0x10) = puVar8;
          puVar8[6] = 0;
          puVar8[2] = uVar11;
          puVar8[3] = uVar15;
          goto LAB_00c61630;
        }
        uVar11 = uVar13 >> 0x3c;
        uVar13 = uVar13 << 1;
        puVar12 = (ulong *)(uVar15 + (uVar11 & 8) + 0x20);
        uVar11 = *puVar12;
      } while (*puVar12 != 0);
      if (puVar12 < *(ulong **)(param_1 + 6)) goto LAB_00c61a98;
      *puVar12 = (ulong)puVar8;
      puVar8[6] = uVar15;
    }
    puVar8[2] = (ulong)puVar8;
    puVar8[3] = (ulong)puVar8;
LAB_00c61630:
    lVar9 = *(long *)(param_1 + 0xe);
    *(long *)(param_1 + 0xe) = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      FUN_00c629a0();
    }
  }
LAB_00c61640:
  bVar5 = (byte)param_1[0xdc];
joined_r0x00c6141c:
  if ((bVar5 >> 1 & 1) == 0) {
    return param_1;
  }
  uVar7 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xde));
  return (uint *)(ulong)uVar7;
}


