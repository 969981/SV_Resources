/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006e5758; name: FUN_006e5758
 */


/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffffffffe9c0 */
/* WARNING: Removing unreachable block (ram,0x006e6490) */
/* WARNING: Removing unreachable block (ram,0x006e6770) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_006e5758(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  byte **ppbVar6;
  undefined *puVar7;
  byte *pbVar8;
  int iVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  uint *puVar22;
  byte *pbVar23;
  long lVar24;
  uint uVar25;
  byte **ppbVar26;
  int iVar27;
  bool bVar28;
  long lVar29;
  undefined8 uVar30;
  long local_16d8;
  ulong local_1688;
  undefined4 local_1648;
  long *local_1640;
  undefined8 uStack_1638;
  undefined8 local_1630;
  long *plStack_1628;
  char local_1620;
  long *local_1618;
  long local_1610;
  undefined8 uStack_1608;
  long local_1600;
  undefined8 local_15f8;
  long *local_15f0;
  long local_15e8;
  ulong local_15e0;
  char local_15d8;
  undefined4 local_15d0 [2];
  long *local_15c8;
  undefined8 uStack_15c0;
  undefined8 local_15b8;
  long *plStack_15b0;
  char local_15a8;
  long *local_15a0;
  long local_1598;
  undefined8 uStack_1590;
  long local_1588;
  long local_1580;
  undefined8 uStack_1578;
  long local_1570;
  undefined8 uStack_1568;
  uint local_1560;
  uint local_155c [623];
  undefined8 local_ba0;
  undefined8 uStack_b98;
  long *local_b90;
  long *local_b88;
  undefined1 auStack_b80 [32];
  long *local_b60;
  long *local_b58;
  long local_b50;
  char local_b30;
  byte *local_b28;
  long *local_b20;
  long local_b18;
  long local_b08;
  byte *local_1c0;
  byte *local_1b8;
  long local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180;
  undefined1 *local_170;
  byte *local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  int iStack_144;
  undefined1 local_140;
  undefined8 local_138;
  long *local_130;
  undefined1 *local_128;
  byte *local_120;
  byte *local_110;
  int local_104;
  long *local_100;
  byte **local_f8;
  byte **local_f0;
  long *local_e8;
  byte **local_e0;
  undefined *local_d8;
  long *local_d0;
  undefined8 *******local_c8;
  undefined8 *******local_c0;
  undefined1 auStack_b0 [64];
  long **local_70;
  undefined8 uStack_68;
  
  lVar20 = *(long *)(param_1 + 0x1c0);
  lVar29 = *(long *)PTR_DAT_047ce6f8;
  uVar30 = *(undefined8 *)PTR_DAT_047ce700;
  FUN_0025320c(&local_1580);
  FUN_00253290(&local_1580);
  local_1570 = lVar29 * 1000000;
  lVar24 = param_1 + 0x1a0;
  lVar21 = *(long *)(*(long *)(param_1 + 0xd0) + 8);
  local_15f8 = *(undefined8 *)(param_1 + 0xe0);
  local_15f0 = *(long **)(param_1 + 0xe8);
  if (local_15f0 != (long *)0x0) {
    plVar3 = local_15f0 + 1;
    do {
      cVar11 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar28) {
        *plVar3 = *plVar3 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_15e8 = *(long *)PTR_DAT_047ce708 * 60000;
  iVar27 = 1;
  local_15e0 = 0xffffffffffffffff;
  local_15d8 = '\x01';
  local_16d8 = std::chrono::steady_clock::now();
  uStack_1568 = 0x4000000000000000;
  local_1580 = lVar29;
  uStack_1578 = uVar30;
  FUN_0025320c(&local_b90);
  local_1560 = FUN_00253290(&local_b90);
  lVar29 = -0x26e;
  puVar22 = local_155c + 1;
  uVar25 = local_1560;
  while( true ) {
    iVar12 = (int)lVar29;
    uVar25 = iVar12 + (uVar25 ^ uVar25 >> 0x1e) * 0x6c078965 + 0x26f;
    puVar22[-1] = uVar25;
    if (lVar29 == 0) break;
    iVar1 = iVar27 + 1;
    iVar27 = iVar27 + 2;
    iVar9 = (uVar25 ^ uVar25 >> 0x1e) * 0x6c078965;
    lVar29 = lVar29 + 2;
    uVar25 = iVar9 + iVar1;
    *puVar22 = iVar12 + iVar9 + 0x270;
    puVar22 = puVar22 + 2;
  }
  uStack_b98 = 0;
  local_ba0 = 0;
  puVar2 = PTR_DAT_047cbb30 + 0x10;
  plVar3 = (long *)(PTR_DAT_047cbb38 + 0x10);
  local_1688 = 1;
  do {
    FUN_0026df54(local_15d0);
    FUN_0026dfd4(local_15d0,&DAT_03d0a928);
    FUN_0026df60(local_15d0,lVar24);
    uVar30 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + 8);
    FUN_0026df54(&local_d8);
    FUN_0026df60(&local_d8,lVar24);
    FUN_006e6978(&local_b90,uVar30,param_1 + 0xf0,&local_d8);
    if (local_d0 != (long *)0x0) {
      plVar15 = local_d0 + 1;
      do {
        lVar29 = *plVar15;
        cVar11 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar28) {
          *plVar15 = lVar29 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar15 = local_15c8;
    if (local_15c8 != (long *)0x0) {
      plVar4 = plVar15 + 1;
      do {
        lVar29 = *plVar4;
        cVar11 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar28) {
          *plVar4 = lVar29 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar14 = local_b20;
    pbVar8 = local_b28;
    plVar4 = local_b58;
    plVar15 = local_b60;
    if (local_b20 != (long *)0x0) {
      plVar5 = local_b20 + 1;
      do {
        cVar11 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar28) {
          *plVar5 = *plVar5 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    if (local_b58 != (long *)0x0) {
      plVar5 = local_b58 + 1;
      do {
        cVar11 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar28) {
          *plVar5 = *plVar5 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
                    /* try { // try from 006e5a88 to 006e5a97 has its CatchHandler @ 006e67c0 */
    FUN_00717254(&local_138,0);
    iStack_144 = 0;
    uStack_160 = 0;
    local_168 = (byte *)0x0;
    local_150 = 0;
    uStack_158 = 0;
    local_170 = auStack_b80;
                    /* try { // try from 006e5aac to 006e5ab7 has its CatchHandler @ 006e67bc */
    FUN_00708784(&uStack_160,0);
    local_140 = 1;
    FUN_006e8e38(&local_170);
    uStack_188 = 0;
    local_190 = 0;
    uStack_198 = 0;
    local_1a0 = 0;
    uStack_1a8 = 0;
    local_1b0 = 0;
                    /* try { // try from 006e5aec to 006e5af7 has its CatchHandler @ 006e67b8 */
    FUN_00708784(&local_1a0,0);
    local_180 = 0;
    local_1b0 = 0;
    if (local_170 != (undefined1 *)0x0) {
      bVar28 = true;
      do {
        if (iStack_144 == 1) {
          if (bVar28) {
                    /* try { // try from 006e5be4 to 006e5bef has its CatchHandler @ 006e67cc */
            FUN_006ff340(&local_d8,local_150);
            if (local_c8 == (undefined8 *******)0x0) {
              lVar17 = 0xe10;
              lVar29 = local_b18;
              lVar16 = local_b08;
            }
            else {
              lVar17 = FUN_0025da60();
              lVar29 = local_b18;
              lVar16 = local_b08;
              if (lVar17 < 1) {
                lVar17 = 0xe10;
              }
            }
            local_b08 = lVar17;
            local_b18 = lVar29;
            if (lVar29 != 0) {
              lVar16 = std::chrono::system_clock::now();
              local_100 = (long *)(lVar16 + local_b08 * 1000000);
              FUN_002529a4(lVar29,&local_100);
              lVar16 = local_b08;
            }
            local_b08 = lVar16;
            FUN_006ff3f8(&local_d8);
          }
          bVar28 = false;
        }
        else if (iStack_144 == 2) {
                    /* try { // try from 006e5b84 to 006e5b8f has its CatchHandler @ 006e67d0 */
          FUN_007188a4(&local_138,local_150);
          if (local_104 == 6) {
            if ((*local_120 & 1) == 0) {
              local_1b8 = local_120 + 1;
            }
            else {
              local_1b8 = *(byte **)(local_120 + 0x10);
            }
            local_e0 = &local_1b8;
            local_e8 = (long *)(param_1 + 0x170);
            FUN_006e9a90(&local_100,&local_e8,*(undefined8 *)(*(long *)(param_1 + 0xe0) + 0x240),
                         *(undefined8 *)(*(long *)(param_1 + 0xe0) + 0x850));
            puVar7 = PTR_DAT_047cbb30 + 0x10;
            local_d0 = (long *)(PTR_DAT_047cbb38 + 0x10);
            local_70 = (long **)0x0;
            uStack_68 = 0;
            local_d8 = puVar7;
            local_c8 = &local_c8;
            local_c0 = &local_c8;
            (**(code **)(*local_100 + 0x10))(local_100,auStack_b0);
            local_70 = &local_d0;
            thunk_FUN_006c4e40(&local_d8);
            local_d8 = puVar7;
            FUN_006c4274(&local_d0);
            ppbVar6 = local_f8;
            plVar5 = local_100;
            local_100 = (long *)0x0;
            local_f8 = (byte **)0x0;
            (**(code **)(*plVar5 + 0x30))();
            ppbVar26 = local_f8;
            if (ppbVar6 != (byte **)0x0) {
              ppbVar26 = ppbVar6 + 1;
              do {
                pbVar23 = *ppbVar26;
                cVar11 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(ppbVar26,0x10);
                if (bVar10) {
                  *ppbVar26 = pbVar23 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              ppbVar26 = local_f8;
              if (pbVar23 == (byte *)0x0) {
                (**(code **)(*ppbVar6 + 0x10))(ppbVar6);
                std::__shared_weak_count::__release_weak();
                ppbVar26 = local_f8;
              }
            }
            local_f8 = ppbVar26;
            if (ppbVar26 == (byte **)0x0) goto LAB_006e5b58;
            ppbVar6 = ppbVar26 + 1;
            do {
              pbVar23 = *ppbVar6;
              cVar11 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(ppbVar6,0x10);
              if (bVar10) {
                *ppbVar6 = pbVar23 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
LAB_006e5f58:
            if (pbVar23 == (byte *)0x0) {
              (**(code **)(*ppbVar26 + 0x10))(ppbVar26);
              std::__shared_weak_count::__release_weak();
            }
          }
          else if (local_104 == 5) {
            lVar29 = *(long *)(param_1 + 0xe0);
            puVar7 = PTR_DAT_047cbe60;
            if (*(undefined **)(local_110 + 0x10) != (undefined *)0x0) {
              puVar7 = *(undefined **)(local_110 + 0x10);
            }
            local_1b8 = (byte *)FUN_0025da00(puVar7);
            if ((*local_120 & 1) == 0) {
              local_1c0 = local_120 + 1;
            }
            else {
              local_1c0 = *(byte **)(local_120 + 0x10);
            }
            local_f8 = &local_1b8;
            local_f0 = &local_1c0;
            local_100 = (long *)(param_1 + 0x140);
            FUN_006e9510(&local_e8,&local_100,*(undefined8 *)(lVar29 + 0x240),
                         *(undefined8 *)(lVar29 + 0x850));
            puVar7 = PTR_DAT_047cbb30 + 0x10;
            local_d0 = (long *)(PTR_DAT_047cbb38 + 0x10);
            local_70 = (long **)0x0;
            uStack_68 = 0;
            local_d8 = puVar7;
            local_c8 = &local_c8;
            local_c0 = &local_c8;
            (**(code **)(*local_e8 + 0x10))(local_e8,auStack_b0);
            local_70 = &local_d0;
            thunk_FUN_006c4e40(&local_d8);
            local_d8 = puVar7;
            FUN_006c4274(&local_d0);
            ppbVar6 = local_e0;
            plVar5 = local_e8;
            local_e8 = (long *)0x0;
            local_e0 = (byte **)0x0;
            (**(code **)(*plVar5 + 0x30))();
            ppbVar26 = local_e0;
            if (ppbVar6 != (byte **)0x0) {
              ppbVar26 = ppbVar6 + 1;
              do {
                pbVar23 = *ppbVar26;
                cVar11 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(ppbVar26,0x10);
                if (bVar10) {
                  *ppbVar26 = pbVar23 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              ppbVar26 = local_e0;
              if (pbVar23 == (byte *)0x0) {
                (**(code **)(*ppbVar6 + 0x10))(ppbVar6);
                std::__shared_weak_count::__release_weak();
                ppbVar26 = local_e0;
              }
            }
            local_e0 = ppbVar26;
            if (ppbVar26 != (byte **)0x0) {
              ppbVar6 = ppbVar26 + 1;
              do {
                pbVar23 = *ppbVar6;
                cVar11 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(ppbVar6,0x10);
                if (bVar10) {
                  *ppbVar6 = pbVar23 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              goto LAB_006e5f58;
            }
          }
          else if (local_104 == 4) {
            if ((*local_110 & 1) == 0) {
              local_1b8 = local_110 + 1;
              if ((*local_120 & 1) != 0) goto LAB_006e5bd4;
LAB_006e5e64:
              local_1c0 = local_120 + 1;
            }
            else {
              local_1b8 = *(byte **)(local_110 + 0x10);
              if ((*local_120 & 1) == 0) goto LAB_006e5e64;
LAB_006e5bd4:
              local_1c0 = *(byte **)(local_120 + 0x10);
            }
            local_f8 = &local_1b8;
            local_f0 = &local_1c0;
            local_100 = (long *)(param_1 + 0x110);
            FUN_006e8f80(&local_e8,&local_100,*(undefined8 *)(*(long *)(param_1 + 0xe0) + 0x240),
                         *(undefined8 *)(*(long *)(param_1 + 0xe0) + 0x850));
            puVar7 = PTR_DAT_047cbb30 + 0x10;
            local_d0 = (long *)(PTR_DAT_047cbb38 + 0x10);
            local_70 = (long **)0x0;
            uStack_68 = 0;
            local_d8 = puVar7;
            local_c8 = &local_c8;
            local_c0 = &local_c8;
            (**(code **)(*local_e8 + 0x10))(local_e8,auStack_b0);
            local_70 = &local_d0;
            thunk_FUN_006c4e40(&local_d8);
            local_d8 = puVar7;
            FUN_006c4274(&local_d0);
            ppbVar6 = local_e0;
            plVar5 = local_e8;
            local_e8 = (long *)0x0;
            local_e0 = (byte **)0x0;
            (**(code **)(*plVar5 + 0x30))();
            ppbVar26 = local_e0;
            if (ppbVar6 != (byte **)0x0) {
              ppbVar26 = ppbVar6 + 1;
              do {
                pbVar23 = *ppbVar26;
                cVar11 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(ppbVar26,0x10);
                if (bVar10) {
                  *ppbVar26 = pbVar23 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              ppbVar26 = local_e0;
              if (pbVar23 == (byte *)0x0) {
                (**(code **)(*ppbVar6 + 0x10))(ppbVar6);
                std::__shared_weak_count::__release_weak();
                ppbVar26 = local_e0;
              }
            }
            local_e0 = ppbVar26;
            if (ppbVar26 != (byte **)0x0) {
              ppbVar6 = ppbVar26 + 1;
              do {
                pbVar23 = *ppbVar6;
                cVar11 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(ppbVar6,0x10);
                if (bVar10) {
                  *ppbVar6 = pbVar23 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              goto LAB_006e5f58;
            }
          }
        }
LAB_006e5b58:
        FUN_006e8e38(&local_170);
      } while (local_170 != (undefined1 *)0x0);
    }
    FUN_007087d8(&local_1a0);
    FUN_007087d8(&uStack_160);
    if (local_b30 == '\0') {
      local_b30 = '\x01';
                    /* try { // try from 006e6014 to 006e601b has its CatchHandler @ 006e67b4 */
      (**(code **)(**(long **)(local_b50 + 0x20) + 0x40))(*(long **)(local_b50 + 0x20),0);
    }
    local_70 = (long **)0x0;
    uStack_68 = 0;
    local_d8 = puVar2;
    local_d0 = plVar3;
    local_c8 = &local_c8;
    local_c0 = &local_c8;
    (**(code **)(*local_b90 + 0x10))(local_b90,auStack_b0);
    local_70 = &local_d0;
    thunk_FUN_006c4e40(&local_d8);
    local_d8 = puVar2;
    FUN_006c4274(&local_d0);
    plVar13 = local_b88;
    plVar5 = local_b90;
    local_b90 = (long *)0x0;
    local_b88 = (long *)0x0;
    (**(code **)(*plVar5 + 0x30))(local_15d0);
    if (plVar13 != (long *)0x0) {
      plVar5 = plVar13 + 1;
      do {
        lVar29 = *plVar5;
        cVar11 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar28) {
          *plVar5 = lVar29 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_007172b0(&local_138);
    puVar7 = PTR_DAT_047cbb30 + 0x10;
    local_d0 = (long *)(PTR_DAT_047cbb38 + 0x10);
    local_70 = (long **)0x0;
    uStack_68 = 0;
    local_d8 = puVar7;
    local_c8 = &local_c8;
    local_c0 = &local_c8;
    (**(code **)(*plVar15 + 0x10))(plVar15,auStack_b0);
    local_70 = &local_d0;
    thunk_FUN_006c4e40(&local_d8);
    local_d8 = puVar7;
    FUN_006c4274(&local_d0);
    pcVar18 = (char *)(**(code **)(*plVar15 + 0x38))(plVar15);
    switch(local_15d0[0]) {
    case 2:
    case 0xd:
    case 0x10:
      if ((1 < local_1688) && ((*pbVar8 & 1) == 0)) {
        local_1648 = local_15d0[0];
        break;
      }
LAB_006e6190:
      if ((*pbVar8 & 1) == 0) {
        if ((local_1688 < local_15e0) &&
           (lVar29 = std::chrono::steady_clock::now(), lVar29 - local_16d8 < local_15e8 * 1000000))
        {
          local_1688 = local_1688 + 1;
          goto LAB_006e61ec;
        }
        local_1648 = local_15d0[0];
        uStack_1638 = uStack_15c0;
        local_1640._0_1_ = SUB81(local_15c8,0);
        local_1640._1_7_ = (undefined7)((ulong)local_15c8 >> 8);
        local_1630 = local_15b8;
        plVar15 = local_15c8;
        if (local_15a8 != '\0') {
          local_1600 = local_1588;
          plStack_1628 = plStack_15b0;
          local_1610 = local_1598;
          goto joined_r0x006e638c;
        }
        goto LAB_006e6484;
      }
      local_16d8 = std::chrono::steady_clock::now();
      FUN_00254574(&local_1580);
      local_1688 = 1;
LAB_006e61ec:
      lVar29 = FUN_002544fc(&local_1580);
      FUN_00253b78(&local_d8,&local_15f8);
      FUN_0025397c(&local_170,local_d8);
      if (local_d0 != (long *)0x0) {
        plVar15 = local_d0 + 1;
        do {
          lVar16 = *plVar15;
          cVar11 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar28) {
            *plVar15 = lVar16 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_138 = *(undefined8 *)(param_1 + 0x1a0);
      local_130 = *(long **)(param_1 + 0x1a8);
      if (local_130 != (long *)0x0) {
        plVar15 = local_130 + 1;
        do {
          cVar11 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar28) {
            *plVar15 = *plVar15 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      local_128 = local_170;
      local_120 = local_168;
      if (local_168 != (byte *)0x0) {
        pbVar8 = local_168 + 8;
        do {
          cVar11 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(pbVar8,0x10);
          if (bVar28) {
            *(long *)pbVar8 = *(long *)pbVar8 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      FUN_00246ff8(&local_d8,&local_138,2);
      if (local_120 != (byte *)0x0) {
        pbVar8 = local_120 + 8;
        do {
          lVar16 = *(long *)pbVar8;
          cVar11 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(pbVar8,0x10);
          if (bVar28) {
            *(long *)pbVar8 = lVar16 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*(long *)local_120 + 0x10))(local_120);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_130 != (long *)0x0) {
        plVar15 = local_130 + 1;
        do {
          lVar16 = *plVar15;
          cVar11 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar28) {
            *plVar15 = lVar16 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*local_130 + 0x10))(local_130);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_1b0 = lVar29 * 1000000;
      FUN_00247264(&local_138,&local_d8);
      FUN_00248930(&local_1b0,&local_138);
      if (local_130 == (long *)0x0) {
LAB_006e656c:
        uVar19 = FUN_006c50c4(lVar24);
        if ((uVar19 & 1) != 0) goto LAB_006e6578;
LAB_006e65f8:
        uVar19 = FUN_006c50c4(&local_170);
        bVar28 = false;
        if (((*(long *)(lVar21 + 8) != 0) && ((uVar19 & 1) != 0)) && (*(long *)(lVar21 + 0x18) != 0)
           ) {
          FUN_002568bc(lVar21 + 8);
          bVar28 = false;
        }
      }
      else {
        plVar15 = local_130 + 1;
        do {
          lVar29 = *plVar15;
          cVar11 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar28) {
            *plVar15 = lVar29 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar29 != 0) goto LAB_006e656c;
        (**(code **)(*local_130 + 0x10))(local_130);
        std::__shared_weak_count::__release_weak();
        uVar19 = FUN_006c50c4(lVar24);
        if ((uVar19 & 1) == 0) goto LAB_006e65f8;
LAB_006e6578:
        local_1630 = local_15b8;
        uStack_1638 = uStack_15c0;
        local_1640 = local_15c8;
        local_1648 = local_15d0[0];
        uStack_15c0 = 0;
        local_15b8 = 0;
        local_15c8 = (long *)0x0;
        plStack_1628 = plStack_15b0;
        local_1620 = '\0';
        if (local_15a8 == '\0') {
          bVar28 = true;
        }
        else {
          local_1618 = local_15a0;
          uStack_1608 = uStack_1590;
          local_1610 = local_1598;
          local_1600 = local_1588;
          if (local_1588 == 0) {
            local_1618 = &local_1610;
          }
          else {
            *(long **)(local_1598 + 0x10) = &local_1610;
            local_1588 = 0;
            local_1598 = 0;
            local_15a0 = &local_1598;
          }
          bVar28 = true;
          local_1620 = '\x01';
        }
      }
      FUN_00247104(&local_d8);
      if (local_168 != (byte *)0x0) {
        pbVar8 = local_168 + 8;
        do {
          lVar29 = *(long *)pbVar8;
          cVar11 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(pbVar8,0x10);
          if (bVar10) {
            *(long *)pbVar8 = lVar29 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar29 == 0) {
          (**(code **)(*(long *)local_168 + 0x10))(local_168);
          std::__shared_weak_count::__release_weak();
        }
      }
      goto LAB_006e63f8;
    default:
      local_1648 = local_15d0[0];
      break;
    case 0xe:
      if (!(local_15d8 == '\0' && *pcVar18 == '\0')) goto LAB_006e6190;
      local_1648 = 0xe;
    }
    local_1630 = local_15b8;
    plVar15 = local_15c8;
    uStack_1638 = uStack_15c0;
    if (local_15a8 == '\0') {
LAB_006e6484:
      local_1640 = plVar15;
      uStack_15c0 = 0;
      local_15c8 = (long *)0x0;
      local_15b8 = 0;
      local_1620 = '\0';
      bVar28 = true;
      plStack_1628 = plStack_15b0;
    }
    else {
      local_1640._1_7_ = (undefined7)((ulong)local_15c8 >> 8);
      local_1640._0_1_ = SUB81(local_15c8,0);
      local_1600 = local_1588;
      plStack_1628 = plStack_15b0;
      local_1610 = local_1598;
joined_r0x006e638c:
      local_15b8 = 0;
      uStack_15c0 = 0;
      if (local_1600 == 0) {
        local_1618 = &local_1610;
        local_1598 = local_1610;
        local_1588 = local_1600;
      }
      else {
        *(long **)(local_1610 + 0x10) = &local_1610;
        local_1588 = 0;
        local_1598 = 0;
        local_1618 = local_15a0;
        local_15a0 = &local_1598;
      }
      local_15c8 = (long *)0x0;
      bVar28 = true;
      local_1620 = '\x01';
      plStack_15b0 = plStack_1628;
      uStack_1608 = uStack_1590;
LAB_006e63f8:
      if (local_15a8 != '\0') {
        FUN_01cfa44c(&local_15a0,local_1598);
      }
      if (((ulong)local_15c8 & 1) != 0) {
        (**(code **)(*plStack_15b0 + 0x18))
                  (plStack_15b0,local_15b8,(ulong)local_15c8 & 0xfffffffffffffffe,1);
      }
    }
    if (plVar4 != (long *)0x0) {
      plVar15 = plVar4 + 1;
      do {
        lVar29 = *plVar15;
        cVar11 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar10) {
          *plVar15 = lVar29 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plVar14 != (long *)0x0) {
      plVar15 = plVar14 + 1;
      do {
        lVar29 = *plVar15;
        cVar11 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar10) {
          *plVar15 = lVar29 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_006e7bc4(auStack_b80);
    if (local_b88 != (long *)0x0) {
      plVar15 = local_b88 + 1;
      do {
        lVar29 = *plVar15;
        cVar11 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar10) {
          *plVar15 = lVar29 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*local_b88 + 0x10))(local_b88);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (bVar28) {
      if (local_15f0 != (long *)0x0) {
        plVar3 = local_15f0 + 1;
        do {
          lVar24 = *plVar3;
          cVar11 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar28) {
            *plVar3 = lVar24 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*local_15f0 + 0x10))(local_15f0);
          std::__shared_weak_count::__release_weak();
        }
      }
      nn::os::LockMutex((MutexType *)(lVar20 + 0x38));
      *(undefined4 *)(lVar20 + 0x58) = local_1648;
      *(undefined8 *)(lVar20 + 0x68) = uStack_1638;
      *(long **)(lVar20 + 0x60) = local_1640;
      *(long **)(lVar20 + 0x78) = plStack_1628;
      *(undefined8 *)(lVar20 + 0x70) = local_1630;
      *(undefined1 *)(lVar20 + 0x80) = 0;
      if (local_1620 != '\0') {
        *(long **)(lVar20 + 0x88) = local_1618;
        plVar3 = (long *)(lVar20 + 0x90);
        *(undefined8 *)(lVar20 + 0x98) = uStack_1608;
        *(long *)(lVar20 + 0x90) = local_1610;
        *(long *)(lVar20 + 0xa0) = local_1600;
        if (local_1600 == 0) {
          *(long **)(lVar20 + 0x88) = plVar3;
        }
        else {
          *(long **)(*plVar3 + 0x10) = plVar3;
          local_1600 = 0;
          local_1610 = 0;
          local_1618 = &local_1610;
        }
        *(undefined1 *)(lVar20 + 0x80) = 1;
      }
      *(undefined1 *)(lVar20 + 0xa8) = 1;
      nn::os::UnlockMutex((MutexType *)(lVar20 + 0x38));
      if (local_1620 != '\0') {
        FUN_01cfa44c(&local_1618,local_1610);
      }
      return 1;
    }
  } while( true );
}


