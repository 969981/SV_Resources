/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005e23ac; name: FUN_005e23ac
 */


void FUN_005e23ac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  long local_78;
  long *local_70;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  long *local_40;
  undefined1 local_38;
  undefined8 local_30;
  long *local_28;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_047cea20);
  local_68 = *param_2;
  local_60 = (long *)param_2[1];
  if (local_60 != (long *)0x0) {
    plVar7 = local_60 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  local_58 = param_2[2];
  local_50 = (long *)param_2[3];
  if (local_50 != (long *)0x0) {
    plVar7 = local_50 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  local_48 = param_2[4];
  local_40 = (long *)param_2[5];
  if (local_40 != (long *)0x0) {
    plVar7 = local_40 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  local_38 = *(undefined1 *)(param_2 + 6);
  local_30 = *param_3;
  local_28 = (long *)param_3[1];
  if (local_28 != (long *)0x0) {
    plVar7 = local_28 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar4 = std::chrono::steady_clock::now();
  puVar3 = PTR_DAT_047cea30;
  if (*(long *)PTR_DAT_047cea28 < lVar4) {
    plVar7 = *(long **)(PTR_DAT_047cea30 + 8);
    *(undefined8 *)PTR_DAT_047cea30 = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 1;
      do {
        lVar4 = *plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 != 0) goto LAB_005e249c;
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
      plVar7 = *(long **)puVar3;
      goto joined_r0x005e25c4;
    }
  }
  else {
LAB_005e249c:
    plVar7 = *(long **)puVar3;
joined_r0x005e25c4:
    if (plVar7 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar7 + 0x20))();
      if ((uVar5 & 1) == 0) {
        lVar4 = *(long *)(puVar3 + 8);
        *param_1 = *(undefined8 *)puVar3;
        param_1[1] = lVar4;
        if (lVar4 != 0) {
          plVar7 = (long *)(lVar4 + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = *plVar7 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      else {
        piVar6 = (int *)(**(code **)(**(long **)puVar3 + 0x38))();
        if (*piVar6 == 0) {
          lVar4 = *(long *)(puVar3 + 8);
          *param_1 = *(undefined8 *)puVar3;
          param_1[1] = lVar4;
          if (lVar4 != 0) {
            plVar7 = (long *)(lVar4 + 8);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar2) {
                *plVar7 = *plVar7 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
        }
        else {
          FUN_005e27e4(&local_78,&local_68);
          plVar7 = local_70;
          lVar4 = local_78;
          local_78 = 0;
          local_70 = (long *)0x0;
          if (lVar4 != 0) {
            *(undefined1 *)(lVar4 + 8) = 1;
          }
          plVar8 = *(long **)(puVar3 + 8);
          *(long *)puVar3 = lVar4;
          *(long **)(puVar3 + 8) = plVar7;
          if (plVar8 != (long *)0x0) {
            plVar7 = plVar8 + 1;
            do {
              lVar4 = *plVar7;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar2) {
                *plVar7 = lVar4 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar4 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (local_70 != (long *)0x0) {
            plVar7 = local_70 + 1;
            do {
              lVar4 = *plVar7;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar2) {
                *plVar7 = lVar4 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar4 == 0) {
              (**(code **)(*local_70 + 0x10))(local_70);
              std::__shared_weak_count::__release_weak();
            }
          }
          lVar4 = *(long *)(puVar3 + 8);
          *param_1 = *(undefined8 *)puVar3;
          param_1[1] = lVar4;
          if (lVar4 != 0) {
            plVar7 = (long *)(lVar4 + 8);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar2) {
                *plVar7 = *plVar7 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
        }
      }
      goto LAB_005e267c;
    }
  }
  FUN_005e27e4(&local_78,&local_68);
  plVar7 = local_70;
  lVar4 = local_78;
  local_78 = 0;
  local_70 = (long *)0x0;
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 8) = 1;
  }
  plVar8 = *(long **)(puVar3 + 8);
  *(long *)puVar3 = lVar4;
  *(long **)(puVar3 + 8) = plVar7;
  if (plVar8 != (long *)0x0) {
    plVar7 = plVar8 + 1;
    do {
      lVar4 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_70 != (long *)0x0) {
    plVar7 = local_70 + 1;
    do {
      lVar4 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar4 = *(long *)(puVar3 + 8);
  *param_1 = *(undefined8 *)puVar3;
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    plVar7 = (long *)(lVar4 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
LAB_005e267c:
  if (local_28 != (long *)0x0) {
    plVar7 = local_28 + 1;
    do {
      lVar4 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*local_28 + 0x10))(local_28);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_40 != (long *)0x0) {
    plVar7 = local_40 + 1;
    do {
      lVar4 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*local_40 + 0x10))(local_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_50 != (long *)0x0) {
    plVar7 = local_50 + 1;
    do {
      lVar4 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*local_50 + 0x10))(local_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_60 != (long *)0x0) {
    plVar7 = local_60 + 1;
    do {
      lVar4 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*local_60 + 0x10))(local_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  nn::os::UnlockMutex((MutexType *)PTR_DAT_047cea20);
  return;
}


