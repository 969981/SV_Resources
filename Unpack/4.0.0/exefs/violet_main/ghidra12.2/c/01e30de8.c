/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e30de8; name: FUN_01e30de8
 */


void FUN_01e30de8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
LAB_01e30e44:
    local_60 = param_1;
    uStack_58 = param_2;
    local_48 = param_4;
    FUN_01e30f48(param_1 + 0x410,&local_60);
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
    if (cVar1 == '\0') goto LAB_01e30e40;
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
          if (cVar1 == '\0') goto LAB_01e30e40;
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
LAB_01e30e40:
  bVar5 = false;
  goto LAB_01e30e44;
}


