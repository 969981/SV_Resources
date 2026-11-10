/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb84e8; name: FUN_00cb84e8
 */


undefined8 FUN_00cb84e8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined8 local_50;
  undefined1 local_48;
  
  uVar7 = FUN_00cb86ec();
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  plVar1 = (long *)(param_1 + 0x760);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x768) == 0) {
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x768) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00cb8530;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x770));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x768) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x770));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x768) == 0) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar8;
            *(undefined8 *)(param_1 + 0x768) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00cb8530;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x768) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00cb8530:
  local_50 = *param_2;
  local_48 = 0;
  FUN_00df6b40(param_1 + 0x780,&local_50);
  FUN_00cb88f0(*(undefined8 *)(param_1 + 0x780),*(undefined8 *)(param_1 + 0x788),&local_50);
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  uVar9 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar9;
  FUN_00df6864(uVar9,*param_2,param_1);
  do {
    lVar8 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x768);
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x768) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x768);
    if (lVar2 != lVar8 || lVar3 != lVar4) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_00cb8614;
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x764) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar10 = true;
LAB_00cb8614:
  if (!bVar10) {
    do {
      lVar8 = *plVar1;
      lVar4 = *(long *)(param_1 + 0x768);
      if (lVar8 != lVar2 || lVar4 != lVar3) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x00cb86ac;
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x764) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar10 = true;
joined_r0x00cb86ac:
    if (!bVar10) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x768);
        if (lVar2 != lVar8 || lVar3 != lVar4) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar8 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x00cb86ac;
        }
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x764) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar10 = true;
      lVar8 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x00cb86ac;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x770));
  return 1;
}


