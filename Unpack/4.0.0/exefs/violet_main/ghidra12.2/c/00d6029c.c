/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d6029c; name: FUN_00d6029c
 */


void FUN_00d6029c(long param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  bool bVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_047d38f8;
  lVar8 = *(long *)PTR_DAT_047d38f8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar8) {
    bVar7 = true;
LAB_00d602d4:
    if (*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x30)) {
      pcVar4 = (char *)FUN_00d97840(0x40,8);
    }
    else {
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + -8);
      pcVar4 = (char *)*puVar5;
      *(undefined8 **)(param_1 + 0x30) = puVar5;
    }
    if (!bVar7) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    *pcVar4 = '\0';
    pcVar4[8] = '\0';
    pcVar4[9] = '\0';
    pcVar4[10] = '\0';
    pcVar4[0xb] = '\0';
    pcVar4[0xc] = '\0';
    pcVar4[0xd] = '\0';
    pcVar4[0xe] = '\0';
    pcVar4[0xf] = '\0';
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    if (cVar1 == '\x01') {
      pcVar4[8] = '\0';
      pcVar4[9] = '\0';
      pcVar4[10] = '\0';
      pcVar4[0xb] = '\0';
      pcVar4[0xc] = '\0';
      pcVar4[0xd] = '\0';
      pcVar4[0xe] = '\0';
      pcVar4[0xf] = '\0';
      uVar6 = *(undefined8 *)(param_2 + 8);
      param_2[8] = '\0';
      param_2[9] = '\0';
      param_2[10] = '\0';
      param_2[0xb] = '\0';
      param_2[0xc] = '\0';
      param_2[0xd] = '\0';
      param_2[0xe] = '\0';
      param_2[0xf] = '\0';
    }
    else {
      if (cVar1 != '\0') {
        return;
      }
      uVar6 = *(undefined8 *)(param_2 + 8);
    }
    *(undefined8 *)(pcVar4 + 8) = uVar6;
    return;
  }
  uVar6 = nn::os::GetCurrentThread();
  while (*(long *)puVar2 == 0) {
    cVar1 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar7) {
      *(undefined8 *)puVar2 = uVar6;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00d60340;
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
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *(undefined8 *)puVar2 = uVar6;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00d60340;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar7) {
      *(undefined8 *)puVar2 = uVar6;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00d60340:
  bVar7 = false;
  goto LAB_00d602d4;
}


