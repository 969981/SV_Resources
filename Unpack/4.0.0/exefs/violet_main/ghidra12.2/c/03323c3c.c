/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03323c3c; name: FUN_03323c3c
 */


void FUN_03323c3c(undefined8 *param_1,int *param_2,ulong *param_3,undefined8 param_4,
                 undefined4 *param_5,long param_6)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  long *plVar16;
  undefined8 local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  
  *param_1 = 0;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 6) = *param_5;
  uVar10 = *param_3;
  puVar14 = param_3;
  if ((uVar10 & 1) == 0) {
    do {
      puVar14 = (ulong *)puVar14[1];
    } while ((*puVar14 & 1) == 0);
  }
  if ((param_3 == (ulong *)0x0) || ((puVar14[2] & 0x1f) != 8)) goto LAB_03323f80;
  puVar14 = param_3;
  if ((uVar10 & 1) == 0) {
    do {
      puVar14 = (ulong *)puVar14[1];
      if (puVar14 == (ulong *)0x0) goto LAB_03323d18;
    } while ((*puVar14 & 1) == 0);
  }
  if ((int)(puVar14[2] >> 8) == 0) {
LAB_03323d18:
    *param_1 = param_2;
    if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
      FUN_033240e8(param_4);
    }
    FUN_03323960(&local_70,param_1);
    uVar10 = local_60;
    uVar11 = local_68;
    if (local_68 == 0) {
      do {
        if (((byte)*param_3 >> 1 & 1) != 0) {
          uVar11 = param_3[3];
          goto LAB_03323ee0;
        }
        param_3 = (ulong *)param_3[1];
      } while (param_3 != (ulong *)0x0);
      uVar11 = 0;
    }
LAB_03323ee0:
    param_1[5] = uVar11;
    if ((local_60 & 1) == 0) {
      param_1[3] = local_70;
    }
    else {
      plVar16 = (long *)(local_60 & 0xfffffffffffffffe);
      plVar1 = plVar16 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      param_1[3] = local_70;
      do {
        lVar12 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar16 != (long *)0x0) && ((int)lVar12 == 1)) {
        (**(code **)(*plVar16 + 8))();
      }
    }
    iVar2 = -(int)local_58;
    if (-1 < (int)local_58) {
      iVar2 = (int)local_58;
    }
    *(int *)(param_1 + 4) = iVar2;
    if ((uVar10 & 1) == 0) goto LAB_03323f80;
    plVar16 = (long *)(uVar10 & 0xfffffffffffffffe);
    plVar1 = plVar16 + 1;
    do {
      lVar12 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar16 == (long *)0x0) || ((int)lVar12 != 1)) goto LAB_03323f80;
    lVar12 = *plVar16;
  }
  else {
    puVar14 = param_3;
    if (((uint)uVar10 >> 2 & 1) == 0) {
      do {
        puVar14 = (ulong *)puVar14[1];
        if (puVar14 == (ulong *)0x0) {
          uVar10 = 0;
          goto LAB_03323d64;
        }
        uVar10 = *puVar14;
      } while (((uint)uVar10 >> 2 & 1) == 0);
    }
    uVar10 = puVar14[(uVar10 >> 1 & 1) + (uVar10 & 1) + 2];
LAB_03323d64:
    plVar16 = (long *)(uVar10 & 0xfffffffffffffffe);
    if ((uVar10 & 1) != 0) {
      plVar1 = plVar16 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_60 = 0;
    local_58 = 0;
    local_70 = 0;
    local_68 = 0;
    (**(code **)(*plVar16 + 0x50))(plVar16,param_2,param_3,&local_70);
    uVar11 = local_68;
    if ((local_58 & 1) != 0) {
      plVar7 = (long *)(local_58 & 0xfffffffffffffffe);
      plVar1 = plVar7 + 1;
      do {
        lVar12 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar7 != (long *)0x0) && ((int)lVar12 == 1)) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    param_1[5] = uVar11;
    local_60 = 0;
    local_58 = 0;
    local_70 = 0;
    local_68 = 0;
    (**(code **)(*plVar16 + 0x50))(plVar16,param_2,param_3,&local_70);
    uVar5 = local_70;
    if ((local_58 & 1) != 0) {
      plVar7 = (long *)(local_58 & 0xfffffffffffffffe);
      plVar1 = plVar7 + 1;
      do {
        lVar12 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar7 != (long *)0x0) && ((int)lVar12 == 1)) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    param_1[3] = uVar5;
    local_60 = 0;
    local_58 = 0;
    local_70 = 0;
    local_68 = 0;
    (**(code **)(*plVar16 + 0x50))(plVar16,param_2,param_3,&local_70);
    uVar6 = (undefined4)local_60;
    if ((local_58 & 1) != 0) {
      plVar7 = (long *)(local_58 & 0xfffffffffffffffe);
      plVar1 = plVar7 + 1;
      do {
        lVar12 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar7 != (long *)0x0) && ((int)lVar12 == 1)) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    *(undefined4 *)(param_1 + 4) = uVar6;
    if ((uVar10 & 1) == 0) goto LAB_03323f80;
    plVar1 = plVar16 + 1;
    do {
      lVar12 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar16 == (long *)0x0) || ((int)lVar12 != 1)) goto LAB_03323f80;
    lVar12 = *plVar16;
  }
  (**(code **)(lVar12 + 8))(plVar16);
