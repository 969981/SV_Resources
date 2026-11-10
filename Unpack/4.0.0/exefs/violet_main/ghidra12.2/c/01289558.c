/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01289558; name: FUN_01289558
 */


long FUN_01289558(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = (long *)(param_1 + 8);
  lVar6 = *plVar7;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar6) {
    lVar4 = nn::os::GetCurrentThread();
LAB_01289588:
    if (*plVar7 == 0) goto code_r0x01289590;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
    do {
      if (*plVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
          while (*plVar7 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01289598;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01289598:
    bVar3 = false;
    goto LAB_0128959c;
  }
  bVar3 = true;
LAB_0128959c:
  plVar7 = *(long **)(param_1 + 0x20);
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar7 != plVar1) {
    do {
      if (((*plVar7 != 0) && (uVar5 = FUN_0101470c(*plVar7 + 8), (uVar5 & 1) != 0)) &&
         (uVar5 = (**(code **)(*(long *)*plVar7 + 0xc0))(), (uVar5 & 1) == 0)) goto LAB_012895e0;
      plVar7 = plVar7 + 1;
    } while (plVar1 != plVar7);
    plVar7 = plVar1;
LAB_012895e0:
    if ((plVar7 != *(long **)(param_1 + 0x28)) && (*plVar7 != 0)) {
      lVar4 = *plVar7 + -0x20;
      goto joined_r0x01289680;
    }
  }
  plVar7 = *(long **)(param_1 + 0x58);
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar7 != plVar1) {
    do {
      if (((*plVar7 != 0) && (uVar5 = FUN_0101470c(*plVar7 + 8), (uVar5 & 1) != 0)) &&
         (uVar5 = (**(code **)(*(long *)*plVar7 + 0xc0))(), (uVar5 & 1) == 0)) goto LAB_01289664;
      plVar7 = plVar7 + 1;
    } while (plVar1 != plVar7);
    plVar7 = plVar1;
LAB_01289664:
    if (plVar7 != *(long **)(param_1 + 0x60)) {
      lVar4 = 0;
      if (*plVar7 != 0) {
        lVar4 = *plVar7 + -0x20;
      }
      goto joined_r0x01289680;
    }
  }
  lVar4 = 0;
joined_r0x01289680:
  if (!bVar3) {
    *(undefined8 *)(param_1 + 8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
  }
  return lVar4;
code_r0x01289590:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar3) {
    *plVar7 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01289598;
  goto LAB_01289588;
}


