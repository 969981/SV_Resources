/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 009fe3a0; name: FUN_009fe3a0
 */


void FUN_009fe3a0(undefined8 param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
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
  lVar11 = *(long *)PTR_DAT_047d38a8;
  *(long *)PTR_DAT_047d38b0 = lVar11;
  puVar3 = PTR_DAT_047d38f8;
  lVar9 = *(long *)PTR_DAT_047d38f8;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar9) {
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
            if (cVar1 == '\0') goto LAB_009fe56c;
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
LAB_009fe56c:
    bVar2 = false;
  }
  if (*(long *)(lVar11 + 0x28) == *(long *)(lVar11 + 0x30)) {
    pcVar10 = (char *)FUN_00d97840(0x40,8);
  }
  else {
    puVar7 = (undefined8 *)(*(long *)(lVar11 + 0x30) + -8);
    pcVar10 = (char *)*puVar7;
    *(undefined8 **)(lVar11 + 0x30) = puVar7;
  }
  if (!bVar2) {
    *(undefined8 *)puVar3 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
  }
  if (*param_2 == '\x01') {
    uVar8 = *(undefined8 *)(param_2 + 8);
    local_68 = *(undefined8 *)(param_2 + 0x10);
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    local_60 = *(undefined8 *)(param_2 + 0x18);
    local_58 = *(undefined8 *)(param_2 + 0x20);
  }
  else {
    uVar8 = 0;
    local_60 = 0;
    local_58 = 0;
    local_68 = 0;
  }
  *pcVar10 = '\x01';
  *(undefined8 *)(pcVar10 + 8) = uVar8;
  *(undefined8 *)(pcVar10 + 0x18) = local_60;
  *(undefined8 *)(pcVar10 + 0x20) = local_58;
  *(undefined8 *)(pcVar10 + 0x10) = local_68;
  cVar1 = *param_2;
  *pcVar10 = cVar1;
  if (cVar1 == '\0') {
    *(undefined8 *)(pcVar10 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *puVar5 = pcVar10;
  FUN_00c5fc50(param_1,0xfff0b9d8,(long)DAT_04536498);
  FUN_00c5e190(param_1,0xfffffffe);
  return;
}


