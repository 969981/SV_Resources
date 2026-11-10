/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0129a6e4; name: FUN_0129a6e4
 */


void FUN_0129a6e4(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  
  FUN_00da3348(param_1,*(undefined8 *)PTR_DAT_047d8d98);
  *(undefined4 *)(param_1 + 0x6e) = 1;
  *param_1 = (long)&DAT_045d7e00;
  param_1[0x6d] = 0;
  plVar1 = param_1 + 0x3a;
  param_1[0x6c] = 0;
  *(undefined1 *)((long)param_1 + 0x374) = 0;
  param_1[0x6f] = param_2;
  param_1[0x70] = param_3;
  param_1[4] = (long)&PTR_LAB_045d7ec8;
  param_1[5] = (long)&DAT_045d7f18;
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0129a760;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3b));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3b));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0129a760;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0129a760:
  puVar4 = PTR_DAT_047d8d80;
  if (((*PTR_DAT_047d8d80 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8d80);
  }
  puVar6 = PTR_DAT_047d8d90;
  puVar5 = PTR_DAT_047d8d88;
  lVar8 = *(long *)PTR_DAT_047d8d88;
  *(long *)PTR_DAT_047d8d90 = lVar8;
  FUN_00e220f4(param_1,*(undefined8 *)(lVar8 + 0x28),0);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8d80);
  }
  lVar8 = *(long *)puVar5;
  *(long *)puVar6 = lVar8;
  FUN_00e220f4(param_1,0,*(undefined8 *)(lVar8 + 0x30));
  (**(code **)(*param_1 + 0x80))(param_1);
  param_1[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3b));
  return;
}


