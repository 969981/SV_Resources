/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021ea138; name: FUN_021ea138
 */


void FUN_021ea138(undefined8 *param_1)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  
  *param_1 = &PTR_FUN_045a8a60;
  param_1[4] = &PTR_LAB_045a8a90;
  puVar2 = PTR_DAT_047d38f8;
  lVar5 = *(long *)PTR_DAT_047d38f8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    bVar6 = true;
LAB_021ea17c:
    lVar5 = param_1[6];
    lVar3 = param_1[5];
    while (lVar3 != lVar5) {
      uVar4 = *(undefined8 *)(lVar5 + -8);
      param_1[6] = (undefined8 *)(lVar5 + -8);
      FUN_021ea230(uVar4);
      lVar5 = param_1[6];
      lVar3 = param_1[5];
    }
    if (!bVar6) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    FUN_021ea358(param_1 + 5);
    return;
  }
  uVar4 = nn::os::GetCurrentThread();
  while (*(long *)puVar2 == 0) {
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *(undefined8 *)puVar2 = uVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_021ea1d4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
  do {
    if (*(long *)puVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
        while (*(long *)puVar2 == 0) {
          cVar1 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *(undefined8 *)puVar2 = uVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_021ea1d4;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *(undefined8 *)puVar2 = uVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_021ea1d4:
  bVar6 = false;
  goto LAB_021ea17c;
}


