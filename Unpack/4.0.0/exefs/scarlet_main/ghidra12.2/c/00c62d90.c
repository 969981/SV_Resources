/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c62d90; name: FUN_00c62d90
 */


void FUN_00c62d90(uint *param_1,ulong *param_2,ulong param_3)

{
  size_t __len;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  
  puVar9 = (ulong *)((long)param_2 + param_3);
  if ((param_2[1] & 1) == 0) {
    uVar7 = *param_2;
    if ((param_2[1] & 3) == 0) {
      __len = uVar7 + param_3 + 0x20;
      iVar3 = munmap((void *)((long)param_2 - uVar7),__len);
      if (iVar3 == 0) {
        *(size_t *)(param_1 + 0xd6) = *(long *)(param_1 + 0xd6) - __len;
        return;
      }
      return;
    }
    puVar11 = *(ulong **)(param_1 + 6);
    param_2 = (ulong *)((long)param_2 - uVar7);
    if (param_2 < puVar11) goto LAB_00c63404;
    param_3 = uVar7 + param_3;
    if (*(ulong **)(param_1 + 8) == param_2) {
      if ((~(uint)puVar9[1] & 3) == 0) {
        *(ulong *)(param_1 + 2) = param_3;
        puVar9[1] = puVar9[1] & 0xfffffffffffffffe;
        param_2[1] = param_3 | 1;
        *puVar9 = param_3;
        return;
      }
    }
    else if (uVar7 < 0x100) {
      puVar13 = (ulong *)param_2[2];
      puVar14 = (ulong *)param_2[3];
      puVar10 = (ulong *)((long)param_1 + (uVar7 & 0x3fffffff8) * 2 + 0x48);
      if ((puVar13 != puVar10) && ((puVar13 < puVar11 || ((ulong *)puVar13[3] != param_2))))
      goto LAB_00c63404;
      if (puVar14 == puVar13) {
        *param_1 = *param_1 & (1 << (ulong)((uint)(uVar7 >> 3) & 0x1f) ^ 0xffffffffU);
      }
      else {
        if ((puVar14 != puVar10) && ((puVar14 < puVar11 || ((ulong *)puVar14[2] != param_2))))
        goto LAB_00c63404;
        puVar13[3] = (ulong)puVar14;
        puVar14[2] = (ulong)puVar13;
      }
    }
    else {
      puVar10 = (ulong *)param_2[3];
      uVar7 = param_2[6];
      if (puVar10 == param_2) {
        puVar14 = (ulong *)param_2[5];
        puVar13 = param_2 + 5;
        if (puVar14 == (ulong *)0x0) {
          puVar14 = (ulong *)param_2[4];
          puVar13 = param_2 + 4;
          if (puVar14 == (ulong *)0x0) {
            puVar10 = (ulong *)0x0;
            goto LAB_00c632d8;
          }
        }
        do {
          do {
            puVar10 = puVar14;
            puVar12 = puVar13;
            puVar14 = (ulong *)puVar10[5];
            puVar13 = puVar10 + 5;
          } while (puVar14 != (ulong *)0x0);
          puVar14 = (ulong *)puVar10[4];
          puVar13 = puVar10 + 4;
        } while (puVar14 != (ulong *)0x0);
        if (puVar12 < puVar11) goto LAB_00c63404;
        *puVar12 = 0;
      }
      else {
        puVar13 = (ulong *)param_2[2];
        if (((puVar13 < puVar11) || ((ulong *)puVar13[3] != param_2)) ||
           ((ulong *)puVar10[2] != param_2)) goto LAB_00c63404;
        puVar13[3] = (ulong)puVar10;
        puVar10[2] = (ulong)puVar13;
      }
LAB_00c632d8:
      if (uVar7 != 0) {
        if (*(ulong **)(param_1 + (ulong)(uint)param_2[7] * 2 + 0x96) == param_2) {
          *(ulong **)(param_1 + (ulong)(uint)param_2[7] * 2 + 0x96) = puVar10;
          if (puVar10 == (ulong *)0x0) {
            param_1[1] = param_1[1] & (1 << (ulong)((uint)param_2[7] & 0x1f) ^ 0xffffffffU);
          }
          else {
LAB_00c63318:
            if (puVar10 < *(ulong **)(param_1 + 6)) goto LAB_00c63404;
            puVar10[6] = uVar7;
            uVar7 = param_2[4];
            if (uVar7 != 0) {
              if (uVar7 < *(ulong *)(param_1 + 6)) goto LAB_00c63404;
              puVar10[4] = uVar7;
              *(ulong **)(uVar7 + 0x30) = puVar10;
            }
            uVar7 = param_2[5];
            if (uVar7 != 0) {
              if (uVar7 < *(ulong *)(param_1 + 6)) goto LAB_00c63404;
              puVar10[5] = uVar7;
              *(ulong **)(uVar7 + 0x30) = puVar10;
            }
          }
        }
        else {
          if (uVar7 < *(ulong *)(param_1 + 6)) goto LAB_00c63404;
          lVar6 = 0x20;
          if (*(ulong **)(uVar7 + 0x20) != param_2) {
            lVar6 = 0x28;
          }
          *(ulong **)(uVar7 + lVar6) = puVar10;
          if (puVar10 != (ulong *)0x0) goto LAB_00c63318;
        }
      }
    }
  }
  puVar11 = *(ulong **)(param_1 + 6);
  if (puVar9 < puVar11) goto LAB_00c63404;
  uVar7 = puVar9[1];
  if (((uint)uVar7 >> 1 & 1) == 0) {
    if (*(ulong **)(param_1 + 10) == puVar9) {
      lVar6 = *(long *)(param_1 + 4);
      *(ulong *)(param_1 + 4) = lVar6 + param_3;
      *(ulong **)(param_1 + 10) = param_2;
      param_2[1] = lVar6 + param_3 | 1;
      if (param_2 == *(ulong **)(param_1 + 8)) {
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        return;
      }
      return;
    }
    if (*(ulong **)(param_1 + 8) == puVar9) {
      param_3 = *(long *)(param_1 + 2) + param_3;
      *(ulong *)(param_1 + 2) = param_3;
      *(ulong **)(param_1 + 8) = param_2;
      param_2[1] = param_3 | 1;
      *(ulong *)((long)param_2 + param_3) = param_3;
      return;
    }
    if (uVar7 < 0x100) {
      puVar13 = (ulong *)puVar9[2];
      puVar14 = (ulong *)puVar9[3];
      puVar10 = (ulong *)((long)param_1 + (uVar7 & 0x3fffffff8) * 2 + 0x48);
      if ((puVar13 != puVar10) && ((puVar13 < puVar11 || ((ulong *)puVar13[3] != puVar9))))
      goto LAB_00c63404;
      if (puVar14 == puVar13) {
        *param_1 = *param_1 & (1 << (ulong)((uint)(uVar7 >> 3) & 0x1f) ^ 0xffffffffU);
      }
      else {
        if ((puVar14 != puVar10) && ((puVar14 < puVar11 || ((ulong *)puVar14[2] != puVar9))))
        goto LAB_00c63404;
        puVar13[3] = (ulong)puVar14;
        puVar14[2] = (ulong)puVar13;
      }
    }
    else {
      puVar10 = (ulong *)puVar9[3];
      uVar8 = puVar9[6];
      if (puVar10 == puVar9) {
        puVar14 = (ulong *)puVar9[5];
        puVar13 = puVar9 + 5;
        if (puVar14 == (ulong *)0x0) {
          puVar14 = (ulong *)puVar9[4];
          puVar13 = puVar9 + 4;
          if (puVar14 == (ulong *)0x0) {
            puVar10 = (ulong *)0x0;
            goto LAB_00c63154;
          }
        }
        do {
          do {
            puVar10 = puVar14;
            puVar12 = puVar13;
            puVar14 = (ulong *)puVar10[5];
            puVar13 = puVar10 + 5;
          } while (puVar14 != (ulong *)0x0);
          puVar14 = (ulong *)puVar10[4];
          puVar13 = puVar10 + 4;
        } while (puVar14 != (ulong *)0x0);
        if (puVar12 < puVar11) goto LAB_00c63404;
        *puVar12 = 0;
      }
      else {
        puVar13 = (ulong *)puVar9[2];
        if (((puVar13 < puVar11) || ((ulong *)puVar13[3] != puVar9)) ||
           ((ulong *)puVar10[2] != puVar9)) goto LAB_00c63404;
        puVar13[3] = (ulong)puVar10;
        puVar10[2] = (ulong)puVar13;
      }
LAB_00c63154:
      if (uVar8 != 0) {
        if (*(ulong **)(param_1 + (ulong)(uint)puVar9[7] * 2 + 0x96) == puVar9) {
          *(ulong **)(param_1 + (ulong)(uint)puVar9[7] * 2 + 0x96) = puVar10;
          if (puVar10 == (ulong *)0x0) {
            param_1[1] = param_1[1] & (1 << (ulong)((uint)puVar9[7] & 0x1f) ^ 0xffffffffU);
          }
          else {
LAB_00c63194:
            if (puVar10 < *(ulong **)(param_1 + 6)) goto LAB_00c63404;
            puVar10[6] = uVar8;
            uVar8 = puVar9[4];
            if (uVar8 != 0) {
              if (uVar8 < *(ulong *)(param_1 + 6)) goto LAB_00c63404;
              puVar10[4] = uVar8;
              *(ulong **)(uVar8 + 0x30) = puVar10;
            }
            uVar8 = puVar9[5];
            if (uVar8 != 0) {
              if (uVar8 < *(ulong *)(param_1 + 6)) goto LAB_00c63404;
              puVar10[5] = uVar8;
              *(ulong **)(uVar8 + 0x30) = puVar10;
            }
          }
        }
        else {
          if (uVar8 < *(ulong *)(param_1 + 6)) goto LAB_00c63404;
          lVar6 = 0x20;
          if (*(ulong **)(uVar8 + 0x20) != puVar9) {
            lVar6 = 0x28;
          }
          *(ulong **)(uVar8 + lVar6) = puVar10;
          if (puVar10 != (ulong *)0x0) goto LAB_00c63194;
        }
      }
    }
    param_3 = (uVar7 & 0xfffffffffffffff8) + param_3;
    param_2[1] = param_3 | 1;
    *(ulong *)((long)param_2 + param_3) = param_3;
    if (param_2 == *(ulong **)(param_1 + 8)) {
      *(ulong *)(param_1 + 2) = param_3;
      return;
    }
  }
  else {
    puVar9[1] = uVar7 & 0xfffffffffffffffe;
    param_2[1] = param_3 | 1;
    *(ulong *)((long)param_2 + param_3) = param_3;
  }
  if (param_3 < 0x100) {
    uVar8 = param_3 & 0x3fffffff8;
    uVar4 = 1 << (ulong)((uint)(param_3 >> 3) & 0x1f);
    uVar5 = (long)param_1 + uVar8 * 2 + 0x48;
    if ((*param_1 & uVar4) == 0) {
      *param_1 = *param_1 | uVar4;
      uVar7 = uVar5;
    }
    else {
      uVar7 = *(ulong *)((long)param_1 + uVar8 * 2 + 0x58);
      if (uVar7 < *(ulong *)(param_1 + 6)) {
LAB_00c63404:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    *(ulong **)((long)param_1 + uVar8 * 2 + 0x58) = param_2;
    *(ulong **)(uVar7 + 0x18) = param_2;
LAB_00c62e1c:
    param_2[2] = uVar7;
    param_2[3] = uVar5;
  }
  else {
    if (param_3 >> 0x18 == 0) {
      iVar3 = (int)(param_3 >> 8);
      uVar4 = iVar3 + 0xfff00U >> 0x10 & 8;
      iVar3 = iVar3 << (ulong)uVar4;
      uVar1 = iVar3 + 0x7f000U >> 0x10 & 4;
      iVar3 = iVar3 << (ulong)uVar1;
      uVar2 = iVar3 + 0x3c000U >> 0x10 & 2;
      iVar3 = ((uint)(iVar3 << (ulong)uVar2) >> 0xf) - (uVar1 | uVar4 | uVar2);
      uVar4 = ((uint)(param_3 >> ((ulong)(iVar3 + 0x15) & 0x3f)) & 1 | iVar3 * 2) + 0x1c;
    }
    else {
      uVar4 = 0x1f;
    }
    *(uint *)(param_2 + 7) = uVar4;
    param_2[4] = 0;
    param_2[5] = 0;
    uVar1 = 1 << (ulong)(uVar4 & 0x1f);
    puVar9 = (ulong *)(param_1 + (ulong)uVar4 * 2 + 0x96);
    if ((param_1[1] & uVar1) == 0) {
      param_1[1] = param_1[1] | uVar1;
      *puVar9 = (ulong)param_2;
      param_2[6] = (ulong)puVar9;
    }
    else {
      uVar7 = 0;
      if (uVar4 != 0x1f) {
        uVar7 = 0x3f - (ulong)((uVar4 >> 1) + 6);
      }
      uVar8 = param_3 << (uVar7 & 0x3f);
      uVar7 = *puVar9;
      do {
        uVar5 = uVar7;
        if ((*(ulong *)(uVar5 + 8) & 0xfffffffffffffff8) == param_3) {
          if ((uVar5 < *(ulong *)(param_1 + 6)) ||
             (uVar7 = *(ulong *)(uVar5 + 0x10), uVar7 < *(ulong *)(param_1 + 6))) goto LAB_00c63404;
          *(ulong **)(uVar7 + 0x18) = param_2;
          *(ulong **)(uVar5 + 0x10) = param_2;
          param_2[6] = 0;
          goto LAB_00c62e1c;
        }
        uVar7 = uVar8 >> 0x3c;
        uVar8 = uVar8 << 1;
        puVar9 = (ulong *)(uVar5 + (uVar7 & 8) + 0x20);
        uVar7 = *puVar9;
      } while (*puVar9 != 0);
      if (puVar9 < *(ulong **)(param_1 + 6)) goto LAB_00c63404;
      *puVar9 = (ulong)param_2;
      param_2[6] = uVar5;
    }
    param_2[2] = (ulong)param_2;
    param_2[3] = (ulong)param_2;
  }
  return;
}


