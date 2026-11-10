/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e36e8; name: FUN_020e36e8
 */


void FUN_020e36e8(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 local_4c;
  undefined4 uStack_48;
  int local_44;
  
  if (*(int *)(param_2 + 0x60) != 0) {
    lVar11 = *(long *)(param_2 + 0xf8);
    if (lVar11 != 0) {
      plVar1 = (long *)(lVar11 + 0x158);
      lVar10 = *plVar1;
      lVar8 = nn::os::GetCurrentThread();
      if (lVar8 != lVar10) {
        lVar8 = nn::os::GetCurrentThread();
LAB_020e3738:
        if (*plVar1 == 0) goto code_r0x020e3740;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x160));
        do {
          if (*plVar1 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x160));
              while (*plVar1 == 0) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar8;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') goto LAB_020e3748;
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
LAB_020e3748:
        *(undefined1 *)(lVar11 + 0x150) = 1;
        *(undefined8 *)(lVar11 + 0x158) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x160));
        goto LAB_020e3760;
      }
      *(undefined1 *)(lVar11 + 0x150) = 1;
    }
LAB_020e3760:
    if (*(int *)(param_2 + 0xf0) != 0) {
      if (*(code **)(param_2 + 0x180) != (code *)0x0) {
        local_44 = *(int *)(param_2 + 0xf0);
        (**(code **)(param_2 + 0x180))(param_2 + 0x1a0,&local_44);
      }
      puVar4 = PTR_DAT_047d8280;
      if (((*PTR_DAT_047d8280 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      puVar6 = PTR_DAT_047d8290;
      puVar5 = PTR_DAT_047d8288;
      lVar11 = *(long *)PTR_DAT_047d8288;
      *(long *)PTR_DAT_047d8290 = lVar11;
      FUN_013ee33c(*(undefined8 *)(lVar11 + 0x220),*(undefined4 *)(param_2 + 0xf0));
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      uVar9 = *(undefined8 *)puVar5;
      *(undefined8 *)puVar6 = uVar9;
      FUN_013ee4a0(param_1,uVar9,*(undefined4 *)(param_2 + 0xf0),4);
    }
    if ((*(code **)(param_2 + 0x70) != (code *)0x0) && ((*(byte *)(param_2 + 100) & 1) != 0)) {
      local_4c = *(undefined4 *)(param_2 + 0x48);
      uStack_48 = 1;
      (**(code **)(param_2 + 0x70))(param_2 + 0x90,&uStack_48,&local_4c);
    }
  }
  return;
code_r0x020e3740:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar8;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_020e3748;
  goto LAB_020e3738;
}


