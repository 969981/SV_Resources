/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010f8ab0; name: FUN_010f8ab0
 */


void FUN_010f8ab0(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  
  FUN_00eaabc4();
  uVar12 = (*(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0) >> 3) * 0xb6db6db7;
  if ((int)uVar12 == 0) {
    return;
  }
  lVar13 = 0;
  while (lVar9 = *(long *)(param_1 + 0xf0) + lVar13, *(long *)(lVar9 + 0x10) != *param_2) {
    lVar13 = lVar13 + 0x38;
    if ((uVar12 & 0xffffffff) * 0x38 == lVar13) {
      return;
    }
  }
  uVar12 = FUN_00eba4e0(param_1,*(undefined4 *)(lVar9 + 8));
  cVar4 = *(char *)(*(long *)(param_1 + 0xf0) + lVar13 + 0x30);
  uVar12 = uVar12 & 0xffffffff;
  FUN_00eaabc4(param_1);
  pbStack_78 = (byte *)(**(code **)(*DAT_0485a020 + 0x30))
                                 (DAT_0485a020,param_3,
                                  *(undefined8 *)(*(long *)(param_1 + 0xf0) + uVar12 * 0x38));
  if (pbStack_78 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_80 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_78 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_70 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_68 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  else {
    local_70 = strlen((char *)pbStack_78);
    bVar5 = *pbStack_78;
    local_80 = &DAT_cbf29ce484222645;
    pbVar10 = pbStack_78;
    while (bVar5 != 0) {
      pbVar10 = pbVar10 + 1;
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar10;
    }
    local_68 = (long *)0x0;
  }
  plVar1 = (long *)(param_1 + 0x1b0);
  lVar13 = nn::os::GetCurrentThread();
  do {
    lVar9 = *plVar1;
    lVar11 = *(long *)(param_1 + 0x1b8);
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x1b8) = lVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_010f8bfc:
  while ((lVar9 != 0 && (lVar13 != lVar9))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
    do {
      lVar9 = *plVar1;
      lVar11 = *(long *)(param_1 + 0x1b8);
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x1b8) = lVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar9 || *(long *)(param_1 + 0x1b8) != lVar11) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_010f8c2c;
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x1b4) = lVar11 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar8 = true;
LAB_010f8c2c:
  if (!bVar8) {
    lVar9 = lVar2;
    lVar11 = *(long *)(param_1 + 0x1b8);
    goto LAB_010f8bfc;
  }
  *(char *)(*(long *)(param_1 + 0xf0) + uVar12 * 0x38 + 0x30) = cVar4;
  puVar14 = *(undefined8 **)(param_1 + 0x168);
  puVar3 = *(undefined8 **)(param_1 + 0x170);
  if (puVar14 != puVar3) {
    FUN_010f8584(*puVar14,uVar12,&local_80);
    FUN_010f81d0(*puVar14,cVar4 != '\0',uVar12);
    if (puVar14 + 1 != puVar3) {
      FUN_010f8584(puVar14[1],uVar12,&local_80);
      FUN_010f81d0(puVar14[1],cVar4 != '\0',uVar12);
      for (puVar14 = puVar14 + 2; puVar14 != puVar3; puVar14 = puVar14 + 1) {
        FUN_010f8584(*puVar14,uVar12,&local_80);
        FUN_010f81d0(*puVar14,cVar4 != '\0',uVar12);
      }
    }
  }
  do {
    lVar13 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x1b8);
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar13;
      *(long *)(param_1 + 0x1b8) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar11 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x1b8);
    if (lVar11 != lVar13 || lVar2 != lVar9) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_010f8d00;
    }
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar13;
      *(long *)(param_1 + 0x1b4) = lVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar8 = true;
LAB_010f8d00:
  if (!bVar8) {
    do {
      lVar13 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x1b8);
      if (lVar13 != lVar11 || lVar9 != lVar2) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x010f8da8;
      }
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar11;
        *(long *)(param_1 + 0x1b4) = lVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar8 = true;
joined_r0x010f8da8:
    if (!bVar8) {
      do {
        lVar11 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x1b8);
        if (lVar11 != lVar13 || lVar2 != lVar9) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar13 = lVar11;
          lVar9 = lVar2;
          goto joined_r0x010f8da8;
        }
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar13;
          *(long *)(param_1 + 0x1b4) = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar8 = true;
      lVar13 = lVar11;
      lVar9 = lVar2;
      goto joined_r0x010f8da8;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c0));
  FUN_010f7c04(param_1);
  if (local_68 == (long *)0x0) {
    return;
  }
  (**(code **)(*local_68 + 0x20))();
  return;
}


