/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f20290; name: FUN_00f20290
 */


void FUN_00f20290(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  bool bVar13;
  
  plVar12 = (long *)(param_1 + 0x110);
  lVar11 = *plVar12;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar11) {
    bVar13 = true;
LAB_00f202e0:
    puVar5 = PTR_DAT_047d3988;
    puVar4 = PTR_DAT_047d3980;
    puVar2 = *(undefined8 **)(param_1 + 0x130);
    for (puVar1 = *(undefined8 **)(param_1 + 0x128); puVar1 != puVar2; puVar1 = puVar1 + 1) {
      plVar12 = (long *)*puVar1;
      if (plVar12 != (long *)0x0) {
        plVar8 = (long *)(**(code **)plVar12[1])(plVar12 + 1);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar10 = FUN_01adab84();
          *(undefined8 *)puVar5 = uVar10;
          __cxa_guard_release(puVar4);
        }
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)puVar5) {
            uVar9 = (**(code **)(*(long *)*puVar1 + 0xc0))();
            if (((uVar9 & 1) == 0) && (*(char *)((long)plVar12 + 0xf9) == '\0')) {
              (**(code **)(*plVar12 + 0x78))(plVar12);
              *(undefined1 *)((long)plVar12 + 0xf9) = 1;
            }
            break;
          }
        }
      }
    }
    puVar1 = *(undefined8 **)(param_1 + 0x160);
    puVar2 = *(undefined8 **)(param_1 + 0x168);
    do {
      if (puVar1 == puVar2) {
        if (bVar13) {
          return;
        }
        *(undefined8 *)(param_1 + 0x110) = 0;
        nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x118));
        return;
      }
      plVar12 = (long *)*puVar1;
      if (plVar12 != (long *)0x0) {
        plVar8 = (long *)(**(code **)plVar12[1])(plVar12 + 1);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar10 = FUN_01adab84();
          *(undefined8 *)puVar5 = uVar10;
          __cxa_guard_release(puVar4);
        }
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)puVar5) {
            uVar9 = (**(code **)(*(long *)*puVar1 + 0xc0))();
            if (((uVar9 & 1) == 0) && (*(char *)((long)plVar12 + 0xf9) == '\0')) {
              (**(code **)(*plVar12 + 0x78))(plVar12);
              *(undefined1 *)((long)plVar12 + 0xf9) = 1;
            }
            break;
          }
        }
      }
      puVar1 = puVar1 + 1;
    } while( true );
  }
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar12 == 0) {
    cVar3 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar13) {
      *plVar12 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00f202dc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x118));
  do {
    if (*plVar12 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x118));
        while (*plVar12 == 0) {
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar13) {
            *plVar12 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00f202dc;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar13) {
      *plVar12 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00f202dc:
  bVar13 = false;
  goto LAB_00f202e0;
}


