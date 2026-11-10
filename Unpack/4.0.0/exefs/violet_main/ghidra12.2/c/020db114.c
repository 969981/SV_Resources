/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020db114; name: FUN_020db114
 */


bool FUN_020db114(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if (*param_1 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = *(undefined8 **)(*param_1 + 0x10);
  }
  puVar4 = (undefined8 *)(**(code **)*puVar7)(puVar7);
  puVar5 = (undefined8 *)FUN_00c6c830();
  if (puVar4 != puVar5) {
    for (puVar4 = (undefined8 *)*puVar4; puVar4 != puVar5; puVar4 = (undefined8 *)*puVar4) {
    }
  }
  (**(code **)(puVar7[-5] + 0x68))(puVar7 + -5,param_2);
  plVar1 = puVar7 + 0x26;
  lVar8 = *plVar1;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar8) {
    cVar2 = *(char *)(puVar7 + 0x25);
LAB_020db1ac:
    return cVar2 != '\0';
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_020db198;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar7 + 0x27));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar7 + 0x27));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_020db198;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_020db198:
  cVar2 = *(char *)(puVar7 + 0x25);
  puVar7[0x26] = 0;
  nn::os::SignalLightEvent((LightEventType *)(puVar7 + 0x27));
  goto LAB_020db1ac;
}


