/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0024e1b0; name: FUN_0024e1b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0024e1b0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  code *pcVar14;
  long *local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long alStack_c0 [4];
  long *local_a0;
  long *local_90;
  long *plStack_88;
  char *local_80;
  long *local_78;
  long *local_68;
  long *local_60;
  MutexType *local_58;
  char *local_48;
  
  lVar9 = FUN_00248fac();
  lStack_f8 = param_2[3];
  lStack_100 = param_2[2];
  lStack_e8 = param_2[5];
  local_f0 = param_2[4];
  plVar13 = alStack_c0;
  lStack_d8 = param_2[7];
  local_e0 = param_2[6];
  lStack_c8 = param_2[9];
  lStack_d0 = param_2[8];
  lStack_108 = param_2[1];
  local_110 = (long *)*param_2;
  local_a0 = (long *)0x0;
  if (&local_110 != (long **)param_2) {
    plVar10 = (long *)param_2[0xe];
    if (plVar10 == (long *)0x0) {
      local_a0 = (long *)0x0;
    }
    else if (plVar10 == param_2 + 10) {
      local_a0 = plVar13;
      (**(code **)(*plVar10 + 0x28))(plVar10,plVar13);
    }
    else {
      local_a0 = (long *)(**(code **)(*plVar10 + 0x38))();
    }
  }
  local_48 = "nn::npln::SharedThreadPool";
  local_58 = (MutexType *)(lVar9 + 0x20);
  nn::os::LockMutex(local_58);
  local_68 = (long *)0x0;
  local_60 = (long *)0x0;
  local_78 = (long *)FUN_01cf7e20();
  local_80 = (char *)(**(code **)(*local_78 + 0x10))(local_78,0x20,1);
  uVar7 = s_nn__npln__SharedThreadPool_03c1d573._18_8_;
  uVar6 = s_nn__npln__SharedThreadPool_03c1d573._0_8_;
  uVar5 = CONCAT26(s_nn__npln__SharedThreadPool_03c1d573._16_2_,
                   s_nn__npln__SharedThreadPool_03c1d573._10_6_);
  plStack_88 = _UNK_03cab348;
  local_90 = _DAT_03cab340;
  uVar4 = CONCAT62(s_nn__npln__SharedThreadPool_03c1d573._10_6_,
                   s_nn__npln__SharedThreadPool_03c1d573._8_2_);
  local_80[0x1a] = '\0';
  *(undefined8 *)(local_80 + 0x12) = uVar7;
  *(undefined8 *)(local_80 + 10) = uVar5;
  *(undefined8 *)(local_80 + 8) = uVar4;
  *(undefined8 *)local_80 = uVar6;
                    /* try { // try from 0024e2a4 to 0024e2af has its CatchHandler @ 0024e540 */
  lVar11 = FUN_0024e64c(lVar9,&local_90);
  if (((ulong)local_90 & 1) != 0) {
    (**(code **)(*local_78 + 0x18))(local_78,local_80,(ulong)local_90 & 0xfffffffffffffffe,1);
  }
  plVar10 = local_110;
  if (lVar9 + 8 == lVar11) {
    plVar12 = (long *)(**(code **)(*local_110 + 0x10))(local_110,0x38,8);
    plVar1 = local_110;
    *plVar12 = (long)(PTR_DAT_047cc188 + 0x10);
    plVar12[1] = 0;
    puVar8 = PTR_DAT_047cc180;
    plVar12[2] = 0;
    plVar12[3] = (long)plVar10;
    plVar12[4] = (long)(puVar8 + 0x10);
    plVar10 = (long *)(**(code **)(*local_110 + 0x10))(local_110,0x170,0x10);
    puVar8 = PTR_DAT_047cc190;
    plVar10[4] = (long)plVar1;
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)(puVar8 + 0x10);
    FUN_0024ecd8(plVar10 + 6,&local_110);
    plVar12[5] = (long)(plVar10 + 6);
    plVar12[6] = (long)plVar10;
                    /* try { // try from 0024e3bc to 0024e3cb has its CatchHandler @ 0024e500 */
    local_90 = plVar12 + 4;
    plStack_88 = plVar12;
    FUN_0024e884(lVar9,&local_48,&local_90);
    plVar10 = local_60;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_68 = local_90;
    local_60 = plStack_88;
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar10 = local_60;
    if (plStack_88 == (long *)0x0) goto LAB_0024e45c;
    plVar1 = plStack_88 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar12 = plStack_88;
    } while (cVar2 != '\0');
  }
  else {
    local_68 = *(long **)(lVar11 + 0x40);
    plVar10 = *(long **)(lVar11 + 0x48);
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (local_60 == (long *)0x0) goto LAB_0024e45c;
    plVar1 = local_60 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar12 = local_60;
    } while (cVar2 != '\0');
  }
  local_60 = plVar10;
  plVar10 = local_60;
  if (lVar9 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    std::__shared_weak_count::__release_weak();
    plVar10 = local_60;
  }
LAB_0024e45c:
  local_60 = plVar10;
  *param_1 = local_68;
  param_1[1] = local_60;
  if (local_60 != (long *)0x0) {
    plVar10 = local_60 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (local_60 != (long *)0x0) {
      plVar10 = local_60 + 1;
      do {
        lVar9 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  nn::os::UnlockMutex(local_58);
  if (local_a0 != (long *)0x0) {
    if (local_a0 == plVar13) {
      pcVar14 = *(code **)(*local_a0 + 0x10);
    }
    else {
      pcVar14 = *(code **)(*local_a0 + 0x18);
      plVar13 = local_a0;
    }
    (*pcVar14)(plVar13);
  }
  return;
}


