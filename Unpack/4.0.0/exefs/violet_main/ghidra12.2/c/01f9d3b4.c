/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f9d3b4; name: FUN_01f9d3b4
 */


void FUN_01f9d3b4(long param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  bool bVar10;
  long *plVar11;
  
  plVar1 = (long *)(param_1 + 0x2e0);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x2e8) == 0) {
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0x2e8) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_01f9d3f4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f0));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x2e8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f0));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x2e8) == 0) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar7;
            *(undefined8 *)(param_1 + 0x2e8) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01f9d3f4;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0x2e8) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01f9d3f4:
  if (*(char *)(param_1 + 0x308) != '\0') {
    if (((*PTR_DAT_047d88d0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d88d0);
    }
    uVar8 = *(undefined8 *)PTR_DAT_047d88d8;
    *(undefined8 *)PTR_DAT_047d88e0 = uVar8;
    FUN_015a3e8c(uVar8,*(undefined4 *)(param_1 + 0x30c));
    *(undefined1 *)(param_1 + 0x308) = 0;
  }
  if ((uint)(*(ulong *)(param_1 + 0x168) >> 0x20) <
      (uint)((ulong)(*(long *)(DAT_0485a0e0 + 0xe0) - *(long *)(DAT_0485a0e0 + 0xd8)) >> 2)) {
    *(undefined4 *)(*(long *)(DAT_0485a0e0 + 0xd8) + (*(ulong *)(param_1 + 0x168) >> 0x20) * 4) =
         0xffffffff;
  }
  *(undefined8 *)(param_1 + 0x148) = *param_2;
  *(undefined8 *)(param_1 + 0x150) = param_2[1];
  *(undefined8 *)(param_1 + 0x158) = param_2[2];
  plVar11 = (long *)param_2[3];
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  plVar9 = *(long **)(param_1 + 0x160);
  *(long **)(param_1 + 0x160) = plVar11;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  uVar8 = FUN_01427d4c(DAT_0485a0e0,param_2);
  *(undefined8 *)(param_1 + 0x168) = uVar8;
  do {
    lVar7 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x2e8);
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x2e8) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x2e8);
    if (lVar2 != lVar7 || lVar3 != lVar4) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_01f9d520;
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x2e4) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar10 = true;
LAB_01f9d520:
  if (!bVar10) {
    do {
      lVar7 = *plVar1;
      lVar4 = *(long *)(param_1 + 0x2e8);
      if (lVar7 != lVar2 || lVar4 != lVar3) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x01f9d5e8;
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x2e4) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar10 = true;
joined_r0x01f9d5e8:
    if (!bVar10) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x2e8);
        if (lVar2 != lVar7 || lVar3 != lVar4) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar7 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x01f9d5e8;
        }
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x2e4) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar10 = true;
      lVar7 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x01f9d5e8;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2f0));
  if ((param_3 & 1) == 0) {
    return;
  }
  FUN_01522e80(param_1);
  return;
}


