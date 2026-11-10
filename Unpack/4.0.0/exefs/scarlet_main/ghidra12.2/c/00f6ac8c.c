/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f6ac8c; name: FUN_00f6ac8c
 */


char * FUN_00f6ac8c(long param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  bool bVar11;
  
  puVar2 = PTR_DAT_047d38f8;
  lVar9 = *(long *)PTR_DAT_047d38f8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar9) {
    bVar11 = true;
LAB_00f6acc4:
    if (*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x30)) {
      pcVar10 = (char *)FUN_00d97840(0x40,8);
    }
    else {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + -8);
      pcVar10 = (char *)*puVar4;
      *(undefined8 **)(param_1 + 0x30) = puVar4;
    }
    if (!bVar11) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    if (*param_2 == '\x01') {
      uVar5 = *(undefined8 *)(param_2 + 8);
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      param_2[8] = '\0';
      param_2[9] = '\0';
      param_2[10] = '\0';
      param_2[0xb] = '\0';
      param_2[0xc] = '\0';
      param_2[0xd] = '\0';
      param_2[0xe] = '\0';
      param_2[0xf] = '\0';
      uVar7 = *(undefined8 *)(param_2 + 0x18);
      uVar8 = *(undefined8 *)(param_2 + 0x20);
    }
    else {
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
    }
    *pcVar10 = '\x01';
    *(undefined8 *)(pcVar10 + 8) = uVar5;
    *(undefined8 *)(pcVar10 + 0x10) = uVar6;
    *(undefined8 *)(pcVar10 + 0x18) = uVar7;
    *(undefined8 *)(pcVar10 + 0x20) = uVar8;
    cVar1 = *param_2;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') {
      *(undefined8 *)(pcVar10 + 8) = *(undefined8 *)(param_2 + 8);
    }
    return pcVar10;
  }
  uVar5 = nn::os::GetCurrentThread();
  while (*(long *)puVar2 == 0) {
    cVar1 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar11) {
      *(undefined8 *)puVar2 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00f6ad44;
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
          bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar11) {
            *(undefined8 *)puVar2 = uVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00f6ad44;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar11) {
      *(undefined8 *)puVar2 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00f6ad44:
  bVar11 = false;
  goto LAB_00f6acc4;
}


