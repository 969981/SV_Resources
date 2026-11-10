/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e24180; name: FUN_00e24180
 */


void FUN_00e24180(undefined8 param_1,char *param_2)

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
  long lVar11;
  
  if (((*param_2 != '\x01') && (*param_2 != '\0')) || (*(long *)(param_2 + 8) == 0)) {
    FUN_00ca1a30(param_1);
    return;
  }
  puVar4 = (undefined8 *)FUN_00c5e120(param_1,8,1);
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  lVar11 = *(long *)PTR_DAT_047d38a8;
  *(long *)PTR_DAT_047d38b0 = lVar11;
  puVar2 = PTR_DAT_047d38f8;
  lVar8 = *(long *)PTR_DAT_047d38f8;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 != lVar8) {
    uVar7 = nn::os::GetCurrentThread();
LAB_00e2429c:
    if (*(long *)puVar2 == 0) goto code_r0x00e242a4;
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
            if (cVar1 == '\0') goto LAB_00e242ac;
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
LAB_00e242ac:
    bVar10 = false;
    goto LAB_00e2420c;
  }
  bVar10 = true;
LAB_00e2420c:
  if (*(long *)(lVar11 + 0x28) == *(long *)(lVar11 + 0x30)) {
    pcVar9 = (char *)FUN_00d97840(0x40,8);
  }
  else {
    puVar6 = (undefined8 *)(*(long *)(lVar11 + 0x30) + -8);
    pcVar9 = (char *)*puVar6;
    *(undefined8 **)(lVar11 + 0x30) = puVar6;
  }
  if (!bVar10) {
    *(undefined8 *)puVar2 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
  }
  *pcVar9 = '\0';
  pcVar9[8] = '\0';
  pcVar9[9] = '\0';
  pcVar9[10] = '\0';
  pcVar9[0xb] = '\0';
  pcVar9[0xc] = '\0';
  pcVar9[0xd] = '\0';
  pcVar9[0xe] = '\0';
  pcVar9[0xf] = '\0';
  cVar1 = *param_2;
  *pcVar9 = cVar1;
  if (cVar1 == '\x01') {
    pcVar9[8] = '\0';
    pcVar9[9] = '\0';
    pcVar9[10] = '\0';
    pcVar9[0xb] = '\0';
    pcVar9[0xc] = '\0';
    pcVar9[0xd] = '\0';
    pcVar9[0xe] = '\0';
    pcVar9[0xf] = '\0';
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
    if (cVar1 != '\0') goto LAB_00e24258;
    uVar7 = *(undefined8 *)(param_2 + 8);
  }
  *(undefined8 *)(pcVar9 + 8) = uVar7;
LAB_00e24258:
  *puVar4 = pcVar9;
  FUN_00c5fc50(param_1,0xfff0b9d8,(long)DAT_04525098);
  FUN_00c5e190(param_1,0xfffffffe);
  return;
code_r0x00e242a4:
  cVar1 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar10) {
    *(undefined8 *)puVar2 = uVar7;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00e242ac;
  goto LAB_00e2429c;
}


