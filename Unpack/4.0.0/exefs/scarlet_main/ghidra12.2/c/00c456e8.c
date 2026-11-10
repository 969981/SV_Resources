/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c456e8; name: FUN_00c456e8
 */


void FUN_00c456e8(long param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  bool bVar11;
  undefined8 *puVar12;
  long lVar13;
  
  if ((((*(byte *)(param_1 + 0x1b8) & 1) == 0) || (*(int *)(param_1 + 0x1c0) != 0)) ||
     (lVar8 = (*(code *)**(undefined8 **)*param_2)
                        ((undefined8 *)*param_2,*(undefined4 *)(param_1 + 0x370)),
     *(long *)(lVar8 + 8) == 0)) {
    if (*(long *)(param_1 + 0x48) == *(long *)(param_1 + 0x50)) goto LAB_00c45864;
    piVar1 = (int *)(param_1 + 0x1c8);
    iVar10 = *(int *)(param_1 + 0x1c8) + 1;
    iVar5 = *piVar1;
    if (iVar5 == *(int *)(param_1 + 0x1c8)) {
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = iVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 != '\0') goto LAB_00c45808;
      bVar11 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00c45808:
      bVar11 = false;
    }
    while (!bVar11) {
      iVar6 = *piVar1;
      iVar10 = iVar5 + 1;
      if (iVar6 == iVar5) {
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = iVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_00c45838;
        bVar11 = true;
        iVar5 = iVar6;
      }
      else {
        ClearExclusiveLocal();
LAB_00c45838:
        bVar11 = false;
        iVar5 = iVar6;
      }
    }
    if ((long)iVar10 != *(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3) {
      return;
    }
LAB_00c45864:
    FUN_00c49c28(param_1 + 0x1f0,param_2);
    FUN_00c49c28(param_1 + 0x290,param_2);
    puVar12 = *(undefined8 **)(param_1 + 0x80);
    puVar2 = *(undefined8 **)(param_1 + 0x88);
    if (((puVar12 != puVar2) &&
        ((**(code **)(*(long *)*puVar12 + 0x90))((long *)*puVar12,param_2), puVar12 + 1 != puVar2))
       && ((**(code **)(*(long *)puVar12[1] + 0x90))((long *)puVar12[1],param_2),
          puVar12 + 2 != puVar2)) {
      (**(code **)(*(long *)puVar12[2] + 0x90))((long *)puVar12[2],param_2);
      for (puVar12 = puVar12 + 3; puVar12 != puVar2; puVar12 = puVar12 + 1) {
        (**(code **)(*(long *)*puVar12 + 0x90))((long *)*puVar12,param_2);
      }
    }
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_2 + 1);
    return;
  }
  if (*(long *)(param_1 + 0x48) != *(long *)(param_1 + 0x50)) {
    piVar1 = (int *)(param_1 + 0x1c8);
    iVar10 = *(int *)(param_1 + 0x1c8) + 1;
    iVar5 = *piVar1;
    if (iVar5 == *(int *)(param_1 + 0x1c8)) {
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = iVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 != '\0') goto LAB_00c457c8;
      bVar11 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00c457c8:
      bVar11 = false;
    }
    while (!bVar11) {
      iVar6 = *piVar1;
      iVar10 = iVar5 + 1;
      if (iVar6 == iVar5) {
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = iVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_00c45798;
        bVar11 = true;
        iVar5 = iVar6;
      }
      else {
        ClearExclusiveLocal();
LAB_00c45798:
        bVar11 = false;
        iVar5 = iVar6;
      }
    }
    if ((long)iVar10 != *(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3) {
      return;
    }
  }
  lVar8 = *(long *)(param_1 + 0x1e8);
  uVar3 = *(uint *)((long)param_2 + 0xc);
  uVar4 = *(uint *)(param_1 + 0x358);
  if (uVar4 != 0 && (uVar4 & 1 << (ulong)(uVar3 & 0x1f)) == 0) {
    if (*(int *)(lVar8 + 0x200) < 1) {
      return;
    }
    lVar13 = 0;
    while ((uVar3 == (uint)lVar13 || ((uVar4 >> (ulong)((uint)lVar13 & 0x1f) & 1) == 0))) {
      lVar13 = lVar13 + 1;
      if (*(int *)(lVar8 + 0x200) == (int)lVar13) {
        return;
      }
    }
    FUN_00c45cd8(*(undefined8 *)(lVar8 + lVar13 * 8 + 0x18));
    return;
  }
  uVar9 = FUN_00c45cd8(*(undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x18));
  if ((uVar9 & 1) == 0) {
    return;
  }
  iVar10 = *(int *)(lVar8 + 0x200);
  if (iVar10 < 1) {
    return;
  }
  if (*(int *)((long)param_2 + 0xc) != 0) {
    lVar13 = *(long *)(lVar8 + 0x18);
    piVar1 = (int *)(lVar13 + 0x514);
    if (*piVar1 != 2) {
      if (*piVar1 == 0) {
        do {
          iVar10 = *piVar1;
          if (iVar10 != 0) {
            bVar11 = false;
            ClearExclusiveLocal();
            goto LAB_00c45a9c;
          }
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = 2;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar11 = true;
LAB_00c45a9c:
        if ((bVar11) || (iVar10 == 2)) goto LAB_00c45990;
      }
      nn::os::LockMutex((MutexType *)(lVar13 + 0x4c8));
      *(undefined4 *)(lVar13 + 0x514) = 2;
      nn::os::ClearEvent((EventType *)(*(long *)(lVar13 + 0x4f0) + 0x40));
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar13 + 0x4e8));
      nn::os::UnlockMutex((MutexType *)(lVar13 + 0x4c8));
    }
