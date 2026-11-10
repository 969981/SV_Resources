/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0326ffe0; name: FUN_0326ffe0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0326ffe0(uint *param_1,uint *param_2,void *param_3,uint *param_4,uint param_5)

{
  bool bVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  void *pvVar22;
  void *pvVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  undefined8 local_ec;
  uint local_ac [19];
  
  uVar29 = (ulong)(int)param_5;
  uVar14 = uVar29;
  uVar28 = param_5 - 1;
  uVar13 = 0;
  do {
    uVar30 = uVar13;
    uVar18 = uVar28;
    uVar15 = uVar14;
    uVar14 = uVar15 - 1;
    if ((long)uVar15 < 1) break;
    uVar28 = uVar18 - 1;
    uVar13 = uVar30 - 1;
  } while (param_1[uVar14] == 0);
  uVar25 = (ulong)(param_5 + 1);
  uVar8 = uVar29;
  uVar28 = param_5 - 1;
  do {
    uVar21 = uVar30;
    uVar13 = uVar28;
    uVar26 = uVar8;
    uVar8 = uVar26 - 1;
    uVar25 = (ulong)((int)uVar25 - 1);
    if ((long)uVar26 < 1) break;
    uVar28 = uVar13 - 1;
    uVar30 = uVar21 + 1;
  } while (param_2[uVar8] == 0);
  uVar28 = (uint)uVar26;
  if (uVar28 == 0) {
    return;
  }
  iVar27 = (int)uVar15;
  if (iVar27 < (int)uVar28) {
    uVar14 = uVar29;
    pvVar22 = param_3;
    if (((ulong)param_3 & 0xf) != 0) {
      uVar14 = 4 - (((ulong)param_3 & 0xf) >> 2);
      uVar15 = uVar29;
      if (uVar14 <= uVar29) {
        uVar15 = uVar14;
      }
      uVar14 = uVar29 - uVar15;
      if (0 < (long)uVar15) {
        pvVar23 = (void *)((long)param_3 + uVar15 * 4);
        pvVar2 = pvVar23;
        if (pvVar23 <= (void *)((long)param_3 + 4U)) {
          pvVar2 = (void *)((long)param_3 + 4U);
        }
        memset(param_3,0,(long)pvVar2 + ~(ulong)param_3 + 4 & 0xfffffffffffffffc);
        do {
          pvVar22 = (void *)((long)pvVar22 + 4);
        } while (pvVar22 < pvVar23);
      }
    }
    param_3 = (void *)((long)param_3 + uVar29 * 4);
    if ((3 < uVar14) && (0 < (long)(uVar14 & 0xfffffffffffffffc))) {
      pvVar23 = (void *)((long)pvVar22 + (uVar14 & 0xfffffffffffffffc) * 4);
      pvVar2 = pvVar23;
      if (pvVar23 <= (void *)((long)pvVar22 + 0x10U)) {
        pvVar2 = (void *)((long)pvVar22 + 0x10U);
      }
      memset(pvVar22,0,(long)pvVar2 + ~(ulong)pvVar22 + 0x10 & 0xfffffffffffffff0);
      do {
        pvVar22 = (void *)((long)pvVar22 + 0x10);
      } while (pvVar22 < pvVar23);
    }
    if (pvVar22 < param_3) {
      memset(pvVar22,0,(long)param_3 + ~(ulong)pvVar22 + 4 & 0xfffffffffffffffc);
    }
    if ((param_4 != (uint *)0x0) && (0 < (int)param_5)) {
      uVar28 = param_5 & 3;
      if (2 < param_5 - 1) {
        iVar27 = -(param_5 & 0xfffffffc);
        puVar16 = param_4;
        do {
          *puVar16 = *param_1;
          puVar16[1] = param_1[1];
          puVar16[2] = param_1[2];
          puVar12 = param_1 + 3;
          param_1 = param_1 + 4;
          param_4 = puVar16 + 4;
          iVar27 = iVar27 + 4;
          puVar16[3] = *puVar12;
          puVar16 = param_4;
        } while (iVar27 != 0);
      }
      for (; uVar28 != 0; uVar28 = uVar28 - 1) {
        *param_4 = *param_1;
        param_4 = param_4 + 1;
        param_1 = param_1 + 1;
      }
    }
    return;
  }
  lVar17 = (long)(uVar15 << 0x20) >> 0x1e;
  if (uVar28 == 1) {
    if (iVar27 < 1) {
      uVar28 = 0;
    }
    else {
      uVar15 = (ulong)*param_2;
      lVar24 = 0;
      uVar14 = uVar14 & 0xffffffff;
      do {
        uVar8 = (ulong)param_1[uVar14] | lVar24 << 0x20;
        uVar25 = 0;
        if (uVar15 != 0) {
          uVar25 = uVar8 / uVar15;
        }
        *(int *)((long)param_3 + uVar14 * 4) = (int)uVar25;
        lVar24 = uVar8 - uVar25 * uVar15;
        uVar28 = (uint)lVar24;
        uVar14 = uVar14 - 1;
      } while (0 < (int)uVar14 + 1);
    }
    pvVar23 = (void *)((long)param_3 + lVar17);
    uVar14 = uVar29 - (long)iVar27;
    pvVar22 = pvVar23;
    if (((ulong)pvVar23 & 0xf) == 0) {
      uVar15 = uVar14;
    }
    else {
      uVar15 = 4 - (((ulong)pvVar23 & 0xf) >> 2);
      uVar8 = uVar14;
      if (uVar15 <= uVar14) {
        uVar8 = uVar15;
      }
      uVar15 = uVar14 - uVar8;
      if (0 < (long)uVar8) {
        pvVar2 = (void *)((long)pvVar23 + uVar8 * 4);
        pvVar5 = pvVar2;
        if (pvVar2 <= (void *)((long)pvVar23 + 4U)) {
          pvVar5 = (void *)((long)pvVar23 + 4U);
        }
        memset(pvVar23,0,(long)pvVar5 + (~(ulong)param_3 - lVar17) + 4 & 0xfffffffffffffffc);
        do {
          pvVar22 = (void *)((long)pvVar22 + 4);
        } while (pvVar22 < pvVar2);
      }
    }
    if ((3 < uVar15) && (0 < (long)(uVar15 & 0xfffffffffffffffc))) {
      pvVar2 = (void *)((long)pvVar22 + (uVar15 & 0xfffffffffffffffc) * 4);
      pvVar5 = pvVar2;
      if (pvVar2 <= (void *)((long)pvVar22 + 0x10U)) {
        pvVar5 = (void *)((long)pvVar22 + 0x10U);
      }
      memset(pvVar22,0,(long)pvVar5 + ~(ulong)pvVar22 + 0x10 & 0xfffffffffffffff0);
      do {
        pvVar22 = (void *)((long)pvVar22 + 0x10);
      } while (pvVar22 < pvVar2);
    }
    if (pvVar22 < (void *)((long)pvVar23 + uVar14 * 4)) {
      memset(pvVar22,0,(long)param_3 + ~(ulong)pvVar22 + uVar29 * 4 + 4 & 0xfffffffffffffffc);
    }
    if (param_4 == (uint *)0x0) {
      return;
    }
    puVar16 = param_4 + 1;
    uVar29 = uVar29 - 1;
    puVar12 = puVar16;
    if (((ulong)puVar16 & 0xf) == 0) {
      uVar14 = uVar29;
    }
    else {
      uVar14 = 4 - (((ulong)puVar16 & 0xf) >> 2);
      uVar15 = uVar29;
      if (uVar14 <= uVar29) {
        uVar15 = uVar14;
      }
      uVar14 = uVar29 - uVar15;
      if ((long)uVar15 < 1) {
      }
      else {
        puVar11 = puVar16 + uVar15;
        puVar19 = puVar11;
        if (puVar11 <= param_4 + 2) {
          puVar19 = param_4 + 2;
        }
        memset(puVar16,0,(long)puVar19 + ~(ulong)param_4 & 0xfffffffffffffffc);
        do {
          puVar12 = puVar12 + 1;
        } while (puVar12 < puVar11);
      }
    }
    if ((3 < uVar14) && (0 < (long)(uVar14 & 0xfffffffffffffffc))) {
      puVar11 = puVar12 + (uVar14 & 0xfffffffffffffffc);
      puVar19 = puVar11;
      if (puVar11 <= puVar12 + 4) {
        puVar19 = puVar12 + 4;
      }
      memset(puVar12,0,(long)puVar19 + ~(ulong)puVar12 + 0x10 & 0xfffffffffffffff0);
      do {
        puVar12 = puVar12 + 4;
      } while (puVar12 < puVar11);
    }
    if (puVar12 < puVar16 + uVar29) {
      memset(puVar12,0,(long)param_4 + (uVar29 * 4 - (long)puVar12) + 7 & 0xfffffffffffffffc);
    }
    *param_4 = uVar28;
    return;
  }
  uVar30 = LZCOUNT(param_2[uVar8]);
  if (uVar30 == 0) {
    uVar14 = -(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar15 & 0xffffffff) << 2;
    memcpy(local_ac,param_1,uVar14);
    *(undefined4 *)((long)local_ac + uVar14) = 0;
    memcpy(&local_ec,param_2,-(uVar26 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar26 & 0xffffffff) << 2
          );
  }
  else {
    *(uint *)((long)local_ac +
             (-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar15 & 0xffffffff) << 2)) =
         param_1[uVar14] >> (ulong)(-uVar30 & 0x1f);
    if (1 < iVar27) {
      uVar15 = uVar15 & 0xffffffff;
      puVar16 = param_1 + uVar18;
      puVar12 = local_ac + uVar18;
      do {
        iVar20 = (int)uVar15;
        uVar18 = iVar20 - 1;
        uVar15 = (ulong)uVar18;
        *puVar12 = param_1[iVar20 - 2] >> (ulong)(0x20 - uVar30 & 0x1f) |
                   *puVar16 << (ulong)(uVar30 & 0x1f);
        puVar16 = puVar16 + -1;
        puVar12 = puVar12 + -1;
      } while (1 < (int)uVar18);
    }
    local_ac[0] = *param_1 << (ulong)(uVar30 & 0x1f);
    if (1 < (int)uVar28) {
      uVar14 = uVar26 & 0xffffffff;
      puVar16 = param_2 + uVar13;
      puVar12 = (uint *)((long)&local_ec + (ulong)uVar13 * 4);
      do {
        iVar20 = (int)uVar14;
        uVar13 = iVar20 - 1;
        uVar14 = (ulong)uVar13;
        *puVar12 = param_2[iVar20 - 2] >> (ulong)(0x20 - uVar30 & 0x1f) |
                   *puVar16 << (ulong)(uVar30 & 0x1f);
        puVar16 = puVar16 + -1;
        puVar12 = puVar12 + -1;
      } while (1 < (int)uVar13);
    }
    local_ec._0_4_ = *param_2 << (ulong)(uVar30 & 0x1f);
  }
  uVar13 = iVar27 - uVar28;
  if (-1 < (int)uVar13) {
    uVar15 = (ulong)*(uint *)((long)&local_ec + uVar8 * 4);
    uVar14 = (ulong)uVar13;
    if ((int)uVar28 < 1) {
      do {
        lVar24 = uVar14 + (long)(int)uVar28;
        uVar8 = *(ulong *)((long)&local_ec + (lVar24 + 0xf) * 4);
        uVar7 = 0;
        if (uVar15 != 0) {
          uVar7 = uVar8 / uVar15;
        }
        uVar8 = uVar8 - uVar7 * uVar15;
        do {
          if ((uVar7 >> 0x20 == 0) &&
             (uVar7 * *(uint *)((long)&local_ec + (long)(int)(uVar28 - 2) * 4) <=
              ((ulong)local_ac[lVar24 + -2] | uVar8 << 0x20))) break;
          uVar8 = uVar8 + uVar15;
          uVar7 = uVar7 - 1;
        } while (uVar8 >> 0x20 == 0);
        *(int *)((long)param_3 + uVar14 * 4) = (int)uVar7;
        bVar1 = 0 < (long)uVar14;
        uVar14 = uVar14 - 1;
      } while (bVar1);
    }
    else {
      lVar24 = uVar25 - (uVar25 & 1);
      puVar16 = local_ac + (ulong)uVar21 + 1;
      do {
        lVar3 = uVar14 + (long)(int)uVar28;
        uVar8 = *(ulong *)((long)&local_ec + (lVar3 + 0xf) * 4);
        uVar7 = 0;
        if (uVar15 != 0) {
          uVar7 = uVar8 / uVar15;
        }
        uVar8 = uVar8 - uVar7 * uVar15;
        do {
          if ((uVar7 >> 0x20 == 0) &&
             (uVar7 * *(uint *)((long)&local_ec + (long)(int)(uVar28 - 2) * 4) <=
              ((ulong)local_ac[lVar3 + -2] | uVar8 << 0x20))) break;
          uVar8 = uVar8 + uVar15;
          uVar7 = uVar7 - 1;
        } while (uVar8 >> 0x20 == 0);
        if ((uVar26 & 0xffffffff) == 1) {
          lVar9 = 0;
          lVar10 = 0;
        }
        else {
          lVar9 = 0;
          lVar10 = 0;
          puVar11 = puVar16;
          puVar12 = (uint *)((long)&local_ec + 4);
          do {
            uVar18 = puVar12[-1];
            uVar21 = *puVar12;
            puVar12 = puVar12 + 2;
            lVar10 = ((ulong)puVar11[-1] - lVar10) - (uVar7 * uVar18 & 0xffffffff);
            puVar11[-1] = (uint)lVar10;
            lVar10 = ((ulong)*puVar11 + (lVar10 >> 0x20)) -
                     ((uVar7 * uVar18 >> 0x20) + (uVar7 * uVar21 & 0xffffffff));
            *puVar11 = (uint)lVar10;
            lVar10 = (uVar7 * uVar21 >> 0x20) - (lVar10 >> 0x20);
            lVar9 = lVar9 + 2;
            puVar11 = puVar11 + 2;
          } while (lVar24 != lVar9);
        }
        if ((uVar26 & 1) != 0) {
          uVar8 = uVar7 * *(uint *)((long)&local_ec + lVar9 * 4);
          lVar10 = ((ulong)local_ac[lVar9 + uVar14] - lVar10) - (uVar8 & 0xffffffff);
          local_ac[lVar9 + uVar14] = (uint)lVar10;
          lVar10 = (uVar8 >> 0x20) - (lVar10 >> 0x20);
        }
        uVar18 = local_ac[lVar3];
        local_ac[lVar3] = (uint)((ulong)uVar18 - lVar10);
        *(int *)((long)param_3 + uVar14 * 4) = (int)uVar7;
        if ((long)((ulong)uVar18 - lVar10) < 0) {
          *(int *)((long)param_3 + uVar14 * 4) = (int)uVar7 + -1;
          if ((uVar26 & 0xffffffff) == 1) {
            lVar9 = 0;
            lVar10 = 0;
          }
          else {
            lVar9 = 0;
            lVar10 = 0;
            puVar11 = puVar16;
            puVar12 = (uint *)((long)&local_ec + 4);
            do {
              puVar19 = puVar12 + -1;
              uVar18 = *puVar12;
              puVar12 = puVar12 + 2;
              lVar4 = lVar10 + (ulong)puVar11[-1] + (ulong)*puVar19;
              lVar9 = lVar9 + 2;
              lVar10 = (ulong)*puVar11 + (lVar4 >> 0x20) + (ulong)uVar18;
              puVar11[-1] = (uint)lVar4;
              *puVar11 = (uint)lVar10;
              lVar10 = lVar10 >> 0x20;
              puVar11 = puVar11 + 2;
            } while (lVar24 != lVar9);
          }
          if ((uVar26 & 1) != 0) {
            lVar10 = lVar10 + (ulong)local_ac[lVar9 + uVar14] +
                     (ulong)*(uint *)((long)&local_ec + lVar9 * 4);
            local_ac[lVar9 + uVar14] = (uint)lVar10;
            lVar10 = lVar10 >> 0x20;
          }
          local_ac[lVar3] = local_ac[lVar3] + (int)lVar10;
        }
        puVar16 = puVar16 + -1;
        bVar1 = 0 < (long)uVar14;
        uVar14 = uVar14 - 1;
      } while (bVar1);
    }
  }
  lVar24 = (long)(int)uVar28;
  pvVar22 = (void *)((long)param_3 + lVar24 * -4 + lVar17 + 4);
  uVar14 = (ulong)(int)(~uVar13 + param_5);
  pvVar23 = pvVar22;
  if (((ulong)pvVar22 & 0xf) == 0) {
    uVar15 = uVar14;
  }
  else {
    uVar15 = 4 - (((ulong)pvVar22 & 0xf) >> 2);
    uVar8 = uVar14;
    if (uVar15 <= uVar14) {
      uVar8 = uVar15;
    }
    uVar15 = uVar14 - uVar8;
    if (0 < (long)uVar8) {
      pvVar5 = (void *)((long)pvVar22 + uVar8 * 4);
      pvVar2 = (void *)((long)param_3 + (iVar27 - lVar24) * 4 + 8);
      pvVar6 = pvVar5;
      if (pvVar5 <= pvVar2) {
        pvVar6 = pvVar2;
      }
      memset(pvVar22,0,
             (long)pvVar6 + ~(ulong)param_3 + (lVar24 + ~(long)iVar27) * 4 + 4 & 0xfffffffffffffffc)
      ;
      do {
        pvVar23 = (void *)((long)pvVar23 + 4);
      } while (pvVar23 < pvVar5);
    }
  }
  if ((3 < uVar15) && (0 < (long)(uVar15 & 0xfffffffffffffffc))) {
    pvVar2 = (void *)((long)pvVar23 + (uVar15 & 0xfffffffffffffffc) * 4);
    pvVar5 = pvVar2;
    if (pvVar2 <= (void *)((long)pvVar23 + 0x10U)) {
      pvVar5 = (void *)((long)pvVar23 + 0x10U);
    }
    memset(pvVar23,0,(long)pvVar5 + ~(ulong)pvVar23 + 0x10 & 0xfffffffffffffff0);
    do {
      pvVar23 = (void *)((long)pvVar23 + 0x10);
    } while (pvVar23 < pvVar2);
  }
  if (pvVar23 < (void *)((long)pvVar22 + (long)(int)(~uVar13 + param_5) * 4)) {
    memset(pvVar23,0,
           (long)param_3 + (((uVar14 + (long)iVar27) - lVar24) * 4 - (long)pvVar23) + 7 &
           0xfffffffffffffffc);
  }
  if (param_4 == (uint *)0x0) {
    return;
  }
  if (uVar30 == 0) {
    if (0 < (long)uVar26) {
      uVar13 = uVar28 & 3;
      if (uVar28 - 1 < 3) {
        puVar11 = local_ac;
        puVar19 = param_4;
      }
      else {
        iVar27 = -(uVar28 & 0xfffffffc);
        puVar16 = local_ac;
        puVar12 = param_4;
        do {
          iVar27 = iVar27 + 4;
          uVar30 = puVar16[1];
          *puVar12 = *puVar16;
          puVar12[1] = uVar30;
          puVar11 = puVar16 + 4;
          uVar30 = puVar16[3];
          puVar19 = puVar12 + 4;
          puVar12[2] = puVar16[2];
          puVar12[3] = uVar30;
          puVar16 = puVar11;
          puVar12 = puVar19;
        } while (iVar27 != 0);
      }
      if ((uVar26 & 3) != 0) {
        do {
          uVar13 = uVar13 - 1;
          *puVar19 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar19 = puVar19 + 1;
        } while (uVar13 != 0);
      }
    }
  }
  else if (0 < (int)uVar28) {
    uVar13 = 0x20 - uVar30;
    if (uVar28 == 1) {
      lVar17 = 0;
      uVar18 = local_ac[0];
    }
    else {
      lVar17 = 0;
      puVar16 = local_ac;
      puVar12 = param_4 + 1;
      uVar18 = local_ac[0];
      do {
        puVar16 = puVar16 + 2;
        uVar21 = puVar16[-1];
        puVar12[-1] = uVar21 << (ulong)(uVar13 & 0x1f) | uVar18 >> (ulong)(uVar30 & 0x1f);
        uVar18 = *puVar16;
        lVar17 = lVar17 + 2;
        *puVar12 = uVar18 << (ulong)(uVar13 & 0x1f) | uVar21 >> (ulong)(uVar30 & 0x1f);
        puVar12 = puVar12 + 2;
      } while (uVar25 - (uVar25 & 1) != lVar17);
    }
    if ((uVar26 & 1) != 0) {
      param_4[lVar17] =
           local_ac[lVar17 + 1] << (ulong)(uVar13 & 0x1f) | uVar18 >> (ulong)(uVar30 & 0x1f);
    }
  }
  puVar12 = param_4 + lVar24;
  uVar14 = uVar29 - (long)(int)uVar28;
  puVar16 = puVar12;
  if (((ulong)puVar12 & 0xf) == 0) {
    uVar15 = uVar14;
  }
  else {
    uVar15 = 4 - (((ulong)puVar12 & 0xf) >> 2);
    uVar8 = uVar14;
    if (uVar15 <= uVar14) {
      uVar8 = uVar15;
    }
    uVar15 = uVar14 - uVar8;
    if (0 < (long)uVar8) {
      puVar11 = puVar12 + uVar8;
      puVar19 = puVar11;
      if (puVar11 <= puVar12 + 1) {
        puVar19 = puVar12 + 1;
      }
      memset(puVar12,0,(long)puVar19 + ~(ulong)param_4 + lVar24 * -4 + 4 & 0xfffffffffffffffc);
      do {
        puVar16 = puVar16 + 1;
      } while (puVar16 < puVar11);
    }
  }
  if ((3 < uVar15) && (0 < (long)(uVar15 & 0xfffffffffffffffc))) {
    puVar11 = puVar16 + (uVar15 & 0xfffffffffffffffc);
    puVar19 = puVar11;
    if (puVar11 <= puVar16 + 4) {
      puVar19 = puVar16 + 4;
    }
    memset(puVar16,0,(long)puVar19 + ~(ulong)puVar16 + 0x10 & 0xfffffffffffffff0);
    do {
      puVar16 = puVar16 + 4;
    } while (puVar16 < puVar11);
  }
  if (puVar16 < puVar12 + uVar14) {
    memset(puVar16,0,
           (long)param_4 + ~(ulong)puVar16 + ((lVar24 + uVar29) - (long)(int)uVar28) * 4 + 4 &
           0xfffffffffffffffc);
    return;
  }
  return;
}


