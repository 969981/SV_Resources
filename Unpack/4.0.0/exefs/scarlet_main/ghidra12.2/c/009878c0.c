/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 009878c0; name: FUN_009878c0
 */


void FUN_009878c0(undefined8 param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  
  if (((*param_2 != '\0') && (*param_2 != '\x01')) || (*(long *)(param_2 + 8) == 0)) {
    FUN_00ca1a30(param_1);
    return;
  }
  puVar5 = (undefined8 *)FUN_00c5e120(param_1,8,1);
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  lVar14 = *(long *)PTR_DAT_047d38a8;
  *(long *)PTR_DAT_047d38b0 = lVar14;
  puVar3 = PTR_DAT_047d38f8;
  lVar13 = *(long *)PTR_DAT_047d38f8;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar13) {
    bVar2 = true;
  }
  else {
    uVar9 = nn::os::GetCurrentThread();
    do {
      if (*(long *)puVar3 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
          while (*(long *)puVar3 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar2) {
              *(undefined8 *)puVar3 = uVar9;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00987a78;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar2) {
        *(undefined8 *)puVar3 = uVar9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00987a78:
    bVar2 = false;
  }
  if (*(long *)(lVar14 + 0x28) == *(long *)(lVar14 + 0x30)) {
    pcVar7 = (char *)FUN_00d97840(0x40,8);
  }
  else {
    puVar8 = (undefined8 *)(*(long *)(lVar14 + 0x30) + -8);
    pcVar7 = (char *)*puVar8;
    *(undefined8 **)(lVar14 + 0x30) = puVar8;
  }
  if (!bVar2) {
    *(undefined8 *)puVar3 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
  }
  if (*param_2 == '\x01') {
    uVar9 = *(undefined8 *)(param_2 + 8);
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    uVar11 = *(undefined8 *)(param_2 + 0x18);
    uVar12 = *(undefined8 *)(param_2 + 0x20);
  }
  else {
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
  }
  *pcVar7 = '\x01';
  *(undefined8 *)(pcVar7 + 8) = uVar9;
  *(undefined8 *)(pcVar7 + 0x10) = uVar10;
  *(undefined8 *)(pcVar7 + 0x18) = uVar11;
  *(undefined8 *)(pcVar7 + 0x20) = uVar12;
  cVar1 = *param_2;
  *pcVar7 = cVar1;
  if (cVar1 == '\0') {
    *(undefined8 *)(pcVar7 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *puVar5 = pcVar7;
  FUN_00c5fc50(param_1,0xfff0b9d8,(long)DAT_04531638);
  FUN_00c5e190(param_1,0xfffffffe);
  return;
}