LAB_00c45990:
    iVar10 = *(int *)(lVar8 + 0x200);
  }
  if (iVar10 < 2) {
    return;
  }
  if (*(int *)((long)param_2 + 0xc) != 1) {
    lVar13 = *(long *)(lVar8 + 0x20);
    piVar1 = (int *)(lVar13 + 0x514);
    if (*piVar1 != 2) {
      if (*piVar1 == 0) {
        do {
          iVar10 = *piVar1;
          if (iVar10 != 0) {
            bVar11 = false;
            ClearExclusiveLocal();
            goto LAB_00c45b08;
          }
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = 2;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar11 = true;
LAB_00c45b08:
        if ((bVar11) || (iVar10 == 2)) goto LAB_00c459bc;
      }
      nn::os::LockMutex((MutexType *)(lVar13 + 0x4c8));
      *(undefined4 *)(lVar13 + 0x514) = 2;
      nn::os::ClearEvent((EventType *)(*(long *)(lVar13 + 0x4f0) + 0x40));
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar13 + 0x4e8));
      nn::os::UnlockMutex((MutexType *)(lVar13 + 0x4c8));
    }
LAB_00c459bc:
    iVar10 = *(int *)(lVar8 + 0x200);
  }
  if (iVar10 < 3) {
    return;
  }
  if (*(int *)((long)param_2 + 0xc) != 2) {
    lVar13 = *(long *)(lVar8 + 0x28);
    piVar1 = (int *)(lVar13 + 0x514);
    if (*piVar1 != 2) {
      if (*piVar1 == 0) {
        do {
          iVar10 = *piVar1;
          if (iVar10 != 0) {
            bVar11 = false;
            ClearExclusiveLocal();
            goto LAB_00c45b54;
          }
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = 2;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar11 = true;
LAB_00c45b54:
        if ((bVar11) || (iVar10 == 2)) goto LAB_00c459e8;
      }
      nn::os::LockMutex((MutexType *)(lVar13 + 0x4c8));
      *(undefined4 *)(lVar13 + 0x514) = 2;
      nn::os::ClearEvent((EventType *)(*(long *)(lVar13 + 0x4f0) + 0x40));
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar13 + 0x4e8));
      nn::os::UnlockMutex((MutexType *)(lVar13 + 0x4c8));
    }
LAB_00c459e8:
    iVar10 = *(int *)(lVar8 + 0x200);
  }
  if (iVar10 < 4) {
    return;
  }
  if (*(int *)((long)param_2 + 0xc) == 3) goto LAB_00c45a18;
  lVar13 = *(long *)(lVar8 + 0x30);
  piVar1 = (int *)(lVar13 + 0x514);
  if (*piVar1 != 2) {
    if (*piVar1 == 0) {
      do {
        iVar10 = *piVar1;
        if (iVar10 != 0) {
          bVar11 = false;
          ClearExclusiveLocal();
          goto LAB_00c45bdc;
        }
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = 2;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar11 = true;
LAB_00c45bdc:
      if ((bVar11) || (iVar10 == 2)) goto LAB_00c45a14;
    }
    nn::os::LockMutex((MutexType *)(lVar13 + 0x4c8));
    *(undefined4 *)(lVar13 + 0x514) = 2;
    nn::os::ClearEvent((EventType *)(*(long *)(lVar13 + 0x4f0) + 0x40));
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar13 + 0x4e8));
    nn::os::UnlockMutex((MutexType *)(lVar13 + 0x4c8));
  }
LAB_00c45a14:
  iVar10 = *(int *)(lVar8 + 0x200);
LAB_00c45a18:
  if (4 < iVar10) {
    uVar9 = 4;
    do {
      if (uVar9 != *(uint *)((long)param_2 + 0xc)) {
        lVar13 = *(long *)(lVar8 + uVar9 * 8 + 0x18);
        piVar1 = (int *)(lVar13 + 0x514);
        if (*piVar1 != 2) {
          if (*piVar1 == 0) {
            do {
              iVar10 = *piVar1;
              if (iVar10 != 0) {
                bVar11 = false;
                ClearExclusiveLocal();
                goto LAB_00c45cc8;
              }
              cVar7 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar11) {
                *piVar1 = 2;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar11 = true;
LAB_00c45cc8:
            if ((bVar11) || (iVar10 == 2)) goto LAB_00c45c5c;
          }
          nn::os::LockMutex((MutexType *)(lVar13 + 0x4c8));
          *(undefined4 *)(lVar13 + 0x514) = 2;
          nn::os::ClearEvent((EventType *)(*(long *)(lVar13 + 0x4f0) + 0x40));
          nn::os::SignalConditionVariable((ConditionVariableType *)(lVar13 + 0x4e8));
          nn::os::UnlockMutex((MutexType *)(lVar13 + 0x4c8));
        }
LAB_00c45c5c:
        iVar10 = *(int *)(lVar8 + 0x200);
      }
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)iVar10);
  }
  return;
}


