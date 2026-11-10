/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006758a4; name: FUN_006758a4
 */


/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffffffffe928 */
/* WARNING: Removing unreachable block (ram,0x00676a58) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_006758a4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  byte bVar7;
  int iVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  undefined1 uVar12;
  undefined7 uVar13;
  undefined1 uVar14;
  undefined7 uVar15;
  long *plVar16;
  long *plVar17;
  byte *pbVar18;
  long *plVar19;
  char *pcVar20;
  char *pcVar21;
  bool bVar22;
  int iVar23;
  char *pcVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  uint *puVar28;
  byte *pbVar29;
  uint uVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  long local_17b0;
  ulong local_1768;
  undefined4 local_16e0;
  ulong local_16d8;
  undefined8 uStack_16d0;
  undefined8 local_16c8;
  long *plStack_16c0;
  char local_16b8;
  long *local_16b0;
  long local_16a8;
  undefined8 uStack_16a0;
  long local_1698;
  long local_1690;
  long lStack_1688;
  long local_1680;
  long *plStack_1678;
  long local_1670;
  long *local_1668;
  long local_1660;
  undefined8 uStack_1658;
  long *local_1650;
  undefined8 local_1648;
  long *local_1640;
  long local_1638;
  ulong local_1630;
  char local_1628;
  undefined4 local_1620;
  ulong local_1618;
  undefined8 uStack_1610;
  undefined8 local_1608;
  long *plStack_1600;
  char local_15f8;
  long *local_15f0;
  long local_15e8;
  undefined8 uStack_15e0;
  long local_15d8;
  long local_15d0;
  long lStack_15c8;
  long local_15c0;
  long *local_15b8;
  long local_15b0;
  undefined8 local_15a8;
  long local_15a0;
  undefined8 local_1598;
  uint local_1590;
  uint local_158c [623];
  undefined8 local_bd0;
  undefined8 uStack_bc8;
  long *local_bc0;
  long *local_bb8;
  undefined1 auStack_bb0 [32];
  long *local_b90;
  long *local_b88;
  long local_b80;
  char local_b60;
  byte *local_b58;
  long *local_b50;
  undefined1 *local_1f0;
  long *local_1e8;
  undefined8 uStack_1e0;
  long *local_1d8;
  long *plStack_1d0;
  char local_1c8;
  undefined7 uStack_1c7;
  undefined8 local_1c0;
  long local_1b8;
  undefined8 uStack_1b0;
  long local_1a8;
  ulong local_1a0 [2];
  char *local_190;
  long *local_188;
  ulong local_180;
  undefined8 uStack_178;
  char *local_170;
  long *plStack_168;
  ulong local_160;
  undefined8 uStack_158;
  char *local_150;
  long *plStack_148;
  undefined8 local_140;
  long *plStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined1 local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long *plStack_e8;
  undefined *local_d8;
  long *local_d0;
  long *******local_c8;
  long *******local_c0;
  byte local_b8;
  undefined7 uStack_b7;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  long *local_a0;
  undefined1 auStack_98 [40];
  long **local_70;
  undefined8 uStack_68;
  
  lVar26 = *(long *)(param_1 + 0x148);
  local_1670 = *(long *)(param_1 + 0xd8);
  local_1668 = *(long **)(param_1 + 0xe0);
  if (local_1668 != (long *)0x0) {
    plVar3 = local_1668 + 1;
    do {
      cVar10 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar22) {
        *plVar3 = *plVar3 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  uStack_1658 = *(undefined8 *)(param_1 + 0x128);
  local_1660 = param_1 + 0xe8;
  local_1650 = *(long **)(param_1 + 0x130);
  if (local_1650 != (long *)0x0) {
    plVar3 = local_1650 + 1;
    do {
      cVar10 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar22) {
        *plVar3 = *plVar3 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  lVar31 = *(long *)PTR_DAT_047ce6f8;
  uVar32 = *(undefined8 *)PTR_DAT_047ce700;
  FUN_0025320c(&local_15b0);
  FUN_00253290(&local_15b0);
  local_15a0 = lVar31 * 1000000;
  lVar27 = *(long *)(*(long *)(param_1 + 0xd8) + 8);
  local_1648 = *(undefined8 *)(param_1 + 200);
  local_1640 = *(long **)(param_1 + 0xd0);
  if (local_1640 != (long *)0x0) {
    plVar3 = local_1640 + 1;
    do {
      cVar10 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar22) {
        *plVar3 = *plVar3 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_1638 = *(long *)PTR_DAT_047ce708 * 60000;
  local_1630 = 0xffffffffffffffff;
  local_1628 = '\0';
  local_17b0 = std::chrono::steady_clock::now();
  local_1598 = 0x4000000000000000;
  local_15b0 = lVar31;
  local_15a8 = uVar32;
  FUN_0025320c(&local_bc0);
  local_1590 = FUN_00253290(&local_bc0);
  lVar31 = -0x26e;
  iVar23 = 1;
  puVar28 = local_158c + 1;
  uVar30 = local_1590;
  while( true ) {
    iVar11 = (int)lVar31;
    uVar30 = iVar11 + (uVar30 ^ uVar30 >> 0x1e) * 0x6c078965 + 0x26f;
    puVar28[-1] = uVar30;
    if (lVar31 == 0) break;
    iVar1 = iVar23 + 1;
    iVar23 = iVar23 + 2;
    iVar8 = (uVar30 ^ uVar30 >> 0x1e) * 0x6c078965;
    lVar31 = lVar31 + 2;
    uVar30 = iVar8 + iVar1;
    *puVar28 = iVar11 + iVar8 + 0x270;
    puVar28 = puVar28 + 2;
  }
  uStack_bc8 = 0;
  local_bd0 = 0;
  puVar2 = PTR_DAT_047cbb30 + 0x10;
  plVar3 = (long *)(PTR_DAT_047cbb38 + 0x10);
  local_1768 = 1;
  do {
    lVar31 = local_1660;
    uVar32 = *(undefined8 *)(local_1670 + 8);
    FUN_0026df54(&local_d8);
    FUN_0026df60(&local_d8,&uStack_1658);
    FUN_00676e18(&local_bc0,uVar32,lVar31,&local_d8);
    if (local_d0 != (long *)0x0) {
      plVar4 = local_d0 + 1;
      do {
        lVar31 = *plVar4;
        cVar10 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar22) {
          *plVar4 = lVar31 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar31 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar19 = local_b50;
    pbVar18 = local_b58;
    plVar17 = local_b88;
    plVar4 = local_b90;
    if (local_b50 != (long *)0x0) {
      plVar5 = local_b50 + 1;
      do {
        cVar10 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar22) {
          *plVar5 = *plVar5 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    if (local_b88 != (long *)0x0) {
      plVar5 = local_b88 + 1;
      do {
        cVar10 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar22) {
          *plVar5 = *plVar5 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
                    /* try { // try from 00675c0c to 00675c17 has its CatchHandler @ 00676aa8 */
    FUN_006792d8(&local_100,(long)*(int *)(param_1 + 0x100));
    plStack_1d0 = (long *)0x0;
    local_1d8 = (long *)0x0;
    local_1c0 = (long *)0x0;
    local_1c8 = '\0';
    uStack_1c7 = 0;
    uStack_1e0 = 0;
    local_1e8 = (long *)0x0;
    local_1f0 = auStack_bb0;
                    /* try { // try from 00675c30 to 00675c37 has its CatchHandler @ 00676aa4 */
    FUN_00690fc4(&uStack_1e0,0);
    local_1b8 = CONCAT71(local_1b8._1_7_,1);
    FUN_006794e0(&local_1f0);
    local_110 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_128 = 0;
    local_130 = 0;
    plStack_138 = (long *)0x0;
    local_140 = 0;
                    /* try { // try from 00675c60 to 00675c6b has its CatchHandler @ 00676aa0 */
    FUN_00690fc4(&local_130,0);
    uVar13 = local_16d8._1_7_;
    uVar12 = (undefined1)local_16d8;
    local_108 = 0;
    local_140 = 0;
    while (local_1f0 != (undefined1 *)0x0) {
      local_1c0._4_4_ = (int)((ulong)local_1c0 >> 0x20);
      bVar22 = local_1c0._4_4_ == 1;
      if (bVar22) {
        FUN_00671704(&local_d8,CONCAT71(uStack_1c7,local_1c8));
        if (0 < *(int *)(param_1 + 0x100)) {
          lVar33 = 0;
          lVar31 = 0;
          do {
            pbVar29 = *(byte **)(*(long *)(param_1 + 0x108) + lVar31 * 8 + 8);
            if ((*pbVar29 & 1) == 0) {
              pbVar29 = pbVar29 + 1;
            }
            else {
              pbVar29 = *(byte **)(pbVar29 + 0x10);
            }
            FUN_00683aa0(local_1a0,pbVar29);
            local_150 = local_170;
            uStack_158 = uStack_178;
            local_160 = local_180;
            local_180 = 0;
            uStack_178 = 0;
            local_170 = (char *)0x0;
            plStack_148 = plStack_168;
            if ((local_1a0[0] & 1) != 0) {
              (**(code **)(*local_188 + 0x18))
                        (local_188,local_190,local_1a0[0] & 0xfffffffffffffffe,1);
            }
            pcVar21 = local_150;
            uVar25 = local_160;
            pcVar24 = (char *)((ulong)&local_160 | 1);
            if ((local_160 & 1) != 0) {
              pcVar24 = local_150;
            }
            FUN_00671a44(local_1a0,&local_d8);
            pcVar20 = local_190;
            if ((local_1a0[0] & 1) == 0) {
              iVar23 = strcmp(pcVar24,(char *)((ulong)local_1a0 | 1));
            }
            else {
              iVar23 = strcmp(pcVar24,local_190);
              (**(code **)(*local_188 + 0x18))
                        (local_188,pcVar20,local_1a0[0] & 0xfffffffffffffffe,1);
            }
            if (iVar23 == 0) {
                    /* try { // try from 00675f24 to 00675f2f has its CatchHandler @ 00676ab0 */
              FUN_006793bc(local_100 + lVar33,&local_d8);
              if ((uVar25 & 1) != 0) {
                (**(code **)(*plStack_148 + 0x18))
                          (plStack_148,pcVar21,local_160 & 0xfffffffffffffffe,1);
              }
              break;
            }
            if ((uVar25 & 1) != 0) {
              (**(code **)(*plStack_148 + 0x18))
                        (plStack_148,pcVar21,local_160 & 0xfffffffffffffffe,1);
            }
            lVar31 = lVar31 + 1;
            lVar33 = lVar33 + 0x60;
          } while (lVar31 < *(int *)(param_1 + 0x100));
        }
        FUN_01cfa410(auStack_98);
        if ((local_b8 & 1) != 0) {
          (**(code **)(*local_a0 + 0x18))
                    (local_a0,local_a8,CONCAT71(uStack_b7,local_b8) & 0xfffffffffffffffe,1);
        }
        if (((ulong)local_d8 & 1) != 0) {
          (*(code *)(*local_c0)[3])(local_c0,local_c8,(ulong)local_d8 & 0xfffffffffffffffe,1);
        }
      }
      FUN_006794e0(&local_1f0);
    }
    FUN_00691020(&local_130);
    FUN_00691020(&uStack_1e0);
    if (local_b60 == '\0') {
      local_b60 = '\x01';
                    /* try { // try from 00675cac to 00675cb3 has its CatchHandler @ 00676a9c */
      (**(code **)(**(long **)(local_b80 + 0x20) + 0x40))(*(long **)(local_b80 + 0x20),0);
    }
    local_70 = (long **)0x0;
    uStack_68 = 0;
    local_d8 = puVar2;
    local_d0 = plVar3;
    local_c8 = (long *******)&local_c8;
    local_c0 = (long *******)&local_c8;
    (**(code **)(*local_bc0 + 0x10))(local_bc0,auStack_b0);
    local_70 = &local_d0;
    thunk_FUN_006c4e40(&local_d8);
    local_d8 = puVar2;
    FUN_006c4274(&local_d0);
    plVar16 = local_bb8;
    plVar5 = local_bc0;
    local_bc0 = (long *)0x0;
    local_bb8 = (long *)0x0;
    (**(code **)(*plVar5 + 0x30))(&local_1f0);
    if (plVar16 == (long *)0x0) {
LAB_00675d44:
      if ((int)local_1f0 != 0) goto LAB_00675d4c;
LAB_00675fd0:
      local_15c0 = local_f0;
      lStack_15c8 = lStack_f8;
      local_15d0 = local_100;
      local_1620 = 0;
      local_15f8 = '\0';
      if (local_1c8 != '\0') {
        local_15f0 = local_1c0;
        uStack_15e0 = uStack_1b0;
        local_15e8 = local_1b8;
        local_15d8 = local_1a8;
        if (local_1a8 == 0) {
          local_15f0 = &local_15e8;
        }
        else {
          *(long **)(local_1b8 + 0x10) = &local_15e8;
          local_1b8 = 0;
          local_1a8 = 0;
          local_1c0 = &local_1b8;
        }
        local_15f8 = '\x01';
      }
      local_100 = 0;
      lStack_f8 = 0;
      local_f0 = 0;
      local_15b8 = plStack_e8;
      local_1608 = local_1d8;
      plStack_1600 = plStack_1d0;
      uStack_1610 = uStack_1e0;
      local_1618 = (ulong)local_1e8;
    }
    else {
      plVar5 = plVar16 + 1;
      do {
        lVar31 = *plVar5;
        cVar10 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar22) {
          *plVar5 = lVar31 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar31 != 0) goto LAB_00675d44;
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
      if ((int)local_1f0 == 0) goto LAB_00675fd0;
LAB_00675d4c:
      local_15b8 = (long *)FUN_01cf7e20();
      local_15f8 = '\0';
      if (local_1c8 != '\0') {
        local_15f0 = local_1c0;
        uStack_15e0 = uStack_1b0;
        local_15e8 = local_1b8;
        local_15d8 = local_1a8;
        if (local_1a8 == 0) {
          local_15f0 = &local_15e8;
        }
        else {
          *(long **)(local_1b8 + 0x10) = &local_15e8;
          local_1b8 = 0;
          local_1a8 = 0;
          local_1c0 = &local_1b8;
        }
        local_15f8 = '\x01';
      }
      local_15d0 = 0;
      lStack_15c8 = 0;
      local_15c0 = 0;
      local_1620 = (int)local_1f0;
      local_1608 = local_1d8;
      plStack_1600 = plStack_1d0;
      uStack_1610 = uStack_1e0;
      local_1618 = (ulong)local_1e8;
    }
    local_1d8 = (long *)0x0;
    uStack_1e0 = 0;
    local_1e8 = (long *)0x0;
    if (local_1c8 != '\0') {
      local_1d8 = (long *)0x0;
      uStack_1e0 = 0;
      local_1e8 = (long *)0x0;
      plStack_1d0 = plStack_1600;
      FUN_01cfa44c(&local_1c0,local_1b8);
      if (((ulong)local_1e8 & 1) != 0) {
        (**(code **)(*plStack_1d0 + 0x18))
                  (plStack_1d0,local_1d8,(ulong)local_1e8 & 0xfffffffffffffffe,1);
      }
    }
    lVar33 = local_100;
    lVar31 = lStack_f8;
    if (local_100 != 0) {
      for (; lVar31 != lVar33; lVar31 = lVar31 + -0x60) {
        FUN_01cfa410(lVar31 + -0x20);
        if ((*(byte *)(lVar31 + -0x40) & 1) == 0) {
          bVar7 = *(byte *)(lVar31 + -0x60);
        }
        else {
          (**(code **)(**(long **)(lVar31 + -0x28) + 0x18))
                    (*(long **)(lVar31 + -0x28),*(undefined8 *)(lVar31 + -0x30),
                     *(ulong *)(lVar31 + -0x40) & 0xfffffffffffffffe,1);
          bVar7 = *(byte *)(lVar31 + -0x60);
        }
        if ((bVar7 & 1) != 0) {
          (**(code **)(**(long **)(lVar31 + -0x48) + 0x18))
                    (*(long **)(lVar31 + -0x48),*(undefined8 *)(lVar31 + -0x50),
                     *(ulong *)(lVar31 + -0x60) & 0xfffffffffffffffe,1);
        }
      }
      lStack_f8 = lVar33;
      (**(code **)(*plStack_e8 + 0x18))(plStack_e8,local_100,local_f0 - local_100,8);
    }
    puVar6 = PTR_DAT_047cbb30 + 0x10;
    local_d0 = (long *)(PTR_DAT_047cbb38 + 0x10);
    local_70 = (long **)0x0;
    uStack_68 = 0;
    local_d8 = puVar6;
    local_c8 = (long *******)&local_c8;
    local_c0 = (long *******)&local_c8;
    (**(code **)(*plVar4 + 0x10))(plVar4,auStack_b0);
    local_70 = &local_d0;
    thunk_FUN_006c4e40(&local_d8);
    local_d8 = puVar6;
    FUN_006c4274(&local_d0);
    pcVar24 = (char *)(**(code **)(*plVar4 + 0x38))(plVar4);
    uVar25 = local_1618;
    uVar15 = local_1618._1_7_;
    uVar14 = (undefined1)local_1618;
    switch(local_1620) {
    case 2:
    case 0xd:
    case 0x10:
      if ((1 < local_1768) && ((*pbVar18 & 1) == 0)) {
        local_16e0 = local_1620;
        break;
      }
LAB_0067624c:
      if ((*pbVar18 & 1) == 0) {
        if ((local_1768 < local_1630) &&
           (lVar31 = std::chrono::steady_clock::now(), lVar31 - local_17b0 < local_1638 * 1000000))
        {
          local_1768 = local_1768 + 1;
          goto LAB_006762a8;
        }
        local_16c8 = local_1608;
        uVar25 = local_1618;
        local_16e0 = local_1620;
        local_1608 = (long *)0x0;
        local_1618._0_1_ = 0;
        local_1618._1_7_ = 0;
        local_1618 = 0;
        uStack_16d0 = uStack_1610;
        local_16d8._0_1_ = (undefined1)uVar25;
        local_16d8._1_7_ = (undefined7)(uVar25 >> 8);
        plStack_16c0 = plStack_1600;
        local_16b8 = '\0';
        uVar25 = uVar25;
        if (local_15f8 != '\0') {
          local_1698 = local_15d8;
          uVar12 = (undefined1)local_16d8;
          uVar13 = local_16d8._1_7_;
          local_16a8 = local_15e8;
          uVar14 = (undefined1)local_1618;
          uVar15 = local_1618._1_7_;
          goto joined_r0x00676434;
        }
        goto LAB_006764ac;
      }
      local_17b0 = std::chrono::steady_clock::now();
      FUN_00254574(&local_15b0);
      local_1768 = 1;
LAB_006762a8:
      lVar31 = FUN_002544fc(&local_15b0);
      FUN_00253b78(&local_d8,&local_1648);
      FUN_0025397c(&local_140,local_d8);
      if (local_d0 != (long *)0x0) {
        plVar4 = local_d0 + 1;
        do {
          lVar33 = *plVar4;
          cVar10 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar22) {
            *plVar4 = lVar33 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar33 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_1f0 = *(undefined1 **)(param_1 + 0x128);
      local_1e8 = *(long **)(param_1 + 0x130);
      if (local_1e8 != (long *)0x0) {
        plVar4 = local_1e8 + 1;
        do {
          cVar10 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar22) {
            *plVar4 = *plVar4 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      uStack_1e0 = local_140;
      local_1d8 = plStack_138;
      if (plStack_138 != (long *)0x0) {
        plVar4 = plStack_138 + 1;
        do {
          cVar10 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar22) {
            *plVar4 = *plVar4 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      FUN_00246ff8(&local_d8,&local_1f0,2);
      if (local_1d8 != (long *)0x0) {
        plVar4 = local_1d8 + 1;
        do {
          lVar33 = *plVar4;
          cVar10 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar22) {
            *plVar4 = lVar33 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar33 == 0) {
          (**(code **)(*local_1d8 + 0x10))(local_1d8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_1e8 != (long *)0x0) {
        plVar4 = local_1e8 + 1;
        do {
          lVar33 = *plVar4;
          cVar10 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar22) {
            *plVar4 = lVar33 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar33 == 0) {
          (**(code **)(*local_1e8 + 0x10))(local_1e8);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_1a0[0] = lVar31 * 1000000;
      FUN_00247264(&local_1f0,&local_d8);
      FUN_00248930(local_1a0,&local_1f0);
      if (local_1e8 == (long *)0x0) {
LAB_0067663c:
        uVar25 = FUN_006c50c4(param_1 + 0x128);
        if ((uVar25 & 1) != 0) goto LAB_00676648;
LAB_006766d4:
        uVar25 = FUN_006c50c4(&local_140);
        bVar22 = false;
        if (((*(long *)(lVar27 + 8) != 0) && ((uVar25 & 1) != 0)) && (*(long *)(lVar27 + 0x18) != 0)
           ) {
          FUN_002568bc(lVar27 + 8);
          bVar22 = false;
        }
      }
      else {
        plVar4 = local_1e8 + 1;
        do {
          lVar31 = *plVar4;
          cVar10 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar22) {
            *plVar4 = lVar31 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar31 != 0) goto LAB_0067663c;
        (**(code **)(*local_1e8 + 0x10))(local_1e8);
        std::__shared_weak_count::__release_weak();
        uVar25 = FUN_006c50c4(param_1 + 0x128);
        if ((uVar25 & 1) == 0) goto LAB_006766d4;
LAB_00676648:
        local_1680 = local_15c0;
        lStack_1688 = lStack_15c8;
        local_1690 = local_15d0;
        local_16c8 = local_1608;
        uStack_16d0 = uStack_1610;
        local_16d8 = local_1618;
        local_16e0 = local_1620;
        uStack_1610 = 0;
        local_1608 = (long *)0x0;
        local_1618 = 0;
        plStack_16c0 = plStack_1600;
        local_16b8 = '\0';
        if (local_15f8 != '\0') {
          local_16b0 = local_15f0;
          uStack_16a0 = uStack_15e0;
          local_16a8 = local_15e8;
          local_1698 = local_15d8;
          if (local_15d8 == 0) {
            local_16b0 = &local_16a8;
          }
          else {
            *(long **)(local_15e8 + 0x10) = &local_16a8;
            local_15e8 = 0;
            local_15d8 = 0;
            local_15f0 = &local_15e8;
          }
          local_16b8 = '\x01';
        }
        bVar22 = true;
        local_15c0 = 0;
        local_15d0 = 0;
        lStack_15c8 = 0;
        plStack_1678 = local_15b8;
      }
      FUN_00247104(&local_d8);
      lVar31 = local_15d0;
      if (plStack_138 != (long *)0x0) {
        plVar4 = plStack_138 + 1;
        do {
          lVar33 = *plVar4;
          cVar10 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar9) {
            *plVar4 = lVar33 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar33 == 0) {
          (**(code **)(*plStack_138 + 0x10))(plStack_138);
          std::__shared_weak_count::__release_weak();
          lVar31 = local_15d0;
        }
      }
      local_15d0 = lVar31;
      if (lVar31 != 0) {
        for (lVar33 = lStack_15c8; lVar33 != lVar31; lVar33 = lVar33 + -0x60) {
          FUN_01cfa410(lVar33 + -0x20);
          if ((*(byte *)(lVar33 + -0x40) & 1) == 0) {
            bVar7 = *(byte *)(lVar33 + -0x60);
          }
          else {
            (**(code **)(**(long **)(lVar33 + -0x28) + 0x18))
                      (*(long **)(lVar33 + -0x28),*(undefined8 *)(lVar33 + -0x30),
                       *(ulong *)(lVar33 + -0x40) & 0xfffffffffffffffe,1);
            bVar7 = *(byte *)(lVar33 + -0x60);
          }
          if ((bVar7 & 1) != 0) {
            (**(code **)(**(long **)(lVar33 + -0x48) + 0x18))
                      (*(long **)(lVar33 + -0x48),*(undefined8 *)(lVar33 + -0x50),
                       *(ulong *)(lVar33 + -0x60) & 0xfffffffffffffffe,1);
          }
        }
        lStack_15c8 = lVar31;
        (**(code **)(*local_15b8 + 0x18))(local_15b8,local_15d0,local_15c0 - local_15d0,8);
      }
      goto LAB_006764c4;
    default:
      local_16e0 = local_1620;
      break;
    case 0xe:
      if (!(local_1628 == '\0' && *pcVar24 == '\0')) goto LAB_0067624c;
      local_16e0 = 0xe;
    }
    local_1618 = 0;
    uStack_16d0 = uStack_1610;
    local_16d8 = uVar25;
    local_16b8 = '\0';
    uVar25 = local_16d8;
    if (local_15f8 != '\0') {
      local_1698 = local_15d8;
      local_16a8 = local_15e8;
joined_r0x00676434:
      if (local_1698 == 0) {
        local_16b0 = &local_16a8;
        local_15e8 = local_16a8;
        local_15d8 = local_1698;
      }
      else {
        *(long **)(local_16a8 + 0x10) = &local_16a8;
        local_15e8 = 0;
        local_15d8 = 0;
        local_16b0 = local_15f0;
        local_15f0 = &local_15e8;
      }
      local_1618 = CONCAT71(uVar15,uVar14);
      local_16d8 = CONCAT71(uVar13,uVar12);
      local_16b8 = '\x01';
      uVar25 = local_16d8;
      uStack_16a0 = uStack_15e0;
    }
LAB_006764ac:
    local_16d8 = uVar25;
    local_1680 = local_15c0;
    lStack_1688 = lStack_15c8;
    local_1690 = local_15d0;
    uStack_1610 = 0;
    bVar22 = true;
    local_15c0 = 0;
    local_15d0 = 0;
    lStack_15c8 = 0;
    plStack_1678 = local_15b8;
LAB_006764c4:
    if (local_15f8 != '\0') {
      FUN_01cfa44c(&local_15f0,local_15e8);
    }
    if ((local_1618 & 1) != 0) {
      (**(code **)(*plStack_1600 + 0x18))(plStack_1600,local_1608,local_1618 & 0xfffffffffffffffe,1)
      ;
    }
    if (plVar17 != (long *)0x0) {
      plVar4 = plVar17 + 1;
      do {
        lVar31 = *plVar4;
        cVar10 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar9) {
          *plVar4 = lVar31 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar31 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plVar19 != (long *)0x0) {
      plVar4 = plVar19 + 1;
      do {
        lVar31 = *plVar4;
        cVar10 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar9) {
          *plVar4 = lVar31 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar31 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_00678064(auStack_bb0);
    if (local_bb8 != (long *)0x0) {
      plVar4 = local_bb8 + 1;
      do {
        lVar31 = *plVar4;
        cVar10 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar9) {
          *plVar4 = lVar31 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar31 == 0) {
        (**(code **)(*local_bb8 + 0x10))(local_bb8);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (bVar22) {
      if (local_1640 != (long *)0x0) {
        plVar3 = local_1640 + 1;
        do {
          lVar27 = *plVar3;
          cVar10 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar22) {
            *plVar3 = lVar27 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*local_1640 + 0x10))(local_1640);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_1650 != (long *)0x0) {
        plVar3 = local_1650 + 1;
        do {
          lVar27 = *plVar3;
          cVar10 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar22) {
            *plVar3 = lVar27 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*local_1650 + 0x10))(local_1650);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_1668 != (long *)0x0) {
        plVar3 = local_1668 + 1;
        do {
          lVar27 = *plVar3;
          cVar10 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar22) {
            *plVar3 = lVar27 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*local_1668 + 0x10))(local_1668);
          std::__shared_weak_count::__release_weak();
        }
      }
      nn::os::LockMutex((MutexType *)(lVar26 + 0x38));
      *(undefined4 *)(lVar26 + 0x58) = local_16e0;
      *(undefined8 *)(lVar26 + 0x68) = uStack_16d0;
      *(ulong *)(lVar26 + 0x60) = local_16d8;
      *(long **)(lVar26 + 0x78) = plStack_16c0;
      *(undefined8 *)(lVar26 + 0x70) = local_16c8;
      *(undefined1 *)(lVar26 + 0x80) = 0;
      if (local_16b8 != '\0') {
        *(long **)(lVar26 + 0x88) = local_16b0;
        plVar3 = (long *)(lVar26 + 0x90);
        *(undefined8 *)(lVar26 + 0x98) = uStack_16a0;
        *(long *)(lVar26 + 0x90) = local_16a8;
        *(long *)(lVar26 + 0xa0) = local_1698;
        if (local_1698 == 0) {
          *(long **)(lVar26 + 0x88) = plVar3;
        }
        else {
          *(long **)(*plVar3 + 0x10) = plVar3;
          local_1698 = 0;
          local_16a8 = 0;
          local_16b0 = &local_16a8;
        }
        *(undefined1 *)(lVar26 + 0x80) = 1;
      }
      *(long *)(lVar26 + 0xb0) = lStack_1688;
      *(long *)(lVar26 + 0xa8) = local_1690;
      *(long **)(lVar26 + 0xc0) = plStack_1678;
      *(long *)(lVar26 + 0xb8) = local_1680;
      local_1680 = 0;
      local_1690 = 0;
      lStack_1688 = 0;
      *(undefined1 *)(lVar26 + 200) = 1;
      nn::os::UnlockMutex((MutexType *)(lVar26 + 0x38));
      lVar27 = local_1690;
      lVar26 = lStack_1688;
      if (local_1690 != 0) {
        for (; lVar26 != lVar27; lVar26 = lVar26 + -0x60) {
          FUN_01cfa410(lVar26 + -0x20);
          if ((*(byte *)(lVar26 + -0x40) & 1) == 0) {
            bVar7 = *(byte *)(lVar26 + -0x60);
          }
          else {
            (**(code **)(**(long **)(lVar26 + -0x28) + 0x18))
                      (*(long **)(lVar26 + -0x28),*(undefined8 *)(lVar26 + -0x30),
                       *(ulong *)(lVar26 + -0x40) & 0xfffffffffffffffe,1);
            bVar7 = *(byte *)(lVar26 + -0x60);
          }
          if ((bVar7 & 1) != 0) {
            (**(code **)(**(long **)(lVar26 + -0x48) + 0x18))
                      (*(long **)(lVar26 + -0x48),*(undefined8 *)(lVar26 + -0x50),
                       *(ulong *)(lVar26 + -0x60) & 0xfffffffffffffffe,1);
          }
        }
        lStack_1688 = lVar27;
        (**(code **)(*plStack_1678 + 0x18))(plStack_1678,local_1690,local_1680 - local_1690,8);
      }
      if (local_16b8 != '\0') {
        FUN_01cfa44c(&local_16b0,local_16a8);
      }
      return 1;
    }
  } while( true );
}


