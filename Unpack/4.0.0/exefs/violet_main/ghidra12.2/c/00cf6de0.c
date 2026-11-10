/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf6de0; name: FUN_00cf6de0
 */


void FUN_00cf6de0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  
  plVar9 = (long *)(param_1 + 8);
  lVar8 = *plVar9;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar8) {
    bVar10 = true;
  }
  else {
    lVar6 = nn::os::GetCurrentThread();
    bVar10 = false;
    do {
      if (*plVar9 != 0) {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
        bVar10 = false;
        do {
          if (*plVar9 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
              while (*plVar9 == 0) {
                cVar4 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar10) {
                  *plVar9 = lVar6;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                bVar10 = false;
                if (cVar4 == '\0') goto LAB_00cf6e10;
              }
            } while( true );
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        break;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
LAB_00cf6e10:
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  if (puVar2 != puVar3) {
    plVar9 = (long *)*puVar2;
    if (((plVar9 != (long *)0x0) && (uVar7 = FUN_00cf706c(plVar9 + 1), (uVar7 & 1) != 0)) &&
       (uVar7 = (**(code **)(*(long *)*puVar2 + 0xc0))(), (uVar7 & 1) == 0)) {
      (**(code **)(*plVar9 + 0xf8))(plVar9);
    }
    puVar1 = puVar2 + 1;
    if (puVar1 != puVar3) {
      plVar9 = (long *)*puVar1;
      if (((plVar9 != (long *)0x0) && (uVar7 = FUN_00cf706c(plVar9 + 1), (uVar7 & 1) != 0)) &&
         (uVar7 = (**(code **)(*(long *)*puVar1 + 0xc0))(), (uVar7 & 1) == 0)) {
        (**(code **)(*plVar9 + 0xf8))(plVar9);
      }
      for (puVar2 = puVar2 + 2; puVar2 != puVar3; puVar2 = puVar2 + 1) {
        plVar9 = (long *)*puVar2;
        if (((plVar9 != (long *)0x0) && (uVar7 = FUN_00cf706c(plVar9 + 1), (uVar7 & 1) != 0)) &&
           (uVar7 = (**(code **)(*(long *)*puVar2 + 0xc0))(), (uVar7 & 1) == 0)) {
          (**(code **)(*plVar9 + 0xf8))(plVar9);
        }
      }
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x58);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 != puVar3) {
    plVar9 = (long *)*puVar2;
    if (((plVar9 != (long *)0x0) && (uVar7 = FUN_00cf706c(plVar9 + 1), (uVar7 & 1) != 0)) &&
       (uVar7 = (**(code **)(*(long *)*puVar2 + 0xc0))(), (uVar7 & 1) == 0)) {
      (**(code **)(*plVar9 + 0xf8))(plVar9);
    }
    puVar1 = puVar2 + 1;
    if (puVar1 != puVar3) {
      plVar9 = (long *)*puVar1;
      if (((plVar9 != (long *)0x0) && (uVar7 = FUN_00cf706c(plVar9 + 1), (uVar7 & 1) != 0)) &&
         (uVar7 = (**(code **)(*(long *)*puVar1 + 0xc0))(), (uVar7 & 1) == 0)) {
        (**(code **)(*plVar9 + 0xf8))(plVar9);
      }
      for (puVar2 = puVar2 + 2; puVar2 != puVar3; puVar2 = puVar2 + 1) {
        plVar9 = (long *)*puVar2;
        if (((plVar9 != (long *)0x0) && (uVar7 = FUN_00cf706c(plVar9 + 1), (uVar7 & 1) != 0)) &&
           (uVar7 = (**(code **)(*(long *)*puVar2 + 0xc0))(), (uVar7 & 1) == 0)) {
          (**(code **)(*plVar9 + 0xf8))(plVar9);
        }
      }
    }
  }
  if (bVar10) {
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
  return;
}