LAB_03323f80:
  puVar14 = (ulong *)param_1[5];
  if (param_6 == 0) {
    for (; puVar14 != (ulong *)0x0; puVar14 = (ulong *)puVar14[1]) {
      uVar9 = (uint)*puVar14;
      if ((uVar9 >> 0x14 & 1) != 0) {
        uVar9 = uVar9 & 0xfffff;
        puVar14 = puVar14 + (byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                                  POPCOUNT((char)(uVar9 >> 0x10)));
        goto LAB_033240c4;
      }
      if ((*puVar14 & 1) != 0) goto LAB_033240a0;
    }
    uVar9 = 0;
  }
  else {
    puVar15 = puVar14;
    if ((*puVar14 & 1) == 0) {
      do {
        puVar15 = (ulong *)puVar15[1];
      } while ((*puVar15 & 1) == 0);
    }
    if ((puVar15[2] & 0x1f) != 7) {
      puVar14 = (ulong *)0x0;
    }
    puVar8 = (undefined8 *)FUN_031e1c40(puVar14,param_6,1);
    puVar13 = (undefined8 *)0x0;
    if ((undefined8 *)0x1 < puVar8) {
      if (((uint)*puVar8 >> 0x11 & 1) == 0) {
        puVar13 = (undefined8 *)0x0;
      }
      else {
        uVar9 = (uint)*puVar8 & 0x1ffff;
        puVar13 = (undefined8 *)
                  ((ulong)puVar8 &
                  (long)(puVar8[(ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                                             POPCOUNT((char)(uVar9 >> 0x10))) + 2] << 0x2a) >> 0x3f)
        ;
      }
    }
    if (((uint)*puVar13 >> 0x11 & 1) == 0) {
      uVar10 = 0;
    }
    else {
      uVar9 = (uint)*puVar13 & 0x1ffff;
      uVar10 = (ulong)*(ushort *)
                       (puVar13 +
                       (ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                                    POPCOUNT((char)(uVar9 >> 0x10))) + 2);
    }
    param_1[3] = uVar10 + param_1[3];
    param_1[5] = puVar13;
    while( true ) {
      uVar9 = (uint)*puVar14;
      if ((uVar9 >> 0x14 & 1) != 0) break;
      if (((*puVar14 & 1) != 0) || (puVar14 = (ulong *)puVar14[1], puVar14 == (ulong *)0x0))
      goto LAB_033240a0;
    }
    if (puVar14 != (ulong *)0x0) {
      uVar9 = uVar9 & 0xfffff;
      puVar14 = puVar14 + (byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                                POPCOUNT((char)(uVar9 >> 0x10)));
LAB_033240c4:
      uVar9 = (uint)(ushort)puVar14[2];
      goto LAB_033240c8;
    }
LAB_033240a0:
    uVar9 = 0;
  }
LAB_033240c8:
  *(uint *)((long)param_1 + 0x24) = uVar9;
  return;
}


