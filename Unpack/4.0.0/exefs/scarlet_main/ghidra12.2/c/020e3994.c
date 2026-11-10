/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020e3994; name: FUN_020e3994
 */


void FUN_020e3994(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 local_44;
  undefined4 local_28;
  int local_24;
  
  lVar7 = *(long *)(param_1 + 0xf8);
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 0x158);
    lVar6 = *plVar1;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 == lVar6) {
      *(undefined1 *)(lVar7 + 0x150) = 1;
    }
    else {
      lVar5 = nn::os::GetCurrentThread();
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x160));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar5;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_020e39e4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_020e39e4:
      *(undefined1 *)(lVar7 + 0x150) = 1;
      *(undefined8 *)(lVar7 + 0x158) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x160));
    }
  }
  *(undefined1 *)(param_1 + 0x200) = 1;
  if (*(int *)(param_1 + 0xf0) != 0) {
    if (*(code **)(param_1 + 0x180) != (code *)0x0) {
      local_24 = *(int *)(param_1 + 0xf0);
      (**(code **)(param_1 + 0x180))(param_1 + 0x1a0,&local_24);
    }
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar7 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar7;
    FUN_013ee33c(*(undefined8 *)(lVar7 + 0x220),*(undefined4 *)(param_1 + 0xf0));
  }
  if ((*(code **)(param_1 + 0x70) != (code *)0x0) && ((*(byte *)(param_1 + 100) & 1) != 0)) {
    local_44 = *(undefined4 *)(param_1 + 0x48);
    local_28 = 1;
    (**(code **)(param_1 + 0x70))(param_1 + 0x90,&local_28,&local_44);
  }
  return;
}


