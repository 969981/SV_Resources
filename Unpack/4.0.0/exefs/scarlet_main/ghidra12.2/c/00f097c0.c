/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f097c0; name: FUN_00f097c0
 */


undefined8 FUN_00f097c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *local_60;
  undefined8 uStack_58;
  
  if (((*(long *)(param_2 + 0x40) == 0) && (*(long *)(param_2 + 0x48) == 0)) ||
     (*(char *)(param_2 + 0x68) != '\0')) {
    uVar6 = 0xffffffffffffffff;
  }
  else {
    plVar1 = (long *)(param_2 + 0x70);
    lVar8 = *plVar1;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar8) {
      lVar5 = nn::os::GetCurrentThread();
LAB_00f09818:
      if (*plVar1 == 0) goto code_r0x00f09820;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x78));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x78));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar5;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_00f09828;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_00f09828:
      uVar6 = FUN_00f09970(param_2 + 0x88);
      *(undefined8 *)(param_2 + 0x70) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x78));
      goto LAB_00f09844;
    }
    uVar6 = FUN_00f09970(param_2 + 0x88);
LAB_00f09844:
    cVar2 = *(char *)(param_2 + 0x398);
    if (((*PTR_DAT_047d88d0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d88d0);
    }
    uVar7 = *(undefined8 *)PTR_DAT_047d88d8;
    *(undefined8 *)PTR_DAT_047d88e0 = uVar7;
    local_60 = plVar1;
    uStack_58 = uVar6;
    if (cVar2 == '\0') {
      FUN_00f09e5c(param_1,uVar7,&local_60,*(undefined8 *)(param_2 + 0x48),
                   *(undefined8 *)(param_2 + 0x40),param_3,param_4);
    }
    else {
      FUN_00f0a738(param_1,uVar7,&local_60,*(undefined8 *)(param_2 + 0x48),
                   *(undefined8 *)(param_2 + 0x40),param_3,param_4);
    }
  }
  return uVar6;
code_r0x00f09820:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar5;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_00f09828;
  goto LAB_00f09818;
}


