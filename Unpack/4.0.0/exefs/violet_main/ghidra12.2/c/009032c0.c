/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 009032c0; name: FUN_009032c0
 */


void FUN_009032c0(undefined8 param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  char *pcVar13;
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
  lVar12 = *(long *)PTR_DAT_047d38f8;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar12) {
    bVar2 = true;
  }
  else {
    uVar8 = nn::os::GetCurrentThread();
    do {
      if (*(long *)puVar3 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
          while (*(long *)puVar3 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar2) {
              *(undefined8 *)puVar3 = uVar8;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00903470;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar2) {
        *(undefined8 *)puVar3 = uVar8;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00903470:
    bVar2 = false;
  }
  if (*(long *)(lVar14 + 0x28) == *(long *)(lVar14 + 0x30)) {
    pcVar13 = (char *)FUN_00d97840(0x40,8);
  }
  else {
    puVar7 = (undefined8 *)(*(long *)(lVar14 + 0x30) + -8);
    pcVar13 = (char *)*puVar7;
    *(undefined8 **)(lVar14 + 0x30) = puVar7;
  }
  if (!bVar2) {
    *(undefined8 *)puVar3 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
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
  *pcVar13 = '\x01';
  *(undefined8 *)(pcVar13 + 8) = uVar8;
  *(undefined8 *)(pcVar13 + 0x10) = uVar9;
  *(undefined8 *)(pcVar13 + 0x18) = uVar10;
  *(undefined8 *)(pcVar13 + 0x20) = uVar11;
  cVar1 = *param_2;
  *pcVar13 = cVar1;
  if (cVar1 == '\0') {
    *(undefined8 *)(pcVar13 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *puVar5 = pcVar13;
  FUN_00c5fc50(param_1,0xfff0b9d8,(long)DAT_0451dac0);
  FUN_00c5e190(param_1,0xfffffffe);
  return;
}


