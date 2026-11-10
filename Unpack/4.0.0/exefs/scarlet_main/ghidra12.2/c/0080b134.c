/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080b134; name: FUN_0080b134
 */


void FUN_0080b134(long *param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_40 [8];
  long *local_38;
  
  *param_1 = (long)(PTR_DAT_047d1758 + 0x10);
  if (((long *)param_1[1] != (long *)0x0) &&
     ((**(code **)(*(long *)param_1[1] + 0x98))(auStack_40), local_38 != (long *)0x0)) {
    plVar6 = local_38 + 1;
    do {
      lVar5 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*local_38 + 0x10))(local_38);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar5 = param_1[0xd2];
  if (lVar5 != 0) {
    lVar7 = param_1[0xd3];
    if (lVar7 == lVar5) {
      lVar7 = lVar5;
    }
    else {
      do {
        if ((*(byte *)(lVar7 + -0x28) & 1) == 0) {
          bVar2 = *(byte *)(lVar7 + -0x48);
        }
        else {
          (**(code **)(**(long **)(lVar7 + -0x10) + 0x18))
                    (*(long **)(lVar7 + -0x10),*(undefined8 *)(lVar7 + -0x18),
                     *(ulong *)(lVar7 + -0x28) & 0xfffffffffffffffe,1);
          bVar2 = *(byte *)(lVar7 + -0x48);
        }
        if ((bVar2 & 1) != 0) {
          (**(code **)(**(long **)(lVar7 + -0x30) + 0x18))
                    (*(long **)(lVar7 + -0x30),*(undefined8 *)(lVar7 + -0x38),
                     *(ulong *)(lVar7 + -0x48) & 0xfffffffffffffffe,1);
        }
        lVar7 = lVar7 + -0x48;
      } while (lVar5 != lVar7);
      lVar7 = param_1[0xd2];
    }
    param_1[0xd3] = lVar5;
    (**(code **)(*(long *)param_1[0xd5] + 0x18))
              ((long *)param_1[0xd5],lVar7,param_1[0xd4] - lVar7,8);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 3));
  plVar6 = (long *)param_1[2];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


