/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011d48a0; name: FUN_011d48a0
 */


void FUN_011d48a0(undefined8 param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  long lVar13;
  long lVar14;
  
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
  lVar14 = *(long *)PTR_DAT_047d38a8;
  *(long *)PTR_DAT_047d38b0 = lVar14;
  puVar2 = PTR_DAT_047d38f8;
  lVar13 = *(long *)PTR_DAT_047d38f8;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar13) {
    bVar12 = true;
LAB_011d492c:
    if (*(long *)(lVar14 + 0x28) == *(long *)(lVar14 + 0x30)) {
      pcVar6 = (char *)FUN_00d97840(0x40,8);
    }
    else {
      puVar7 = (undefined8 *)(*(long *)(lVar14 + 0x30) + -8);
      pcVar6 = (char *)*puVar7;
      *(undefined8 **)(lVar14 + 0x30) = puVar7;
    }
    if (!bVar12) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    if (*param_2 == '\x01') {
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar9 = *(undefined8 *)(param_2 + 0x10);
      param_2[8] = '\0';
      param_2[9] = '\0';
      param_2[10] = '\0';
      param_2[0xb] = '\0';
      param_2[0xc] = '\0';
      param_2[0xd] = '\0';
      param_2[0xe] = '\0';
      param_2[0xf] = '\0';
      uVar10 = *(undefined8 *)(param_2 + 0x18);
      uVar11 = *(undefined8 *)(param_2 + 0x20);
    }
    else {
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
    }
    *pcVar6 = '\x01';
    *(undefined8 *)(pcVar6 + 8) = uVar8;
    *(undefined8 *)(pcVar6 + 0x10) = uVar9;
    *(undefined8 *)(pcVar6 + 0x18) = uVar10;
    *(undefined8 *)(pcVar6 + 0x20) = uVar11;
    cVar1 = *param_2;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') {
      *(undefined8 *)(pcVar6 + 8) = *(undefined8 *)(param_2 + 8);
    }
    *puVar4 = pcVar6;
    FUN_00c5fc50(param_1,0xfff0b9d8,(long)DAT_045c8598);
    FUN_00c5e190(param_1,0xfffffffe);
    return;
  }
  uVar8 = nn::os::GetCurrentThread();
  while (*(long *)puVar2 == 0) {
    cVar1 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar12) {
      *(undefined8 *)puVar2 = uVar8;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_011d49d0;
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
          bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar12) {
            *(undefined8 *)puVar2 = uVar8;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_011d49d0;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar12) {
      *(undefined8 *)puVar2 = uVar8;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_011d49d0:
  bVar12 = false;
  goto LAB_011d492c;
}


