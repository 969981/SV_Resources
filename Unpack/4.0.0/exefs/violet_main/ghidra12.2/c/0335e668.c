/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0335e668; name: FUN_0335e668
 */


void FUN_0335e668(undefined8 *param_1,long param_2,long param_3,uint param_4)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  ulong *puVar13;
  ulong *puVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  void *local_88;
  ulong *puStack_80;
  ulong local_78;
  void *local_70;
  undefined1 auStack_68 [8];
  
  puVar13 = *(ulong **)(param_3 + 0x50);
  uVar8 = param_4;
  if (param_4 == 0xffffffff) {
    uVar8 = 1;
  }
  do {
    uVar16 = (uint)*puVar13;
    if ((uVar16 >> 0x14 & 1) != 0) {
      uVar11 = 0;
      if (puVar13 != (ulong *)0x0) {
        uVar22 = CONCAT44(uVar16,uVar16) & 0xfffff000fffff;
        uVar11 = (uint)(ushort)puVar13[(ulong)(byte)(POPCOUNT((char)uVar22) +
                                                     POPCOUNT((char)(uVar22 >> 8)) +
                                                    POPCOUNT((char)(uVar22 >> 0x10))) + 2];
      }
      goto LAB_0335e6e8;
    }
    if ((*puVar13 & 1) != 0) {
      uVar11 = 0;
      goto LAB_0335e6e8;
    }
    puVar13 = (ulong *)puVar13[1];
  } while (puVar13 != (ulong *)0x0);
  uVar11 = 0;
