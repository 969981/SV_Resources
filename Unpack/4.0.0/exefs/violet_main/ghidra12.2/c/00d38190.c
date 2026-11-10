/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d38190; name: FUN_00d38190
 */


void FUN_00d38190(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  
  plVar8 = (long *)(param_1 + 8);
  lVar7 = *plVar8;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar7) {
    bVar9 = true;
LAB_00d381d8:
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    if (puVar2 != puVar3) {
      plVar8 = (long *)*puVar2;
      if (((plVar8 != (long *)0x0) && (uVar6 = FUN_00cf706c(plVar8 + 1), (uVar6 & 1) != 0)) &&
         (uVar6 = (**(code **)(*(long *)*puVar2 + 0xc0))(), (uVar6 & 1) == 0)) {
        (**(code **)(*plVar8 + 0x100))(plVar8);
      }
      puVar1 = puVar2 + 1;
      if (puVar1 != puVar3) {
        plVar8 = (long *)*puVar1;
        if (((plVar8 != (long *)0x0) && (uVar6 = FUN_00cf706c(plVar8 + 1), (uVar6 & 1) != 0)) &&
           (uVar6 = (**(code **)(*(long *)*puVar1 + 0xc0))(), (uVar6 & 1) == 0)) {
          (**(code **)(*plVar8 + 0x100))(plVar8);
        }
        for (puVar2 = puVar2 + 2; puVar2 != puVar3; puVar2 = puVar2 + 1) {
          plVar8 = (long *)*puVar2;
          if (((plVar8 != (long *)0x0) && (uVar6 = FUN_00cf706c(plVar8 + 1), (uVar6 & 1) != 0)) &&
             (uVar6 = (**(code **)(*(long *)*puVar2 + 0xc0))(), (uVar6 & 1) == 0)) {
            (**(code **)(*plVar8 + 0x100))(plVar8);
          }
        }
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x58);
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    if (puVar2 != puVar3) {
      plVar8 = (long *)*puVar2;
      if (((plVar8 != (long *)0x0) && (uVar6 = FUN_00cf706c(plVar8 + 1), (uVar6 & 1) != 0)) &&
         (uVar6 = (**(code **)(*(long *)*puVar2 + 0xc0))(), (uVar6 & 1) == 0)) {
        (**(code **)(*plVar8 + 0x100))(plVar8);
      }
      puVar1 = puVar2 + 1;
      if (puVar1 != puVar3) {
        plVar8 = (long *)*puVar1;
        if (((plVar8 != (long *)0x0) && (uVar6 = FUN_00cf706c(plVar8 + 1), (uVar6 & 1) != 0)) &&
           (uVar6 = (**(code **)(*(long *)*puVar1 + 0xc0))(), (uVar6 & 1) == 0)) {
          (**(code **)(*plVar8 + 0x100))(plVar8);
        }
        for (puVar2 = puVar2 + 2; puVar2 != puVar3; puVar2 = puVar2 + 1) {
          plVar8 = (long *)*puVar2;
          if (((plVar8 != (long *)0x0) && (uVar6 = FUN_00cf706c(plVar8 + 1), (uVar6 & 1) != 0)) &&
             (uVar6 = (**(code **)(*(long *)*puVar2 + 0xc0))(), (uVar6 & 1) == 0)) {
            (**(code **)(*plVar8 + 0x100))(plVar8);
          }
        }
      }
    }
    if (bVar9) {
      return;
    }
    *(undefined8 *)(param_1 + 8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
    return;
  }
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar9) {
      *plVar8 = lVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00d381d4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
        while (*plVar8 == 0) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar9) {
            *plVar8 = lVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00d381d4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar9) {
      *plVar8 = lVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00d381d4:
  bVar9 = false;
  goto LAB_00d381d8;
}


