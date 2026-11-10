/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00681a64; name: FUN_00681a64
 */


undefined8 FUN_00681a64(long param_1)

{
  long *plVar1;
  void *__src;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 ****__dest;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined1 auStack_410 [136];
  undefined8 *local_388;
  long *local_2d0;
  long *plStack_2c8;
  undefined8 ****local_2c0;
  long *local_2b8;
  undefined1 auStack_2b0 [144];
  undefined1 local_220;
  long local_218;
  long *local_210;
  long *local_200;
  long *plStack_1f8;
  undefined8 ****local_1f0;
  long *local_1e8;
  undefined1 auStack_1e0 [144];
  undefined1 local_150;
  long local_148;
  long *local_140;
  long *local_130;
  long *plStack_128;
  undefined8 *****local_120;
  undefined8 *****pppppuStack_118;
  long *local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long local_e8;
  long alStack_e0 [3];
  long **local_c8;
  long *local_c0;
  undefined1 local_80;
  long local_78;
  long *local_70;
  
  local_130 = *(long **)(param_1 + 0x1e0);
  lVar11 = *(long *)(param_1 + 0x200);
  plStack_128 = (long *)0x1;
  pppppuStack_118 = *(undefined8 ******)(param_1 + 0xd8);
  local_120 = *(undefined8 ******)(param_1 + 0xd0);
  local_108 = *(undefined8 *)(param_1 + 0xe8);
  local_110 = *(long **)(param_1 + 0xe0);
  uStack_f8 = *(undefined8 *)(param_1 + 0xf8);
  local_100 = *(undefined8 **)(param_1 + 0xf0);
  local_e8 = *(long *)(param_1 + 0x108);
  uStack_f0 = *(undefined8 *)(param_1 + 0x100);
  local_c0 = (long *)0x0;
  FUN_0024ecd8(auStack_410,&local_130);
  if (local_c0 != (long *)0x0) {
    if (local_c0 == alStack_e0) {
      pcVar7 = *(code **)(*local_c0 + 0x10);
    }
    else {
      pcVar7 = *(code **)(*local_c0 + 0x18);
    }
    (*pcVar7)();
  }
  plVar10 = *(long **)(param_1 + 0x1e0);
  plVar5 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0xd0,8);
  plVar5[2] = 0;
  plVar12 = plVar5 + 1;
  *plVar12 = 0;
  puVar4 = PTR_DAT_047cc158;
  plVar5[3] = (long)plVar10;
  plVar1 = plVar5 + 4;
  *plVar5 = (long)(puVar4 + 0x10);
  FUN_006c4254(plVar1);
  plVar5[4] = (long)(PTR_DAT_047cc168 + 0x10);
  nn::os::InitializeEvent(plVar5 + 6,0,0);
  plVar5[4] = (long)(PTR_DAT_047cc160 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar5 + 0xb),false,0);
  *(undefined1 *)(plVar5 + 0x19) = 0;
  if (plVar5 != (long *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x150,0x10);
  plVar6[2] = 0;
  plVar9 = plVar6 + 1;
  *plVar9 = 0;
  *plVar6 = (long)&PTR_FUN_044d5160;
  plVar6[4] = (long)plVar10;
  FUN_006c4a3c(plVar6 + 6,plVar1,0);
  plVar6[6] = (long)&PTR_FUN_044d5198;
  plVar6[0x26] = (long)plVar1;
  plVar6[0x27] = (long)plVar5;
  *(undefined1 *)((long)plVar6 + 0x141) = 1;
  local_2b8 = (long *)FUN_01cf7e20();
  if ((*(byte *)(param_1 + 0x110) & 1) == 0) {
    plStack_2c8 = *(long **)(param_1 + 0x118);
    local_2d0 = *(long **)(param_1 + 0x110);
    local_2c0 = *(undefined8 *****)(param_1 + 0x120);
  }
  else {
    plVar10 = *(long **)(param_1 + 0x118);
    __src = *(void **)(param_1 + 0x120);
    if (plVar10 < (long *)0x17) {
      __dest = (undefined8 ****)((ulong)&local_2d0 | 1);
      local_2d0 = (long *)CONCAT71(local_2d0._1_7_,(char)((int)plVar10 << 1));
    }
    else {
      if ((long *)0xffffffffffffffef < plVar10) {
                    /* try { // try from 006821ac to 006821b3 has its CatchHandler @ 006821b4 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      __dest = (undefined8 ****)
               (**(code **)(*local_2b8 + 0x10))
                         (local_2b8,(ulong)(plVar10 + 2) & 0xfffffffffffffff0,1);
      local_2d0 = (long *)((ulong)(plVar10 + 2) & 0xfffffffffffffff0 | 1);
      plStack_2c8 = plVar10;
      local_2c0 = __dest;
    }
    memcpy(__dest,__src,(long)plVar10 + 1);
  }
  FUN_027b98e4(auStack_2b0,param_1 + 0x130);
  local_1f0 = local_2c0;
  plStack_1f8 = plStack_2c8;
  local_200 = local_2d0;
  local_220 = *(undefined1 *)(param_1 + 0x1c0);
  local_218 = *(long *)(param_1 + 0x1c8);
  local_210 = *(long **)(param_1 + 0x1d0);
  if (local_210 != (long *)0x0) {
    plVar10 = local_210 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_2c0 = (undefined8 ****)0x0;
  local_2d0 = (long *)0x0;
  plStack_2c8 = (long *)0x0;
  local_1e8 = local_2b8;
  FUN_00683668(auStack_1e0,auStack_2b0);
  local_120 = (undefined8 *****)local_1f0;
  plStack_128 = plStack_1f8;
  local_130 = local_200;
  local_150 = local_220;
  local_148 = local_218;
  local_140 = local_210;
  if (local_210 != (long *)0x0) {
    plVar10 = local_210 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_1f8 = (long *)0x0;
  local_200 = (long *)0x0;
  local_1f0 = (undefined8 ****)0x0;
  pppppuStack_118 = (undefined8 *****)local_1e8;
  FUN_00683668(&local_110,auStack_1e0);
  local_80 = local_150;
  local_78 = local_148;
  local_70 = local_140;
  if (local_140 != (long *)0x0) {
    plVar10 = local_140 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6[0xd] = (long)plStack_128;
  plVar6[0xc] = (long)local_130;
  plVar6[0xf] = (long)pppppuStack_118;
  plVar6[0xe] = (long)local_120;
  local_120 = (undefined8 *****)0x0;
  plStack_128 = (long *)0x0;
  local_130 = (long *)0x0;
  FUN_00683668(plVar6 + 0x10,&local_110);
  *(undefined1 *)(plVar6 + 0x22) = local_80;
  plVar6[0x23] = local_78;
  plVar6[0x24] = (long)local_70;
  if (local_70 == (long *)0x0) {
LAB_00681dd4:
    FUN_01e7396c(&local_110);
  }
  else {
    plVar10 = local_70 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (local_70 == (long *)0x0) goto LAB_00681dd4;
    plVar10 = local_70 + 1;
    do {
      lVar8 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 != 0) goto LAB_00681dd4;
    (**(code **)(*local_70 + 0x10))(local_70);
    std::__shared_weak_count::__release_weak();
    FUN_01e7396c(&local_110);
  }
  if (((ulong)local_130 & 1) != 0) {
    (**(code **)((long)*pppppuStack_118 + 0x18))
              (pppppuStack_118,local_120,(ulong)local_130 & 0xfffffffffffffffe,1);
  }
  if (local_140 == (long *)0x0) {
LAB_00681e24:
    FUN_01e7396c(auStack_1e0);
  }
  else {
    plVar10 = local_140 + 1;
    do {
      lVar8 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 != 0) goto LAB_00681e24;
    (**(code **)(*local_140 + 0x10))(local_140);
    std::__shared_weak_count::__release_weak();
    FUN_01e7396c(auStack_1e0);
  }
  if (((ulong)local_200 & 1) != 0) {
    (**(code **)(*local_1e8 + 0x18))(local_1e8,local_1f0,(ulong)local_200 & 0xfffffffffffffffe,1);
  }
  if (local_210 != (long *)0x0) {
    plVar10 = local_210 + 1;
    do {
      lVar8 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_210 + 0x10))(local_210);
      std::__shared_weak_count::__release_weak();
      FUN_01e7396c(auStack_2b0);
      goto joined_r0x00681e80;
    }
  }
  FUN_01e7396c(auStack_2b0);
joined_r0x00681e80:
  if (((ulong)local_2d0 & 1) != 0) {
    (**(code **)(*local_2b8 + 0x18))(local_2b8,local_2c0,(ulong)local_2d0 & 0xfffffffffffffffe,1);
  }
  plStack_1f8 = (long *)0x0;
  local_200 = (long *)0x0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  local_130 = plVar6 + 6;
  plStack_128 = plVar6;
  (**(code **)*local_388)(local_388,&local_130,&local_200);
  if (plStack_128 != (long *)0x0) {
    plVar10 = plStack_128 + 1;
    do {
      lVar8 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_1f8 != (long *)0x0) {
    plVar10 = plStack_1f8 + 1;
    do {
      lVar8 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      std::__shared_weak_count::__release_weak();
    }
  }
  do {
    lVar8 = *plVar9;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
  }
  plVar10 = (long *)(PTR_DAT_047cbb30 + 0x10);
  local_120 = &local_120;
  local_c0 = (long *)0x0;
  local_c8 = (long **)0x0;
  plStack_128 = (long *)(PTR_DAT_047cbb38 + 0x10);
  local_130 = plVar10;
  pppppuStack_118 = local_120;
  (**(code **)(plVar5[4] + 0x10))(plVar1,&local_108);
  local_c8 = &plStack_128;
  thunk_FUN_006c4e40(&local_130);
  local_130 = plVar10;
  FUN_006c4274(&plStack_128);
  (**(code **)(plVar5[4] + 0x30))(&local_130,plVar1);
  if (plVar5 != (long *)0x0) {
    do {
      lVar8 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_027bf268(auStack_410);
  nn::os::LockMutex((MutexType *)(lVar11 + 0x38));
  *(undefined4 *)(lVar11 + 0x58) = local_130._0_4_;
  *(undefined8 ******)(lVar11 + 0x68) = local_120;
  *(long **)(lVar11 + 0x60) = plStack_128;
  *(long **)(lVar11 + 0x78) = local_110;
  *(undefined8 ******)(lVar11 + 0x70) = pppppuStack_118;
  pppppuStack_118 = (undefined8 *****)0x0;
  local_120 = (undefined8 *****)0x0;
  plStack_128 = (long *)0x0;
  *(undefined1 *)(lVar11 + 0x80) = 0;
  if ((char)local_108 != '\0') {
    *(undefined8 **)(lVar11 + 0x88) = local_100;
    *(undefined8 *)(lVar11 + 0x98) = uStack_f0;
    *(undefined8 *)(lVar11 + 0x90) = uStack_f8;
    plVar1 = (long *)(lVar11 + 0x90);
    *(long *)(lVar11 + 0xa0) = local_e8;
    if (local_e8 == 0) {
      *(long **)(lVar11 + 0x88) = plVar1;
    }
    else {
      *(long **)(*plVar1 + 0x10) = plVar1;
      local_100 = &uStack_f8;
      uStack_f8 = 0;
      local_e8 = 0;
    }
    *(undefined1 *)(lVar11 + 0x80) = 1;
  }
  *(undefined1 *)(lVar11 + 0xa8) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar11 + 0x38));
  if ((char)local_108 != '\0') {
    FUN_01cfa44c(&local_100,uStack_f8);
  }
  if (((ulong)plStack_128 & 1) != 0) {
    (**(code **)(*local_110 + 0x18))
              (local_110,pppppuStack_118,(ulong)plStack_128 & 0xfffffffffffffffe,1);
  }
  return 1;
}


