/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fd79ec; name: FUN_00fd79ec
 */


undefined8 FUN_00fd79ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
    plVar1 = (long *)(param_2 + 0x2d0);
    lVar8 = *plVar1;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar8) {
      lVar5 = nn::os::GetCurrentThread();
LAB_00fd7a44:
      if (*plVar1 == 0) goto code_r0x00fd7a4c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2d8));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2d8));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar5;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_00fd7a54;
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
LAB_00fd7a54:
      uVar6 = FUN_00f09970(param_2 + 0x2e8);
      *(undefined8 *)(param_2 + 0x2d0) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x2d8));
      goto LAB_00fd7a70;
    }
    uVar6 = FUN_00f09970(param_2 + 0x2e8);
LAB_00fd7a70:
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
      FUN_00fd7b9c(param_1,uVar7,&local_60,*(undefined8 *)(param_2 + 0x48),
                   *(undefined8 *)(param_2 + 0x40),param_3,param_4);
    }
    else {
      FUN_00fd9fe4(param_1,uVar7,&local_60,*(undefined8 *)(param_2 + 0x48),
                   *(undefined8 *)(param_2 + 0x40),param_3,param_4);
    }
  }
  return uVar6;
code_r0x00fd7a4c:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar5;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_00fd7a54;
  goto LAB_00fd7a44;
}


