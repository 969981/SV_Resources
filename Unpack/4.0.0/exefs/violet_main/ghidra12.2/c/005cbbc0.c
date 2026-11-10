/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005cbbc0; name: FUN_005cbbc0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005cbbc0(undefined8 param_1,ulong *param_2,long param_3,long *param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *******ppppppplVar6;
  long *plVar7;
  int iVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  long **pplVar13;
  long *plVar14;
  byte *pbVar15;
  long *plVar16;
  uint uVar17;
  long *plVar18;
  long lVar19;
  char *pcVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  code *pcVar23;
  long lVar24;
  int *piVar25;
  ulong *puVar26;
  long lVar27;
  int iVar28;
  undefined8 uVar29;
  ulong uVar30;
  long local_1770;
  ulong local_1720;
  int local_1700 [2];
  byte local_16f8;
  undefined7 uStack_16f7;
  undefined8 uStack_16f0;
  undefined8 local_16e8;
  long *plStack_16e0;
  char local_16d8;
  long *local_16d0;
  long local_16c8;
  undefined8 uStack_16c0;
  long local_16b8;
  undefined8 local_16b0;
  long *local_16a8;
  undefined1 auStack_16a0 [8];
  ulong local_1698;
  undefined1 auStack_1678 [40];
  undefined *local_1650;
  undefined4 local_1648;
  undefined1 auStack_1640 [120];
  ulong local_15c8;
  long *local_15c0;
  byte *local_15b8;
  undefined8 local_15b0;
  long *local_15a8;
  long local_15a0;
  ulong local_1598;
  char local_1590;
  long local_1588;
  long local_1580;
  long *local_1578;
  int local_1570 [2];
  ulong local_1568;
  undefined8 uStack_1560;
  undefined8 local_1558;
  long *local_1550;
  char local_1548;
  long *local_1540;
  long local_1538;
  undefined8 uStack_1530;
  long local_1528;
  ulong local_1520;
  undefined8 uStack_1518;
  long local_1510;
  long *plStack_1508;
  undefined8 local_1500;
  undefined8 local_14f8;
  undefined8 local_14f0;
  long *plStack_14e8;
  undefined8 uStack_14e0;
  undefined8 uStack_14d8;
  undefined8 local_14d0;
  long lStack_14c8;
  long local_14c0;
  long local_14b8;
  long *local_14b0;
  undefined8 local_b40;
  undefined8 uStack_b38;
  long **local_b30;
  long *local_b28;
  undefined8 local_b20;
  long *local_b18;
  byte local_b10;
  undefined7 uStack_b0f;
  long *local_b00;
  long *local_af8;
  long local_af0;
  char local_ad0;
  byte *local_ac8;
  long *local_ac0;
  long **local_160;
  long *plStack_158;
  long local_150;
  long *plStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined8 *local_e0;
  long *plStack_d8;
  long *******ppppppplStack_d0;
  long *******ppppppplStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long **local_78;
  undefined8 local_70;
  
  pbVar22 = *(byte **)(param_3 + 0x40);
  if ((*pbVar22 & 1) == 0) {
    pbVar22 = pbVar22 + 1;
    uVar30 = *param_2;
    plVar7 = (long *)param_2[1];
  }
  else {
    pbVar22 = *(byte **)(pbVar22 + 0x10);
    uVar30 = *param_2;
    plVar7 = (long *)param_2[1];
  }
  if (plVar7 != (long *)0x0) {
    plVar18 = plVar7 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar11) {
        *plVar18 = *plVar18 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_15c8 = uVar30;
  local_15c0 = plVar7;
  local_15b8 = pbVar22;
  FUN_0024726c(auStack_1640,param_4);
  plVar18 = (long *)FUN_01cf7e20();
  local_1500 = (ulong *)0x0;
  local_1500 = (ulong *)(**(code **)(*plVar18 + 0x10))(plVar18,0x28,8);
  *local_1500 = (ulong)&PTR_LAB_044cdea8;
  local_1500[1] = (ulong)plVar18;
  local_1500[2] = uVar30;
  local_1500[3] = (ulong)plVar7;
  if (plVar7 != (long *)0x0) {
    plVar7 = plVar7 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar11) {
        *plVar7 = *plVar7 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_1500[4] = (ulong)pbVar22;
                    /* try { // try from 005cbc98 to 005cbca3 has its CatchHandler @ 005cd60c */
  FUN_00247460(auStack_1640,&local_1520);
  if (local_1500 != (ulong *)0x0) {
    if (local_1500 == &local_1520) {
      pcVar23 = *(code **)(*local_1500 + 0x10);
    }
    else {
      pcVar23 = *(code **)(*local_1500 + 0x18);
    }
    (*pcVar23)();
  }
                    /* try { // try from 005cbccc to 005cbcdb has its CatchHandler @ 005cd5c4 */
  FUN_00606d78(auStack_16a0,0);
  lVar24 = *(long *)(*param_2 + 8);
  lVar19 = std::chrono::system_clock::now();
  puVar5 = PTR_DAT_047ce7e0;
  local_1520 = lVar19 + *(long *)PTR_DAT_047ce7e0 * 1000000;
  FUN_002525b8(&local_16b0,lVar24 + 0x48,&local_1520);
  lVar24 = *(long *)(*param_2 + 8);
  uVar30 = *(ulong *)PTR_DAT_047ce6f8;
  uVar29 = *(undefined8 *)PTR_DAT_047ce700;
  FUN_0025320c(&local_1520);
  FUN_00253290(&local_1520);
  lVar19 = *(long *)(*param_2 + 8);
  local_15b0 = *(undefined8 *)(lVar24 + 0x48);
  local_15a8 = *(long **)(lVar24 + 0x50);
  if (local_15a8 != (long *)0x0) {
    plVar7 = local_15a8 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar11) {
        *plVar7 = *plVar7 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_15a0 = *(long *)PTR_DAT_047ce708 * 60000;
  local_1598 = 0xffffffffffffffff;
  local_1590 = '\0';
  local_1770 = std::chrono::steady_clock::now();
  plStack_1508 = (long *)0x4000000000000000;
  local_1520 = uVar30;
  uStack_1518 = uVar29;
  local_1510 = uVar30 * 1000000;
  FUN_0025320c(&local_b30);
  uVar17 = FUN_00253290(&local_b30);
  lVar24 = -0x26e;
  local_1500 = (ulong *)CONCAT44(local_1500._4_4_,uVar17);
  iVar28 = 1;
  piVar25 = (int *)&local_14f8;
  while( true ) {
    iVar12 = (int)lVar24;
    uVar17 = iVar12 + (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 0x26f;
    piVar25[-1] = uVar17;
    if (lVar24 == 0) break;
    iVar1 = iVar28 + 1;
    iVar28 = iVar28 + 2;
    iVar8 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965;
    lVar24 = lVar24 + 2;
    uVar17 = iVar8 + iVar1;
    *piVar25 = iVar12 + iVar8 + 0x270;
    piVar25 = piVar25 + 2;
  }
  uStack_b38 = 0;
  local_b40 = 0;
  puVar21 = (undefined8 *)(PTR_DAT_047cbb30 + 0x10);
  plVar7 = (long *)(PTR_DAT_047cbb38 + 0x10);
  local_1720 = 1;
  do {
    uVar30 = *param_2;
    FUN_0025299c(&local_160,local_16b0);
    uVar29 = *(undefined8 *)(uVar30 + 8);
    FUN_0026df54(&local_e0);
    FUN_0026df60(&local_e0,&local_160);
    FUN_005cf410(&local_b30,uVar29,param_3,&local_e0);
    if (plStack_d8 != (long *)0x0) {
      plVar18 = plStack_d8 + 1;
      do {
        lVar24 = *plVar18;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar11) {
          *plVar18 = lVar24 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plStack_158 != (long *)0x0) {
      plVar18 = plStack_158 + 1;
      do {
        lVar24 = *plVar18;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar11) {
          *plVar18 = lVar24 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar16 = local_ac0;
    pbVar15 = local_ac8;
    plVar14 = local_af8;
    plVar18 = local_b00;
    if (local_ac0 != (long *)0x0) {
      plVar2 = local_ac0 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *plVar2 = *plVar2 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    if (local_af8 != (long *)0x0) {
      plVar2 = local_af8 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *plVar2 = *plVar2 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    local_78 = (long **)0x0;
    uStack_90 = 0;
    local_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_b0 = 0;
    local_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    ppppppplStack_d0 = (long *******)0x0;
    plStack_d8 = (long *)0x0;
    uStack_c0 = 0;
    ppppppplStack_c8 = (long *******)0x0;
    local_e0 = &local_b20;
                    /* try { // try from 005cbff0 to 005cbffb has its CatchHandler @ 005cd628 */
    FUN_00606d78(&ppppppplStack_d0,0);
    local_70 = CONCAT71(local_70._1_7_,1);
    FUN_005d1748(&local_e0);
    uStack_f8 = 0;
    local_100 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_138 = 0;
    local_140 = 0;
    plStack_148 = (long *)0x0;
    local_150 = 0;
    plStack_158 = (long *)0x0;
    local_160 = (long **)0x0;
                    /* try { // try from 005cc038 to 005cc043 has its CatchHandler @ 005cd624 */
    FUN_00606d78(&local_150,0);
    local_f0 = 0;
    local_160 = (long **)0x0;
    uVar29 = local_16b0;
    while (local_16b0 = uVar29, local_e0 != (undefined8 *)0x0) {
      local_1580 = std::chrono::system_clock::now();
      local_1580 = local_1580 + *(long *)puVar5 * 1000000;
      FUN_002529a4(uVar29,&local_1580);
      puVar26 = (ulong *)(local_1698 & 0xfffffffffffffffe);
      if ((local_1698 & 1) == 0) {
        if (((ulong)ppppppplStack_c8 & 1) != 0) goto LAB_005cc268;
LAB_005cc240:
        if (puVar26 == (ulong *)((ulong)ppppppplStack_c8 & 0xfffffffffffffffe)) goto LAB_005cc1e8;
LAB_005cc248:
        FUN_006087ec(auStack_16a0,&ppppppplStack_d0);
      }
      else {
        puVar26 = (ulong *)*puVar26;
        if (((ulong)ppppppplStack_c8 & 1) == 0) goto LAB_005cc240;
LAB_005cc268:
        if (puVar26 != *(ulong **)((ulong)ppppppplStack_c8 & 0xfffffffffffffffe)) goto LAB_005cc248;
LAB_005cc1e8:
                    /* try { // try from 005cc1e8 to 005cc253 has its CatchHandler @ 005cd62c */
        FUN_00608828(auStack_16a0,&ppppppplStack_d0);
      }
      FUN_005d1748(&local_e0);
      uVar29 = local_16b0;
    }
    FUN_00606de0(&local_150);
    FUN_00606de0(&ppppppplStack_d0);
    if (local_ad0 == '\0') {
      local_ad0 = '\x01';
                    /* try { // try from 005cc084 to 005cc08b has its CatchHandler @ 005cd620 */
      (**(code **)(**(long **)(local_af0 + 0x20) + 0x40))(*(long **)(local_af0 + 0x20),0);
    }
    local_78 = (long **)0x0;
    local_70 = 0;
    local_e0 = puVar21;
    plStack_d8 = plVar7;
    ppppppplStack_d0 = (long *******)&ppppppplStack_d0;
    ppppppplStack_c8 = (long *******)&ppppppplStack_d0;
    (*(code *)(*local_b30)[2])(local_b30,&local_b8);
    local_78 = &plStack_d8;
    thunk_FUN_006c4e40(&local_e0);
    local_e0 = puVar21;
    FUN_006c4274(&plStack_d8);
    plVar2 = local_b28;
    pplVar13 = local_b30;
    local_b30 = (long **)0x0;
    local_b28 = (long *)0x0;
    (*(code *)(*pplVar13)[6])(local_1570);
    if (plVar2 != (long *)0x0) {
      plVar3 = plVar2 + 1;
      do {
        lVar24 = *plVar3;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar11) {
          *plVar3 = lVar24 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        std::__shared_weak_count::__release_weak();
      }
    }
    puVar4 = (undefined8 *)(PTR_DAT_047cbb30 + 0x10);
    plStack_d8 = (long *)(PTR_DAT_047cbb38 + 0x10);
    local_78 = (long **)0x0;
    local_70 = 0;
    local_e0 = puVar4;
    ppppppplStack_d0 = (long *******)&ppppppplStack_d0;
    ppppppplStack_c8 = (long *******)&ppppppplStack_d0;
    (**(code **)(*plVar18 + 0x10))(plVar18,&local_b8);
    local_78 = &plStack_d8;
    thunk_FUN_006c4e40(&local_e0);
    local_e0 = puVar4;
    FUN_006c4274(&plStack_d8);
    pcVar20 = (char *)(**(code **)(*plVar18 + 0x38))(plVar18);
    switch(local_1570[0]) {
    case 2:
    case 0xd:
    case 0x10:
      if ((1 < local_1720) && ((*pbVar15 & 1) == 0)) goto LAB_005cc420;
LAB_005cc288:
      if ((*pbVar15 & 1) == 0) {
        if ((local_1720 < local_1598) &&
           (lVar24 = std::chrono::steady_clock::now(), lVar24 - local_1770 < local_15a0 * 1000000))
        {
          local_1720 = local_1720 + 1;
          goto LAB_005cc2e4;
        }
        local_1700[0] = local_1570[0];
        uStack_16f0 = uStack_1560;
        local_16f8 = (byte)local_1568;
        uStack_16f7 = (undefined7)(local_1568 >> 8);
        plStack_16e0 = local_1550;
        local_16e8 = local_1558;
        if (local_1548 == '\0') goto LAB_005cc4f8;
        local_16d0 = local_1540;
        local_16c8 = local_1538;
        local_16b8 = local_1528;
        if (local_1528 != 0) {
          *(long **)(local_1538 + 0x10) = &local_16c8;
          goto LAB_005cc4bc;
        }
        local_16d0 = &local_16c8;
        goto LAB_005cc640;
      }
      local_1770 = std::chrono::steady_clock::now();
      FUN_00254574(&local_1520);
      local_1720 = 1;
LAB_005cc2e4:
      lVar24 = FUN_002544fc(&local_1520);
      FUN_00253b78(&local_e0,&local_15b0);
      FUN_0025397c(&local_1580,local_e0);
      if (plStack_d8 != (long *)0x0) {
        plVar18 = plStack_d8 + 1;
        do {
          lVar27 = *plVar18;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar11) {
            *plVar18 = lVar27 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_160 = (long **)*param_4;
      plStack_158 = (long *)param_4[1];
      if (plStack_158 != (long *)0x0) {
        plVar18 = plStack_158 + 1;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar11) {
            *plVar18 = *plVar18 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      local_150 = local_1580;
      plStack_148 = local_1578;
      if (local_1578 != (long *)0x0) {
        plVar18 = local_1578 + 1;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar11) {
            *plVar18 = *plVar18 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      FUN_00246ff8(&local_e0,&local_160,2);
      if (plStack_148 != (long *)0x0) {
        plVar18 = plStack_148 + 1;
        do {
          lVar27 = *plVar18;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar11) {
            *plVar18 = lVar27 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*plStack_148 + 0x10))(plStack_148);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_158 != (long *)0x0) {
        plVar18 = plStack_158 + 1;
        do {
          lVar27 = *plVar18;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar11) {
            *plVar18 = lVar27 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*plStack_158 + 0x10))(plStack_158);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_1588 = lVar24 * 1000000;
      FUN_00247264(&local_160,&local_e0);
      FUN_00248930(&local_1588,&local_160);
      if (plStack_158 == (long *)0x0) {
LAB_005cc56c:
        uVar30 = FUN_006c50c4(param_4);
        if ((uVar30 & 1) != 0) goto LAB_005cc578;
LAB_005cc5fc:
        uVar30 = FUN_006c50c4(&local_1580);
        bVar11 = false;
        if (((*(long *)(lVar19 + 8) != 0) && ((uVar30 & 1) != 0)) && (*(long *)(lVar19 + 0x18) != 0)
           ) {
          FUN_002568bc(lVar19 + 8);
          bVar11 = false;
        }
      }
      else {
        plVar18 = plStack_158 + 1;
        do {
          lVar24 = *plVar18;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar11) {
            *plVar18 = lVar24 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar24 != 0) goto LAB_005cc56c;
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        std::__shared_weak_count::__release_weak();
        uVar30 = FUN_006c50c4(param_4);
        if ((uVar30 & 1) == 0) goto LAB_005cc5fc;
LAB_005cc578:
        local_16e8 = local_1558;
        uStack_16f0 = uStack_1560;
        uVar30 = local_1568;
        local_1700[0] = local_1570[0];
        uStack_1560 = 0;
        local_1558 = 0;
        local_1568 = 0;
        local_16f8 = (byte)uVar30;
        uStack_16f7 = (undefined7)(uVar30 >> 8);
        plStack_16e0 = local_1550;
        local_16d8 = '\0';
        if (local_1548 == '\0') {
          bVar11 = true;
        }
        else {
          local_16d0 = local_1540;
          uStack_16c0 = uStack_1530;
          local_16b8 = local_1528;
          if (local_1528 == 0) {
            local_16d0 = &local_16c8;
          }
          else {
            *(long **)(local_16c8 + 0x10) = &local_16c8;
            local_1538 = 0;
            local_1528 = 0;
            local_1540 = &local_1538;
          }
          bVar11 = true;
          local_16d8 = '\x01';
        }
      }
      FUN_00247104(&local_e0);
      if (local_1578 != (long *)0x0) {
        plVar18 = local_1578 + 1;
        do {
          lVar24 = *plVar18;
          cVar10 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar9) {
            *plVar18 = lVar24 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*local_1578 + 0x10))(local_1578);
          std::__shared_weak_count::__release_weak();
        }
      }
      break;
    default:
LAB_005cc420:
      local_1700[0] = local_1570[0];
      uStack_16f0 = uStack_1560;
      if (local_1548 == '\0') goto LAB_005cc4f8;
LAB_005cc434:
      uStack_16f0 = uStack_1560;
      local_16d0 = local_1540;
      local_16c8 = local_1538;
      local_16b8 = local_1528;
      if (local_1528 == 0) {
        local_16d0 = &local_16c8;
      }
      else {
        *(long **)(local_1538 + 0x10) = &local_16c8;
LAB_005cc4bc:
        local_1538 = 0;
        local_1528 = 0;
        local_1540 = &local_1538;
      }
LAB_005cc640:
      local_1558 = 0;
      uStack_1560 = 0;
      local_1568 = 0;
      bVar11 = true;
      local_16d8 = '\x01';
      uStack_16c0 = uStack_1530;
      break;
    case 0xe:
      if (local_1590 != '\0' || *pcVar20 != '\0') goto LAB_005cc288;
      local_1700[0] = 0xe;
      uStack_16f0 = uStack_1560;
      local_16f8 = (byte)local_1568;
      uStack_16f7 = (undefined7)(local_1568 >> 8);
      plStack_16e0 = local_1550;
      local_16e8 = local_1558;
      if (local_1548 != '\0') goto LAB_005cc434;
LAB_005cc4f8:
      local_1558 = 0;
      uStack_1560 = 0;
      local_1568 = 0;
      local_16d8 = '\0';
      bVar11 = true;
      goto LAB_005cc65c;
    }
    if (local_1548 != '\0') {
      FUN_01cfa44c(&local_1540,local_1538);
    }
LAB_005cc65c:
    if ((local_1568 & 1) != 0) {
      (**(code **)(*local_1550 + 0x18))(local_1550,local_1558,local_1568 & 0xfffffffffffffffe,1);
    }
    if (plVar14 != (long *)0x0) {
      plVar18 = plVar14 + 1;
      do {
        lVar24 = *plVar18;
        cVar10 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar9) {
          *plVar18 = lVar24 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plVar16 != (long *)0x0) {
      plVar18 = plVar16 + 1;
      do {
        lVar24 = *plVar18;
        cVar10 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar9) {
          *plVar18 = lVar24 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_005d04d0(&local_b20);
    if (local_b28 != (long *)0x0) {
      plVar18 = local_b28 + 1;
      do {
        lVar24 = *plVar18;
        cVar10 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar9) {
          *plVar18 = lVar24 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*local_b28 + 0x10))(local_b28);
        std::__shared_weak_count::__release_weak();
      }
    }
  } while (!bVar11);
  if (local_15a8 == (long *)0x0) {
LAB_005cc7b8:
    FUN_0024736c(auStack_1640);
    if (local_1700[0] != 0) goto LAB_005cc7c8;
LAB_005cc950:
    switch(local_1648) {
    case 2:
      puVar5 = PTR_DAT_047ce710;
      if (local_1650 != (undefined *)0x0) {
        puVar5 = local_1650;
      }
      FUN_005e957c(&local_1520,puVar5,auStack_1678);
      local_b28 = (long *)0x0;
      local_b20 = FUN_01cf7e20();
      local_b18 = (long *)0x0;
      local_b30 = &local_b28;
      FUN_005bde30(param_1,&local_1520,0,&DAT_03c886bc,&local_b30);
      FUN_01cfa44c(&local_b30,local_b28);
      lVar19 = lStack_14c8;
      if (lStack_14c8 == 0) goto LAB_005cd100;
      for (; local_14c0 != lVar19; local_14c0 = local_14c0 + -0xa8) {
        FUN_005bdd78(local_14c0 + -0xa8);
      }
      break;
    case 3:
      lStack_14c8 = 0;
      local_14d0 = 0;
      local_14b8 = 0;
      local_14c0 = 0;
      uStack_1518 = 0;
      local_1520 = 0;
      plStack_14e8 = (long *)0x0;
      local_14f0 = 0;
      uStack_14d8 = 0;
      uStack_14e0 = 0;
      plStack_1508 = (long *)0x0;
      local_1510 = 0;
      local_14f8 = 0;
      local_1500 = (ulong *)0x0;
      plStack_1508 = (long *)FUN_01cf7e20();
      local_1510 = 0;
      local_1520 = 0;
      uStack_1518 = 0;
      plStack_14e8 = (long *)FUN_01cf7e20();
      local_14f0 = 0;
      local_1500 = (ulong *)0x0;
      local_14f8 = 0;
      local_14b8 = 0;
      lStack_14c8 = 0;
      local_14c0 = 0;
      local_14b0 = (long *)FUN_01cf7e20();
      FUN_005f6390(&local_b30,pbVar22);
                    /* try { // try from 005cca70 to 005cca83 has its CatchHandler @ 005cd408 */
      puVar21 = (undefined8 *)
                FUN_00263a80(&local_b10,0,"The request has been cancelled. ticketId: ",0x2a);
      plStack_d8 = (long *)puVar21[1];
      local_e0 = (undefined8 *)*puVar21;
      ppppppplStack_c8 = (long *******)puVar21[3];
      ppppppplStack_d0 = (long *******)puVar21[2];
      puVar21[1] = 0;
      puVar21[2] = 0;
      *puVar21 = 0;
      plStack_158 = (long *)0x0;
      ppppppplVar6 = (long *******)((ulong)&local_e0 | 1);
      if (((ulong)local_e0 & 1) != 0) {
        ppppppplVar6 = ppppppplStack_d0;
      }
      local_150 = FUN_01cf7e20();
      plStack_148 = (long *)0x0;
      local_160 = &plStack_158;
      FUN_005bde30(param_1,&local_1520,1,ppppppplVar6,&local_160);
      FUN_01cfa44c(&local_160,plStack_158);
      if (((ulong)local_e0 & 1) != 0) {
        (*(code *)(*ppppppplStack_c8)[3])
                  (ppppppplStack_c8,ppppppplStack_d0,(ulong)local_e0 & 0xfffffffffffffffe,1);
      }
      if ((local_b10 & 1) != 0) {
        (**(code **)(*local_af8 + 0x18))
                  (local_af8,local_b00,CONCAT71(uStack_b0f,local_b10) & 0xfffffffffffffffe,1);
      }
      lVar19 = lStack_14c8;
      if (((ulong)local_b30 & 1) != 0) {
        (**(code **)(*local_b18 + 0x18))
                  (local_b18,local_b20,(ulong)local_b30 & 0xfffffffffffffffe,1);
        lVar19 = lStack_14c8;
      }
      lStack_14c8 = lVar19;
      lVar24 = local_14c0;
      if (lVar19 == 0) goto LAB_005cd100;
      for (; lVar24 != lVar19; lVar24 = lVar24 + -0xa8) {
        FUN_005bdd78(lVar24 + -0xa8);
      }
      break;
    case 4:
      lStack_14c8 = 0;
      local_14d0 = 0;
      local_14b8 = 0;
      local_14c0 = 0;
      uStack_1518 = 0;
      local_1520 = 0;
      plStack_14e8 = (long *)0x0;
      local_14f0 = 0;
      uStack_14d8 = 0;
      uStack_14e0 = 0;
      plStack_1508 = (long *)0x0;
      local_1510 = 0;
      local_14f8 = 0;
      local_1500 = (ulong *)0x0;
      plStack_1508 = (long *)FUN_01cf7e20();
      local_1510 = 0;
      local_1520 = 0;
      uStack_1518 = 0;
      plStack_14e8 = (long *)FUN_01cf7e20();
      local_14f0 = 0;
      local_1500 = (ulong *)0x0;
      local_14f8 = 0;
      local_14b8 = 0;
      lStack_14c8 = 0;
      local_14c0 = 0;
      local_14b0 = (long *)FUN_01cf7e20();
      FUN_005f6390(&local_b30,pbVar22);
                    /* try { // try from 005ccb88 to 005ccb9b has its CatchHandler @ 005cd370 */
      puVar21 = (undefined8 *)
                FUN_00263a80(&local_b10,0,"The request has been timed out. ticketId: ",0x2a);
      plStack_d8 = (long *)puVar21[1];
      local_e0 = (undefined8 *)*puVar21;
      ppppppplStack_c8 = (long *******)puVar21[3];
      ppppppplStack_d0 = (long *******)puVar21[2];
      puVar21[1] = 0;
      puVar21[2] = 0;
      *puVar21 = 0;
      plStack_158 = (long *)0x0;
      ppppppplVar6 = (long *******)((ulong)&local_e0 | 1);
      if (((ulong)local_e0 & 1) != 0) {
        ppppppplVar6 = ppppppplStack_d0;
      }
      local_150 = FUN_01cf7e20();
      plStack_148 = (long *)0x0;
      local_160 = &plStack_158;
      FUN_005bde30(param_1,&local_1520,4,ppppppplVar6,&local_160);
      FUN_01cfa44c(&local_160,plStack_158);
      if (((ulong)local_e0 & 1) != 0) {
        (*(code *)(*ppppppplStack_c8)[3])
                  (ppppppplStack_c8,ppppppplStack_d0,(ulong)local_e0 & 0xfffffffffffffffe,1);
      }
      if ((local_b10 & 1) != 0) {
        (**(code **)(*local_af8 + 0x18))
                  (local_af8,local_b00,CONCAT71(uStack_b0f,local_b10) & 0xfffffffffffffffe,1);
      }
      lVar19 = lStack_14c8;
      if (((ulong)local_b30 & 1) != 0) {
        (**(code **)(*local_b18 + 0x18))
                  (local_b18,local_b20,(ulong)local_b30 & 0xfffffffffffffffe,1);
        lVar19 = lStack_14c8;
      }
      lStack_14c8 = lVar19;
      lVar24 = local_14c0;
      if (lVar19 == 0) goto LAB_005cd100;
      for (; lVar24 != lVar19; lVar24 = lVar24 + -0xa8) {
        FUN_005bdd78(lVar24 + -0xa8);
      }
      break;
    case 5:
      lStack_14c8 = 0;
      local_14d0 = 0;
      local_14b8 = 0;
      local_14c0 = 0;
      uStack_1518 = 0;
      local_1520 = 0;
      plStack_14e8 = (long *)0x0;
      local_14f0 = 0;
      uStack_14d8 = 0;
      uStack_14e0 = 0;
      plStack_1508 = (long *)0x0;
      local_1510 = 0;
      local_14f8 = 0;
      local_1500 = (ulong *)0x0;
      plStack_1508 = (long *)FUN_01cf7e20();
      local_1510 = 0;
      local_1520 = 0;
      uStack_1518 = 0;
      plStack_14e8 = (long *)FUN_01cf7e20();
      local_14f0 = 0;
      local_1500 = (ulong *)0x0;
      local_14f8 = 0;
      local_14b8 = 0;
      lStack_14c8 = 0;
      local_14c0 = 0;
      local_14b0 = (long *)FUN_01cf7e20();
      FUN_005f6390(&local_b30,pbVar22);
                    /* try { // try from 005ccca0 to 005cccb3 has its CatchHandler @ 005cd2d8 */
      puVar21 = (undefined8 *)FUN_00263a80(&local_b10,0,"The request has failed. ticketId: ",0x22);
      plStack_d8 = (long *)puVar21[1];
      local_e0 = (undefined8 *)*puVar21;
      ppppppplStack_c8 = (long *******)puVar21[3];
      ppppppplStack_d0 = (long *******)puVar21[2];
      puVar21[1] = 0;
      puVar21[2] = 0;
      *puVar21 = 0;
      plStack_158 = (long *)0x0;
      ppppppplVar6 = (long *******)((ulong)&local_e0 | 1);
      if (((ulong)local_e0 & 1) != 0) {
        ppppppplVar6 = ppppppplStack_d0;
      }
      local_150 = FUN_01cf7e20();
      plStack_148 = (long *)0x0;
      local_160 = &plStack_158;
      FUN_005bde30(param_1,&local_1520,0xd,ppppppplVar6,&local_160);
      FUN_01cfa44c(&local_160,plStack_158);
      if (((ulong)local_e0 & 1) != 0) {
        (*(code *)(*ppppppplStack_c8)[3])
                  (ppppppplStack_c8,ppppppplStack_d0,(ulong)local_e0 & 0xfffffffffffffffe,1);
      }
      if ((local_b10 & 1) != 0) {
        (**(code **)(*local_af8 + 0x18))
                  (local_af8,local_b00,CONCAT71(uStack_b0f,local_b10) & 0xfffffffffffffffe,1);
      }
      lVar19 = lStack_14c8;
      if (((ulong)local_b30 & 1) != 0) {
        (**(code **)(*local_b18 + 0x18))
                  (local_b18,local_b20,(ulong)local_b30 & 0xfffffffffffffffe,1);
        lVar19 = lStack_14c8;
      }
      lStack_14c8 = lVar19;
      lVar24 = local_14c0;
      if (lVar19 == 0) goto LAB_005cd100;
      for (; lVar24 != lVar19; lVar24 = lVar24 + -0xa8) {
        FUN_005bdd78(lVar24 + -0xa8);
      }
      break;
    default:
      lStack_14c8 = 0;
      local_14d0 = 0;
      local_14b8 = 0;
      local_14c0 = 0;
      uStack_1518 = 0;
      local_1520 = 0;
      plStack_14e8 = (long *)0x0;
      local_14f0 = 0;
      uStack_14d8 = 0;
      uStack_14e0 = 0;
      plStack_1508 = (long *)0x0;
      local_1510 = 0;
      local_14f8 = 0;
      local_1500 = (ulong *)0x0;
      plStack_1508 = (long *)FUN_01cf7e20();
      local_1510 = 0;
      local_1520 = 0;
      uStack_1518 = 0;
      plStack_14e8 = (long *)FUN_01cf7e20();
      local_14f0 = 0;
      local_1500 = (ulong *)0x0;
      local_14f8 = 0;
      local_14b8 = 0;
      lStack_14c8 = 0;
      local_14c0 = 0;
      local_14b0 = (long *)FUN_01cf7e20();
      FUN_005f6390(&local_b30,pbVar22);
                    /* try { // try from 005ccdb8 to 005ccdcb has its CatchHandler @ 005cd240 */
      puVar21 = (undefined8 *)FUN_00263a80(&local_b10,0,"Unknown error. ticketId: ",0x19);
      plStack_d8 = (long *)puVar21[1];
      local_e0 = (undefined8 *)*puVar21;
      ppppppplStack_c8 = (long *******)puVar21[3];
      ppppppplStack_d0 = (long *******)puVar21[2];
      puVar21[1] = 0;
      puVar21[2] = 0;
      *puVar21 = 0;
      plStack_158 = (long *)0x0;
      ppppppplVar6 = (long *******)((ulong)&local_e0 | 1);
      if (((ulong)local_e0 & 1) != 0) {
        ppppppplVar6 = ppppppplStack_d0;
      }
      local_150 = FUN_01cf7e20();
      plStack_148 = (long *)0x0;
      local_160 = &plStack_158;
      FUN_005bde30(param_1,&local_1520,2,ppppppplVar6,&local_160);
      FUN_01cfa44c(&local_160,plStack_158);
      if (((ulong)local_e0 & 1) != 0) {
        (*(code *)(*ppppppplStack_c8)[3])
                  (ppppppplStack_c8,ppppppplStack_d0,(ulong)local_e0 & 0xfffffffffffffffe,1);
      }
      if ((local_b10 & 1) != 0) {
        (**(code **)(*local_af8 + 0x18))
                  (local_af8,local_b00,CONCAT71(uStack_b0f,local_b10) & 0xfffffffffffffffe,1);
      }
      lVar19 = lStack_14c8;
      if (((ulong)local_b30 & 1) != 0) {
        (**(code **)(*local_b18 + 0x18))
                  (local_b18,local_b20,(ulong)local_b30 & 0xfffffffffffffffe,1);
        lVar19 = lStack_14c8;
      }
      lStack_14c8 = lVar19;
      if (lVar19 == 0) goto LAB_005cd100;
      lVar24 = local_14c0;
      while (lVar24 != lVar19) {
        lVar24 = lVar24 + -0xa8;
        FUN_005bdd78(lVar24);
      }
    }
  }
  else {
    plVar7 = local_15a8 + 1;
    do {
      lVar19 = *plVar7;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar11) {
        *plVar7 = lVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar19 != 0) goto LAB_005cc7b8;
    (**(code **)(*local_15a8 + 0x10))(local_15a8);
    std::__shared_weak_count::__release_weak();
    FUN_0024736c(auStack_1640);
    if (local_1700[0] == 0) goto LAB_005cc950;
LAB_005cc7c8:
    if (local_1700[0] == 1) {
                    /* try { // try from 005cc7d0 to 005cc7d7 has its CatchHandler @ 005cd540 */
      FUN_005ceea8(&local_15c8);
      lStack_14c8 = 0;
      local_14d0 = 0;
      local_14b8 = 0;
      local_14c0 = 0;
      uStack_1518 = 0;
      local_1520 = 0;
      plStack_14e8 = (long *)0x0;
      local_14f0 = 0;
      uStack_14d8 = 0;
      uStack_14e0 = 0;
      plStack_1508 = (long *)0x0;
      local_1510 = 0;
      local_14f8 = 0;
      local_1500 = (ulong *)0x0;
      plStack_1508 = (long *)FUN_01cf7e20();
      local_1510 = 0;
      local_1520 = 0;
      uStack_1518 = 0;
      plStack_14e8 = (long *)FUN_01cf7e20();
      local_14f0 = 0;
      local_1500 = (ulong *)0x0;
      local_14f8 = 0;
      local_14b8 = 0;
      lStack_14c8 = 0;
      local_14c0 = 0;
      local_14b0 = (long *)FUN_01cf7e20();
      local_b28 = (long *)0x0;
      local_b20 = FUN_01cf7e20();
      local_b18 = (long *)0x0;
      local_b30 = &local_b28;
      FUN_005bde30(param_1,&local_1520,4,"Deadline exceeded while creating a game session.",
                   &local_b30);
      FUN_01cfa44c(&local_b30,local_b28);
      lVar19 = lStack_14c8;
      lVar24 = local_14c0;
      if (lStack_14c8 == 0) goto LAB_005cd100;
      for (; lVar24 != lVar19; lVar24 = lVar24 + -0xa8) {
        FUN_005bdd78(lVar24 + -0xa8);
      }
    }
    else {
      lStack_14c8 = 0;
      local_14d0 = 0;
      local_14b8 = 0;
      local_14c0 = 0;
      uStack_1518 = 0;
      local_1520 = 0;
      plStack_14e8 = (long *)0x0;
      local_14f0 = 0;
      uStack_14d8 = 0;
      uStack_14e0 = 0;
      plStack_1508 = (long *)0x0;
      local_1510 = 0;
      local_14f8 = 0;
      local_1500 = (ulong *)0x0;
      plStack_1508 = (long *)FUN_01cf7e20();
      local_1510 = 0;
      local_1520 = 0;
      uStack_1518 = 0;
      plStack_14e8 = (long *)FUN_01cf7e20();
      local_14f0 = 0;
      local_1500 = (ulong *)0x0;
      local_14f8 = 0;
      local_14b8 = 0;
      lStack_14c8 = 0;
      local_14c0 = 0;
      local_14b0 = (long *)FUN_01cf7e20();
      FUN_005c3c88(param_1,local_1700,&local_1520);
      lVar19 = lStack_14c8;
      lVar24 = local_14c0;
      if (lStack_14c8 == 0) goto LAB_005cd100;
      for (; lVar24 != lVar19; lVar24 = lVar24 + -0xa8) {
        FUN_005bdd78(lVar24 + -0xa8);
      }
    }
  }
  local_14c0 = lVar19;
  (**(code **)(*local_14b0 + 0x18))(local_14b0,lStack_14c8,local_14b8 - lStack_14c8,8);
LAB_005cd100:
  if (((ulong)local_1500 & 1) != 0) {
    (**(code **)(*plStack_14e8 + 0x18))
              (plStack_14e8,local_14f0,(ulong)local_1500 & 0xfffffffffffffffe,1);
  }
  if ((local_1520 & 1) != 0) {
    (**(code **)(*plStack_1508 + 0x18))(plStack_1508,local_1510,local_1520 & 0xfffffffffffffffe,1);
  }
  if (local_16d8 != '\0') {
    FUN_01cfa44c(&local_16d0,local_16c8);
  }
  if ((local_16f8 & 1) != 0) {
    (**(code **)(*plStack_16e0 + 0x18))
              (plStack_16e0,local_16e8,CONCAT71(uStack_16f7,local_16f8) & 0xfffffffffffffffe,1);
  }
  if (local_16a8 != (long *)0x0) {
    plVar7 = local_16a8 + 1;
    do {
      lVar19 = *plVar7;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar11) {
        *plVar7 = lVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_16a8 + 0x10))(local_16a8);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00606de0(auStack_16a0);
  FUN_002472b8(auStack_1640);
  if (local_15c0 != (long *)0x0) {
    plVar7 = local_15c0 + 1;
    do {
      lVar19 = *plVar7;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar11) {
        *plVar7 = lVar19 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_15c0 + 0x10))(local_15c0);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


