/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0092b7ac; name: FUN_0092b7ac
 */


char * FUN_0092b7ac(long param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  
  puVar3 = PTR_DAT_047d38f8;
  lVar10 = *(long *)PTR_DAT_047d38f8;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar10) {
    bVar2 = true;
  }
  else {
    uVar6 = nn::os::GetCurrentThread();
    do {
      if (*(long *)puVar3 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
          while (*(long *)puVar3 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar2) {
              *(undefined8 *)puVar3 = uVar6;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_0092b8c4;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar2) {
        *(undefined8 *)puVar3 = uVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_0092b8c4:
    bVar2 = false;
  }
  if (*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x30)) {
    pcVar11 = (char *)FUN_00d97840(0x40,8);
  }
  else {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + -8);
    pcVar11 = (char *)*puVar5;
    *(undefined8 **)(param_1 + 0x30) = puVar5;
  }
  if (!bVar2) {
    *(undefined8 *)puVar3 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
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
  *pcVar11 = '\x01';
  *(undefined8 *)(pcVar11 + 8) = uVar6;
  *(undefined8 *)(pcVar11 + 0x10) = uVar7;
  *(undefined8 *)(pcVar11 + 0x18) = uVar8;
  *(undefined8 *)(pcVar11 + 0x20) = uVar9;
  cVar1 = *param_2;
  *pcVar11 = cVar1;
  if (cVar1 == '\0') {
    *(undefined8 *)(pcVar11 + 8) = *(undefined8 *)(param_2 + 8);
  }
  return pcVar11;
}


