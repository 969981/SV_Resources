/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020d9690; name: FUN_020d9690
 */


void FUN_020d9690(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  
  if (*(char *)((long)param_2 + 0xdc) != '\0') {
    lVar14 = param_2[5];
    *(undefined1 *)((long)param_2 + 0xdc) = 0;
    param_2[3] = 0;
    param_2[0x24] = 0;
    if (lVar14 != 0) {
      plVar16 = (long *)(lVar14 + 0x158);
      lVar13 = *plVar16;
      lVar10 = nn::os::GetCurrentThread();
      if (lVar10 != lVar13) {
        lVar10 = nn::os::GetCurrentThread();
LAB_020d96f0:
        if (*plVar16 == 0) goto code_r0x020d96f8;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x160));
        do {
          if (*plVar16 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x160));
              while (*plVar16 == 0) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar3) {
                  *plVar16 = lVar10;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') goto LAB_020d9700;
              }
            } while( true );
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = lVar10;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_020d9700:
        *(undefined1 *)(lVar14 + 0x150) = 1;
        *(undefined8 *)(lVar14 + 0x158) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x160));
        goto LAB_020d9718;
      }
      *(undefined1 *)(lVar14 + 0x150) = 1;
    }
LAB_020d9718:
    nn::os::LockMutex((MutexType *)(param_2 + 0x2c));
    if ((param_2[0x34] != 0) && (iVar9 = (**(code **)*param_2)(param_2), 0 < iVar9)) {
      iVar15 = 0;
      do {
        lVar14 = param_2[0x34];
        do {
          nn::os::LockMutex((MutexType *)(lVar14 + 0x100));
          iVar4 = *(int *)(lVar14 + 0x120) + -1;
          if (*(int *)(lVar14 + 0x120) < 1) {
            iVar4 = 0;
          }
          *(int *)(lVar14 + 0x120) = iVar4;
          nn::os::UnlockMutex((MutexType *)(lVar14 + 0x100));
          lVar14 = *(long *)(lVar14 + 0x68);
        } while (lVar14 != 0);
        iVar15 = iVar15 + 1;
      } while (iVar15 != iVar9);
    }
    lVar14 = param_2[0x25];
    lVar10 = param_2[0x26];
    if (lVar10 != lVar14) {
      if (*(long **)(lVar10 + -0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar10 + -0x10) + 0x20))();
      }
      if (lVar10 + -0x28 != lVar14) {
        if (*(long **)(lVar10 + -0x38) != (long *)0x0) {
          (**(code **)(**(long **)(lVar10 + -0x38) + 0x20))();
        }
        if (lVar10 + -0x50 != lVar14) {
          do {
            if (*(long **)(lVar10 + -0x60) != (long *)0x0) {
              (**(code **)(**(long **)(lVar10 + -0x60) + 0x20))();
            }
            lVar10 = lVar10 + -0x28;
          } while (lVar14 + 0x50 != lVar10);
        }
      }
    }
    param_2[0x26] = lVar14;
    nn::os::UnlockMutex((MutexType *)(param_2 + 0x2c));
    puVar5 = PTR_DAT_047d8280;
    if (*(int *)((long)param_2 + 0x24) != 0) {
      if (((*PTR_DAT_047d8280 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      puVar7 = PTR_DAT_047d8290;
      puVar6 = PTR_DAT_047d8288;
      uVar11 = *(undefined8 *)PTR_DAT_047d8288;
      *(undefined8 *)PTR_DAT_047d8290 = uVar11;
      FUN_013ec58c(uVar11,*(undefined4 *)((long)param_2 + 0x24));
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      uVar11 = *(undefined8 *)puVar6;
      *(undefined8 *)puVar7 = uVar11;
      FUN_013ee4a0(param_1,uVar11,*(undefined4 *)((long)param_2 + 0x24),4);
    }
    puVar5 = PTR_DAT_047d82a0;
    if (*(int *)(param_2 + 4) != 0) {
      if (((*PTR_DAT_047d82a0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d82a0), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d8a98,PTR_DAT_047d82a8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d82a0);
      }
      puVar7 = PTR_DAT_047d82b0;
      puVar6 = PTR_DAT_047d82a8;
      uVar11 = *(undefined8 *)PTR_DAT_047d82a8;
      *(undefined8 *)PTR_DAT_047d82b0 = uVar11;
      FUN_0147a158(uVar11,*(undefined4 *)(param_2 + 4));
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d82a0), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d8a98,PTR_DAT_047d82a8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d82a0);
      }
      uVar11 = *(undefined8 *)puVar6;
      *(undefined8 *)puVar7 = uVar11;
      FUN_020da5f8(param_1,uVar11,*(undefined4 *)(param_2 + 4));
    }
    puVar8 = PTR_DAT_047dcae0;
    puVar7 = PTR_DAT_047d8290;
    puVar6 = PTR_DAT_047d8288;
    puVar5 = PTR_DAT_047d8280;
    plVar16 = (long *)param_2[0x14];
    plVar1 = (long *)param_2[0x15];
    if (plVar16 != plVar1) {
      do {
        lVar14 = *plVar16;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d89a8,puVar6,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar5);
        }
        lVar10 = *(long *)puVar6;
        *(long *)puVar7 = lVar10;
        plVar12 = *(long **)(*(long *)(lVar10 + 0x200) + 0x60);
        (**(code **)(*plVar12 + 0x98))(0,plVar12,"ENV_POKE_VOICE",lVar14,0,4,0);
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d89a8,puVar6,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar5);
        }
        lVar10 = *(long *)puVar6;
        *(long *)puVar7 = lVar10;
        if (lVar14 != -1) {
          plVar12 = *(long **)(*(long *)(lVar10 + 0x200) + 0x60);
          (**(code **)(*plVar12 + 0x120))(plVar12,lVar14,0,0);
        }
        FUN_01228988(*(undefined8 *)puVar8,lVar14);
        plVar16 = plVar16 + 1;
      } while (plVar1 != plVar16);
      plVar16 = (long *)param_2[0x14];
    }
    param_2[0x15] = plVar16;
  }
  return;
code_r0x020d96f8:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar3) {
    *plVar16 = lVar10;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_020d9700;
  goto LAB_020d96f0;
}


