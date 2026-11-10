/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010ea020; name: FUN_010ea020
 */


void FUN_010ea020(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = (long *)(param_1 + 8);
  lVar7 = *plVar8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 != lVar7) {
    lVar3 = nn::os::GetCurrentThread();
LAB_010ea060:
    if (*plVar8 == 0) goto code_r0x010ea068;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *plVar8 = lVar3;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_010ea070;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_010ea070:
    bVar6 = false;
    goto LAB_010ea074;
  }
  bVar6 = true;
LAB_010ea074:
  plVar8 = *(long **)(param_1 + 0x20);
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar8 != plVar1) {
    lVar3 = *param_2;
    do {
      if (((*plVar8 != 0) && (uVar4 = FUN_010ea1fc(*plVar8 + 8), (uVar4 & 1) != 0)) &&
         (uVar4 = (**(code **)(*(long *)*plVar8 + 0xc0))(), (uVar4 & 1) == 0)) goto LAB_010ea0bc;
      plVar8 = plVar8 + 1;
    } while (plVar1 != plVar8);
    plVar8 = plVar1;
LAB_010ea0bc:
    if (plVar8 != *(long **)(param_1 + 0x28)) {
      (**(code **)(*(long *)*plVar8 + 0xa8))();
      *(undefined **)(lVar3 + 0xa8) = PTR_FUN_047d9428;
      *(undefined8 *)(lVar3 + 0xb0) = 0;
    }
  }
  plVar8 = *(long **)(param_1 + 0x58);
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar8 != plVar1) {
    lVar3 = *param_2;
    do {
      if (((*plVar8 != 0) && (uVar4 = FUN_010ea1fc(*plVar8 + 8), (uVar4 & 1) != 0)) &&
         (uVar4 = (**(code **)(*(long *)*plVar8 + 0xc0))(), (uVar4 & 1) == 0)) goto LAB_010ea110;
      plVar8 = plVar8 + 1;
    } while (plVar1 != plVar8);
    plVar8 = plVar1;
LAB_010ea110:
    if (plVar8 != *(long **)(param_1 + 0x60)) {
      (**(code **)(*(long *)*plVar8 + 0xa8))();
      *(undefined **)(lVar3 + 0xa8) = PTR_FUN_047d9428;
      *(undefined8 *)(lVar3 + 0xb0) = 0;
    }
  }
  if ((*(byte *)(param_1 + 600) & 7) != 0) {
    pcVar5 = *(code **)(param_1 + 0xa8);
    if ((*(ulong *)(param_1 + 0xb0) & 1) != 0) {
      pcVar5 = *(code **)(pcVar5 + *(long *)(param_1 + ((long)*(ulong *)(param_1 + 0xb0) >> 1)));
    }
    (*pcVar5)();
  }
  if (bVar6) {
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
  return;
code_r0x010ea068:
  cVar2 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar6) {
    *plVar8 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_010ea070;
  goto LAB_010ea060;
}


