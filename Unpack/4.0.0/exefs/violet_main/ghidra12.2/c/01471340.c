/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01471340; name: FUN_01471340
 */


void FUN_01471340(undefined8 param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  bool bVar10;
  char *pcVar11;
  long lVar12;
  
  cVar1 = *param_2;
  if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto LAB_014714fc;
  }
  else if (((cVar1 != '\x01') && (cVar1 != '\0')) || (*(long *)(param_2 + 8) == 0)) {
LAB_014714fc:
    FUN_00ca1a30(param_1);
    return;
  }
  puVar4 = (undefined8 *)FUN_00c5e120(param_1,8,1);
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  lVar12 = *(long *)PTR_DAT_047d38a8;
  *(long *)PTR_DAT_047d38b0 = lVar12;
  puVar2 = PTR_DAT_047d38f8;
  lVar8 = *(long *)PTR_DAT_047d38f8;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 != lVar8) {
    uVar7 = nn::os::GetCurrentThread();
LAB_01471460:
    if (*(long *)puVar2 == 0) goto code_r0x01471468;
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
              *(undefined8 *)puVar2 = uVar7;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_01471470;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar10) {
        *(undefined8 *)puVar2 = uVar7;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_01471470:
    bVar10 = false;
    goto LAB_014713dc;
  }
  bVar10 = true;
LAB_014713dc:
  if (*(long *)(lVar12 + 0x28) == *(long *)(lVar12 + 0x30)) {
    pcVar9 = (char *)FUN_00d97840(0x40,8);
  }
  else {
    puVar6 = (undefined8 *)(*(long *)(lVar12 + 0x30) + -8);
    pcVar9 = (char *)*puVar6;
    *(undefined8 **)(lVar12 + 0x30) = puVar6;
  }
  if (!bVar10) {
    *(undefined8 *)puVar2 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
  }
  *pcVar9 = '\0';
  pcVar11 = pcVar9 + 8;
  pcVar11[0] = '\0';
  pcVar11[1] = '\0';
  pcVar11[2] = '\0';
  pcVar11[3] = '\0';
  pcVar11[4] = '\0';
  pcVar11[5] = '\0';
  pcVar11[6] = '\0';
  pcVar11[7] = '\0';
  cVar1 = *param_2;
  *pcVar9 = cVar1;
  if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    FUN_01471588(pcVar11,param_2 + 8);
  }
  else {
    if (cVar1 == '\x01') {
      FUN_01473480(pcVar11);
      uVar7 = *(undefined8 *)(param_2 + 8);
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
      if (cVar1 != '\0') goto LAB_0147141c;
      uVar7 = *(undefined8 *)(param_2 + 8);
    }
    *(undefined8 *)pcVar11 = uVar7;
  }
LAB_0147141c:
  *puVar4 = pcVar9;
  FUN_00c5fc50(param_1,0xfff0b9d8,(long)DAT_045267e0);
  FUN_00c5e190(param_1,0xfffffffe);
  return;
code_r0x01471468:
  cVar1 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar10) {
    *(undefined8 *)puVar2 = uVar7;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_01471470;
  goto LAB_01471460;
}


