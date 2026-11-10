/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a83b20; name: FUN_01a83b20
 */


void FUN_01a83b20(float param_1,long param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if (*(char *)(param_2 + 0xea) == '\0') {
    plVar1 = (long *)(param_2 + 0x60);
    lVar5 = nn::os::GetCurrentThread();
LAB_01a83b58:
    if (*plVar1 == 0) goto code_r0x01a83b60;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
          while (*plVar1 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01a83b68;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01a83b68:
    puVar7 = *(undefined8 **)(param_2 + 0xb0);
    puVar2 = *(undefined8 **)(param_2 + 0xb8);
    if (puVar7 != puVar2) {
      param_1 = *(float *)(param_2 + 0xf0) * param_1;
      (**(code **)(*(long *)*puVar7 + 0x50))(param_1,(long *)*puVar7,param_4 & 1);
      if ((puVar7 + 1 != puVar2) &&
         ((**(code **)(*(long *)puVar7[1] + 0x50))(param_1,(long *)puVar7[1],param_4 & 1),
         puVar7 + 2 != puVar2)) {
        (**(code **)(*(long *)puVar7[2] + 0x50))(param_1,(long *)puVar7[2],param_4 & 1);
        if ((puVar7 + 3 != puVar2) &&
           ((**(code **)(*(long *)puVar7[3] + 0x50))(param_1,(long *)puVar7[3],param_4 & 1),
           puVar7 + 4 != puVar2)) {
          (**(code **)(*(long *)puVar7[4] + 0x50))(param_1,(long *)puVar7[4],param_4 & 1);
          for (puVar7 = puVar7 + 5; puVar7 != puVar2; puVar7 = puVar7 + 1) {
            (**(code **)(*(long *)*puVar7 + 0x50))(param_1,(long *)*puVar7,param_4 & 1);
          }
        }
      }
    }
    *(undefined8 *)(param_2 + 0x60) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  }
  if (*(char *)(param_2 + 0xe9) == '\0') {
    return;
  }
  plVar1 = (long *)(param_2 + 0x48);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01a83cec;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01a83cec;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01a83cec:
  uVar6 = FUN_01a83d80(*(undefined8 *)(param_2 + 0xb0),*(undefined8 *)(param_2 + 0xb8));
  FUN_01283ad4((undefined8 *)(param_2 + 0xb0),uVar6,*(undefined8 *)(param_2 + 0xb8));
  *(undefined1 *)(param_2 + 0xe9) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x50));
  return;
code_r0x01a83b60:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar4) {
    *plVar1 = lVar5;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01a83b68;
  goto LAB_01a83b58;
}