LAB_0335e6e8:
  local_88 = (void *)(long)(int)(uVar11 * uVar8);
  pvVar9 = (void *)(**(code **)(*(long *)(*(long *)(param_2 + 8) + 0x140) + 0x10))
                             (*(long *)(param_2 + 8) + 0x140,local_88,&local_88);
  local_70 = pvVar9;
  memset(pvVar9,0,(ulong)(uVar11 * uVar8));
  puVar13 = *(ulong **)(param_3 + 0x50);
  *param_1 = pvVar9;
  param_1[1] = puVar13;
  *(uint *)(param_1 + 2) = uVar8;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  param_1[3] = 0;
  if (puVar13 == (ulong *)0x0) {
    uVar17 = 0;
    uVar22 = 0;
  }
  else {
    puVar14 = puVar13;
    do {
      uVar16 = (uint)*puVar14;
      if ((uVar16 >> 0x14 & 1) != 0) {
        uVar16 = uVar16 & 0xfffff;
        uVar22 = (ulong)(ushort)puVar14[(ulong)(byte)(POPCOUNT((char)uVar16) +
                                                      POPCOUNT((char)(uVar16 >> 8)) +
                                                     POPCOUNT((char)(uVar16 >> 0x10))) + 2];
        goto LAB_0335e788;
      }
    } while (((*puVar14 & 1) == 0) && (puVar14 = (ulong *)puVar14[1], puVar14 != (ulong *)0x0));
    uVar22 = 0;
LAB_0335e788:
    *(int *)((long)param_1 + 0x14) = (int)uVar22;
    puVar14 = puVar13;
    do {
      uVar17 = *puVar14;
      if (((uint)uVar17 >> 2 & 1) != 0) {
        uVar17 = puVar14[(uVar17 >> 1 & 1) + (uVar17 & 1) + 2];
        if ((uVar17 & 1) != 0) {
          piVar1 = (int *)((uVar17 & 0xfffffffffffffffe) + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        goto LAB_0335e7dc;
      }
      puVar14 = (ulong *)puVar14[1];
    } while (puVar14 != (ulong *)0x0);
    uVar17 = 0;
LAB_0335e7dc:
    param_1[3] = uVar17;
  }
  if (0 < (int)uVar8) {
    uVar20 = 0;
    if ((uVar17 & 1) == 0) {
      do {
        local_88 = (void *)((long)pvVar9 + uVar20 * uVar22);
        puStack_80 = puVar13;
        local_78 = uVar17;
        FUN_031e66c8(auStack_68,&local_88,1);
        if ((local_78 & 1) != 0) {
          plVar10 = (long *)(local_78 & 0xfffffffffffffffe);
          plVar2 = plVar10 + 1;
          do {
            lVar23 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = (int)lVar23 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((plVar10 != (long *)0x0) && ((int)lVar23 == 1)) {
            (**(code **)(*plVar10 + 8))();
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar8);
    }
    else {
      piVar1 = (int *)((uVar17 & 0xfffffffffffffffe) + 8);
      do {
        local_88 = (void *)((long)pvVar9 + uVar20 * uVar22);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        puStack_80 = puVar13;
        local_78 = uVar17;
        FUN_031e66c8(auStack_68,&local_88,1);
        if ((local_78 & 1) != 0) {
          plVar10 = (long *)(local_78 & 0xfffffffffffffffe);
          plVar2 = plVar10 + 1;
          do {
            lVar23 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = (int)lVar23 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((plVar10 != (long *)0x0) && ((int)lVar23 == 1)) {
            (**(code **)(*plVar10 + 8))();
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar8);
    }
  }
  iVar3 = *(int *)(*(long *)(param_2 + 8) + 0x2d8);
  lVar23 = (long)iVar3;
  iVar7 = FUN_03357154(*(long *)(param_2 + 8) + 0x2b8,*(undefined8 *)(param_3 + 0x50));
  pvVar9 = local_70;
  lVar24 = *(long *)(param_2 + 8);
  iVar12 = *(int *)(lVar24 + 0x2d8);
  iVar21 = (int)(lVar23 + 1);
  iVar4 = iVar12;
  if (iVar12 <= iVar21) {
    iVar4 = iVar21;
  }
  uVar16 = *(uint *)(lVar24 + 0x2dc) & 0x7fffffff;
  if (param_4 == 0xffffffff) {
    if ((int)uVar16 < iVar4) {
      FUN_033277d4(lVar24 + 0x2d0,PTR_PTR_047d1a50,(long)iVar4);
      iVar12 = *(int *)(lVar24 + 0x2d8);
    }
    if (iVar12 < iVar4) {
      puVar18 = (undefined8 *)(*(long *)(lVar24 + 0x2d0) + (long)iVar12 * 0x18);
      lVar15 = (long)iVar4 * 0x18 + (long)iVar12 * -0x18;
      *(int *)(lVar24 + 0x2d8) = iVar4;
      do {
        *(undefined4 *)((long)puVar18 + 0x14) = 0;
        lVar15 = lVar15 + -0x18;
        *(undefined1 *)(puVar18 + 2) = 0;
        *puVar18 = 0;
        puVar18[1] = 0;
        puVar18 = puVar18 + 3;
      } while (lVar15 != 0);
    }
    else if (iVar4 < iVar12) {
      *(int *)(lVar24 + 0x2d8) = iVar4;
    }
    puVar18 = (undefined8 *)(*(long *)(lVar24 + 0x2d0) + lVar23 * 0x18);
    uVar19 = *(undefined8 *)(*(long *)(lVar24 + 0x2c0) + (long)iVar7 * 8);
    uVar8 = 0;
    *(undefined1 *)(puVar18 + 2) = 0;
    uVar16 = 0xffffffff;
    *puVar18 = pvVar9;
    puVar18[1] = uVar19;
  }
  else {
    if ((int)uVar16 < iVar4) {
      FUN_033277d4(lVar24 + 0x2d0,PTR_PTR_047d1a50,(long)iVar4);
      iVar12 = *(int *)(lVar24 + 0x2d8);
    }
    if (iVar12 < iVar4) {
      puVar18 = (undefined8 *)(*(long *)(lVar24 + 0x2d0) + (long)iVar12 * 0x18);
      lVar15 = (long)iVar4 * 0x18 + (long)iVar12 * -0x18;
      *(int *)(lVar24 + 0x2d8) = iVar4;
      do {
        *(undefined4 *)((long)puVar18 + 0x14) = 0;
        lVar15 = lVar15 + -0x18;
        *(undefined1 *)(puVar18 + 2) = 0;
        *puVar18 = 0;
        puVar18[1] = 0;
        puVar18 = puVar18 + 3;
      } while (lVar15 != 0);
    }
    else if (iVar4 < iVar12) {
      *(int *)(lVar24 + 0x2d8) = iVar4;
    }
    puVar18 = (undefined8 *)(*(long *)(lVar24 + 0x2d0) + lVar23 * 0x18);
    uVar19 = *(undefined8 *)(*(long *)(lVar24 + 0x2c0) + (long)iVar7 * 8);
    *puVar18 = pvVar9;
    puVar18[1] = uVar19;
    *(undefined1 *)(puVar18 + 2) = 1;
    uVar16 = uVar8;
  }
  *(uint *)((long)puVar18 + 0x14) = uVar8;
  FUN_033690d4(param_3,iVar3,0,uVar16);
  lVar24 = *(long *)(param_2 + 8);
  iVar4 = *(int *)(lVar24 + 0x350);
  uVar8 = iVar21 - iVar4;
  if (0 < (int)uVar8) {
    if ((int)(*(uint *)(lVar24 + 0x354) & 0x7fffffff) <= iVar3) {
      FUN_02e7fe28((long *)(lVar24 + 0x348),PTR_PTR_047d1a50,lVar23 + 1);
    }
    memset((void *)(*(long *)(lVar24 + 0x348) + (long)iVar4),0,(ulong)uVar8);
    *(int *)(lVar24 + 0x350) = iVar21;
  }
  *(undefined1 *)(*(long *)(lVar24 + 0x348) + lVar23) = 1;
  if (pvVar9 != (void *)0x0) {
    lVar23 = *(long *)(param_2 + 8);
    plVar2 = (long *)(lVar23 + 0x3c8);
    uVar8 = FUN_033572a8(plVar2,&local_70);
    if (*(uint *)(lVar23 + 0x3d0) == uVar8) {
      iVar4 = uVar8 + 1;
      if ((int)(*(uint *)(lVar23 + 0x3d4) & 0x7fffffff) <= (int)uVar8) {
        FUN_031d33d4(plVar2,PTR_PTR_047d1a50,(long)iVar4);
        uVar8 = *(uint *)(lVar23 + 0x3d0);
      }
      puVar18 = (undefined8 *)(*(long *)(lVar23 + 0x3c8) + (long)(int)uVar8 * 0x10);
      *puVar18 = pvVar9;
      *(int *)(puVar18 + 1) = iVar3;
      *(int *)(lVar23 + 0x3d0) = iVar4;
    }
    else {
      *(int *)(*plVar2 + ((long)((ulong)uVar8 << 0x20) >> 0x1c) + 8) = iVar3;
    }
  }
  return;
}


