/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d9a82c; name: FUN_00d9a82c
 */


char * FUN_00d9a82c(long param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  bool bVar9;
  
  puVar2 = PTR_DAT_047d38f8;
  lVar7 = *(long *)PTR_DAT_047d38f8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar7) {
    bVar9 = true;
LAB_00d9a864:
    if (*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x30)) {
      pcVar8 = (char *)FUN_00d97840(0x40,8);
    }
    else {
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + -8);
      pcVar8 = (char *)*puVar5;
      *(undefined8 **)(param_1 + 0x30) = puVar5;
    }
    if (!bVar9) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    *pcVar8 = '\0';
    pcVar4 = pcVar8 + 8;
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4[4] = '\0';
    pcVar4[5] = '\0';
    pcVar4[6] = '\0';
    pcVar4[7] = '\0';
    cVar1 = *param_2;
    *pcVar8 = cVar1;
    if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
      FUN_00d9a970(pcVar4,param_2 + 8);
    }
    else {
      if (cVar1 == '\x01') {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4[4] = '\0';
        pcVar4[5] = '\0';
        pcVar4[6] = '\0';
        pcVar4[7] = '\0';
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
          return pcVar8;
        }
        uVar6 = *(undefined8 *)(param_2 + 8);
      }
      *(undefined8 *)pcVar4 = uVar6;
    }
    return pcVar8;
  }
  uVar6 = nn::os::GetCurrentThread();
  while (*(long *)puVar2 == 0) {
    cVar1 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *(undefined8 *)puVar2 = uVar6;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00d9a8d0;
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
          bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar9) {
            *(undefined8 *)puVar2 = uVar6;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00d9a8d0;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *(undefined8 *)puVar2 = uVar6;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00d9a8d0:
  bVar9 = false;
  goto LAB_00d9a864;
}


