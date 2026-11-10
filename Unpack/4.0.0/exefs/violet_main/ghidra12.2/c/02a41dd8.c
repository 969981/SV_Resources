/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a41dd8; name: FUN_02a41dd8
 */


long FUN_02a41dd8(long param_1)

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
  if (lVar4 == lVar6) {
    bVar3 = true;
  }
  else {
    lVar4 = nn::os::GetCurrentThread();
    do {
      if (*plVar7 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
          while (*plVar7 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_02a41e18;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_02a41e18:
    bVar3 = false;
  }
  plVar7 = *(long **)(param_1 + 0x20);
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar7 != plVar1) {
    do {
      if (((*plVar7 != 0) && (uVar5 = FUN_01fb4780(*plVar7 + 8), (uVar5 & 1) != 0)) &&
         (uVar5 = (**(code **)(*(long *)*plVar7 + 0xc0))(), (uVar5 & 1) == 0)) goto LAB_02a41e68;
      plVar7 = plVar7 + 1;
    } while (plVar1 != plVar7);
    plVar7 = plVar1;
LAB_02a41e68:
    if ((plVar7 != *(long **)(param_1 + 0x28)) && (*plVar7 != 0)) {
      lVar4 = *plVar7 + -0x20;
      goto joined_r0x02a41ef4;
    }
  }
  plVar7 = *(long **)(param_1 + 0x58);
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar7 != plVar1) {
    do {
      if (((*plVar7 != 0) && (uVar5 = FUN_01fb4780(*plVar7 + 8), (uVar5 & 1) != 0)) &&
         (uVar5 = (**(code **)(*(long *)*plVar7 + 0xc0))(), (uVar5 & 1) == 0)) goto LAB_02a41ecc;
      plVar7 = plVar7 + 1;
    } while (plVar1 != plVar7);
    plVar7 = plVar1;
LAB_02a41ecc:
    if (plVar7 != *(long **)(param_1 + 0x60)) {
      lVar4 = 0;
      if (*plVar7 != 0) {
        lVar4 = *plVar7 + -0x20;
      }
      goto joined_r0x02a41ef4;
    }
  }
  lVar4 = 0;
joined_r0x02a41ef4:
  if (!bVar3) {
    *(undefined8 *)(param_1 + 8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
  }
  return lVar4;
}


