/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006f7928; name: FUN_006f7928
 */


void FUN_006f7928(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  bool bVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  char *pcVar25;
  long lVar26;
  undefined8 *puVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *local_148;
  long *local_140;
  long *plStack_138;
  long *local_130;
  long *local_128;
  long *local_120;
  long *plStack_118;
  long local_110;
  ulong local_108;
  undefined8 local_100;
  long local_f8;
  ulong local_f0;
  long *local_e8;
  long *plStack_e0;
  long *local_d8;
  long *plStack_d0;
  long *local_c8;
  long *plStack_c0;
  long local_b8;
  long *plStack_b0;
  long *local_a8;
  long *plStack_a0;
  long *local_98;
  long *plStack_90;
  long *local_80;
  long *plStack_78;
  long *local_70;
  long *local_68;
  
  plVar31 = (long *)(param_2 + 0x48);
  plVar29 = *(long **)(*plVar31 + 0x238);
  plVar17 = (long *)(**(code **)(*plVar29 + 0x10))(plVar29,0x2a8,8);
  puVar3 = PTR_DAT_047cffd0;
  plVar20 = plVar17 + 4;
  plVar17[2] = 0;
  plVar17[3] = (long)plVar29;
  *plVar17 = (long)(puVar3 + 0x10);
  plVar17[1] = 0;
                    /* try { // try from 006f7994 to 006f799b has its CatchHandler @ 006f8708 */
  FUN_00271f50(plVar20);
  FUN_001fed6c(plVar17 + 0x37,plVar31);
  FUN_001fed6c(plVar17 + 0x41,plVar31);
  FUN_001fed6c(plVar17 + 0x4b,plVar31);
  local_70 = plVar20;
  local_68 = plVar17;
  plVar29 = (long *)FUN_0026dfcc(param_4);
  if (*plVar29 != 0) {
    uVar18 = FUN_0026dfcc(param_4);
                    /* try { // try from 006f79dc to 006f79e3 has its CatchHandler @ 006f867c */
    FUN_00534960(uVar18,&local_140);
    plVar17[0xe] = (long)plStack_138;
    plVar17[0xd] = (long)local_140;
    plVar20 = local_70;
  }
  lVar24 = *(long *)(param_2 + 0x48);
                    /* try { // try from 006f79fc to 006f7a07 has its CatchHandler @ 006f86f4 */
  lVar19 = FUN_0077ac78(*(undefined8 *)(param_2 + 0x40),plVar20,param_3,
                        *(undefined8 *)(*(long *)(param_2 + 8) + 0x150));
  plVar29 = *(long **)(lVar24 + 0x238);
  plVar20 = (long *)(**(code **)(*plVar29 + 0x10))(plVar29,0x28,8);
  plVar17 = plVar20 + 1;
  *plVar17 = 0;
  puVar3 = PTR_DAT_047cffd8;
  plVar20[2] = 0;
  plVar20[3] = lVar19;
  plVar20[4] = (long)plVar29;
  *plVar20 = (long)(puVar3 + 0x10);
  if (*(char *)(lVar19 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006f84dc to 006f84df has its CatchHandler @ 006f86bc */
    abort();
  }
  lVar24 = local_70[0x3b];
  puVar27 = (undefined8 *)(lVar19 + 0x18);
  lVar26 = *(long *)(lVar19 + 0x10);
  *(undefined1 *)(lVar19 + 0x48) = 1;
  bVar6 = *(byte *)(lVar26 + 1);
  bVar7 = *(byte *)(lVar26 + 3);
  bVar8 = *(byte *)(lVar26 + 4);
  bVar9 = *(byte *)(lVar26 + 2);
  bVar10 = *(byte *)(lVar26 + 0x130);
  *(undefined1 *)(lVar19 + 0x78) = 0;
  *(undefined1 *)(lVar19 + 0x59) = 1;
  *(long *)(lVar19 + 0x68) = lVar26 + 0x98;
  *(long *)(lVar19 + 200) = lVar24;
  *(uint *)(lVar19 + 0x5c) =
       (uint)bVar6 << 5 | (uint)bVar7 << 4 | (uint)bVar8 << 6 | (uint)bVar9 << 7 | (uint)bVar10 << 8
  ;
                    /* try { // try from 006f7abc to 006f7ac3 has its CatchHandler @ 006f86bc */
  (**(code **)(*(long *)*puVar27 + 0x10))((long *)*puVar27,lVar19 + 0x50,puVar27);
  plStack_138 = (long *)local_70[0x3a];
  local_140 = (long *)local_70[0x39];
  local_70[0x39] = 0;
  local_70[0x3a] = 0;
  FUN_001ff970(&local_80,&local_140,*(undefined8 *)(local_70[0x33] + 0x240),0x10000,
               *(undefined8 *)(local_70[0x33] + 0x4b8));
  if (plStack_138 != (long *)0x0) {
    plVar29 = plStack_138 + 1;
    do {
      lVar24 = *plVar29;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar12) {
        *plVar29 = lVar24 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar15 = plStack_78;
  plVar29 = local_80;
  local_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  if (plVar29 != (long *)0x0) {
    *(undefined1 *)(plVar29 + 1) = 1;
  }
  if (*(char *)(lVar19 + 0x48) != '\x01') {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006f84e0 to 006f84e7 has its CatchHandler @ 006f8680 */
    abort();
  }
  pcVar25 = *(char **)(lVar19 + 0x10);
  if (*pcVar25 != '\0') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar19 + 0x200) = local_70[0x45];
  *pcVar25 = '\x01';
  *(char **)(lVar19 + 0x1f0) = pcVar25 + 0xb0;
                    /* try { // try from 006f7b80 to 006f7b87 has its CatchHandler @ 006f8680 */
  (**(code **)(**(long **)(lVar19 + 0x18) + 0x10))(*(long **)(lVar19 + 0x18),lVar19 + 0x1e0,puVar27)
  ;
  plStack_138 = (long *)local_70[0x44];
  local_140 = (long *)local_70[0x43];
  local_70[0x44] = 0;
  local_70[0x43] = 0;
  FUN_001ff970(&local_80,&local_140,*(undefined8 *)(local_70[0x3d] + 0x240),0x10000,
               *(undefined8 *)(local_70[0x3d] + 0x4b8));
  if (plStack_138 != (long *)0x0) {
    plVar1 = plStack_138 + 1;
    do {
      lVar24 = *plVar1;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar24 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar16 = plStack_78;
  plVar1 = local_80;
  local_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    *(undefined1 *)(plVar1 + 1) = 1;
  }
  lVar24 = local_70[0x4f];
  plVar21 = (long *)FUN_0026dfe0(param_4);
  if (*plVar21 == 0) {
    local_148 = (long *)0x0;
    plVar28 = (long *)0x0;
    plVar22 = (long *)FUN_0026dfc8(param_4);
    plVar21 = (long *)*plVar22;
    plVar22 = (long *)plVar22[1];
  }
  else {
    lVar26 = std::chrono::system_clock::now();
    plVar21 = (long *)FUN_0026dfe0(param_4);
    local_80 = (long *)(lVar26 + *plVar21 * 1000000);
    FUN_002525b8(&local_140,plVar31,&local_80);
    local_148 = plStack_138;
    plVar28 = local_140;
    plVar22 = (long *)FUN_0026dfc8(param_4);
    plVar21 = (long *)*plVar22;
    plVar22 = (long *)plVar22[1];
  }
  if (plVar22 != (long *)0x0) {
    plVar2 = plVar22 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar12) {
        *plVar2 = *plVar2 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  if ((plVar28 == (long *)0x0) && (lVar26 = *plVar31, *(char *)(lVar26 + 0x210) == '\0')) {
    plStack_a0 = (long *)0x0;
    local_a8 = (long *)0x0;
    local_140 = plVar21;
    local_e8 = local_70;
    plStack_e0 = local_68;
    goto joined_r0x006f7f8c;
  }
  if (plVar22 != (long *)0x0) {
    plVar2 = plVar22 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar12) {
        *plVar2 = *plVar2 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_140 = (long *)0x0;
  plStack_138 = (long *)0x0;
  local_130 = (long *)0x0;
  local_128 = (long *)FUN_01cf7e20();
  local_140 = (long *)(**(code **)(*local_128 + 0x10))(local_128,0x10,8);
  local_130 = local_140 + 2;
  *local_140 = (long)plVar21;
  local_140[1] = (long)plVar22;
  plStack_138 = local_130;
  if (plVar22 == (long *)0x0) {
joined_r0x006f7d50:
    if (plVar28 == (long *)0x0) goto LAB_006f7dac;
LAB_006f7d74:
    FUN_0025299c(&local_80,plVar28);
                    /* try { // try from 006f7d80 to 006f7d8b has its CatchHandler @ 006f850c */
    FUN_006f873c(&local_140,&local_80);
    if (plStack_78 == (long *)0x0) goto LAB_006f7dac;
    plVar21 = plStack_78 + 1;
    do {
      lVar26 = *plVar21;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar12) {
        *plVar21 = lVar26 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar26 != 0) goto LAB_006f7dac;
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__shared_weak_count::__release_weak();
    lVar26 = *plVar31;
    cVar11 = *(char *)(lVar26 + 0x210);
  }
  else {
    plVar21 = plVar22 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar12) {
        *plVar21 = *plVar21 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    plStack_138 = local_140 + 2;
    plVar21 = plVar22 + 1;
    do {
      lVar26 = *plVar21;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar12) {
        *plVar21 = lVar26 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      std::__shared_weak_count::__release_weak();
      goto joined_r0x006f7d50;
    }
    if (plVar28 != (long *)0x0) goto LAB_006f7d74;
LAB_006f7dac:
    lVar26 = *plVar31;
    cVar11 = *(char *)(lVar26 + 0x210);
  }
  if (cVar11 != '\0') {
    FUN_00247984(&local_80);
                    /* try { // try from 006f7dc4 to 006f7dcf has its CatchHandler @ 006f84e8 */
    FUN_006f873c(&local_140,&local_80);
    if (plStack_78 != (long *)0x0) {
      plVar21 = plStack_78 + 1;
      do {
        lVar26 = *plVar21;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar12) {
          *plVar21 = lVar26 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        std::__shared_weak_count::__release_weak();
      }
    }
    lVar26 = *plVar31;
  }
  plVar14 = plStack_138;
  plVar2 = local_140;
  plVar21 = *(long **)(lVar26 + 0x238);
  plVar23 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x58,8);
  puVar3 = PTR_DAT_047cbac0 + 0x10;
  plVar23[2] = 0;
  plVar23[3] = (long)plVar21;
  plVar21 = plVar23 + 4;
  *plVar23 = (long)puVar3;
  plVar23[1] = 0;
  FUN_0054b8ec(plVar21,plVar2,plVar14);
  FUN_00247264(&local_80,plVar21);
  plVar14 = plStack_78;
  plVar2 = local_80;
  local_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  if (plVar22 != (long *)0x0) {
    plVar4 = plVar22 + 1;
    do {
      lVar26 = *plVar4;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar12) {
        *plVar4 = lVar26 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar22 = plStack_78 + 1;
    do {
      lVar26 = *plVar22;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar12) {
        *plVar22 = lVar26 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar4 = local_140;
  plVar22 = plStack_138;
  if (local_140 != (long *)0x0) {
    while (plVar22 != plVar4) {
      plVar30 = (long *)plVar22[-1];
      plVar22 = plVar22 + -2;
      if (plVar30 != (long *)0x0) {
        plVar5 = plVar30 + 1;
        do {
          lVar26 = *plVar5;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar12) {
            *plVar5 = lVar26 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar30 + 0x10))(plVar30);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    plStack_138 = plVar4;
    (**(code **)(*local_128 + 0x18))(local_128,local_140,(long)local_130 - (long)local_140,8);
  }
  lVar26 = *plVar31;
  local_a8 = plVar21;
  plStack_a0 = plVar23;
  local_140 = plVar2;
  plVar22 = plVar14;
  local_e8 = local_70;
  plStack_e0 = local_68;
joined_r0x006f7f8c:
  if (plVar22 != (long *)0x0) {
    plVar31 = plVar22 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar12) {
        *plVar31 = *plVar31 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_130 = *(long **)(param_2 + 8);
  local_128 = *(long **)(param_2 + 0x10);
  if (local_128 != (long *)0x0) {
    plVar31 = (long *)((long)local_128 + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar12) {
        *plVar31 = *plVar31 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_120 = *(long **)(param_2 + 0x18);
  plStack_118 = *(long **)(param_2 + 0x20);
  if (plStack_118 != (long *)0x0) {
    plVar31 = (long *)((long)plStack_118 + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar12) {
        *plVar31 = *plVar31 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_110 = *(undefined8 *)(param_2 + 0x28);
  local_108 = *(ulong *)(param_2 + 0x30);
  if (local_108 != 0) {
    plVar31 = (long *)(local_108 + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar12) {
        *plVar31 = *plVar31 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  uVar13 = (ulong)local_100 >> 8;
  local_100 = CONCAT71((int7)uVar13,*(undefined1 *)(param_2 + 0x38));
  local_f8 = *(undefined8 *)(param_2 + 0x48);
  local_f0 = *(ulong *)(param_2 + 0x50);
  if (local_f0 != 0) {
    plVar31 = (long *)(local_f0 + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar12) {
        *plVar31 = *plVar31 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  if (plStack_e0 != (long *)0x0) {
    plVar31 = plStack_e0 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar12) {
        *plVar31 = *plVar31 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_d8 = plVar29;
  plStack_d0 = plVar15;
  if (plVar15 != (long *)0x0) {
    plVar29 = plVar15 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar12) {
        *plVar29 = *plVar29 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_c8 = plVar1;
  if (plVar16 != (long *)0x0) {
    plVar29 = plVar16 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar12) {
        *plVar29 = *plVar29 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  if (plVar20 != (long *)0x0) {
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar12) {
        *plVar17 = *plVar17 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  if (local_148 != (long *)0x0) {
    plVar29 = local_148 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar12) {
        *plVar29 = *plVar29 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  plStack_138 = plVar22;
  plStack_c0 = plVar16;
  local_b8 = lVar19;
  plStack_b0 = plVar20;
  local_98 = plVar28;
  plStack_90 = local_148;
  local_70 = local_e8;
  local_68 = plStack_e0;
  FUN_006f8e80(&local_80,&local_140,*(undefined8 *)(lVar26 + 0x240),0x10000,
               *(undefined8 *)(lVar26 + 0x4b8));
  FUN_006f88b0(&local_140);
  plVar31 = local_68;
  plVar29 = local_70;
  if (local_68 != (long *)0x0) {
    plVar21 = local_68 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar12) {
        *plVar21 = *plVar21 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  lVar26 = 0;
  if (lVar19 != 0) {
    lVar26 = lVar19 + 8;
  }
  if (plVar20 != (long *)0x0) {
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar12) {
        *plVar17 = *plVar17 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  if (plVar16 != (long *)0x0) {
    plVar21 = plVar16 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar12) {
        *plVar21 = *plVar21 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  puVar27 = (undefined8 *)FUN_0026dfe0(param_4);
  local_140 = plVar29;
  plStack_138 = plVar31;
  if (plVar31 != (long *)0x0) {
    plVar29 = plVar31 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar12) {
        *plVar29 = *plVar29 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  if (plVar20 != (long *)0x0) {
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar12) {
        *plVar17 = *plVar17 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_120 = plVar1;
  if (plVar16 != (long *)0x0) {
    plVar29 = plVar16 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar12) {
        *plVar29 = *plVar29 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_108 = local_108 & 0xffffffffffffff00;
  local_100 = *(undefined8 *)(param_2 + 0x48);
  local_f8 = *(long *)(param_2 + 0x50);
  if (local_f8 != 0) {
    plVar29 = (long *)(local_f8 + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar12) {
        *plVar29 = *plVar29 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_f0 = local_f0 & 0xffffffffffffff00;
  local_130 = (long *)lVar26;
  local_128 = plVar20;
  plStack_118 = plVar16;
  local_110 = lVar24;
  plVar21 = (long *)FUN_01cf7e20();
  plStack_e0 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x28,8);
  plVar1 = plStack_78;
  plVar29 = local_80;
  puVar3 = PTR_DAT_047cdf08 + 0x10;
  plStack_e0[2] = 0;
  plStack_e0[3] = (long)plVar21;
  *plStack_e0 = (long)puVar3;
  plStack_e0[1] = 0;
  local_e8 = plStack_e0 + 4;
  *(undefined1 *)local_e8 = 0;
  if (local_148 != (long *)0x0) {
    plVar21 = local_148 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar12) {
        *plVar21 = *plVar21 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_c8 = (long *)*puVar27;
  local_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  param_1[1] = (long)plVar1;
  *param_1 = (long)plVar29;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  local_d8 = plVar28;
  plStack_d0 = local_148;
  FUN_006f9c00(param_1 + 2,&local_140);
  FUN_006f8b74(&local_140);
  if (plVar16 != (long *)0x0) {
    plVar29 = plVar16 + 1;
    do {
      lVar24 = *plVar29;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar12) {
        *plVar29 = lVar24 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar20 != (long *)0x0) {
    do {
      lVar24 = *plVar17;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar12) {
        *plVar17 = lVar24 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar31 != (long *)0x0) {
    plVar29 = plVar31 + 1;
    do {
      lVar24 = *plVar29;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar12) {
        *plVar29 = lVar24 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar29 = plStack_78 + 1;
    do {
      lVar24 = *plVar29;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar12) {
        *plVar29 = lVar24 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar22 != (long *)0x0) {
    plVar29 = plVar22 + 1;
    do {
      lVar24 = *plVar29;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar12) {
        *plVar29 = lVar24 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_148 != (long *)0x0) {
    plVar29 = local_148 + 1;
    do {
      lVar24 = *plVar29;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar12) {
        *plVar29 = lVar24 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*local_148 + 0x10))(local_148);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar16 != (long *)0x0) {
    plVar29 = plVar16 + 1;
    do {
      lVar24 = *plVar29;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar12) {
        *plVar29 = lVar24 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar15 != (long *)0x0) {
    plVar29 = plVar15 + 1;
    do {
      lVar24 = *plVar29;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar12) {
        *plVar29 = lVar24 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar20 != (long *)0x0) {
    do {
      lVar24 = *plVar17;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar12) {
        *plVar17 = lVar24 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_68 != (long *)0x0) {
    plVar20 = local_68 + 1;
    do {
      lVar24 = *plVar20;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = lVar24 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


