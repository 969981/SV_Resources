/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c45cd8; name: FUN_00c45cd8
 */


undefined8 FUN_00c45cd8(long param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x88);
  }
  plVar9 = (long *)(param_1 + 0x4b0);
  lVar6 = nn::os::GetCurrentThread();
  do {
    if (*plVar9 != 0) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00c45d40;
    }
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar8) {
      *plVar9 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar8 = true;
LAB_00c45d40:
  if (lVar5 == param_1) {
    if (!bVar8) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x4b8));
      do {
        if (*plVar9 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x4b8));
            while (*plVar9 == 0) {
              cVar3 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar8) {
                *plVar9 = lVar6;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_00c45d4c;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar8) {
          *plVar9 = lVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
LAB_00c45d4c:
    uVar2 = *(uint *)(param_2 + 0x350);
    uVar7 = (ulong)uVar2;
    if (*(long *)(param_1 + 0x518) == 0) {
      if (0 < (int)uVar2) {
        plVar9 = (long *)(param_1 + 0x3a8);
        do {
          if (*plVar9 != 0) goto LAB_00c45d58;
          uVar7 = uVar7 - 1;
          plVar9 = plVar9 + 0xe;
        } while (uVar7 != 0);
      }
      *(long *)(param_1 + 0x518) = param_2;
      *(undefined8 *)(param_1 + 0x4b0) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x4b8));
      return 0;
    }
LAB_00c45d58:
    lVar13 = param_1 + (long)(int)uVar2 * 0x70;
    lVar6 = *(long *)(lVar13 + 0x370);
    lVar5 = *(long *)(lVar13 + 0x368);
    uVar7 = 0;
    if (lVar6 - lVar5 != 0) {
      uVar7 = (lVar6 - lVar5) * 0x40 - 1;
    }
    lVar11 = param_1 + (long)(int)uVar2 * 0x70;
    uVar10 = *(long *)(lVar11 + 0x3a8) + *(long *)(lVar11 + 0x3a0);
    plVar9 = (long *)(lVar11 + 0x3a8);
    if (uVar7 == uVar10) {
      FUN_00c461ec(param_1 + (long)(int)uVar2 * 0x70 + 0x360);
      uVar10 = *(long *)(lVar11 + 0x3a0) + *plVar9;
      lVar5 = *(long *)(lVar13 + 0x368);
      lVar6 = *(long *)(lVar13 + 0x370);
    }
    if (lVar6 == lVar5) {
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)(*(long *)(lVar5 + (uVar10 >> 6 & 0x3fffffffffffff8)) + (uVar10 & 0x1ff) * 8
                        );
    }
    uVar14 = *(undefined8 *)(lVar13 + 0x3b0);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      *plVar15 = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00c461e0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar14;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *plVar15 = param_2;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    *plVar9 = *plVar9 + 1;
    *(undefined8 *)(param_1 + 0x4b0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x4b8));
  }
  else {
    if (!bVar8) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x4b8));
      do {
        if (*plVar9 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x4b8));
            while (*plVar9 == 0) {
              cVar3 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar8) {
                *plVar9 = lVar6;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_00c45e50;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar8) {
          *plVar9 = lVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
LAB_00c45e50:
    lVar13 = (long)*(int *)(param_2 + 0x350);
    lVar11 = param_1 + lVar13 * 0x70;
    lVar6 = *(long *)(lVar11 + 0x370);
    lVar5 = *(long *)(lVar11 + 0x368);
    uVar7 = 0;
    if (lVar6 - lVar5 != 0) {
      uVar7 = (lVar6 - lVar5) * 0x40 - 1;
    }
    lVar12 = param_1 + lVar13 * 0x70;
    uVar10 = *(long *)(lVar12 + 0x3a8) + *(long *)(lVar12 + 0x3a0);
    plVar9 = (long *)(lVar12 + 0x3a8);
    if (uVar7 == uVar10) {
      FUN_00c461ec(param_1 + lVar13 * 0x70 + 0x360);
      uVar10 = *(long *)(lVar12 + 0x3a0) + *plVar9;
      lVar5 = *(long *)(lVar11 + 0x368);
      lVar6 = *(long *)(lVar11 + 0x370);
    }
    if (lVar6 == lVar5) {
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)(*(long *)(lVar5 + (uVar10 >> 6 & 0x3fffffffffffff8)) + (uVar10 & 0x1ff) * 8
                        );
    }
    uVar14 = *(undefined8 *)(lVar11 + 0x3b0);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      *plVar15 = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00c461e0;
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar14;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *plVar15 = param_2;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    *plVar9 = *plVar9 + 1;
    *(undefined8 *)(param_1 + 0x4b0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x4b8));
    piVar1 = (int *)(param_1 + 0x514);
    if (*piVar1 != 2) {
      if (*piVar1 == 0) {
        do {
          iVar4 = *piVar1;
          if (iVar4 != 0) {
            bVar8 = false;
            ClearExclusiveLocal();
            goto LAB_00c46010;
          }
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = 2;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar8 = true;
LAB_00c46010:
        if (bVar8) {
          return 1;
        }
        if (iVar4 == 2) {
          return 1;
        }
      }
      nn::os::LockMutex((MutexType *)(param_1 + 0x4c8));
      *(undefined4 *)(param_1 + 0x514) = 2;
      nn::os::ClearEvent((EventType *)(*(long *)(param_1 + 0x4f0) + 0x40));
      nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x4e8));
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x4c8));
    }
  }
  return 1;
}


