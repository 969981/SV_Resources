/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0119f0b0; name: FUN_0119f0b0
 */


void FUN_0119f0b0(undefined8 param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  bool bVar11;
  long lVar12;
  
  cVar1 = *param_2;
  if (cVar1 == '\x03') {
LAB_0119f0dc:
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0)) {
LAB_0119f288:
      FUN_00ca1a30(param_1);
      return;
    }
  }
  else {
    if ((cVar1 != '\0') && (cVar1 != '\x01')) {
      if (cVar1 != '\x02') goto LAB_0119f288;
      goto LAB_0119f0dc;
    }
    if (*(long *)(param_2 + 8) == 0) goto LAB_0119f288;
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
  lVar9 = *(long *)PTR_DAT_047d38f8;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 != lVar9) {
    uVar8 = nn::os::GetCurrentThread();
LAB_0119f1dc:
    if (*(long *)puVar2 == 0) goto code_r0x0119f1e4;
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
              *(undefined8 *)puVar2 = uVar8;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_0119f1ec;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar11) {
        *(undefined8 *)puVar2 = uVar8;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_0119f1ec:
    bVar11 = false;
    goto LAB_0119f14c;
  }
  bVar11 = true;
LAB_0119f14c:
  if (*(long *)(lVar12 + 0x28) == *(long *)(lVar12 + 0x30)) {
    pcVar10 = (char *)FUN_00d97840(0x40,8);
  }
  else {
    puVar7 = (undefined8 *)(*(long *)(lVar12 + 0x30) + -8);
    pcVar10 = (char *)*puVar7;
    *(undefined8 **)(lVar12 + 0x30) = puVar7;
  }
  if (!bVar11) {
    *(undefined8 *)puVar2 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
  }
  *pcVar10 = '\0';
  pcVar6 = pcVar10 + 8;
  pcVar6[0] = '\0';
  pcVar6[1] = '\0';
  pcVar6[2] = '\0';
  pcVar6[3] = '\0';
  pcVar6[4] = '\0';
  pcVar6[5] = '\0';
  pcVar6[6] = '\0';
  pcVar6[7] = '\0';
  cVar1 = *param_2;
  *pcVar10 = cVar1;
  if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
    FUN_0119eb24(pcVar6,param_2 + 8);
  }
  else {
    if (cVar1 == '\x01') {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6[4] = '\0';
      pcVar6[5] = '\0';
      pcVar6[6] = '\0';
      pcVar6[7] = '\0';
      uVar8 = *(undefined8 *)(param_2 + 8);
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
      if (cVar1 != '\0') goto LAB_0119f188;
      uVar8 = *(undefined8 *)(param_2 + 8);
    }
    *(undefined8 *)pcVar6 = uVar8;
  }
LAB_0119f188:
  *puVar4 = pcVar10;
  FUN_00c5fc50(param_1,0xfff0b9d8,(long)DAT_045c8ff8);
  FUN_00c5e190(param_1,0xfffffffe);
  return;
code_r0x0119f1e4:
  cVar1 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar11) {
    *(undefined8 *)puVar2 = uVar8;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_0119f1ec;
  goto LAB_0119f1dc;
}


