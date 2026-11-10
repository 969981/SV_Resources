/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0128855c; name: FUN_0128855c
 */


void FUN_0128855c(long param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  long lVar11;
  
  puVar2 = PTR_DAT_047d38f8;
  lVar11 = *(long *)PTR_DAT_047d38f8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar11) {
    bVar10 = true;
LAB_01288594:
    if (*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x30)) {
      pcVar4 = (char *)FUN_00d97840(0x40,8);
    }
    else {
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + -8);
      pcVar4 = (char *)*puVar5;
      *(undefined8 **)(param_1 + 0x30) = puVar5;
    }
    if (!bVar10) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    if (*param_2 == '\x01') {
      uVar6 = *(undefined8 *)(param_2 + 8);
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      param_2[8] = '\0';
      param_2[9] = '\0';
      param_2[10] = '\0';
      param_2[0xb] = '\0';
      param_2[0xc] = '\0';
      param_2[0xd] = '\0';
      param_2[0xe] = '\0';
      param_2[0xf] = '\0';
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      uVar9 = *(undefined8 *)(param_2 + 0x20);
    }
    else {
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
    }
    *pcVar4 = '\x01';
    *(undefined8 *)(pcVar4 + 8) = uVar6;
    *(undefined8 *)(pcVar4 + 0x10) = uVar7;
    *(undefined8 *)(pcVar4 + 0x18) = uVar8;
    *(undefined8 *)(pcVar4 + 0x20) = uVar9;
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      *(undefined8 *)(pcVar4 + 8) = *(undefined8 *)(param_2 + 8);
    }
    return;
  }
  uVar6 = nn::os::GetCurrentThread();
  while (*(long *)puVar2 == 0) {
    cVar1 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar10) {
      *(undefined8 *)puVar2 = uVar6;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01288610;
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
          bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar10) {
            *(undefined8 *)puVar2 = uVar6;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01288610;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar10) {
      *(undefined8 *)puVar2 = uVar6;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01288610:
  bVar10 = false;
  goto LAB_01288594;
}


