/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00257d1c; name: FUN_00257d1c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00257d1c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *local_60;
  long *plStack_58;
  char *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  MutexType *local_30;
  char *pcStack_28;
  
  lVar10 = FUN_00248fac();
  local_30 = (MutexType *)(lVar10 + 0x20);
  plVar13 = *(long **)(*param_1 + 0x240);
  pcStack_28 = "nn::npln::GrpcShutdownRunner";
  nn::os::LockMutex(local_30);
  local_40 = (long *)0x0;
  local_38 = (long *)0x0;
  local_48 = (long *)FUN_01cf7e20();
  local_50 = (char *)(**(code **)(*local_48 + 0x10))(local_48,0x20,1);
  uVar7 = s_nn__npln__GrpcShutdownRunner_03ca3994._20_8_;
  uVar6 = s_nn__npln__GrpcShutdownRunner_03ca3994._0_8_;
  uVar5 = CONCAT44(s_nn__npln__GrpcShutdownRunner_03ca3994._16_4_,
                   s_nn__npln__GrpcShutdownRunner_03ca3994._12_4_);
  plStack_58 = _UNK_03cac1b8;
  local_60 = _DAT_03cac1b0;
  uVar4 = CONCAT44(s_nn__npln__GrpcShutdownRunner_03ca3994._12_4_,
                   s_nn__npln__GrpcShutdownRunner_03ca3994._8_4_);
  local_50[0x1c] = '\0';
  *(undefined8 *)(local_50 + 0x14) = uVar7;
  *(undefined8 *)(local_50 + 0xc) = uVar5;
  *(undefined8 *)(local_50 + 8) = uVar4;
  *(undefined8 *)local_50 = uVar6;
                    /* try { // try from 00257d94 to 00257d9f has its CatchHandler @ 00258008 */
  lVar11 = FUN_0024e64c(lVar10,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,(ulong)local_60 & 0xfffffffffffffffe,1);
  }
  if (lVar10 + 8 == lVar11) {
    plStack_58 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x40,8);
    puVar9 = PTR_DAT_047cc250;
    puVar8 = PTR_DAT_047cc248;
    plStack_58[2] = 0;
    plStack_58[3] = (long)plVar13;
    *plStack_58 = (long)(puVar9 + 0x10);
    plStack_58[1] = 0;
    local_60 = plStack_58 + 4;
    *local_60 = (long)(puVar8 + 0x10);
    plStack_58[5] = 0;
    plStack_58[6] = 0;
    plStack_58[7] = (long)plVar13;
                    /* try { // try from 00257e60 to 00257e6f has its CatchHandler @ 00257fc8 */
    FUN_00258230(lVar10,&pcStack_28,&local_60);
    plVar13 = local_38;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_40 = local_60;
    local_38 = plStack_58;
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 1;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar13 = local_38;
    if (plStack_58 == (long *)0x0) goto joined_r0x00257f84;
    plVar1 = plStack_58 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar12 = plStack_58;
    } while (cVar2 != '\0');
  }
  else {
    local_40 = *(long **)(lVar11 + 0x40);
    plVar13 = *(long **)(lVar11 + 0x48);
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (local_38 == (long *)0x0) goto joined_r0x00257f84;
    plVar1 = local_38 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar12 = local_38;
    } while (cVar2 != '\0');
  }
  local_38 = plVar13;
  plVar13 = local_38;
  if (lVar10 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    std::__shared_weak_count::__release_weak();
    plVar13 = local_38;
  }
joined_r0x00257f84:
  local_38 = plVar13;
  if (plVar13 == (long *)0x0) {
    nn::os::UnlockMutex(local_30);
    return;
  }
  plVar1 = plVar13 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (plVar13 != (long *)0x0) {
    plVar12 = plVar13 + 1;
    do {
      lVar10 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      std::__shared_weak_count::__release_weak();
    }
  }
  nn::os::UnlockMutex(local_30);
  do {
    lVar10 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


