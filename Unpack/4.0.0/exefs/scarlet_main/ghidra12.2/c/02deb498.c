/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02deb498; name: FUN_02deb498
 */


void FUN_02deb498(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  uVar4 = *param_1;
  if (((*PTR_DAT_047d88d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  lVar7 = *(long *)PTR_DAT_047d88d8;
  plVar8 = (long *)(lVar7 + 0x28);
  *(long *)PTR_DAT_047d88e0 = lVar7;
  lVar6 = *plVar8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar6) {
    plVar8 = (long *)0x0;
    bVar5 = true;
  }
  else {
    lVar3 = nn::os::GetCurrentThread();
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x30));
          while (*plVar8 == 0) {
            cVar1 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar3;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_02deb508;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_02deb508:
    bVar5 = false;
  }
  FUN_01003b00(uVar4,param_1[1],param_1 + 4,param_1 + 2,1);
  if (bVar5) {
    return;
  }
  *plVar8 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
  return;
}


