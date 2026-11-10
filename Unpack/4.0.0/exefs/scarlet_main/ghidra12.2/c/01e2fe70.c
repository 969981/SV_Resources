/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e2fe70; name: FUN_01e2fe70
 */


void FUN_01e2fe70(long param_1,ulong param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  bool bVar12;
  long *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ulong local_70;
  undefined8 uStack_68;
  
  plVar9 = (long *)(param_1 + 0x300);
  lVar11 = *plVar9;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar11) {
    lVar7 = nn::os::GetCurrentThread();
LAB_01e2feb8:
    if (*plVar9 == 0) goto code_r0x01e2fec0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x308));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x308));
          while (*plVar9 == 0) {
            cVar1 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar12) {
              *plVar9 = lVar7;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_01e2fec8;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar12) {
        *plVar9 = lVar7;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_01e2fec8:
    bVar12 = false;
    goto LAB_01e2fecc;
  }
  bVar12 = true;
LAB_01e2fecc:
  if ((*(byte *)(param_1 + 0x629) & 1) == 0) {
    plVar9 = (long *)(param_1 + 0x318);
    lVar11 = *plVar9;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar11) {
      lVar7 = nn::os::GetCurrentThread();
LAB_01e2fef4:
      if (*plVar9 == 0) goto code_r0x01e2fefc;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 800));
      do {
        if (*plVar9 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 800));
            while (*plVar9 == 0) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar2) {
                *plVar9 = lVar7;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_01e2ff04;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar7;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_01e2ff04:
      bVar2 = false;
      goto LAB_01e2ff08;
    }
    bVar2 = true;
LAB_01e2ff08:
    puVar5 = PTR_DAT_047d4250;
    puVar4 = PTR_DAT_047d4248;
    puVar3 = PTR_DAT_047d4240;
    pcVar10 = *(char **)(param_3 + 8);
    local_80 = (long *)0x0;
    if (*pcVar10 == '\0') {
      plVar9 = (long *)FUN_00d44228();
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar8 = *(undefined8 *)puVar4;
      *(undefined8 *)puVar5 = uVar8;
      FUN_00cf9884(&local_78,uVar8,pcVar10);
      plVar9 = local_80;
      local_80 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))();
      }
      plVar9 = (long *)CONCAT44(uStack_74,local_78);
    }
    local_80 = plVar9;
    lVar7 = FUN_00e8b690(param_1 + 0x110,&local_80);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
    if (lVar7 != 0) {
      pcVar10 = *(char **)(param_3 + 8);
      local_80 = (long *)0x0;
      if (*pcVar10 == '\0') {
        plVar9 = (long *)FUN_00d44228();
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        local_80 = plVar9;
      }
      else {
        if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4240);
        }
        uVar8 = *(undefined8 *)puVar4;
        *(undefined8 *)puVar5 = uVar8;
        FUN_00cf9884(&local_78,uVar8,pcVar10);
        plVar9 = local_80;
        local_80 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x20))();
        }
        local_80 = (long *)CONCAT44(uStack_74,local_78);
      }
      plVar9 = (long *)FUN_01098ff8(param_1 + 0x110,&local_80);
      lVar7 = *plVar9;
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      if ((param_2 < *(ulong *)(param_1 + 0x290)) &&
         (((*(ulong *)(param_1 + 0x228) <= param_2 ||
           ((*(ulong *)(*(long *)(param_1 + 0x220) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
             (param_2 & 0x3f) & 1) == 0)) &&
          (*(long *)(*(long *)(param_1 + 0x1e8) + param_2 * 0x20 + 0x18) != lVar7)))) {
        FUN_026ff278(param_1,param_2,lVar7);
      }
    }
    if (!bVar2) {
      *(undefined8 *)(param_1 + 0x318) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 800));
    }
  }
  else {
    local_78 = 2;
    uStack_68 = *(undefined8 *)(param_3 + 8);
    local_70 = param_2;
    FUN_026ff228(param_1 + 0x630,&local_78);
  }
  if (!bVar12) {
    *(undefined8 *)(param_1 + 0x300) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x308));
  }
  return;
code_r0x01e2fec0:
  cVar1 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar12) {
    *plVar9 = lVar7;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_01e2fec8;
  goto LAB_01e2feb8;
code_r0x01e2fefc:
  cVar1 = '\x01';
  bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar2) {
    *plVar9 = lVar7;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_01e2ff04;
  goto LAB_01e2fef4;
}


