/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03326538; name: FUN_03326538
 */


int FUN_03326538(long param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  void *__s;
  long *plVar10;
  ulong *puVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  void *__n;
  void *local_98;
  ulong *puStack_90;
  ulong local_88;
  void *local_80;
  ulong *puStack_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  
  iVar8 = FUN_0333d8d0(param_1 + 0x3a0);
  if (iVar8 == -1) {
    return -1;
  }
  lVar9 = FUN_03342334(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x168) + 0x68) + 0x90),param_2,
                       iVar8);
  uVar12 = (int)lVar9 * -0x61c8864f;
  uVar4 = (int)((ulong)lVar9 >> 0x20) * -0x61c8864f;
  uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
  uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar16 = (ulong)((uVar12 + (uVar12 >> 2) + uVar4 * 0x40 + 0x9e3779b9 ^ uVar4) &
                  *(uint *)(param_1 + 0xcc));
  lVar14 = *(long *)(param_1 + 0xc0);
  if (*(long *)(lVar14 + uVar16 * 0x10) != lVar9) {
    do {
      uVar16 = (ulong)((int)uVar16 + 1U & *(uint *)(param_1 + 0xcc));
    } while (*(long *)(lVar14 + uVar16 * 0x10) != lVar9);
  }
  puVar11 = (ulong *)**(long **)(*(long *)(param_1 + 0xb0) +
                                (ulong)*(uint *)(lVar14 + uVar16 * 0x10 + 8) * 8);
  puVar15 = puVar11;
  if ((*puVar11 & 1) == 0) {
    do {
      puVar15 = (ulong *)puVar15[1];
    } while ((*puVar15 & 1) == 0);
  }
  if ((puVar15[2] & 0x1f) != 7) {
    puVar11 = (ulong *)0x0;
  }
  puVar15 = puVar11;
  while( true ) {
    uVar12 = (uint)*puVar15;
    if ((uVar12 >> 0x14 & 1) != 0) break;
    if (((*puVar15 & 1) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0))
    goto LAB_0332667c;
  }
  if (puVar15 != (ulong *)0x0) {
    uVar16 = CONCAT44(uVar12,uVar12) & 0xfffff000fffff;
    __n = (void *)(ulong)(ushort)puVar15[(ulong)(byte)(POPCOUNT((char)uVar16) +
                                                       POPCOUNT((char)(uVar16 >> 8)) +
                                                      POPCOUNT((char)(uVar16 >> 0x10))) + 2];
    goto LAB_03326680;
  }
LAB_0332667c:
  __n = (void *)0x0;
LAB_03326680:
  local_80 = __n;
  __s = (void *)(**(code **)(*(long *)(param_1 + 0x238) + 0x10))(param_1 + 0x238,__n,&local_80);
  memset(__s,0,(size_t)__n);
  if (puVar11 == (ulong *)0x0) {
    local_70 = 0;
  }
  else {
    puVar15 = puVar11;
    do {
      uVar16 = *puVar15;
      if (((uint)uVar16 >> 2 & 1) != 0) {
        local_70 = puVar15[(uVar16 >> 1 & 1) + (uVar16 & 1) + 2];
        goto LAB_033266e8;
      }
      puVar15 = (ulong *)puVar15[1];
    } while (puVar15 != (ulong *)0x0);
    local_70 = 0;
  }
