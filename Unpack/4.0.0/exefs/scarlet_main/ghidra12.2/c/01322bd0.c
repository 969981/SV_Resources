/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01322bd0; name: FUN_01322bd0
 */


void FUN_01322bd0(undefined8 param_1,char *param_2)

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
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
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
  if (lVar5 == lVar8) {
    bVar10 = true;
LAB_01322c60:
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
    if (*param_2 == '\x01') {
      uVar7 = *(undefined8 *)(param_2 + 8);
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
      uVar7 = 0;
      local_60 = 0;
      local_58 = 0;
      local_68 = 0;
    }
    *pcVar9 = '\x01';
    *(undefined8 *)(pcVar9 + 8) = uVar7;
    *(undefined8 *)(pcVar9 + 0x18) = local_60;
    *(undefined8 *)(pcVar9 + 0x20) = local_58;
    *(undefined8 *)(pcVar9 + 0x10) = local_68;
    cVar1 = *param_2;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') {
      *(undefined8 *)(pcVar9 + 8) = *(undefined8 *)(param_2 + 8);
    }
    *puVar4 = pcVar9;
    FUN_00c5fc50(param_1,0xfff0b9d8,(long)DAT_045c3c40);
    FUN_00c5e190(param_1,0xfffffffe);
    return;
  }
  uVar7 = nn::os::GetCurrentThread();
  while (*(long *)puVar2 == 0) {
    cVar1 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar10) {
      *(undefined8 *)puVar2 = uVar7;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01322d10;
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
          bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar10) {
            *(undefined8 *)puVar2 = uVar7;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01322d10;
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
LAB_01322d10:
  bVar10 = false;
  goto LAB_01322c60;
}


