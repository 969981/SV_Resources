/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00253770; name: FUN_00253770
 */


void FUN_00253770(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  undefined8 ****local_88;
  undefined8 ****ppppuStack_80;
  undefined1 auStack_70 [64];
  long **local_30;
  undefined8 uStack_28;
  
  *param_1 = (long)(PTR_DAT_047cc1b0 + 0x10);
  uVar4 = FUN_006c4ec0();
  if ((uVar4 & 1) == 0) {
    (**(code **)(*param_1 + 0x10))(&local_98,param_1);
    (**(code **)(*local_98 + 0x18))();
    if (local_90 != (long *)0x0) {
      plVar6 = local_90 + 1;
      do {
        lVar5 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        local_a0 = local_90;
      } while (cVar2 != '\0');
      goto LAB_00253868;
    }
LAB_0025386c:
    plVar6 = (long *)param_1[10];
    if (plVar6 == (long *)0x0) goto LAB_002538d0;
LAB_00253874:
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 != 0) goto LAB_002538d0;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = (long *)param_1[8];
  }
  else {
    (**(code **)(*param_1 + 0x10))(&local_a8,param_1);
    plVar6 = (long *)(PTR_DAT_047cbb30 + 0x10);
    local_88 = &local_88;
    local_90 = (long *)(PTR_DAT_047cbb38 + 0x10);
    local_30 = (long **)0x0;
    uStack_28 = 0;
    local_98 = plVar6;
    ppppuStack_80 = local_88;
    (**(code **)(*local_a8 + 0x10))(local_a8,auStack_70);
    local_30 = &local_90;
    thunk_FUN_006c4e40(&local_98);
    local_98 = plVar6;
    FUN_006c4274(&local_90);
    if (local_a0 == (long *)0x0) goto LAB_0025386c;
    plVar6 = local_a0 + 1;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00253868:
    if (lVar5 != 0) goto LAB_0025386c;
    (**(code **)(*local_a0 + 0x10))(local_a0);
    std::__shared_weak_count::__release_weak();
    plVar6 = (long *)param_1[10];
    if (plVar6 != (long *)0x0) goto LAB_00253874;
LAB_002538d0:
    plVar6 = (long *)param_1[8];
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      plVar6 = (long *)param_1[6];
      goto joined_r0x00253948;
    }
  }
  plVar6 = (long *)param_1[6];
joined_r0x00253948:
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 1));
  return;
}


