/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d35140; name: FUN_00d35140
 */


char * FUN_00d35140(long param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  bool bVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_047d38f8;
  lVar6 = *(long *)PTR_DAT_047d38f8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar6) {
    bVar8 = true;
LAB_00d3517c:
    if (*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x30)) {
      pcVar7 = (char *)FUN_00d97840(0x40,8);
    }
    else {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + -8);
      pcVar7 = (char *)*puVar4;
      *(undefined8 **)(param_1 + 0x30) = puVar4;
    }
    if (!bVar8) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    if (*param_2 == '\x01') {
      uVar5 = *(undefined8 *)(param_2 + 8);
      local_58 = *(undefined8 *)(param_2 + 0x10);
      param_2[8] = '\0';
      param_2[9] = '\0';
      param_2[10] = '\0';
      param_2[0xb] = '\0';
      param_2[0xc] = '\0';
      param_2[0xd] = '\0';
      param_2[0xe] = '\0';
      param_2[0xf] = '\0';
      local_50 = *(undefined8 *)(param_2 + 0x18);
      local_48 = *(undefined8 *)(param_2 + 0x20);
    }
    else {
      uVar5 = 0;
      local_50 = 0;
      local_48 = 0;
      local_58 = 0;
    }
    *pcVar7 = '\x01';
    *(undefined8 *)(pcVar7 + 8) = uVar5;
    *(undefined8 *)(pcVar7 + 0x18) = local_50;
    *(undefined8 *)(pcVar7 + 0x20) = local_48;
    *(undefined8 *)(pcVar7 + 0x10) = local_58;
    cVar1 = *param_2;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') {
      *(undefined8 *)(pcVar7 + 8) = *(undefined8 *)(param_2 + 8);
    }
    return pcVar7;
  }
  uVar5 = nn::os::GetCurrentThread();
  while (*(long *)puVar2 == 0) {
    cVar1 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar8) {
      *(undefined8 *)puVar2 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00d35210;
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
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *(undefined8 *)puVar2 = uVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00d35210;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar8) {
      *(undefined8 *)puVar2 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00d35210:
  bVar8 = false;
  goto LAB_00d3517c;
}


