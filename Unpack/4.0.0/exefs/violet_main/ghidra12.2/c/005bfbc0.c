/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005bfbc0; name: FUN_005bfbc0
 */


/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffffffffe9d8 */
/* WARNING: Removing unreachable block (ram,0x005c07e4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005bfbc0(undefined8 param_1,ulong *param_2,long param_3,undefined8 param_4,long *param_5,
                 long *param_6)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined *puVar5;
  long *******ppppppplVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  long **pplVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  long *plVar17;
  char *pcVar18;
  undefined8 *puVar19;
  long *plVar20;
  size_t sVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  byte *pbVar24;
  code *pcVar25;
  long lVar26;
  int *piVar27;
  ulong *puVar28;
  byte *pbVar29;
  long lVar30;
  int iVar31;
  undefined8 uVar32;
  long lVar33;
  ulong uVar34;
  void *__dest;
  long local_1858;
  ulong local_1808;
  int local_17a0 [2];
  byte local_1798;
  undefined7 uStack_1797;
  void *pvStack_1790;
  long *local_1788;
  long *plStack_1780;
  char local_1778;
  long *local_1770;
  long local_1768;
  undefined8 uStack_1760;
  long local_1758;
  undefined8 local_1750;
  long *local_1748;
  undefined1 auStack_1740 [8];
  ulong local_1738;
  undefined1 auStack_1718 [48];
  undefined *local_16e8;
  undefined *local_16e0;
  undefined4 local_16d8;
  undefined1 auStack_16d0 [120];
  long **local_1658;
  long *local_1650;
  long local_1648;
  ulong local_1640;
  char local_1638;
  ulong local_1630;
  size_t local_1628;
  void *pvStack_1620;
  long *local_1618;
  long *local_1610;
  char local_1608;
  long *local_1600;
  long local_15f8;
  undefined8 uStack_15f0;
  long local_15e8;
  ulong local_15e0;
  undefined8 uStack_15d8;
  long local_15d0;
  long *plStack_15c8;
  undefined8 local_15c0;
  undefined8 local_15b8;
  undefined8 local_15b0;
  long *plStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined8 local_1590;
  long lStack_1588;
  long local_1580;
  long local_1578;
  long *local_1570;
  undefined8 local_c00;
  undefined8 uStack_bf8;
  long **local_bf0;
  long *local_be8;
  undefined8 local_be0;
  long *local_bd8;
  byte local_bd0;
  undefined1 auStack_bcf [15];
  long *local_bc0;
  long *local_bb8;
  long local_bb0;
  char local_b90;
  byte *local_b88;
  long *local_b80;
  ulong local_220 [2];
  ulong local_210;
  long *local_208;
  ulong local_200;
  ulong local_1f8;
  ulong local_1f0;
  long *plStack_1e8;
  ulong local_1e0;
  long *plStack_1d8;
  undefined8 local_1d0;
  long *local_1c8;
  ulong local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long *local_1a8;
  long local_1a0;
  long lStack_198;
  long local_190;
  long *plStack_188;
  long **local_180;
  long *plStack_178;
  ulong local_170;
  long *plStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined8 *local_f0;
  long *plStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  
  pbVar24 = *(byte **)(param_3 + 0x40);
  if ((*pbVar24 & 1) == 0) {
    pbVar24 = pbVar24 + 1;
  }
  else {
    pbVar24 = *(byte **)(pbVar24 + 0x10);
  }
  FUN_0024726c(auStack_16d0,param_6);
  uVar34 = *param_2;
  plVar20 = (long *)param_2[1];
  if (plVar20 != (long *)0x0) {
    plVar17 = plVar20 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar11) {
        *plVar17 = *plVar17 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  plVar17 = (long *)FUN_01cf7e20();
  local_15c0 = (ulong *)0x0;
  local_15c0 = (ulong *)(**(code **)(*plVar17 + 0x10))(plVar17,0x28,8);
  *local_15c0 = (ulong)&PTR_LAB_044cd738;
  local_15c0[1] = (ulong)plVar17;
  local_15c0[2] = uVar34;
  local_15c0[3] = (ulong)plVar20;
  if (plVar20 != (long *)0x0) {
    plVar17 = plVar20 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar11) {
        *plVar17 = *plVar17 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_15c0[4] = (ulong)pbVar24;
                    /* try { // try from 005bfc8c to 005bfc97 has its CatchHandler @ 005c1d60 */
  FUN_00247460(auStack_16d0,&local_15e0);
  if (local_15c0 != (ulong *)0x0) {
    if (local_15c0 == &local_15e0) {
      pcVar25 = *(code **)(*local_15c0 + 0x10);
    }
    else {
      pcVar25 = *(code **)(*local_15c0 + 0x18);
    }
    (*pcVar25)();
  }
  if (plVar20 != (long *)0x0) {
    plVar17 = plVar20 + 1;
    do {
      lVar30 = *plVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar11) {
        *plVar17 = lVar30 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar30 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      std::__shared_weak_count::__release_weak();
    }
  }
                    /* try { // try from 005bfcf4 to 005bfcff has its CatchHandler @ 005c1cd4 */
  FUN_0060ab98(auStack_1740,0);
  lVar26 = *(long *)(*param_2 + 8);
  lVar30 = std::chrono::system_clock::now();
  local_15e0 = lVar30 + *(long *)PTR_DAT_047ce6f0 * 1000000;
  FUN_002525b8(&local_1750,lVar26 + 0x48,&local_15e0);
  lVar26 = *(long *)(*param_2 + 8);
  uVar34 = *(ulong *)PTR_DAT_047ce6f8;
  uVar32 = *(undefined8 *)PTR_DAT_047ce700;
  FUN_0025320c(&local_15e0);
  FUN_00253290(&local_15e0);
  lVar30 = *(long *)(*param_2 + 8);
  local_1658 = *(long ***)(lVar26 + 0x48);
  local_1650 = *(long **)(lVar26 + 0x50);
  if (local_1650 != (long *)0x0) {
    plVar20 = local_1650 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar11) {
        *plVar20 = *plVar20 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_1648 = *(long *)PTR_DAT_047ce708 * 60000;
  local_1640 = 0xffffffffffffffff;
  local_1638 = '\0';
  local_1858 = std::chrono::steady_clock::now();
  plStack_15c8 = (long *)0x4000000000000000;
  local_15e0 = uVar34;
  uStack_15d8 = uVar32;
  local_15d0 = uVar34 * 1000000;
  FUN_0025320c(&local_bf0);
  uVar16 = FUN_00253290(&local_bf0);
  lVar26 = -0x26e;
  local_15c0 = (ulong *)CONCAT44(local_15c0._4_4_,uVar16);
  iVar31 = 1;
  piVar27 = (int *)&local_15b8;
  while( true ) {
    iVar12 = (int)lVar26;
    uVar16 = iVar12 + (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 0x26f;
    piVar27[-1] = uVar16;
    if (lVar26 == 0) break;
    iVar1 = iVar31 + 1;
    iVar31 = iVar31 + 2;
    iVar8 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965;
    lVar26 = lVar26 + 2;
    uVar16 = iVar8 + iVar1;
    *piVar27 = iVar12 + iVar8 + 0x270;
    piVar27 = piVar27 + 2;
  }
  uStack_bf8 = 0;
  local_c00 = 0;
  puVar19 = (undefined8 *)(PTR_DAT_047cbb30 + 0x10);
  plVar20 = (long *)(PTR_DAT_047cbb38 + 0x10);
  local_1808 = 1;
  do {
    uVar34 = *param_2;
    FUN_0025299c(&local_180,local_1750);
    uVar32 = *(undefined8 *)(uVar34 + 8);
    FUN_0026df54(&local_f0);
    FUN_0026df60(&local_f0,&local_180);
    FUN_005c5524(&local_bf0,uVar32,param_3,&local_f0);
    if (plStack_e8 != (long *)0x0) {
      plVar17 = plStack_e8 + 1;
      do {
        lVar26 = *plVar17;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar11) {
          *plVar17 = lVar26 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plStack_178 != (long *)0x0) {
      plVar17 = plStack_178 + 1;
      do {
        lVar26 = *plVar17;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar11) {
          *plVar17 = lVar26 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plStack_178 + 0x10))(plStack_178);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar15 = local_b80;
    pbVar29 = local_b88;
    plVar14 = local_bb8;
    plVar17 = local_bc0;
    if (local_b80 != (long *)0x0) {
      plVar4 = local_b80 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar11) {
          *plVar4 = *plVar4 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    if (local_bb8 != (long *)0x0) {
      plVar4 = local_bb8 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar11) {
          *plVar4 = *plVar4 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    local_78 = 0;
    uStack_90 = 0;
    local_98 = 0;
    uStack_80 = 0;
    local_88 = (long **)0x0;
    ppppppplStack_e0 = (long *******)0x0;
    plStack_e8 = (long *)0x0;
    uStack_b0 = 0;
    local_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_d0 = 0;
    ppppppplStack_d8 = (long *******)0x0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    local_f0 = &local_be0;
                    /* try { // try from 005c0060 to 005c006b has its CatchHandler @ 005c1d78 */
    FUN_0060ab98(&ppppppplStack_e0,0);
    local_70 = 1;
    FUN_005c7d48(&local_f0);
    uStack_108 = 0;
    local_110 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_158 = 0;
    local_160 = 0;
    plStack_168 = (long *)0x0;
    local_170 = 0;
    plStack_178 = (long *)0x0;
    local_180 = (long **)0x0;
                    /* try { // try from 005c00a4 to 005c00af has its CatchHandler @ 005c1d7c */
    FUN_0060ab98(&local_170,0);
    local_100 = 0;
    local_180 = (long **)0x0;
    uVar32 = local_1750;
    while (local_1750 = uVar32, local_f0 != (undefined8 *)0x0) {
      lVar26 = std::chrono::system_clock::now();
      local_1f0 = lVar26 + *(long *)PTR_DAT_047ce6f0 * 1000000;
      FUN_002529a4(uVar32,&local_1f0);
      if ((int)local_78 == 7) {
        local_200 = *param_2;
        local_1f8 = param_2[1];
        if (local_1f8 != 0) {
          plVar4 = (long *)(local_1f8 + 0x10);
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar11) {
              *plVar4 = *plVar4 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
        FUN_00213580(local_220);
        uVar34 = (ulong)local_220 | 1;
        if ((local_220[0] & 1) != 0) {
          uVar34 = local_210;
        }
        FUN_005c7b18(&local_1f0,&local_200,pbVar24,uVar34,param_4);
        if ((local_220[0] & 1) != 0) {
          (**(code **)(*local_208 + 0x18))(local_208,local_210,local_220[0] & 0xfffffffffffffffe,1);
        }
        if (local_1f8 != 0) {
          std::__shared_weak_count::__release_weak();
        }
        lVar26 = *param_5;
        if (lVar26 == 0) {
          FUN_005de04c(&local_1f0,1);
        }
        else if (*(char *)(lVar26 + 0x40) == '\0') {
          lVar33 = *(long *)(lVar26 + 0x10);
          *(undefined1 *)(lVar26 + 0x40) = 1;
          nn::os::LockMutex((MutexType *)(lVar33 + 0x38));
          *(long **)(lVar33 + 0x60) = plStack_1e8;
          *(ulong *)(lVar33 + 0x58) = local_1f0;
          plStack_1e8 = (long *)0x0;
          local_1f0 = 0;
          *(long **)(lVar33 + 0x80) = local_1c8;
          *(undefined8 *)(lVar33 + 0x78) = local_1d0;
          *(long **)(lVar33 + 0x70) = plStack_1d8;
          *(ulong *)(lVar33 + 0x68) = local_1e0;
          local_1e0 = 0;
          plStack_1d8 = (long *)0x0;
          local_1d0 = 0;
          *(long **)(lVar33 + 0xa0) = local_1a8;
          *(undefined8 *)(lVar33 + 0x98) = local_1b0;
          *(undefined8 *)(lVar33 + 0x90) = uStack_1b8;
          *(ulong *)(lVar33 + 0x88) = local_1c0;
          local_1c0 = 0;
          uStack_1b8 = 0;
          local_1b0 = 0;
          *(long *)(lVar33 + 0xb0) = lStack_198;
          *(long *)(lVar33 + 0xa8) = local_1a0;
          *(long **)(lVar33 + 0xc0) = plStack_188;
          *(long *)(lVar33 + 0xb8) = local_190;
          local_1a0 = 0;
          lStack_198 = 0;
          local_190 = 0;
          *(undefined1 *)(lVar33 + 200) = 1;
          nn::os::SignalEvent((EventType *)(lVar33 + 0x10));
          nn::os::UnlockMutex((MutexType *)(lVar33 + 0x38));
        }
        lVar33 = local_1a0;
        lVar26 = lStack_198;
        if (local_1a0 != 0) {
          for (; lVar26 != lVar33; lVar26 = lVar26 + -0xe0) {
            FUN_005c84cc(lVar26 + -0xe0);
          }
          lStack_198 = lVar33;
          (**(code **)(*plStack_188 + 0x18))(plStack_188,local_1a0,local_190 - local_1a0,8);
        }
        if ((local_1c0 & 1) != 0) {
          (**(code **)(*local_1a8 + 0x18))(local_1a8,local_1b0,local_1c0 & 0xfffffffffffffffe,1);
        }
        if ((local_1e0 & 1) != 0) {
          (**(code **)(*local_1c8 + 0x18))(local_1c8,local_1d0,local_1e0 & 0xfffffffffffffffe,1);
        }
        if (plStack_1e8 != (long *)0x0) {
          std::__shared_weak_count::__release_weak();
        }
      }
      puVar28 = (ulong *)(local_1738 & 0xfffffffffffffffe);
      if ((local_1738 & 1) == 0) {
        if (((ulong)ppppppplStack_d8 & 1) != 0) goto LAB_005c04e4;
LAB_005c0468:
        if (puVar28 == (ulong *)((ulong)ppppppplStack_d8 & 0xfffffffffffffffe)) goto LAB_005c0244;
LAB_005c0470:
                    /* try { // try from 005c0470 to 005c047b has its CatchHandler @ 005c1d80 */
        FUN_0060c664(auStack_1740,&ppppppplStack_e0);
      }
      else {
        puVar28 = (ulong *)*puVar28;
        if (((ulong)ppppppplStack_d8 & 1) == 0) goto LAB_005c0468;
LAB_005c04e4:
        if (puVar28 != *(ulong **)((ulong)ppppppplStack_d8 & 0xfffffffffffffffe)) goto LAB_005c0470;
LAB_005c0244:
                    /* try { // try from 005c0244 to 005c024f has its CatchHandler @ 005c1d80 */
        FUN_0060c6a0(auStack_1740,&ppppppplStack_e0);
      }
      FUN_005c7d48(&local_f0);
      uVar32 = local_1750;
    }
    FUN_0060ac04(&local_170);
    FUN_0060ac04(&ppppppplStack_e0);
    if (local_b90 == '\0') {
      local_b90 = '\x01';
                    /* try { // try from 005c00f0 to 005c00f7 has its CatchHandler @ 005c1d74 */
      (**(code **)(**(long **)(local_bb0 + 0x20) + 0x40))(*(long **)(local_bb0 + 0x20),0);
    }
    local_88 = (long **)0x0;
    uStack_80 = 0;
    local_f0 = puVar19;
    plStack_e8 = plVar20;
    ppppppplStack_e0 = (long *******)&ppppppplStack_e0;
    ppppppplStack_d8 = (long *******)&ppppppplStack_e0;
    (*(code *)(*local_bf0)[2])(local_bf0,&uStack_c8);
    local_88 = &plStack_e8;
    thunk_FUN_006c4e40(&local_f0);
    local_f0 = puVar19;
    FUN_006c4274(&plStack_e8);
    plVar4 = local_be8;
    pplVar13 = local_bf0;
    local_bf0 = (long **)0x0;
    local_be8 = (long *)0x0;
    (*(code *)(*pplVar13)[6])(&local_1630);
    if (plVar4 != (long *)0x0) {
      plVar2 = plVar4 + 1;
      do {
        lVar26 = *plVar2;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *plVar2 = lVar26 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__shared_weak_count::__release_weak();
      }
    }
    puVar3 = (undefined8 *)(PTR_DAT_047cbb30 + 0x10);
    plStack_e8 = (long *)(PTR_DAT_047cbb38 + 0x10);
    local_88 = (long **)0x0;
    uStack_80 = 0;
    local_f0 = puVar3;
    ppppppplStack_e0 = (long *******)&ppppppplStack_e0;
    ppppppplStack_d8 = (long *******)&ppppppplStack_e0;
    (**(code **)(*plVar17 + 0x10))(plVar17,&uStack_c8);
    local_88 = &plStack_e8;
    thunk_FUN_006c4e40(&local_f0);
    local_f0 = puVar3;
    FUN_006c4274(&plStack_e8);
    pcVar18 = (char *)(**(code **)(*plVar17 + 0x38))(plVar17);
    iVar31 = (int)local_1630;
    switch((int)local_1630) {
    case 2:
    case 0xd:
    case 0x10:
      if ((1 < local_1808) && ((*pbVar29 & 1) == 0)) break;
LAB_005c0508:
      if ((*pbVar29 & 1) == 0) {
        if ((local_1808 < local_1640) &&
           (lVar26 = std::chrono::steady_clock::now(), lVar26 - local_1858 < local_1648 * 1000000))
        {
          local_1808 = local_1808 + 1;
          goto LAB_005c055c;
        }
        local_17a0[0] = (int)local_1630;
        pvStack_1790 = pvStack_1620;
        local_1798 = (byte)local_1628;
        uStack_1797 = (undefined7)(local_1628 >> 8);
        local_1788 = local_1618;
        if (local_1608 == '\0') goto LAB_005c07d8;
        local_1758 = local_15e8;
        plStack_1780 = local_1610;
        local_1768 = local_15f8;
        goto joined_r0x005c0720;
      }
      local_1858 = std::chrono::steady_clock::now();
      FUN_00254574(&local_15e0);
      local_1808 = 1;
LAB_005c055c:
      lVar26 = FUN_002544fc(&local_15e0);
      FUN_00253b78(&local_f0,&local_1658);
      FUN_0025397c(&local_1f0,local_f0);
      if (plStack_e8 != (long *)0x0) {
        plVar17 = plStack_e8 + 1;
        do {
          lVar33 = *plVar17;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar11) {
            *plVar17 = lVar33 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar33 == 0) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_180 = (long **)*param_6;
      plStack_178 = (long *)param_6[1];
      if (plStack_178 != (long *)0x0) {
        plVar17 = plStack_178 + 1;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar11) {
            *plVar17 = *plVar17 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      local_170 = local_1f0;
      plStack_168 = plStack_1e8;
      if (plStack_1e8 != (long *)0x0) {
        plVar17 = plStack_1e8 + 1;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar11) {
            *plVar17 = *plVar17 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      FUN_00246ff8(&local_f0,&local_180,2);
      if (plStack_168 != (long *)0x0) {
        plVar17 = plStack_168 + 1;
        do {
          lVar33 = *plVar17;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar11) {
            *plVar17 = lVar33 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar33 == 0) {
          (**(code **)(*plStack_168 + 0x10))(plStack_168);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_178 != (long *)0x0) {
        plVar17 = plStack_178 + 1;
        do {
          lVar33 = *plVar17;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar11) {
            *plVar17 = lVar33 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar33 == 0) {
          (**(code **)(*plStack_178 + 0x10))(plStack_178);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_220[0] = lVar26 * 1000000;
      FUN_00247264(&local_180,&local_f0);
      FUN_00248930(local_220,&local_180);
      if (plStack_178 == (long *)0x0) {
LAB_005c08bc:
        uVar34 = FUN_006c50c4(param_6);
        if ((uVar34 & 1) != 0) goto LAB_005c08c8;
LAB_005c094c:
        uVar34 = FUN_006c50c4(&local_1f0);
        bVar11 = false;
        if (((*(long *)(lVar30 + 8) != 0) && ((uVar34 & 1) != 0)) && (*(long *)(lVar30 + 0x18) != 0)
           ) {
          FUN_002568bc(lVar30 + 8);
          bVar11 = false;
        }
      }
      else {
        plVar17 = plStack_178 + 1;
        do {
          lVar26 = *plVar17;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar11) {
            *plVar17 = lVar26 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar26 != 0) goto LAB_005c08bc;
        (**(code **)(*plStack_178 + 0x10))(plStack_178);
        std::__shared_weak_count::__release_weak();
        uVar34 = FUN_006c50c4(param_6);
        if ((uVar34 & 1) == 0) goto LAB_005c094c;
LAB_005c08c8:
        local_1788 = local_1618;
        pvStack_1790 = pvStack_1620;
        sVar21 = local_1628;
        local_17a0[0] = (int)local_1630;
        pvStack_1620 = (void *)0x0;
        local_1618 = (long *)0x0;
        local_1628 = 0;
        local_1798 = (byte)sVar21;
        uStack_1797 = (undefined7)(sVar21 >> 8);
        plStack_1780 = local_1610;
        local_1778 = '\0';
        if (local_1608 == '\0') {
          bVar11 = true;
        }
        else {
          local_1770 = local_1600;
          uStack_1760 = uStack_15f0;
          local_1768 = local_15f8;
          local_1758 = local_15e8;
          if (local_15e8 == 0) {
            local_1770 = &local_1768;
          }
          else {
            *(long **)(local_15f8 + 0x10) = &local_1768;
            local_15f8 = 0;
            local_15e8 = 0;
            local_1600 = &local_15f8;
          }
          bVar11 = true;
          local_1778 = '\x01';
        }
      }
      FUN_00247104(&local_f0);
      if (plStack_1e8 != (long *)0x0) {
        plVar17 = plStack_1e8 + 1;
        do {
          lVar26 = *plVar17;
          cVar10 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar9) {
            *plVar17 = lVar26 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
          std::__shared_weak_count::__release_weak();
        }
      }
      goto LAB_005c0740;
    case 0xe:
      if (local_1638 != '\0' || *pcVar18 != '\0') goto LAB_005c0508;
      iVar31 = 0xe;
    }
    pvStack_1790 = pvStack_1620;
    local_1798 = (byte)local_1628;
    uStack_1797 = (undefined7)(local_1628 >> 8);
    local_1788 = local_1618;
    local_17a0[0] = iVar31;
    if (local_1608 == '\0') {
LAB_005c07d8:
      local_1618 = (long *)0x0;
      pvStack_1620 = (void *)0x0;
      local_1628 = 0;
      local_1778 = '\0';
      bVar11 = true;
      plStack_1780 = local_1610;
    }
    else {
      local_1758 = local_15e8;
      plStack_1780 = local_1610;
      local_1768 = local_15f8;
joined_r0x005c0720:
      if (local_1758 == 0) {
        local_1770 = &local_1768;
        local_15f8 = local_1768;
        local_15e8 = local_1758;
      }
      else {
        *(long **)(local_1768 + 0x10) = &local_1768;
        local_15f8 = 0;
        local_15e8 = 0;
        local_1770 = local_1600;
        local_1600 = &local_15f8;
      }
      local_1618 = (long *)0x0;
      pvStack_1620 = (void *)0x0;
      local_1628 = 0;
      bVar11 = true;
      local_1778 = '\x01';
      local_1610 = plStack_1780;
      uStack_1760 = uStack_15f0;
LAB_005c0740:
      if (local_1608 != '\0') {
        FUN_01cfa44c(&local_1600,local_15f8);
      }
      if ((local_1628 & 1) != 0) {
        (**(code **)(*local_1610 + 0x18))(local_1610,local_1618,local_1628 & 0xfffffffffffffffe,1);
      }
    }
    if (plVar14 != (long *)0x0) {
      plVar17 = plVar14 + 1;
      do {
        lVar26 = *plVar17;
        cVar10 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar9) {
          *plVar17 = lVar26 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plVar15 != (long *)0x0) {
      plVar17 = plVar15 + 1;
      do {
        lVar26 = *plVar17;
        cVar10 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar9) {
          *plVar17 = lVar26 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_005c6898(&local_be0);
    if (local_be8 != (long *)0x0) {
      plVar17 = local_be8 + 1;
      do {
        lVar26 = *plVar17;
        cVar10 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar9) {
          *plVar17 = lVar26 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*local_be8 + 0x10))(local_be8);
        std::__shared_weak_count::__release_weak();
      }
    }
  } while (!bVar11);
  if (local_1650 == (long *)0x0) {
LAB_005c0a04:
    FUN_0024736c(auStack_16d0);
    if (local_17a0[0] != 0) goto LAB_005c0a14;
LAB_005c0b90:
    switch(local_16d8) {
    case 3:
      puVar5 = PTR_DAT_047ce710;
      if (local_16e8 != (undefined *)0x0) {
        puVar5 = local_16e8;
      }
      FUN_005e957c(&local_15e0,puVar5,auStack_1718);
      local_be8 = (long *)0x0;
      local_be0 = FUN_01cf7e20();
      local_bd8 = (long *)0x0;
      local_bf0 = &local_be8;
      FUN_005bde30(param_1,&local_15e0,0,&DAT_03c886bc,&local_bf0);
      FUN_01cfa44c(&local_bf0,local_be8);
      lVar30 = lStack_1588;
      if (lStack_1588 == 0) goto LAB_005c1684;
      for (; local_1580 != lVar30; local_1580 = local_1580 + -0xa8) {
        FUN_005bdd78(local_1580 + -0xa8);
      }
      break;
    case 4:
      lStack_1588 = 0;
      local_1590 = 0;
      local_1578 = 0;
      local_1580 = 0;
      uStack_15d8 = 0;
      local_15e0 = 0;
      plStack_15a8 = (long *)0x0;
      local_15b0 = 0;
      uStack_1598 = 0;
      uStack_15a0 = 0;
      plStack_15c8 = (long *)0x0;
      local_15d0 = 0;
      local_15b8 = 0;
      local_15c0 = (ulong *)0x0;
      plStack_15c8 = (long *)FUN_01cf7e20();
      local_15d0 = 0;
      local_15e0 = 0;
      uStack_15d8 = 0;
      plStack_15a8 = (long *)FUN_01cf7e20();
      local_15b0 = 0;
      local_15c0 = (ulong *)0x0;
      local_15b8 = 0;
      local_1578 = 0;
      lStack_1588 = 0;
      local_1580 = 0;
      local_1570 = (long *)FUN_01cf7e20();
      FUN_005f74c0(&local_bf0,pbVar24);
                    /* try { // try from 005c0e40 to 005c0e53 has its CatchHandler @ 005c1a94 */
      puVar19 = (undefined8 *)
                FUN_00263a80(&local_bd0,0,"The request has been timed out. ticketId: ",0x2a);
      plStack_e8 = (long *)puVar19[1];
      local_f0 = (undefined8 *)*puVar19;
      ppppppplStack_d8 = (long *******)puVar19[3];
      ppppppplStack_e0 = (long *******)puVar19[2];
      puVar19[1] = 0;
      puVar19[2] = 0;
      *puVar19 = 0;
      ppppppplVar6 = (long *******)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        ppppppplVar6 = ppppppplStack_e0;
      }
      FUN_00210170(&local_180,0xb0141);
      FUN_005bde30(param_1,&local_15e0,4,ppppppplVar6,&local_180);
      FUN_01cfa44c(&local_180,plStack_178);
      if (((ulong)local_f0 & 1) != 0) {
        (*(code *)(*ppppppplStack_d8)[3])
                  (ppppppplStack_d8,ppppppplStack_e0,(ulong)local_f0 & 0xfffffffffffffffe,1);
      }
      if ((local_bd0 & 1) != 0) {
        (**(code **)(*local_bb8 + 0x18))
                  (local_bb8,local_bc0,CONCAT71(auStack_bcf._0_7_,local_bd0) & 0xfffffffffffffffe,1)
        ;
      }
      lVar30 = lStack_1588;
      if (((ulong)local_bf0 & 1) != 0) {
        (**(code **)(*local_bd8 + 0x18))
                  (local_bd8,local_be0,(ulong)local_bf0 & 0xfffffffffffffffe,1);
        lVar30 = lStack_1588;
      }
      lStack_1588 = lVar30;
      lVar26 = local_1580;
      if (lVar30 == 0) goto LAB_005c1684;
      for (; lVar26 != lVar30; lVar26 = lVar26 + -0xa8) {
        FUN_005bdd78(lVar26 + -0xa8);
      }
      break;
    case 5:
      local_1570 = (long *)0x0;
      lStack_1588 = 0;
      local_1590 = 0;
      local_1578 = 0;
      local_1580 = 0;
      uStack_15d8 = 0;
      local_15e0 = 0;
      plStack_15a8 = (long *)0x0;
      local_15b0 = 0;
      uStack_1598 = 0;
      uStack_15a0 = 0;
      plStack_15c8 = (long *)0x0;
      local_15d0 = 0;
      local_15b8 = 0;
      local_15c0 = (ulong *)0x0;
      plStack_15c8 = (long *)FUN_01cf7e20();
      local_15d0 = 0;
      local_15e0 = 0;
      uStack_15d8 = 0;
      plStack_15a8 = (long *)FUN_01cf7e20();
      local_15b0 = 0;
      local_15c0 = (ulong *)0x0;
      local_15b8 = 0;
      local_1578 = 0;
      lStack_1588 = 0;
      local_1580 = 0;
      local_1570 = (long *)FUN_01cf7e20();
      puVar5 = PTR_DAT_047cc268;
      if (local_16e0 != (undefined *)0x0) {
        puVar5 = local_16e0;
      }
      uVar7 = *(undefined4 *)(puVar5 + 0x30);
      pbVar29 = *(byte **)(puVar5 + 0x28);
      if ((*pbVar29 & 1) == 0) {
        pbVar29 = pbVar29 + 1;
      }
      else {
        pbVar29 = *(byte **)(pbVar29 + 0x10);
      }
      plVar20 = (long *)FUN_01cf7e20();
      local_1618 = plVar20;
      sVar21 = strlen((char *)pbVar29);
      if (0xffffffffffffffef < sVar21) {
                    /* try { // try from 005c1804 to 005c180b has its CatchHandler @ 005c180c */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar21 < 0x17) {
        local_1630 = CONCAT71(local_1630._1_7_,(char)((int)sVar21 << 1));
        __dest = (void *)((ulong)&local_1630 | 1);
        if (sVar21 != 0) goto LAB_005c1188;
      }
      else {
        uVar34 = sVar21 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)(**(code **)(*plVar20 + 0x10))(plVar20,uVar34,1);
        local_1630 = uVar34 | 1;
        local_1628 = sVar21;
        pvStack_1620 = __dest;
LAB_005c1188:
        memcpy(__dest,pbVar29,sVar21);
      }
      *(undefined1 *)((long)__dest + sVar21) = 0;
                    /* try { // try from 005c119c to 005c11b3 has its CatchHandler @ 005c1908 */
      puVar28 = (ulong *)FUN_00263a80(&local_1630,0,"The request has failed. cause message: ",0x27);
      plStack_1e8 = (long *)puVar28[1];
      local_1f0 = *puVar28;
      plStack_1d8 = (long *)puVar28[3];
      local_1e0 = puVar28[2];
      puVar28[1] = 0;
      puVar28[2] = 0;
      *puVar28 = 0;
                    /* try { // try from 005c11c8 to 005c11df has its CatchHandler @ 005c18d0 */
      puVar19 = (undefined8 *)FUN_0020f8d0(&local_1f0,", ticketId: ",0xc);
      plStack_178 = (long *)puVar19[1];
      local_180 = (long **)*puVar19;
      plStack_168 = (long *)puVar19[3];
      local_170 = puVar19[2];
      puVar19[1] = 0;
      puVar19[2] = 0;
      *puVar19 = 0;
      FUN_005f74c0(&local_bf0,pbVar24);
      plVar20 = (long *)auStack_bcf;
      uVar34 = (ulong)(local_bd0 >> 1);
      if ((local_bd0 & 1) != 0) {
        plVar20 = local_bc0;
        uVar34 = auStack_bcf._7_8_;
      }
                    /* try { // try from 005c1224 to 005c122f has its CatchHandler @ 005c181c */
      puVar19 = (undefined8 *)FUN_0020f8d0(&local_180,plVar20,uVar34);
      plStack_e8 = (long *)puVar19[1];
      local_f0 = (undefined8 *)*puVar19;
      ppppppplStack_d8 = (long *******)puVar19[3];
      ppppppplStack_e0 = (long *******)puVar19[2];
      puVar19[1] = 0;
      puVar19[2] = 0;
      *puVar19 = 0;
      local_1650 = (long *)0x0;
      ppppppplVar6 = (long *******)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        ppppppplVar6 = ppppppplStack_e0;
      }
      local_1648 = FUN_01cf7e20();
      local_1640 = 0;
      local_1658 = &local_1650;
      FUN_005bde30(param_1,&local_15e0,uVar7,ppppppplVar6,&local_1658);
      FUN_01cfa44c(&local_1658,local_1650);
      if (((ulong)local_f0 & 1) != 0) {
        (*(code *)(*ppppppplStack_d8)[3])
                  (ppppppplStack_d8,ppppppplStack_e0,(ulong)local_f0 & 0xfffffffffffffffe,1);
      }
      if ((local_bd0 & 1) != 0) {
        (**(code **)(*local_bb8 + 0x18))
                  (local_bb8,local_bc0,CONCAT71(auStack_bcf._0_7_,local_bd0) & 0xfffffffffffffffe,1)
        ;
      }
      if (((ulong)local_bf0 & 1) != 0) {
        (**(code **)(*local_bd8 + 0x18))
                  (local_bd8,local_be0,(ulong)local_bf0 & 0xfffffffffffffffe,1);
      }
      if (((ulong)local_180 & 1) != 0) {
        (**(code **)(*plStack_168 + 0x18))
                  (plStack_168,local_170,(ulong)local_180 & 0xfffffffffffffffe,1);
      }
      if ((local_1f0 & 1) != 0) {
        (**(code **)(*plStack_1d8 + 0x18))(plStack_1d8,local_1e0,local_1f0 & 0xfffffffffffffffe,1);
      }
      lVar30 = lStack_1588;
      if ((local_1630 & 1) != 0) {
        (**(code **)(*local_1618 + 0x18))(local_1618,pvStack_1620,local_1630 & 0xfffffffffffffffe,1)
        ;
        lVar30 = lStack_1588;
      }
      lStack_1588 = lVar30;
      lVar26 = local_1580;
      if (lVar30 == 0) goto LAB_005c1684;
      for (; lVar26 != lVar30; lVar26 = lVar26 + -0xa8) {
        FUN_005bdd78(lVar26 + -0xa8);
      }
      break;
    case 6:
      lStack_1588 = 0;
      local_1590 = 0;
      local_1578 = 0;
      local_1580 = 0;
      uStack_15d8 = 0;
      local_15e0 = 0;
      plStack_15a8 = (long *)0x0;
      local_15b0 = 0;
      uStack_1598 = 0;
      uStack_15a0 = 0;
      plStack_15c8 = (long *)0x0;
      local_15d0 = 0;
      local_15b8 = 0;
      local_15c0 = (ulong *)0x0;
      plStack_15c8 = (long *)FUN_01cf7e20();
      local_15d0 = 0;
      local_15e0 = 0;
      uStack_15d8 = 0;
      plStack_15a8 = (long *)FUN_01cf7e20();
      local_15b0 = 0;
      local_15c0 = (ulong *)0x0;
      local_15b8 = 0;
      local_1578 = 0;
      lStack_1588 = 0;
      local_1580 = 0;
      local_1570 = (long *)FUN_01cf7e20();
      FUN_005f74c0(&local_bf0,pbVar24);
                    /* try { // try from 005c0f48 to 005c0f5b has its CatchHandler @ 005c19fc */
      puVar19 = (undefined8 *)
                FUN_00263a80(&local_bd0,0,"The request has been cancelled. ticketId: ",0x2a);
      plStack_e8 = (long *)puVar19[1];
      local_f0 = (undefined8 *)*puVar19;
      ppppppplStack_d8 = (long *******)puVar19[3];
      ppppppplStack_e0 = (long *******)puVar19[2];
      puVar19[1] = 0;
      puVar19[2] = 0;
      *puVar19 = 0;
      plStack_178 = (long *)0x0;
      ppppppplVar6 = (long *******)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        ppppppplVar6 = ppppppplStack_e0;
      }
      local_170 = FUN_01cf7e20();
      plStack_168 = (long *)0x0;
      local_180 = &plStack_178;
      FUN_005bde30(param_1,&local_15e0,1,ppppppplVar6,&local_180);
      FUN_01cfa44c(&local_180,plStack_178);
      if (((ulong)local_f0 & 1) != 0) {
        (*(code *)(*ppppppplStack_d8)[3])
                  (ppppppplStack_d8,ppppppplStack_e0,(ulong)local_f0 & 0xfffffffffffffffe,1);
      }
      if ((local_bd0 & 1) != 0) {
        (**(code **)(*local_bb8 + 0x18))
                  (local_bb8,local_bc0,CONCAT71(auStack_bcf._0_7_,local_bd0) & 0xfffffffffffffffe,1)
        ;
      }
      lVar30 = lStack_1588;
      if (((ulong)local_bf0 & 1) != 0) {
        (**(code **)(*local_bd8 + 0x18))
                  (local_bd8,local_be0,(ulong)local_bf0 & 0xfffffffffffffffe,1);
        lVar30 = lStack_1588;
      }
      lStack_1588 = lVar30;
      lVar26 = local_1580;
      if (lVar30 == 0) goto LAB_005c1684;
      for (; lVar26 != lVar30; lVar26 = lVar26 + -0xa8) {
        FUN_005bdd78(lVar26 + -0xa8);
      }
      break;
    default:
      lStack_1588 = 0;
      local_1590 = 0;
      local_1578 = 0;
      local_1580 = 0;
      uStack_15d8 = 0;
      local_15e0 = 0;
      plStack_15a8 = (long *)0x0;
      local_15b0 = 0;
      uStack_1598 = 0;
      uStack_15a0 = 0;
      plStack_15c8 = (long *)0x0;
      local_15d0 = 0;
      local_15b8 = 0;
      local_15c0 = (ulong *)0x0;
      plStack_15c8 = (long *)FUN_01cf7e20();
      local_15d0 = 0;
      local_15e0 = 0;
      uStack_15d8 = 0;
      plStack_15a8 = (long *)FUN_01cf7e20();
      local_15b0 = 0;
      local_15c0 = (ulong *)0x0;
      local_15b8 = 0;
      local_1578 = 0;
      lStack_1588 = 0;
      local_1580 = 0;
      local_1570 = (long *)FUN_01cf7e20();
      FUN_005f74c0(&local_bf0,pbVar24);
                    /* try { // try from 005c0cb0 to 005c0cc3 has its CatchHandler @ 005c1b2c */
      puVar19 = (undefined8 *)FUN_00263a80(&local_bd0,0,"Unknown error. ticketId: ",0x19);
      plStack_e8 = (long *)puVar19[1];
      local_f0 = (undefined8 *)*puVar19;
      ppppppplStack_d8 = (long *******)puVar19[3];
      ppppppplStack_e0 = (long *******)puVar19[2];
      puVar19[1] = 0;
      puVar19[2] = 0;
      *puVar19 = 0;
      plStack_178 = (long *)0x0;
      ppppppplVar6 = (long *******)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        ppppppplVar6 = ppppppplStack_e0;
      }
      local_170 = FUN_01cf7e20();
      plStack_168 = (long *)0x0;
      local_180 = &plStack_178;
      FUN_005bde30(param_1,&local_15e0,2,ppppppplVar6,&local_180);
      FUN_01cfa44c(&local_180,plStack_178);
      if (((ulong)local_f0 & 1) != 0) {
        (*(code *)(*ppppppplStack_d8)[3])
                  (ppppppplStack_d8,ppppppplStack_e0,(ulong)local_f0 & 0xfffffffffffffffe,1);
      }
      if ((local_bd0 & 1) != 0) {
        (**(code **)(*local_bb8 + 0x18))
                  (local_bb8,local_bc0,CONCAT71(auStack_bcf._0_7_,local_bd0) & 0xfffffffffffffffe,1)
        ;
      }
      lVar30 = lStack_1588;
      if (((ulong)local_bf0 & 1) != 0) {
        (**(code **)(*local_bd8 + 0x18))
                  (local_bd8,local_be0,(ulong)local_bf0 & 0xfffffffffffffffe,1);
        lVar30 = lStack_1588;
      }
      lStack_1588 = lVar30;
      if (lVar30 == 0) goto LAB_005c1684;
      lVar26 = local_1580;
      while (lVar26 != lVar30) {
        lVar26 = lVar26 + -0xa8;
        FUN_005bdd78(lVar26);
      }
      break;
    case 8:
      lStack_1588 = 0;
      local_1590 = 0;
      local_1578 = 0;
      local_1580 = 0;
      uStack_15d8 = 0;
      local_15e0 = 0;
      plStack_15a8 = (long *)0x0;
      local_15b0 = 0;
      uStack_1598 = 0;
      uStack_15a0 = 0;
      plStack_15c8 = (long *)0x0;
      local_15d0 = 0;
      local_15b8 = 0;
      local_15c0 = (ulong *)0x0;
      plStack_15c8 = (long *)FUN_01cf7e20();
      local_15d0 = 0;
      local_15e0 = 0;
      uStack_15d8 = 0;
      plStack_15a8 = (long *)FUN_01cf7e20();
      local_15b0 = 0;
      local_15c0 = (ulong *)0x0;
      local_15b8 = 0;
      local_1578 = 0;
      lStack_1588 = 0;
      local_1580 = 0;
      local_1570 = (long *)FUN_01cf7e20();
      FUN_005f74c0(&local_bf0,pbVar24);
                    /* try { // try from 005c105c to 005c106f has its CatchHandler @ 005c1964 */
      puVar19 = (undefined8 *)
                FUN_00263a80(&local_bd0,0,"The match has been declined. ticketId: ",0x27);
      plStack_e8 = (long *)puVar19[1];
      local_f0 = (undefined8 *)*puVar19;
      ppppppplStack_d8 = (long *******)puVar19[3];
      ppppppplStack_e0 = (long *******)puVar19[2];
      puVar19[1] = 0;
      puVar19[2] = 0;
      *puVar19 = 0;
      plStack_178 = (long *)0x0;
      ppppppplVar6 = (long *******)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        ppppppplVar6 = ppppppplStack_e0;
      }
      local_170 = FUN_01cf7e20();
      plStack_168 = (long *)0x0;
      local_180 = &plStack_178;
      FUN_005bde30(param_1,&local_15e0,10,ppppppplVar6,&local_180);
      FUN_01cfa44c(&local_180,plStack_178);
      if (((ulong)local_f0 & 1) != 0) {
        (*(code *)(*ppppppplStack_d8)[3])
                  (ppppppplStack_d8,ppppppplStack_e0,(ulong)local_f0 & 0xfffffffffffffffe,1);
      }
      if ((local_bd0 & 1) != 0) {
        (**(code **)(*local_bb8 + 0x18))
                  (local_bb8,local_bc0,CONCAT71(auStack_bcf._0_7_,local_bd0) & 0xfffffffffffffffe,1)
        ;
      }
      lVar30 = lStack_1588;
      if (((ulong)local_bf0 & 1) != 0) {
        (**(code **)(*local_bd8 + 0x18))
                  (local_bd8,local_be0,(ulong)local_bf0 & 0xfffffffffffffffe,1);
        lVar30 = lStack_1588;
      }
      lStack_1588 = lVar30;
      lVar26 = local_1580;
      if (lVar30 == 0) goto LAB_005c1684;
      for (; lVar26 != lVar30; lVar26 = lVar26 + -0xa8) {
        FUN_005bdd78(lVar26 + -0xa8);
      }
    }
  }
  else {
    plVar20 = local_1650 + 1;
    do {
      lVar30 = *plVar20;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar11) {
        *plVar20 = lVar30 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar30 != 0) goto LAB_005c0a04;
    (**(code **)(*local_1650 + 0x10))(local_1650);
    std::__shared_weak_count::__release_weak();
    FUN_0024736c(auStack_16d0);
    if (local_17a0[0] == 0) goto LAB_005c0b90;
LAB_005c0a14:
    if (local_17a0[0] == 1) {
      lStack_1588 = 0;
      local_1590 = 0;
      local_1578 = 0;
      local_1580 = 0;
      uStack_15d8 = 0;
      local_15e0 = 0;
      plStack_15a8 = (long *)0x0;
      local_15b0 = 0;
      uStack_1598 = 0;
      uStack_15a0 = 0;
      plStack_15c8 = (long *)0x0;
      local_15d0 = 0;
      local_15b8 = 0;
      local_15c0 = (ulong *)0x0;
      plStack_15c8 = (long *)FUN_01cf7e20();
      local_15d0 = 0;
      local_15e0 = 0;
      uStack_15d8 = 0;
      plStack_15a8 = (long *)FUN_01cf7e20();
      local_15b0 = 0;
      local_15c0 = (ulong *)0x0;
      local_15b8 = 0;
      local_1578 = 0;
      lStack_1588 = 0;
      local_1580 = 0;
      local_1570 = (long *)FUN_01cf7e20();
      local_be8 = (long *)0x0;
      local_be0 = FUN_01cf7e20();
      local_bd8 = (long *)0x0;
      local_bf0 = &local_be8;
      FUN_005bde30(param_1,&local_15e0,0xe,
                   "Deadline exceeded while matchmaking. See MatchmakingClient::GetMatchmakingExpireDuration()"
                   ,&local_bf0);
      FUN_01cfa44c(&local_bf0,local_be8);
      lVar30 = lStack_1588;
      lVar26 = local_1580;
      if (lStack_1588 == 0) goto LAB_005c1684;
      for (; lVar26 != lVar30; lVar26 = lVar26 + -0xa8) {
        FUN_005bdd78(lVar26 + -0xa8);
      }
    }
    else {
      lStack_1588 = 0;
      local_1590 = 0;
      local_1578 = 0;
      local_1580 = 0;
      uStack_15d8 = 0;
      local_15e0 = 0;
      plStack_15a8 = (long *)0x0;
      local_15b0 = 0;
      uStack_1598 = 0;
      uStack_15a0 = 0;
      plStack_15c8 = (long *)0x0;
      local_15d0 = 0;
      local_15b8 = 0;
      local_15c0 = (ulong *)0x0;
      plStack_15c8 = (long *)FUN_01cf7e20();
      local_15d0 = 0;
      local_15e0 = 0;
      uStack_15d8 = 0;
      plStack_15a8 = (long *)FUN_01cf7e20();
      local_15b0 = 0;
      local_15c0 = (ulong *)0x0;
      local_15b8 = 0;
      local_1578 = 0;
      lStack_1588 = 0;
      local_1580 = 0;
      local_1570 = (long *)FUN_01cf7e20();
      FUN_005c3c88(param_1,local_17a0,&local_15e0);
      lVar30 = lStack_1588;
      lVar26 = local_1580;
      if (lStack_1588 == 0) goto LAB_005c1684;
      for (; lVar26 != lVar30; lVar26 = lVar26 + -0xa8) {
        FUN_005bdd78(lVar26 + -0xa8);
      }
    }
  }
  local_1580 = lVar30;
  (**(code **)(*local_1570 + 0x18))(local_1570,lStack_1588,local_1578 - lStack_1588,8);
LAB_005c1684:
  if (((ulong)local_15c0 & 1) != 0) {
    (**(code **)(*plStack_15a8 + 0x18))
              (plStack_15a8,local_15b0,(ulong)local_15c0 & 0xfffffffffffffffe,1);
  }
  if ((local_15e0 & 1) != 0) {
    (**(code **)(*plStack_15c8 + 0x18))(plStack_15c8,local_15d0,local_15e0 & 0xfffffffffffffffe,1);
  }
  if (local_1778 != '\0') {
    FUN_01cfa44c(&local_1770,local_1768);
  }
  if ((local_1798 & 1) != 0) {
    (**(code **)(*plStack_1780 + 0x18))
              (plStack_1780,local_1788,CONCAT71(uStack_1797,local_1798) & 0xfffffffffffffffe,1);
  }
  if (local_1748 != (long *)0x0) {
    plVar20 = local_1748 + 1;
    do {
      lVar30 = *plVar20;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar11) {
        *plVar20 = lVar30 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar30 == 0) {
      (**(code **)(*local_1748 + 0x10))(local_1748);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_0060ac04(auStack_1740);
  FUN_002472b8(auStack_16d0);
  lVar30 = *param_5;
  if (lVar30 != 0) {
    uVar32 = FUN_01cf7e20();
    uVar22 = FUN_01cf7e20();
    uVar23 = FUN_01cf7e20();
    if (*(char *)(lVar30 + 0x40) == '\0') {
      lVar26 = *(long *)(lVar30 + 0x10);
      *(undefined1 *)(lVar30 + 0x40) = 1;
      nn::os::LockMutex((MutexType *)(lVar26 + 0x38));
      *(undefined1 *)(lVar26 + 200) = 1;
      *(undefined8 *)(lVar26 + 0x78) = 0;
      *(undefined8 *)(lVar26 + 0x80) = uVar32;
      *(undefined8 *)(lVar26 + 0x88) = 0;
      *(undefined8 *)(lVar26 + 0x90) = 0;
      *(undefined8 *)(lVar26 + 0x70) = 0;
      *(undefined8 *)(lVar26 + 0x68) = 0;
      *(undefined8 *)(lVar26 + 0x98) = 0;
      *(undefined8 *)(lVar26 + 0xa0) = uVar22;
      *(undefined8 *)(lVar26 + 0xb8) = 0;
      *(undefined8 *)(lVar26 + 0xc0) = uVar23;
      *(undefined8 *)(lVar26 + 0xa8) = 0;
      *(undefined8 *)(lVar26 + 0xb0) = 0;
      *(undefined8 *)(lVar26 + 0x60) = 0;
      *(undefined8 *)(lVar26 + 0x58) = 0;
      nn::os::SignalEvent((EventType *)(lVar26 + 0x10));
      nn::os::UnlockMutex((MutexType *)(lVar26 + 0x38));
    }
  }
  return;
}


