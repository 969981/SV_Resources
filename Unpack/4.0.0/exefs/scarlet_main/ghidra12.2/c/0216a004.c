/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0216a004; name: FUN_0216a004
 */


void FUN_0216a004(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x48);
  }
  lVar6 = FUN_00f3be00(uVar5);
  if (lVar6 == 0) {
    return;
  }
  plVar1 = (long *)(lVar6 + 0x1d0);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0216a048;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x1d8));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x1d8));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0216a048;
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
LAB_0216a048:
  if (((*PTR_DAT_047dd280 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047dd280), iVar4 != 0))
  {
    FUN_00100190(&LAB_02b3a1bc,PTR_DAT_047dd288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd280);
  }
  lVar7 = *(long *)PTR_DAT_047dd288;
  *(long *)PTR_DAT_047dd290 = lVar7;
  FUN_00e220f4(lVar6,0,*(undefined8 *)(lVar7 + 0x28));
  *(undefined8 *)(lVar6 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x1d8));
  return;
}


