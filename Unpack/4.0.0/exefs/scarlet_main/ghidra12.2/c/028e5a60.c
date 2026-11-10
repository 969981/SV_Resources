/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028e5a60; name: FUN_028e5a60
 */


void FUN_028e5a60(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,ulong param_5,
                 uint param_6)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long local_a0;
  long lStack_98;
  long local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *plStack_68;
  
  plVar1 = (long *)(param_1 + 0x40);
  lVar10 = *plVar1;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar10) {
    lVar9 = nn::os::GetCurrentThread();
LAB_028e5abc:
    if (*plVar1 == 0) goto code_r0x028e5ac4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
          while (*plVar1 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_028e5b24;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_028e5b24:
    bVar7 = false;
    goto LAB_028e5b28;
  }
  bVar7 = true;
LAB_028e5b28:
  uVar3 = *param_4;
  uVar5 = param_4[1];
  uVar4 = param_4[2];
  plVar1 = (long *)param_4[3];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  if (param_5 < (ulong)(*(long *)(param_1 + 0x170) - *(long *)(param_1 + 0x168) >> 3)) {
    plVar12 = *(long **)(*(long *)(*(long *)(param_1 + 0x168) + param_5 * 8) + 0x40);
    plVar2 = (long *)PTR_DAT_047d8b70;
    if (plVar12 != (long *)0x0) {
      plVar2 = plVar12 + 6;
    }
    lVar9 = *plVar2;
    plVar2 = (long *)PTR_PTR_047d4508;
    if (plVar12 != (long *)0x0) {
      plVar2 = plVar12 + 7;
    }
    lVar13 = *plVar2;
    if (plVar12 == (long *)0x0) {
      lVar10 = 0;
      goto LAB_028e5ba4;
    }
    lVar10 = plVar12[8];
  }
  else {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    lVar9 = *(long *)PTR_DAT_047d3e30;
    lVar13 = *(long *)(PTR_DAT_047d3e30 + 8);
    lVar10 = *(long *)(PTR_DAT_047d3e30 + 0x10);
    plVar12 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar12 == (long *)0x0) goto LAB_028e5ba4;
  }
  (**(code **)(*plVar12 + 0x18))(plVar12);
LAB_028e5ba4:
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x168) + param_2 * 8);
  local_80 = uVar3;
  uStack_78 = uVar5;
  local_70 = uVar4;
  plStack_68 = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  local_a0 = lVar9;
  lStack_98 = lVar13;
  local_90 = lVar10;
  plStack_88 = plVar12;
  if (plVar12 == (long *)0x0) {
    FUN_012d8f14(uVar11,param_3,&local_80,0,&local_a0,param_5,param_6 & 1);
  }
  else {
    (**(code **)(*plVar12 + 0x18))(plVar12);
    FUN_012d8f14(uVar11,param_3,&local_80,0,&local_a0,param_5,param_6 & 1);
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if (bVar7) {
    return;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x48));
  return;
code_r0x028e5ac4:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar7) {
    *plVar1 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_028e5b24;
  goto LAB_028e5abc;
}


