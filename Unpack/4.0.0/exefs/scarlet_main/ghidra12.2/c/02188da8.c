/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02188da8; name: FUN_02188da8
 */


void FUN_02188da8(long param_1)

{
  long *plVar1;
  undefined2 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x48);
  }
  lVar7 = FUN_00f3be00(uVar6);
  if (lVar7 == 0) {
LAB_02188e3c:
    if ((*(char *)(param_1 + 0x58) == '\x01') && (*(char *)(param_1 + 0x59) == '\x03')) {
      return;
    }
    uVar2 = *(undefined2 *)(param_1 + 0x58);
    plVar1 = (long *)(param_1 + 0x38);
    *(undefined2 *)(param_1 + 0x58) = 0x301;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_00c6a584(*(long *)(param_1 + 0x48),plVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x02188e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,uVar2);
    return;
  }
  plVar1 = (long *)(lVar7 + 0x1d0);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_02188df4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x1d8));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x1d8));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02188df4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02188df4:
  if (((*PTR_DAT_047d8d80 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8d80);
  }
  lVar8 = *(long *)PTR_DAT_047d8d88;
  *(long *)PTR_DAT_047d8d90 = lVar8;
  FUN_00e220f4(lVar7,0,*(undefined8 *)(lVar8 + 0x28));
  *(undefined8 *)(lVar7 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x1d8));
  goto LAB_02188e3c;
}


