/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a41178; name: FUN_02a41178
 */


void FUN_02a41178(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  code *pcVar8;
  code *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined8 *local_a0 [12];
  undefined8 local_28;
  
  pcVar8 = (code *)*param_2;
  param_1 = (undefined8 *)*param_1;
  local_c0 = pcVar8;
  (*(code *)*param_1)(param_1 + 4,&local_c0);
  pcVar7 = pcVar8 + 0x1d8;
  local_c0 = (code *)PTR_FUN_047db0a8;
  local_b8 = (code *)PTR_FUN_047db0b0;
  local_b0 = PTR_LAB_047db0b8;
  puStack_a8 = PTR_LAB_047db0c0;
  lVar5 = *(long *)pcVar7;
  local_a0[0] = param_1;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    pcVar7 = (code *)0x0;
    bVar4 = true;
LAB_02a41210:
    puVar1 = *(undefined8 **)(pcVar8 + 0x1f8);
    for (puVar6 = *(undefined8 **)(pcVar8 + 0x1f0); puVar6 != puVar1; puVar6 = puVar6 + 1) {
      local_28 = *puVar6;
      (*local_c0)(local_a0,&local_28);
    }
    if (!bVar4) {
      *(long *)pcVar7 = 0;
      nn::os::SignalLightEvent((LightEventType *)(pcVar7 + 8));
    }
    pcVar7 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined *)0x0;
      puStack_a8 = (undefined *)0x0;
      local_c0 = (code *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar7)(local_a0);
    }
    return;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*(long *)pcVar7 == 0) {
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
    if (bVar4) {
      *(long *)pcVar7 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_02a4120c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(pcVar8 + 0x1e0));
  do {
    if (*(long *)pcVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(pcVar8 + 0x1e0));
        while (*(long *)pcVar7 == 0) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
          if (bVar4) {
            *(long *)pcVar7 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02a4120c;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
    if (bVar4) {
      *(long *)pcVar7 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02a4120c:
  bVar4 = false;
  goto LAB_02a41210;
}


