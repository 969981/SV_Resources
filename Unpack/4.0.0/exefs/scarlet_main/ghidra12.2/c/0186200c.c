/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0186200c; name: FUN_0186200c
 */


void FUN_0186200c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  
  plVar1 = (long *)(param_1 + 0x120);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0186203c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x128));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x128));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0186203c;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0186203c:
  puVar4 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar5 = PTR_DAT_047d3e30;
  uVar9 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)PTR_DAT_047d3e30;
  *(undefined8 *)(param_1 + 0x178) = uVar9;
  plVar1 = *(long **)(puVar5 + 0x18);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(puVar5 + 0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  plVar8 = *(long **)(param_1 + 0x188);
  *(long **)(param_1 + 0x188) = plVar1;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  uVar9 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0x158) = uVar9;
  plVar1 = *(long **)(puVar5 + 0x18);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(puVar5 + 0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  plVar8 = *(long **)(param_1 + 0x168);
  *(long **)(param_1 + 0x168) = plVar1;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x128));
  return;
}


