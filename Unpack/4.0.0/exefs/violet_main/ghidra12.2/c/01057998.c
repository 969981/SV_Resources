/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01057998; name: FUN_01057998
 */


undefined8 FUN_01057998(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
    plVar1 = (long *)(param_2 + 0x138);
    lVar8 = *plVar1;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar8) {
      lVar5 = nn::os::GetCurrentThread();
LAB_010579f0:
      if (*plVar1 == 0) goto code_r0x010579f8;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x140));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x140));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar5;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01057a00;
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
LAB_01057a00:
      uVar6 = FUN_00f09970(param_2 + 0x150);
      *(undefined8 *)(param_2 + 0x138) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x140));
      goto LAB_01057a1c;
    }
    uVar6 = FUN_00f09970(param_2 + 0x150);
LAB_01057a1c:
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
      FUN_01057b50(param_1,uVar7,&local_60,*(undefined8 *)(param_2 + 0x48),
                   *(undefined8 *)(param_2 + 0x40),param_3,param_4,0xffffffffffffffff);
    }
    else {
      FUN_0105843c(param_1,uVar7,&local_60,*(undefined8 *)(param_2 + 0x48),
                   *(undefined8 *)(param_2 + 0x40),param_3,param_4,0xffffffffffffffff);
    }
  }
  return uVar6;
code_r0x010579f8:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar5;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01057a00;
  goto LAB_010579f0;
}


