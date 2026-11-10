/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019ac6f4; name: FUN_019ac6f4
 */


void FUN_019ac6f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  if (*(char *)(param_1 + 0x500) == '\0') {
    if (((*PTR_DAT_047d94e8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d94e8), iVar2 != 0)) {
      FUN_00100190(&LAB_00aa3b14,PTR_DAT_047d94f0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d94e8);
    }
    uVar4 = *(undefined8 *)PTR_DAT_047d94f0;
    *(undefined8 *)PTR_DAT_047d94f8 = uVar4;
    FUN_01181758(uVar4,param_1);
    *(undefined1 *)(param_1 + 0x500) = 1;
  }
  plVar7 = (long *)(param_1 + 0x3f8);
  lVar6 = *plVar7;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar6) {
    plVar7 = (long *)0x0;
    bVar5 = true;
LAB_019ac750:
    local_60 = param_1;
    uStack_58 = param_2;
    local_48 = param_4;
    FUN_019ac854(param_1 + 0x410,&local_60);
    if (!bVar5) {
      *plVar7 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
    }
    return;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar5) {
      *plVar7 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_019ac74c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x400));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x400));
        while (*plVar7 == 0) {
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_019ac74c;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar5) {
      *plVar7 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_019ac74c:
  bVar5 = false;
  goto LAB_019ac750;
}


