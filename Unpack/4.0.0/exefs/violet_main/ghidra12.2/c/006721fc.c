/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006721fc; name: FUN_006721fc
 */


/* WARNING: Removing unreachable block (ram,0x006729f8) */
/* WARNING: Removing unreachable block (ram,0x006729fc) */
/* WARNING: Removing unreachable block (ram,0x00672a04) */
/* WARNING: Removing unreachable block (ram,0x00672a0c) */
/* WARNING: Removing unreachable block (ram,0x00672a10) */
/* WARNING: Removing unreachable block (ram,0x00672a30) */
/* WARNING: Removing unreachable block (ram,0x00672a34) */
/* WARNING: Removing unreachable block (ram,0x00672a3c) */
/* WARNING: Removing unreachable block (ram,0x00672a44) */
/* WARNING: Removing unreachable block (ram,0x00672a48) */

void FUN_006721fc(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  ulong *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  undefined1 auStack_240 [64];
  long local_200;
  long *local_1f8;
  undefined1 auStack_1f0 [8];
  ulong local_1e8;
  long local_1c0;
  long *local_1b0;
  long *plStack_1a8;
  long local_1a0;
  long *plStack_198;
  undefined1 auStack_190 [64];
  long local_150;
  long *local_148;
  long *local_140;
  long *plStack_138;
  ulong local_130;
  long *local_128;
  undefined1 auStack_120 [64];
  long local_e0;
  long *local_d8;
  long *local_d0;
  long *plStack_c8;
  ulong local_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [64];
  long local_70;
  long *local_68;
  
                    /* try { // try from 0067222c to 00672237 has its CatchHandler @ 00672b10 */
  FUN_0069015c(auStack_1f0,0);
  uVar15 = *(undefined8 *)PTR_PTR_047cbcf8;
                    /* try { // try from 00672244 to 00672253 has its CatchHandler @ 00672b08 */
  FUN_00267510(&local_d0,uVar15);
  uVar2 = (ulong)&local_d0 | 1;
  if (((ulong)local_d0 & 1) != 0) {
    uVar2 = local_c0;
  }
                    /* try { // try from 00672268 to 0067226f has its CatchHandler @ 00672aec */
  FUN_00672b78(auStack_1f0,uVar2);
  if (((ulong)local_d0 & 1) != 0) {
    (**(code **)(*plStack_b8 + 0x18))(plStack_b8,local_c0,(ulong)local_d0 & 0xfffffffffffffffe,1);
  }
  lVar14 = *param_3;
  lVar4 = param_3[1];
  if (lVar14 != lVar4) {
    do {
      FUN_0066b4d4(&local_140,lVar14);
      uVar2 = (ulong)&local_140 | 1;
      if (((ulong)local_140 & 1) != 0) {
        uVar2 = local_130;
      }
                    /* try { // try from 006722dc to 006722e7 has its CatchHandler @ 00672b40 */
      FUN_00684810(&local_d0,uVar15,uVar2);
      uVar2 = (ulong)&local_d0 | 1;
      if (((ulong)local_d0 & 1) != 0) {
        uVar2 = local_c0;
      }
                    /* try { // try from 006722f8 to 006722ff has its CatchHandler @ 00672b14 */
      FUN_00672c98(auStack_1f0,uVar2);
      if (((ulong)local_d0 & 1) != 0) {
        (**(code **)(*plStack_b8 + 0x18))
                  (plStack_b8,local_c0,(ulong)local_d0 & 0xfffffffffffffffe,1);
      }
      if (((ulong)local_140 & 1) != 0) {
        (**(code **)(*local_128 + 0x18))
                  (local_128,local_130,(ulong)local_140 & 0xfffffffffffffffe,1);
      }
      lVar14 = lVar14 + 0x50;
    } while (lVar4 != lVar14);
  }
  if (local_1c0 == 0) {
    puVar9 = (ulong *)(local_1e8 & 0xfffffffffffffffe);
    if ((local_1e8 & 1) != 0) {
      puVar9 = (ulong *)*puVar9;
    }
                    /* try { // try from 0067236c to 0067236f has its CatchHandler @ 00672ae8 */
    local_1c0 = FUN_00535218(puVar9);
  }
  FUN_0026f698(param_4,local_1c0,0);
  plVar3 = *(long **)(*(long *)(*param_2 + 8) + 0x48);
  plVar5 = *(long **)(*(long *)(*param_2 + 8) + 0x50);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar1 = plVar5 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar14 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_00672da0(auStack_240,auStack_1f0);
  local_200 = *param_5;
  local_1f8 = (long *)param_5[1];
  if (local_1f8 != (long *)0x0) {
    plVar1 = local_1f8 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar17 = (long *)plVar3[0x48];
  puVar13 = (undefined8 *)plVar3[0x97];
  plVar10 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0xf0,8);
  plVar10[2] = 0;
  plVar11 = plVar10 + 1;
  *plVar11 = 0;
  puVar8 = PTR_DAT_047cf3d0;
  plVar10[3] = (long)plVar17;
  plVar1 = plVar10 + 4;
  *plVar10 = (long)(puVar8 + 0x10);
  FUN_006c4254(plVar1);
  plVar10[4] = (long)(PTR_DAT_047cf3d8 + 0x10);
  nn::os::InitializeEvent(plVar10 + 6,0,0);
  plVar10[4] = (long)(PTR_DAT_047cf3e0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar10 + 0xb),false,0);
  *(undefined1 *)(plVar10 + 0x1d) = 0;
  if (plVar10 != (long *)0x0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = *plVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x1b0,8);
  plVar11[2] = 0;
  plVar16 = plVar11 + 1;
  *plVar16 = 0;
  *plVar11 = (long)&PTR_LAB_044d47b8;
  plVar11[3] = (long)plVar17;
  FUN_006c5398();
  plVar11[4] = (long)&PTR_LAB_044d47f0;
  lVar12 = (**(code **)(*plVar17 + 0x10))(plVar17,0x10000,0x10);
  if (lVar12 == 0) {
    local_d0 = (long *)CONCAT44(local_d0._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_d0,"");
  }
  FUN_006c4058(plVar11 + 10,plVar1,0,lVar12,0x10000,1);
  *(undefined1 *)((long)plVar11 + 0x1a9) = 1;
  plVar11[0x31] = (long)plVar17;
  plVar11[0x32] = 0x10000;
  plVar11[10] = (long)&PTR_LAB_044d4820;
  plVar11[0x33] = (long)plVar1;
  plVar11[0x34] = (long)plVar10;
  local_1b0 = plVar3;
  plStack_1a8 = plVar5;
  local_1a0 = lVar14;
  plStack_198 = (long *)lVar4;
  FUN_00672da0(auStack_190,auStack_240);
  local_128 = plStack_198;
  local_130 = local_1a0;
  plStack_138 = plStack_1a8;
  local_140 = local_1b0;
  local_150 = local_200;
  local_148 = local_1f8;
  if (local_1f8 != (long *)0x0) {
    plVar3 = local_1f8 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = *plVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_1b0 = (long *)0x0;
  plStack_1a8 = (long *)0x0;
  local_1a0 = 0;
  plStack_198 = (long *)0x0;
  FUN_00672da0(auStack_120,auStack_190);
  plStack_b8 = local_128;
  local_c0 = local_130;
  plStack_c8 = plStack_138;
  local_d0 = local_140;
  local_e0 = local_150;
  local_d8 = local_148;
  if (local_148 != (long *)0x0) {
    plVar3 = local_148 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = *plVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_140 = (long *)0x0;
  plStack_138 = (long *)0x0;
  local_130 = 0;
  local_128 = (long *)0x0;
  FUN_00672da0(auStack_b0,auStack_120);
  local_70 = local_e0;
  local_68 = local_d8;
  if (local_d8 != (long *)0x0) {
    plVar3 = local_d8 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = *plVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar11[0x24] = (long)plStack_c8;
  plVar11[0x23] = (long)local_d0;
  local_d0 = (long *)0x0;
  plStack_c8 = (long *)0x0;
  plVar11[0x26] = (long)plStack_b8;
  plVar11[0x25] = local_c0;
  local_c0 = 0;
  plStack_b8 = (long *)0x0;
  FUN_00672da0(plVar11 + 0x27,auStack_b0);
  plVar11[0x2f] = local_70;
  plVar11[0x30] = (long)local_68;
  if (local_68 != (long *)0x0) {
    plVar3 = local_68 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = *plVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (local_68 != (long *)0x0) {
      plVar3 = local_68 + 1;
      do {
        lVar14 = *plVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *plVar3 = lVar14 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  FUN_006901b8(auStack_b0);
  if (plStack_b8 != (long *)0x0) {
    plVar3 = plStack_b8 + 1;
    do {
      lVar14 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_c8 != (long *)0x0) {
    plVar3 = plStack_c8 + 1;
    do {
      lVar14 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_d8 != (long *)0x0) {
    plVar3 = local_d8 + 1;
    do {
      lVar14 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_d8 + 0x10))(local_d8);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_006901b8(auStack_120);
  if (local_128 != (long *)0x0) {
    plVar3 = local_128 + 1;
    do {
      lVar14 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_128 + 0x10))(local_128);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_138 != (long *)0x0) {
    plVar3 = plStack_138 + 1;
    do {
      lVar14 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_148 != (long *)0x0) {
    plVar3 = local_148 + 1;
    do {
      lVar14 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_148 + 0x10))(local_148);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_006901b8(auStack_190);
  if (plStack_198 != (long *)0x0) {
    plVar3 = plStack_198 + 1;
    do {
      lVar14 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_1a8 != (long *)0x0) {
    plVar3 = plStack_1a8 + 1;
    do {
      lVar14 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_140 = (long *)0x0;
  plStack_138 = (long *)0x0;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar7) {
      *plVar16 = *plVar16 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  local_d0 = plVar11 + 4;
  plStack_c8 = plVar11;
  (**(code **)*puVar13)(puVar13,&local_d0,&local_140);
  if (plStack_c8 != (long *)0x0) {
    plVar3 = plStack_c8 + 1;
    do {
      lVar14 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_138 != (long *)0x0) {
    plVar3 = plStack_138 + 1;
    do {
      lVar14 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar10;
  do {
    lVar14 = *plVar16;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar7) {
      *plVar16 = lVar14 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (lVar14 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    std::__shared_weak_count::__release_weak();
  }
  if (local_1f8 != (long *)0x0) {
    plVar3 = local_1f8 + 1;
    do {
      lVar14 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_1f8 + 0x10))(local_1f8);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_006901b8(auStack_240);
  if (plVar5 != (long *)0x0) {
    plVar3 = plVar5 + 1;
    do {
      lVar14 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_006901b8(auStack_1f0);
  return;
}


