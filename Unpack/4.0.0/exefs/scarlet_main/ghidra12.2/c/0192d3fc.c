/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0192d3fc; name: FUN_0192d3fc
 */


undefined8 FUN_0192d3fc(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  undefined1 auStack_60 [24];
  long *local_48;
  
  if (*(long *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  plVar11 = (long *)(param_1 + 0x48);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar11 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0192d440;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
        while (*plVar11 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0192d440;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0192d440:
  FUN_0148e234(auStack_60,param_1,*(long *)(param_1 + 0xa8) == 1,**(char **)(param_1 + 0xd8) != '\0'
              );
  if (**(char **)(param_1 + 0xd8) == '\0') {
    uVar8 = (*(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xa0)) - 1;
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(param_1 + 0x68) + (uVar8 >> 4 & 0xffffffffffffff8)) +
             (uVar8 & 0x7f) * 0x20);
    local_80 = *puVar1;
    local_78 = puVar1[1];
    local_70 = puVar1[2];
    local_68 = (long *)puVar1[3];
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
    FUN_0148ecf4(*(undefined8 *)(param_1 + 0x40),&local_80,auStack_60);
    FUN_0148ebd0(param_1 + 0x60);
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    plVar11 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    if (*(long *)(param_1 + 0xa8) == 0) {
      plVar10 = plVar11;
    }
    else {
      uVar8 = (*(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xa0)) - 1;
      plVar10 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + (uVar8 >> 4 & 0xffffffffffffff8)) +
                           (uVar8 & 0x7f) * 0x20 + 0x18);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
      uVar8 = (*(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xa0)) - 1;
      FUN_0148e4d4(*(undefined8 *)(param_1 + 0x40),
                   *(long *)(*(long *)(param_1 + 0x68) + (uVar8 >> 4 & 0xffffffffffffff8)) +
                   (uVar8 & 0x7f) * 0x20,auStack_60);
    }
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    if (local_68 == (long *)0x0) goto LAB_0192d528;
    lVar6 = *local_68;
    plVar11 = local_68;
  }
  else {
    plVar11 = *(long **)(param_1 + 0xe8);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    FUN_0148ecf4(*(undefined8 *)(param_1 + 0x40),param_1 + 0xd0,auStack_60);
    uVar8 = (*(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xa0)) - 1;
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(param_1 + 0x68) + (uVar8 >> 4 & 0xffffffffffffff8)) +
             (uVar8 & 0x7f) * 0x20);
    local_80 = *puVar1;
    local_78 = puVar1[1];
    local_70 = puVar1[2];
    local_68 = (long *)puVar1[3];
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
    FUN_0192d7f4(*(undefined8 *)(param_1 + 0x40),&local_80);
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar4 = PTR_DAT_047d3e30;
    uVar9 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)PTR_DAT_047d3e30;
    *(undefined8 *)(param_1 + 0xd8) = uVar9;
    plVar10 = *(long **)(puVar4 + 0x18);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(puVar4 + 0x10);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    plVar7 = *(long **)(param_1 + 0xe8);
    *(long **)(param_1 + 0xe8) = plVar10;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (plVar11 == (long *)0x0) goto LAB_0192d528;
    lVar6 = *plVar11;
  }
  (**(code **)(lVar6 + 0x20))(plVar11);
LAB_0192d528:
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x50));
  return 1;
}


