/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011c8734; name: FUN_011c8734
 */


void FUN_011c8734(long param_1,long *param_2)

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
LAB_011c8774:
    if (*plVar8 == 0) goto code_r0x011c877c;
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
            if (cVar2 == '\0') goto LAB_011c8784;
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
LAB_011c8784:
    bVar6 = false;
    goto LAB_011c8788;
  }
  bVar6 = true;
LAB_011c8788:
  plVar8 = *(long **)(param_1 + 0x20);
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar8 != plVar1) {
    lVar3 = *param_2;
    do {
      if (((*plVar8 != 0) && (lVar7 = FUN_011c8920(*plVar8 + 8), lVar7 != 0)) &&
         (uVar4 = (**(code **)(*(long *)*plVar8 + 0xc0))(), (uVar4 & 1) == 0)) goto LAB_011c87d8;
      plVar8 = plVar8 + 1;
    } while (plVar1 != plVar8);
    plVar8 = plVar1;
LAB_011c87d8:
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
      if (((*plVar8 != 0) && (lVar7 = FUN_011c8920(*plVar8 + 8), lVar7 != 0)) &&
         (uVar4 = (**(code **)(*(long *)*plVar8 + 0xc0))(), (uVar4 & 1) == 0)) goto LAB_011c8834;
      plVar8 = plVar8 + 1;
    } while (plVar1 != plVar8);
    plVar8 = plVar1;
LAB_011c8834:
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
code_r0x011c877c:
  cVar2 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar6) {
    *plVar8 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_011c8784;
  goto LAB_011c8774;
}


