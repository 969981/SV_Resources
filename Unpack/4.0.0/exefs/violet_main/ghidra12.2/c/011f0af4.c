/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011f0af4; name: FUN_011f0af4
 */


void FUN_011f0af4(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  plVar1 = (long *)(param_2 + 0xe08);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_011f0b2c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xe10));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xe10));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_011f0b2c;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_011f0b2c:
  puVar6 = *(undefined8 **)(param_2 + 0xdc8);
  puVar5 = *(undefined8 **)(param_2 + 0xdd0);
  if ((((puVar6 != puVar5) &&
       ((**(code **)(*(long *)*puVar6 + 0x28))(param_1), puVar6 + 1 != puVar5)) &&
      ((**(code **)(*(long *)puVar6[1] + 0x28))(param_1), puVar6 + 2 != puVar5)) &&
     ((((**(code **)(*(long *)puVar6[2] + 0x28))(param_1), puVar6 + 3 != puVar5 &&
       ((**(code **)(*(long *)puVar6[3] + 0x28))(param_1), puVar6 + 4 != puVar5)) &&
      ((**(code **)(*(long *)puVar6[4] + 0x28))(param_1), puVar6 + 5 != puVar5)))) {
    (**(code **)(*(long *)puVar6[5] + 0x28))(param_1);
    for (puVar6 = puVar6 + 6; puVar6 != puVar5; puVar6 = puVar6 + 1) {
      (**(code **)(*(long *)*puVar6 + 0x28))(param_1);
    }
  }
  *(undefined8 *)(param_2 + 0xe08) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xe10));
  return;
}


