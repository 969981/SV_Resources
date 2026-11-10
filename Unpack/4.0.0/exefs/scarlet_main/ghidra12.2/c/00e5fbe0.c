/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e5fbe0; name: FUN_00e5fbe0
 */


void FUN_00e5fbe0(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined2 local_38;
  
  FUN_00e60020(param_1 + 0xa9);
  FUN_00cb9f64(param_1 + 0x21);
  plVar1 = param_1 + 0xc4;
  lVar10 = *plVar1;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar10) {
    FUN_00d3f1dc(param_1 + 199);
LAB_00e5fc4c:
    uVar9 = (**(code **)(*param_1 + 0x138))(param_1);
    lVar8 = tpidr_el0;
    if (*(long *)(lVar8 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(undefined8 *)(lVar8 + 0x30) = DAT_04859430;
    }
    puVar2 = (undefined8 *)(lVar8 + 0x30);
    uVar3 = *puVar2;
    uVar4 = *(undefined8 *)(lVar8 + 0x38);
    *puVar2 = uVar9;
    *(undefined2 *)(lVar8 + 0x38) = 1;
    FUN_00e5fd88(param_1 + 0xc2);
    *puVar2 = uVar3;
    local_38 = (undefined2)uVar4;
    *(undefined2 *)(lVar8 + 0x38) = local_38;
    FUN_00e5fde4(param_1);
    return;
  }
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00e5fc34;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc5));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc5));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00e5fc34;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00e5fc34:
  FUN_00d3f1dc(param_1 + 199);
  param_1[0xc4] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc5));
  goto LAB_00e5fc4c;
}


