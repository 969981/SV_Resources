/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ec0474; name: FUN_02ec0474
 */


void FUN_02ec0474(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  long lVar13;
  void *pvVar14;
  void *pvVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  int iVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  long lVar28;
  long *plVar29;
  ulong local_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar22 = param_2[3];
  lVar16 = param_2[4];
  lVar13 = param_2[5];
  param_1[2] = param_2[2];
  param_1[3] = lVar22;
  param_1[4] = lVar16;
  param_1[5] = lVar13;
  uVar5 = *(uint *)(param_2 + 1);
  puVar1 = (undefined4 *)0x0;
  if (*param_2 != 0) {
    puVar1 = (undefined4 *)(*param_2 + (long)param_2);
  }
  if ((0 < (int)uVar5) && (puVar1 != (undefined4 *)0x0)) {
    uVar9 = uVar5 - 1 | (int)(uVar5 - 1) >> 0x10;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    puVar11 = PTR_DAT_047d1a08;
    uVar9 = uVar9 | (int)uVar9 >> 8;
    uVar9 = uVar9 | (int)uVar9 >> 4;
    uVar9 = uVar9 | (int)uVar9 >> 2;
    uVar9 = (uVar9 | (int)uVar9 >> 1) + 1;
    if ((int)uVar9 < (int)uVar5) goto LAB_02ec0d14;
    local_68 = (-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2) + (long)(int)uVar9
    ;
    puVar12 = (undefined4 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    puVar26 = (undefined4 *)0x0;
    if (*param_1 != 0) {
      puVar26 = (undefined4 *)(*param_1 + (long)param_1);
    }
    uVar6 = *(uint *)(param_1 + 1);
    if (0 < (int)uVar6) {
      if (uVar6 == 1) {
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
        puVar25 = puVar26;
        puVar27 = puVar12;
        do {
          uVar7 = *puVar25;
          uVar23 = uVar23 + 2;
          *(undefined1 *)(puVar27 + 1) = *(undefined1 *)(puVar25 + 1);
          *puVar27 = uVar7;
          uVar7 = *(undefined4 *)((long)puVar25 + 5);
          *(undefined1 *)((long)puVar27 + 9) = *(undefined1 *)((long)puVar25 + 9);
          *(undefined4 *)((long)puVar27 + 5) = uVar7;
          puVar27 = (undefined4 *)((long)puVar27 + 10);
          puVar25 = (undefined4 *)((long)puVar25 + 10);
        } while (((ulong)uVar6 & 0xfffffffe) != uVar23);
      }
      if ((uVar6 & 1) != 0) {
        puVar26 = (undefined4 *)((long)puVar26 + uVar23 * 5);
        puVar27 = (undefined4 *)((long)puVar12 + uVar23 * 5);
        uVar7 = *puVar26;
        *(undefined1 *)(puVar27 + 1) = *(undefined1 *)(puVar26 + 1);
        *puVar27 = uVar7;
      }
    }
    if (*(int *)((long)param_1 + 0xc) < 0) {
      lVar16 = 0;
      if (*param_1 != 0) {
        lVar16 = *param_1 + (long)param_1;
      }
      (**(code **)(puVar11 + 8))(0,lVar16,0);
    }
    lVar16 = 0;
    if (puVar12 != (undefined4 *)0x0) {
      lVar16 = (long)puVar12 - (long)param_1;
    }
    uVar23 = 0;
    *param_1 = lVar16;
    *(uint *)(param_1 + 1) = uVar5;
    *(uint *)((long)param_1 + 0xc) = uVar9 | 0x80000000;
    if (uVar5 != 1) {
      uVar23 = 0;
      puVar12 = puVar1;
      puVar26 = (undefined4 *)(lVar16 + (long)param_1);
      do {
        uVar7 = *puVar12;
        uVar23 = uVar23 + 2;
        *(undefined1 *)(puVar26 + 1) = *(undefined1 *)(puVar12 + 1);
        *puVar26 = uVar7;
        uVar7 = *(undefined4 *)((long)puVar12 + 5);
        *(undefined1 *)((long)puVar26 + 9) = *(undefined1 *)((long)puVar12 + 9);
        *(undefined4 *)((long)puVar26 + 5) = uVar7;
        puVar26 = (undefined4 *)((long)puVar26 + 10);
        puVar12 = (undefined4 *)((long)puVar12 + 10);
      } while (((ulong)uVar5 & 0xfffffffe) != uVar23);
    }
    if ((uVar5 & 1) != 0) {
      puVar26 = (undefined4 *)(lVar16 + (long)param_1 + uVar23 * 5);
      puVar1 = (undefined4 *)((long)puVar1 + uVar23 * 5);
      uVar7 = *puVar1;
      *(undefined1 *)(puVar26 + 1) = *(undefined1 *)(puVar1 + 1);
      *puVar26 = uVar7;
    }
  }
  lVar16 = param_2[6];
  uVar21 = *(undefined8 *)((long)param_2 + 0x35);
  plVar29 = param_1 + 8;
  *plVar29 = 0;
  *(undefined8 *)((long)param_1 + 0x35) = uVar21;
  param_1[6] = lVar16;
  param_1[9] = 0;
  lVar22 = param_2[8];
  uVar5 = *(uint *)(param_2 + 9);
  uVar23 = (ulong)uVar5;
  lVar16 = 0;
  if (lVar22 != 0) {
    lVar16 = lVar22 + (long)(param_2 + 8);
  }
  if ((0 < (int)uVar5) && (lVar16 != 0)) {
    uVar9 = uVar5 - 1 | (int)(uVar5 - 1) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
    uVar9 = uVar9 | (int)uVar9 >> 8;
    uVar9 = uVar9 | (int)uVar9 >> 4;
    uVar9 = uVar9 | (int)uVar9 >> 2;
    uVar9 = (uVar9 | (int)uVar9 >> 1) + 1;
    if ((int)uVar9 < (int)uVar5) goto LAB_02ec0d14;
    local_68 = (long)(int)uVar9 * 0x60;
    lVar13 = (**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    uVar6 = *(uint *)(param_1 + 9);
    lVar22 = 0;
    if (param_1[8] != 0) {
      lVar22 = param_1[8] + (long)plVar29;
    }
    if (0 < (int)uVar6) {
      lVar28 = 0;
      do {
        puVar18 = (undefined8 *)(lVar13 + lVar28);
        plVar2 = (long *)(lVar22 + lVar28);
        *puVar18 = 0;
        puVar18[1] = 0;
        lVar24 = plVar2[3];
        lVar19 = plVar2[4];
        lVar4 = plVar2[5];
        puVar18[2] = plVar2[2];
        puVar18[3] = lVar24;
        puVar18[4] = lVar19;
        puVar18[5] = lVar4;
        uVar8 = *(uint *)(plVar2 + 1);
        pvVar3 = (void *)0x0;
        if (*plVar2 != 0) {
          pvVar3 = (void *)(*plVar2 + (long)plVar2);
        }
        if ((0 < (int)uVar8) && (pvVar3 != (void *)0x0)) {
          uVar10 = uVar8 - 1 | (int)(uVar8 - 1) >> 0x10;
          *(undefined4 *)((long)puVar18 + 0xc) = 0;
          uVar10 = uVar10 | (int)uVar10 >> 8;
          uVar10 = uVar10 | (int)uVar10 >> 4;
          uVar10 = uVar10 | (int)uVar10 >> 2;
          uVar10 = (uVar10 | (int)uVar10 >> 1) + 1;
          if ((int)uVar10 < (int)uVar8) goto LAB_02ec0d14;
          local_68 = -(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2;
          pvVar14 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
          if (0 < (int)*(uint *)(puVar18 + 1)) {
            pvVar15 = (void *)0x0;
            if (*(long *)(lVar13 + lVar28) != 0) {
              pvVar15 = (void *)(*(long *)(lVar13 + lVar28) + (long)puVar18);
            }
            memcpy(pvVar14,pvVar15,(ulong)*(uint *)(puVar18 + 1) << 2);
          }
          if (*(int *)((long)puVar18 + 0xc) < 0) {
            lVar19 = 0;
            if (*(long *)(lVar13 + lVar28) != 0) {
              lVar19 = *(long *)(lVar13 + lVar28) + (long)puVar18;
            }
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar19,0);
          }
          lVar19 = 0;
          if (pvVar14 != (void *)0x0) {
            lVar19 = (long)pvVar14 - (long)puVar18;
          }
          *(long *)(lVar13 + lVar28) = lVar19;
          *(uint *)(puVar18 + 1) = uVar8;
          *(uint *)((long)puVar18 + 0xc) = uVar10 | 0x80000000;
          memcpy((void *)(lVar19 + (long)puVar18),pvVar3,(ulong)uVar8 << 2);
        }
        *(int *)(puVar18 + 9) = (int)plVar2[9];
        *(undefined4 *)((long)puVar18 + 0x4c) = *(undefined4 *)((long)plVar2 + 0x4c);
        *(int *)(puVar18 + 10) = (int)plVar2[10];
        *(undefined4 *)((long)puVar18 + 0x54) = *(undefined4 *)((long)plVar2 + 0x54);
        *(char *)(puVar18 + 0xb) = (char)plVar2[0xb];
        *(undefined1 *)((long)puVar18 + 0x59) = *(undefined1 *)((long)plVar2 + 0x59);
        *(undefined1 *)((long)puVar18 + 0x5a) = *(undefined1 *)((long)plVar2 + 0x5a);
        *(undefined1 *)((long)puVar18 + 0x5b) = *(undefined1 *)((long)plVar2 + 0x5b);
        *(undefined2 *)((long)puVar18 + 0x5c) = *(undefined2 *)((long)plVar2 + 0x5c);
        *(undefined1 *)((long)puVar18 + 0x5e) = *(undefined1 *)((long)plVar2 + 0x5e);
        *(undefined1 *)((long)puVar18 + 0x5f) = *(undefined1 *)((long)plVar2 + 0x5f);
        lVar19 = plVar2[6];
        lVar24 = plVar2[8];
        lVar28 = lVar28 + 0x60;
        puVar18[7] = plVar2[7];
        puVar18[8] = lVar24;
        puVar18[6] = lVar19;
      } while ((ulong)uVar6 * 0x60 != lVar28);
    }
    if (*(int *)((long)param_1 + 0x4c) < 0) {
      lVar22 = 0;
      if (*plVar29 != 0) {
        lVar22 = *plVar29 + (long)plVar29;
      }
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar22,0);
    }
    lVar22 = 0;
    if (lVar13 != 0) {
      lVar22 = lVar13 - (long)plVar29;
    }
    param_1[8] = lVar22;
    puVar18 = (undefined8 *)(lVar22 + (long)plVar29);
    *(uint *)(param_1 + 9) = uVar5;
    *(uint *)((long)param_1 + 0x4c) = uVar9 | 0x80000000;
    if (uVar5 != 1) {
      iVar20 = -(uVar5 & 0xfffffffe);
      puVar17 = puVar18;
      do {
        puVar18 = puVar17 + 0x18;
        *puVar17 = 0;
        puVar17[1] = 0;
        iVar20 = iVar20 + 2;
        puVar17[6] = 0;
        puVar17[7] = 0;
        puVar17[8] = 0;
        puVar17[9] = 0;
        puVar17[10] = 0;
        puVar17[0xb] = 0;
        puVar17[0xc] = 0;
        puVar17[0xd] = 0;
        puVar17[0x12] = 0;
        puVar17[0x13] = 0;
        puVar17[0x14] = 0;
        puVar17[0x15] = 0;
        puVar17[0x16] = 0;
        puVar17[0x17] = 0;
        puVar17[3] = 0x7f7fffee7f7fffee;
        puVar17[2] = 0x7f7fffee7f7fffee;
        puVar17[5] = 0xff7fffeeff7fffee;
        puVar17[4] = 0xff7fffeeff7fffee;
        puVar17[0xf] = 0x7f7fffee7f7fffee;
        puVar17[0xe] = 0x7f7fffee7f7fffee;
        puVar17[0x11] = 0xff7fffeeff7fffee;
        puVar17[0x10] = 0xff7fffeeff7fffee;
        puVar17 = puVar18;
      } while (iVar20 != 0);
    }
    if ((uVar5 & 1) != 0) {
      *puVar18 = 0;
      puVar18[1] = 0;
      puVar18[6] = 0;
      puVar18[7] = 0;
      puVar18[8] = 0;
      puVar18[9] = 0;
      puVar18[10] = 0;
      puVar18[0xb] = 0;
      puVar18[3] = 0x7f7fffee7f7fffee;
      puVar18[2] = 0x7f7fffee7f7fffee;
      puVar18[5] = 0xff7fffeeff7fffee;
      puVar18[4] = 0xff7fffeeff7fffee;
    }
    lVar13 = *plVar29;
    lVar22 = 0;
    do {
      puVar18 = (undefined8 *)((long)plVar29 + lVar22 + lVar13);
      plVar2 = (long *)(lVar16 + lVar22);
      *puVar18 = 0;
      puVar18[1] = 0;
      lVar19 = plVar2[3];
      lVar28 = plVar2[4];
      lVar24 = plVar2[5];
      puVar18[2] = plVar2[2];
      puVar18[3] = lVar19;
      puVar18[4] = lVar28;
      puVar18[5] = lVar24;
      uVar5 = *(uint *)(plVar2 + 1);
      pvVar3 = (void *)0x0;
      if (*plVar2 != 0) {
        pvVar3 = (void *)(*plVar2 + (long)plVar2);
      }
      if ((0 < (int)uVar5) && (pvVar3 != (void *)0x0)) {
        uVar9 = uVar5 - 1 | (int)(uVar5 - 1) >> 0x10;
        *(undefined4 *)((long)puVar18 + 0xc) = 0;
        uVar9 = uVar9 | (int)uVar9 >> 8;
        uVar9 = uVar9 | (int)uVar9 >> 4;
        uVar9 = uVar9 | (int)uVar9 >> 2;
        uVar9 = (uVar9 | (int)uVar9 >> 1) + 1;
        if ((int)uVar9 < (int)uVar5) goto LAB_02ec0d14;
        local_68 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
        pvVar14 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
        if (0 < (int)*(uint *)(puVar18 + 1)) {
          lVar28 = *(long *)((long)plVar29 + lVar22 + lVar13);
          pvVar15 = (void *)0x0;
          if (lVar28 != 0) {
            pvVar15 = (void *)(lVar28 + (long)puVar18);
          }
          memcpy(pvVar14,pvVar15,(ulong)*(uint *)(puVar18 + 1) << 2);
        }
        if (*(int *)((long)puVar18 + 0xc) < 0) {
          lVar19 = *(long *)((long)plVar29 + lVar22 + lVar13);
          lVar28 = 0;
          if (lVar19 != 0) {
            lVar28 = lVar19 + (long)puVar18;
          }
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar28,0);
        }
        lVar28 = 0;
        if (pvVar14 != (void *)0x0) {
          lVar28 = (long)pvVar14 - (long)puVar18;
        }
        *(long *)((long)plVar29 + lVar22 + lVar13) = lVar28;
        *(uint *)(puVar18 + 1) = uVar5;
        *(uint *)((long)puVar18 + 0xc) = uVar9 | 0x80000000;
        memcpy((void *)(lVar28 + (long)puVar18),pvVar3,(ulong)uVar5 << 2);
      }
      *(int *)(puVar18 + 9) = (int)plVar2[9];
      *(undefined4 *)((long)puVar18 + 0x4c) = *(undefined4 *)((long)plVar2 + 0x4c);
      *(int *)(puVar18 + 10) = (int)plVar2[10];
      *(undefined4 *)((long)puVar18 + 0x54) = *(undefined4 *)((long)plVar2 + 0x54);
      *(char *)(puVar18 + 0xb) = (char)plVar2[0xb];
      *(undefined1 *)((long)puVar18 + 0x59) = *(undefined1 *)((long)plVar2 + 0x59);
      *(undefined1 *)((long)puVar18 + 0x5a) = *(undefined1 *)((long)plVar2 + 0x5a);
      *(undefined1 *)((long)puVar18 + 0x5b) = *(undefined1 *)((long)plVar2 + 0x5b);
      *(undefined2 *)((long)puVar18 + 0x5c) = *(undefined2 *)((long)plVar2 + 0x5c);
      *(undefined1 *)((long)puVar18 + 0x5e) = *(undefined1 *)((long)plVar2 + 0x5e);
      *(undefined1 *)((long)puVar18 + 0x5f) = *(undefined1 *)((long)plVar2 + 0x5f);
      lVar28 = plVar2[6];
      lVar19 = plVar2[8];
      uVar23 = uVar23 - 1;
      lVar22 = lVar22 + 0x60;
      puVar18[7] = plVar2[7];
      puVar18[8] = lVar19;
      puVar18[6] = lVar28;
    } while (uVar23 != 0);
  }
  plVar29 = param_1 + 10;
  *plVar29 = 0;
  param_1[0xb] = 0;
  lVar16 = param_2[10];
  uVar5 = *(uint *)(param_2 + 0xb);
  pvVar3 = (void *)0x0;
  if (lVar16 != 0) {
    pvVar3 = (void *)(lVar16 + (long)(param_2 + 10));
  }
  if ((0 < (int)uVar5) && (pvVar3 != (void *)0x0)) {
    uVar9 = uVar5 - 1 | (int)(uVar5 - 1) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
    puVar11 = PTR_DAT_047d1a08;
    uVar9 = uVar9 | (int)uVar9 >> 8;
    uVar9 = uVar9 | (int)uVar9 >> 4;
    uVar9 = uVar9 | (int)uVar9 >> 2;
    uVar9 = (uVar9 | (int)uVar9 >> 1) + 1;
    if ((int)uVar9 < (int)uVar5) goto LAB_02ec0d14;
    local_68 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
    pvVar15 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    pvVar14 = (void *)0x0;
    if (param_1[10] != 0) {
      pvVar14 = (void *)(param_1[10] + (long)plVar29);
    }
    memcpy(pvVar15,pvVar14,(long)(int)param_1[0xb] << 2);
    if (*(int *)((long)param_1 + 0x5c) < 0) {
      lVar16 = 0;
      if (*plVar29 != 0) {
        lVar16 = *plVar29 + (long)plVar29;
      }
      (**(code **)(puVar11 + 8))(0,lVar16,0);
    }
    lVar16 = 0;
    if (pvVar15 != (void *)0x0) {
      lVar16 = (long)pvVar15 - (long)plVar29;
    }
    *(uint *)(param_1 + 0xb) = uVar5;
    *(uint *)((long)param_1 + 0x5c) = uVar9 | 0x80000000;
    param_1[10] = lVar16;
    memcpy((void *)(lVar16 + (long)plVar29),pvVar3,(ulong)uVar5 << 2);
  }
  plVar29 = param_1 + 0xc;
  *plVar29 = 0;
  param_1[0xd] = 0;
  lVar16 = param_2[0xc];
  uVar5 = *(uint *)(param_2 + 0xd);
  pvVar3 = (void *)0x0;
  if (lVar16 != 0) {
    pvVar3 = (void *)(lVar16 + (long)(param_2 + 0xc));
  }
  if ((0 < (int)uVar5) && (pvVar3 != (void *)0x0)) {
    uVar9 = uVar5 - 1 | (int)(uVar5 - 1) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
    puVar11 = PTR_DAT_047d1a08;
    uVar9 = uVar9 | (int)uVar9 >> 8;
    uVar9 = uVar9 | (int)uVar9 >> 4;
    uVar9 = uVar9 | (int)uVar9 >> 2;
    uVar9 = (uVar9 | (int)uVar9 >> 1) + 1;
    if ((int)uVar9 < (int)uVar5) {
LAB_02ec0d14:
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow");
    }
    local_68 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar9 << 1;
    pvVar15 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    pvVar14 = (void *)0x0;
    if (param_1[0xc] != 0) {
      pvVar14 = (void *)(param_1[0xc] + (long)plVar29);
    }
    memcpy(pvVar15,pvVar14,(long)(int)param_1[0xd] << 1);
    if (*(int *)((long)param_1 + 0x6c) < 0) {
      lVar16 = 0;
      if (*plVar29 != 0) {
        lVar16 = *plVar29 + (long)plVar29;
      }
      (**(code **)(puVar11 + 8))(0,lVar16,0);
    }
    lVar16 = 0;
    if (pvVar15 != (void *)0x0) {
      lVar16 = (long)pvVar15 - (long)plVar29;
    }
    *(uint *)(param_1 + 0xd) = uVar5;
    *(uint *)((long)param_1 + 0x6c) = uVar9 | 0x80000000;
    param_1[0xc] = lVar16;
    memcpy((void *)(lVar16 + (long)plVar29),pvVar3,(ulong)uVar5 << 1);
  }
  return;
}


