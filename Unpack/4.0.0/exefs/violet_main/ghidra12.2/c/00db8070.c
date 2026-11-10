/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00db8070; name: FUN_00db8070
 */


void FUN_00db8070(undefined8 param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  if (((*param_2 != '\0') && (*param_2 != '\x01')) || (*(long *)(param_2 + 8) == 0)) {
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
  lVar10 = *(long *)PTR_DAT_047d38f8;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar10) {
    bVar9 = true;
LAB_00db80fc:
    if (*(long *)(lVar11 + 0x28) == *(long *)(lVar11 + 0x30)) {
      pcVar6 = (char *)FUN_00d97840(0x40,8);
    }
    else {
      puVar7 = (undefined8 *)(*(long *)(lVar11 + 0x30) + -8);
      pcVar6 = (char *)*puVar7;
      *(undefined8 **)(lVar11 + 0x30) = puVar7;
    }
    if (!bVar9) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
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
    *pcVar6 = '\x01';
    *(undefined8 *)(pcVar6 + 8) = uVar8;
    *(undefined8 *)(pcVar6 + 0x18) = local_60;
    *(undefined8 *)(pcVar6 + 0x20) = local_58;
    *(undefined8 *)(pcVar6 + 0x10) = local_68;
    cVar1 = *param_2;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') {
      *(undefined8 *)(pcVar6 + 8) = *(undefined8 *)(param_2 + 8);
    }
    *puVar4 = pcVar6;
    FUN_00c5fc50(param_1,0xfff0b9d8,(long)DAT_045277e8);
    FUN_00c5e190(param_1,0xfffffffe);
    return;
  }
  uVar8 = nn::os::GetCurrentThread();
  while (*(long *)puVar2 == 0) {
    cVar1 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *(undefined8 *)puVar2 = uVar8;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00db81b4;
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
          bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar9) {
            *(undefined8 *)puVar2 = uVar8;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00db81b4;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *(undefined8 *)puVar2 = uVar8;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00db81b4:
  bVar9 = false;
  goto LAB_00db80fc;
}