LAB_033266e8:
  if ((local_70 & 1) != 0) {
    piVar1 = (int *)((local_70 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_80 = __s;
  puStack_78 = puVar11;
  FUN_031e66c8(&local_68,&local_80,1);
  iVar8 = *(int *)(param_1 + 0x220);
  if (puVar11 == (ulong *)0x0) {
    uVar16 = 0;
  }
  else {
    puVar15 = puVar11;
    do {
      uVar16 = *puVar15;
      if (((uint)uVar16 >> 2 & 1) != 0) {
        uVar16 = puVar15[(uVar16 >> 1 & 1) + (uVar16 & 1) + 2];
        if ((uVar16 & 1) != 0) {
          piVar1 = (int *)((uVar16 & 0xfffffffffffffffe) + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          iVar13 = *(int *)(param_1 + 0x220);
          bVar6 = false;
          goto LAB_03326768;
        }
        goto LAB_03326764;
      }
      puVar15 = (ulong *)puVar15[1];
    } while (puVar15 != (ulong *)0x0);
    uVar16 = 0;
  }
LAB_03326764:
  bVar6 = true;
  iVar13 = iVar8;
LAB_03326768:
  local_58 = local_58 & 0xffffff00;
  iVar3 = iVar13;
  if (iVar13 <= iVar8) {
    iVar3 = iVar8 + 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  if ((int)(*(uint *)(param_1 + 0x224) & 0x7fffffff) < iVar3) {
    FUN_033277d4(param_1 + 0x218,PTR_PTR_047d1a50,(long)iVar3);
    iVar13 = *(int *)(param_1 + 0x220);
  }
  uVar12 = iVar3 - iVar13;
  if (uVar12 == 0 || iVar3 < iVar13) {
    if (iVar3 < iVar13) {
      *(int *)(param_1 + 0x220) = iVar3;
    }
  }
  else {
    puVar17 = (undefined8 *)(*(long *)(param_1 + 0x218) + (long)iVar13 * 0x18);
    *(int *)(param_1 + 0x220) = iVar3;
    if (iVar3 != iVar13 + 1) {
      iVar13 = -(uVar12 & 0xfffffffe);
      puVar18 = puVar17;
      do {
        iVar13 = iVar13 + 2;
        *puVar18 = local_68;
        puVar18[1] = uStack_60;
        *(uint *)(puVar18 + 2) = local_58;
        *(undefined4 *)((long)puVar18 + 0x14) = 0;
        puVar18[3] = local_68;
        puVar18[4] = uStack_60;
        puVar17 = puVar18 + 6;
        *(uint *)(puVar18 + 5) = local_58;
        *(undefined4 *)((long)puVar18 + 0x2c) = 0;
        puVar18 = puVar17;
      } while (iVar13 != 0);
    }
    if ((uVar12 & 1) != 0) {
      *puVar17 = local_68;
      puVar17[1] = uStack_60;
      *(uint *)(puVar17 + 2) = local_58;
      *(undefined4 *)((long)puVar17 + 0x14) = 0;
    }
  }
  *(void **)(*(long *)(param_1 + 0x218) + (long)iVar8 * 0x18) = __s;
  *(ulong **)(*(long *)(param_1 + 0x218) + (long)iVar8 * 0x18 + 8) = puVar11;
  iVar13 = *(int *)(param_1 + 0x288);
  lVar9 = (long)iVar13;
  if ((int)(*(uint *)(param_1 + 0x28c) & 0x7fffffff) <= iVar13) {
    FUN_0133bb88(param_1 + 0x280,PTR_PTR_047d1a50,lVar9 + 1);
    iVar13 = *(int *)(param_1 + 0x288);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x280) + (long)iVar13 * 4) = 1;
  *(int *)(param_1 + 0x288) = (int)(lVar9 + 1);
  if (!bVar6) {
    piVar1 = (int *)((uVar16 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_98 = __s;
  puStack_90 = puVar11;
  local_88 = uVar16;
  FUN_03322638(param_1,&local_98,1,0,iVar8,0xffffffff);
  if ((uVar16 & 1) != 0) {
    plVar10 = (long *)(uVar16 & 0xfffffffffffffffe);
    plVar2 = plVar10 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar9 == 1)) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  if (!bVar6) {
    plVar10 = (long *)(uVar16 & 0xfffffffffffffffe);
    plVar2 = plVar10 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar9 == 1)) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  if ((local_70 & 1) != 0) {
    plVar10 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar2 = plVar10 + 1;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar9 == 1)) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  return iVar8;
}


