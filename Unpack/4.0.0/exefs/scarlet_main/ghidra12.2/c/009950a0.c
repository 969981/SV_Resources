/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 009950a0; name: FUN_009950a0
 */


void FUN_009950a0(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  
  switch(*param_2) {
  case 0:
  case 1:
    if (*(long *)(param_2 + 8) == 0) goto switchD_009950e0_default;
    break;
  case 2:
  case 3:
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto switchD_009950e0_default;
    break;
  default:
switchD_009950e0_default:
    FUN_00ca1a30(param_1);
    return;
  }
  puVar6 = (undefined8 *)FUN_00c5e120(param_1,8,1);
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  lVar12 = *(long *)PTR_DAT_047d38a8;
  *(long *)PTR_DAT_047d38b0 = lVar12;
  puVar4 = PTR_DAT_047d38f8;
  lVar10 = *(long *)PTR_DAT_047d38f8;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar10) {
    bVar3 = true;
  }
  else {
    uVar8 = nn::os::GetCurrentThread();
    do {
      if (*(long *)puVar4 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
          while (*(long *)puVar4 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar3) {
              *(undefined8 *)puVar4 = uVar8;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00995288;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar3) {
        *(undefined8 *)puVar4 = uVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00995288:
    bVar3 = false;
  }
  if (*(long *)(lVar12 + 0x28) == *(long *)(lVar12 + 0x30)) {
    puVar11 = (undefined1 *)FUN_00d97840(0x40,8);
  }
  else {
    puVar9 = (undefined8 *)(*(long *)(lVar12 + 0x30) + -8);
    puVar11 = (undefined1 *)*puVar9;
    *(undefined8 **)(lVar12 + 0x30) = puVar9;
  }
  if (!bVar3) {
    *(undefined8 *)puVar4 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar4 + 8));
  }
  *puVar11 = 0;
  puVar9 = (undefined8 *)(puVar11 + 8);
  *puVar9 = 0;
  uVar1 = *param_2;
  *puVar11 = uVar1;
  switch(uVar1) {
  case 0:
    uVar8 = *(undefined8 *)(param_2 + 8);
    break;
  case 1:
    *puVar9 = 0;
    uVar8 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    break;
  case 2:
  case 3:
    FUN_009955e0(puVar9,param_2 + 8);
  default:
    goto switchD_009951a8_default;
  }
  *puVar9 = uVar8;
switchD_009951a8_default:
  *puVar6 = puVar11;
  FUN_00c5fc50(param_1,0xfff0b9d8,(long)DAT_0453191c);
  FUN_00c5e190(param_1,0xfffffffe);
  return;
}


