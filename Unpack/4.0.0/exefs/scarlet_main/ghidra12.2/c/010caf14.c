/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010caf14; name: FUN_010caf14
 */


char * FUN_010caf14(long param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  char *pcVar8;
  bool bVar9;
  
  puVar2 = PTR_DAT_047d38f8;
  lVar7 = *(long *)PTR_DAT_047d38f8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar7) {
    bVar9 = true;
LAB_010caf4c:
    if (*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x30)) {
      pcVar8 = (char *)FUN_00d97840(0x40,8);
    }
    else {
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x30) + -8);
      pcVar8 = (char *)*puVar6;
      *(undefined8 **)(param_1 + 0x30) = puVar6;
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
      FUN_010cb054(pcVar4,param_2 + 8);
    }
    else if (cVar1 == '\x01') {
      FUN_010cb424(pcVar4,param_2 + 8);
    }
    else if (cVar1 == '\0') {
      *(undefined8 *)pcVar4 = *(undefined8 *)(param_2 + 8);
    }
    return pcVar8;
  }
  uVar5 = nn::os::GetCurrentThread();
  while (*(long *)puVar2 == 0) {
    cVar1 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *(undefined8 *)puVar2 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_010cafb8;
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
            *(undefined8 *)puVar2 = uVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_010cafb8;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *(undefined8 *)puVar2 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_010cafb8:
  bVar9 = false;
  goto LAB_010caf4c;
}


