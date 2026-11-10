/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e359f4; name: FUN_01e359f4
 */


void FUN_01e359f4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  if (*(long *)(param_2 + 0x138) == 0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar5 = PTR_DAT_047d3e30;
    uVar2 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
    *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
    param_1[1] = uVar2;
    plVar1 = *(long **)(puVar5 + 0x18);
    param_1[2] = *(undefined8 *)(puVar5 + 0x10);
    param_1[3] = plVar1;
    if (plVar1 == (long *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x01e35b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))();
    return;
  }
  plVar1 = (long *)(param_2 + 0x148);
  lVar8 = *plVar1;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar8) {
    FUN_01e35be4(param_1,*(undefined8 *)(param_2 + 0x138));
    return;
  }
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01e35a44;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x150));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x150));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01e35a44;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01e35a44:
  if (*(long *)(param_2 + 0x138) == 0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar5 = PTR_DAT_047d3e30;
    uVar2 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
    *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
    param_1[1] = uVar2;
    plVar1 = *(long **)(puVar5 + 0x18);
    param_1[2] = *(undefined8 *)(puVar5 + 0x10);
    param_1[3] = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))();
    }
  }
  else {
    FUN_01e35be4(param_1);
  }
  *(undefined8 *)(param_2 + 0x148) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x150));
  return;
}


