/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c9f64; name: FUN_006c9f64
 */


void FUN_006c9f64(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined1 local_a0;
  undefined8 local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 local_80;
  long *plStack_78;
  long *local_70;
  long *local_68;
  long local_60;
  long *plStack_58;
  
  plVar10 = *(long **)(*(long *)(param_2 + 0x48) + 0x238);
  uVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,0x198,8);
                    /* try { // try from 006c9fb0 to 006c9fb3 has its CatchHandler @ 006ca2f4 */
  FUN_00271f50();
  local_60 = uVar7;
  plStack_58 = plVar10;
                    /* try { // try from 006c9fc4 to 006c9fcf has its CatchHandler @ 006ca2e0 */
  uVar7 = FUN_00725454(*(undefined8 *)(param_2 + 0x40),uVar7,param_3,
                       *(undefined8 *)(*(long *)(param_2 + 8) + 0x150));
  local_e0 = *param_4;
  plVar10 = (long *)param_4[1];
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar12 = *(long *)(param_2 + 0x48);
  if (*(char *)(lVar12 + 0x210) == '\0') {
    plVar11 = plVar10;
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    local_80 = local_60;
    plStack_78 = plStack_58;
  }
  else {
    local_e0 = *param_4;
    local_d8 = (long *)param_4[1];
    lVar8 = lVar12;
    if (local_d8 != (long *)0x0) {
      plVar11 = local_d8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar8 = *(long *)(param_2 + 0x48);
    }
    FUN_00247984(&local_d0,lVar8);
    plVar11 = *(long **)(lVar12 + 0x238);
    plVar9 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x58,8);
    puVar1 = PTR_DAT_047cbac0 + 0x10;
    plVar9[2] = 0;
    plVar9[3] = (long)plVar11;
    plVar2 = plVar9 + 4;
    *plVar9 = (long)puVar1;
    plVar9[1] = 0;
    FUN_00246ff8(plVar2,&local_e0,2);
    if (local_c8 != (long *)0x0) {
      plVar11 = local_c8 + 1;
      do {
        lVar12 = *plVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_c8 + 0x10))(local_c8);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_d8 != (long *)0x0) {
      plVar11 = local_d8 + 1;
      do {
        lVar12 = *plVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_d8 + 0x10))(local_d8);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_00247264(&local_e0,plVar2);
    plVar11 = local_d8;
    uVar6 = local_e0;
    local_e0 = 0;
    local_d8 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 1;
      do {
        lVar12 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_d8 != (long *)0x0) {
      plVar10 = local_d8 + 1;
      do {
        lVar12 = *plVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_d8 + 0x10))(local_d8);
        std::__shared_weak_count::__release_weak();
      }
    }
    lVar12 = *(long *)(param_2 + 0x48);
    local_e0 = uVar6;
    local_70 = plVar2;
    local_68 = plVar9;
    local_80 = local_60;
    plStack_78 = plStack_58;
  }
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_d0 = *(undefined8 *)(param_2 + 8);
  local_c8 = *(long **)(param_2 + 0x10);
  if (local_c8 != (long *)0x0) {
    plVar10 = (long *)((long)local_c8 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_c0 = *(undefined8 *)(param_2 + 0x18);
  lStack_b8 = *(long *)(param_2 + 0x20);
  if (lStack_b8 != 0) {
    plVar10 = (long *)(lStack_b8 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_b0 = *(undefined8 *)(param_2 + 0x28);
  lStack_a8 = *(long *)(param_2 + 0x30);
  if (lStack_a8 != 0) {
    plVar10 = (long *)(lStack_a8 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_a0 = *(undefined1 *)(param_2 + 0x38);
  local_98 = *(undefined8 *)(param_2 + 0x48);
  lStack_90 = *(long *)(param_2 + 0x50);
  if (lStack_90 != 0) {
    plVar10 = (long *)(lStack_90 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_60 = 0;
  local_d8 = plVar11;
  local_88 = uVar7;
  plStack_58 = plStack_78;
  FUN_006ca520(param_1,&local_e0,*(undefined8 *)(lVar12 + 0x240),0x10000,
               *(undefined8 *)(lVar12 + 0x4b8));
  FUN_006ca2f8(&local_e0);
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 1;
    do {
      lVar12 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar10 = plStack_58;
  lVar12 = local_60;
  local_60 = 0;
  if (lVar12 != 0) {
    FUN_002723e4(lVar12);
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,0x198,8);
  }
  return;
}


