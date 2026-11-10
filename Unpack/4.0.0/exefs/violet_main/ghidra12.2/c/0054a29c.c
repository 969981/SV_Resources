/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0054a29c; name: FUN_0054a29c
 */


void FUN_0054a29c(undefined8 *param_1,long param_2,undefined8 param_3)

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
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  undefined8 *puVar24;
  long *plVar25;
  long *plVar26;
  char *pcVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  long *local_1c8;
  long *local_1b0;
  long *local_1a8;
  long *local_1a0;
  long *plStack_198;
  long *local_190;
  long *plStack_188;
  long *local_180;
  long *plStack_178;
  long local_170;
  undefined8 local_168;
  long local_160;
  undefined8 local_158;
  long lStack_150;
  undefined1 local_148;
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
  undefined8 local_80;
  long *plStack_78;
  long *local_70;
  long *local_68;
  
  plVar26 = (long *)(param_2 + 0x48);
  local_140 = *(long **)(*plVar26 + 0x238);
                    /* try { // try from 0054a2d4 to 0054a2e3 has its CatchHandler @ 0054b290 */
  FUN_0054b6cc(&local_70,&local_140);
  plVar16 = (long *)FUN_0026dfcc(param_3);
  plVar19 = local_70;
  if (*plVar16 != 0) {
    uVar17 = FUN_0026dfcc(param_3);
                    /* try { // try from 0054a300 to 0054a307 has its CatchHandler @ 0054b1c8 */
    FUN_00534960(uVar17,&local_140);
    plVar19[10] = (long)plStack_138;
    plVar19[9] = (long)local_140;
  }
  lVar28 = *(long *)(param_2 + 0x48);
                    /* try { // try from 0054a320 to 0054a323 has its CatchHandler @ 0054b24c */
  lVar18 = FUN_0058a8dc(*(undefined8 *)(param_2 + 0x40),local_70,
                        *(undefined8 *)(*(long *)(param_2 + 8) + 0x150));
  plVar30 = *(long **)(lVar28 + 0x238);
  plVar19 = (long *)(**(code **)(*plVar30 + 0x10))(plVar30,0x28,8);
  plVar16 = plVar19 + 1;
  *plVar16 = 0;
  puVar3 = PTR_DAT_047cdf00;
  plVar19[2] = 0;
  plVar19[3] = lVar18;
  plVar19[4] = (long)plVar30;
  *plVar19 = (long)(puVar3 + 0x10);
  if (*(char *)(lVar18 + 0x50) != '\0') {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0054b02c to 0054b02f has its CatchHandler @ 0054b038 */
    abort();
  }
  lVar29 = *(long *)(lVar18 + 0x18);
  lVar28 = local_70[0x3b];
  *(undefined1 *)(lVar18 + 0x50) = 1;
  bVar6 = *(byte *)(lVar29 + 1);
  bVar7 = *(byte *)(lVar29 + 3);
  bVar8 = *(byte *)(lVar29 + 4);
  bVar9 = *(byte *)(lVar29 + 2);
  bVar10 = *(byte *)(lVar29 + 0x130);
  *(undefined1 *)(lVar18 + 0x2f1) = 1;
  *(undefined1 *)(lVar18 + 0x310) = 0;
  *(uint *)(lVar18 + 0x2f4) =
       (uint)bVar6 << 5 | (uint)bVar7 << 4 | (uint)bVar8 << 6 | (uint)bVar9 << 7 | (uint)bVar10 << 8
  ;
  *(long *)(lVar18 + 0x300) = lVar29 + 0x98;
  if (bVar10 == 0) {
    *(long *)(lVar18 + 0x360) = lVar28;
                    /* try { // try from 0054a3e0 to 0054a3e3 has its CatchHandler @ 0054b038 */
    (**(code **)(**(long **)(lVar18 + 0x20) + 0x10))(*(long **)(lVar18 + 0x20),lVar18 + 0x2e8);
  }
  plStack_138 = (long *)local_70[0x3a];
  local_140 = (long *)local_70[0x39];
  local_70[0x39] = 0;
  local_70[0x3a] = 0;
  FUN_001ff970(&local_1b0,&local_140,*(undefined8 *)(local_70[0x33] + 0x240),0x10000,
               *(undefined8 *)(local_70[0x33] + 0x4b8));
  if (plStack_138 != (long *)0x0) {
    plVar30 = plStack_138 + 1;
    do {
      lVar28 = *plVar30;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar12) {
        *plVar30 = lVar28 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar14 = local_1a8;
  plVar30 = local_1b0;
  local_1b0 = (long *)0x0;
  local_1a8 = (long *)0x0;
  if (plVar30 != (long *)0x0) {
    *(undefined1 *)(plVar30 + 1) = 1;
  }
  if (*(char *)(lVar18 + 0x50) != '\x01') {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0054b030 to 0054b037 has its CatchHandler @ 0054b1cc */
    abort();
  }
  pcVar27 = *(char **)(lVar18 + 0x18);
  if (*pcVar27 != '\0') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar18 + 0x78) = local_70[0x45];
  *pcVar27 = '\x01';
  *(char **)(lVar18 + 0x68) = pcVar27 + 0xb0;
                    /* try { // try from 0054a4a8 to 0054a4ab has its CatchHandler @ 0054b1cc */
  (**(code **)(**(long **)(lVar18 + 0x20) + 0x10))(*(long **)(lVar18 + 0x20),lVar18 + 0x58);
  plStack_138 = (long *)local_70[0x44];
  local_140 = (long *)local_70[0x43];
  local_70[0x44] = 0;
  local_70[0x43] = 0;
  FUN_001ff970(&local_1b0,&local_140,*(undefined8 *)(local_70[0x3d] + 0x240),0x10000,
               *(undefined8 *)(local_70[0x3d] + 0x4b8));
  if (plStack_138 != (long *)0x0) {
    plVar1 = plStack_138 + 1;
    do {
      lVar28 = *plVar1;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar28 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar15 = local_1a8;
  plVar1 = local_1b0;
  local_1b0 = (long *)0x0;
  local_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    *(undefined1 *)(plVar1 + 1) = 1;
  }
  lVar29 = local_70[0x4f];
  lVar28 = local_70[0x59];
  plVar20 = (long *)FUN_0026dfe0(param_3);
  if (*plVar20 == 0) {
    local_1c8 = (long *)0x0;
    plVar31 = (long *)0x0;
    plVar22 = (long *)FUN_0026dfc8(param_3);
    plVar20 = (long *)*plVar22;
    plVar22 = (long *)plVar22[1];
  }
  else {
    lVar21 = std::chrono::system_clock::now();
    plVar20 = (long *)FUN_0026dfe0(param_3);
    local_1b0 = (long *)(lVar21 + *plVar20 * 1000000);
    FUN_002525b8(&local_140,plVar26,&local_1b0);
    local_1c8 = plStack_138;
    plVar31 = local_140;
    plVar22 = (long *)FUN_0026dfc8(param_3);
    plVar20 = (long *)*plVar22;
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
  if ((plVar31 == (long *)0x0) && (lVar21 = *plVar26, *(char *)(lVar21 + 0x210) == '\0')) {
    plStack_a0 = (long *)0x0;
    local_a8 = (long *)0x0;
    local_140 = plVar20;
    goto joined_r0x0054a8ac;
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
  *local_140 = (long)plVar20;
  local_140[1] = (long)plVar22;
  plStack_138 = local_130;
  if (plVar22 == (long *)0x0) {
joined_r0x0054a674:
    if (plVar31 == (long *)0x0) goto LAB_0054a6d0;
LAB_0054a698:
    FUN_0025299c(&local_1b0,plVar31);
                    /* try { // try from 0054a6a4 to 0054a6af has its CatchHandler @ 0054b064 */
    FUN_0054b294(&local_140,&local_1b0);
    if (local_1a8 == (long *)0x0) goto LAB_0054a6d0;
    plVar20 = local_1a8 + 1;
    do {
      lVar21 = *plVar20;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = lVar21 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar21 != 0) goto LAB_0054a6d0;
    (**(code **)(*local_1a8 + 0x10))(local_1a8);
    std::__shared_weak_count::__release_weak();
    lVar21 = *plVar26;
    cVar11 = *(char *)(lVar21 + 0x210);
  }
  else {
    plVar20 = plVar22 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = *plVar20 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    plStack_138 = local_140 + 2;
    plVar20 = plVar22 + 1;
    do {
      lVar21 = *plVar20;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = lVar21 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      std::__shared_weak_count::__release_weak();
      goto joined_r0x0054a674;
    }
    if (plVar31 != (long *)0x0) goto LAB_0054a698;
LAB_0054a6d0:
    lVar21 = *plVar26;
    cVar11 = *(char *)(lVar21 + 0x210);
  }
  if (cVar11 != '\0') {
    FUN_00247984(&local_1b0);
                    /* try { // try from 0054a6e8 to 0054a6f3 has its CatchHandler @ 0054b040 */
    FUN_0054b294(&local_140,&local_1b0);
    if (local_1a8 != (long *)0x0) {
      plVar20 = local_1a8 + 1;
      do {
        lVar21 = *plVar20;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar12) {
          *plVar20 = lVar21 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*local_1a8 + 0x10))(local_1a8);
        std::__shared_weak_count::__release_weak();
      }
    }
    lVar21 = *plVar26;
  }
  plVar25 = plStack_138;
  plVar2 = local_140;
  plVar20 = *(long **)(lVar21 + 0x238);
  plVar23 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x58,8);
  puVar3 = PTR_DAT_047cbac0 + 0x10;
  plVar23[2] = 0;
  plVar23[3] = (long)plVar20;
  plVar20 = plVar23 + 4;
  *plVar23 = (long)puVar3;
  plVar23[1] = 0;
  FUN_0054b8ec(plVar20,plVar2,plVar25);
  FUN_00247264(&local_1b0,plVar20);
  plVar25 = local_1a8;
  plVar2 = local_1b0;
  local_1b0 = (long *)0x0;
  local_1a8 = (long *)0x0;
  if (plVar22 != (long *)0x0) {
    plVar4 = plVar22 + 1;
    do {
      lVar21 = *plVar4;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar12) {
        *plVar4 = lVar21 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1a8 != (long *)0x0) {
    plVar22 = local_1a8 + 1;
    do {
      lVar21 = *plVar22;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar12) {
        *plVar22 = lVar21 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*local_1a8 + 0x10))(local_1a8);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar4 = local_140;
  plVar22 = plStack_138;
  if (local_140 != (long *)0x0) {
    while (plVar22 != plVar4) {
      plVar32 = (long *)plVar22[-1];
      plVar22 = plVar22 + -2;
      if (plVar32 != (long *)0x0) {
        plVar5 = plVar32 + 1;
        do {
          lVar21 = *plVar5;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar12) {
            *plVar5 = lVar21 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plVar32 + 0x10))(plVar32);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    plStack_138 = plVar4;
    (**(code **)(*local_128 + 0x18))(local_128,local_140,(long)local_130 - (long)local_140,8);
  }
  lVar21 = *plVar26;
  local_a8 = plVar20;
  plStack_a0 = plVar23;
  local_140 = plVar2;
  plVar22 = plVar25;
joined_r0x0054a8ac:
  if (plVar22 != (long *)0x0) {
    plVar20 = plVar22 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = *plVar20 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_130 = *(long **)(param_2 + 8);
  local_128 = *(long **)(param_2 + 0x10);
  if (local_128 != (long *)0x0) {
    plVar20 = (long *)((long)local_128 + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = *plVar20 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_120 = *(long **)(param_2 + 0x18);
  plStack_118 = *(long **)(param_2 + 0x20);
  if (plStack_118 != (long *)0x0) {
    plVar20 = (long *)((long)plStack_118 + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = *plVar20 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_110 = *(undefined8 *)(param_2 + 0x28);
  local_108 = *(ulong *)(param_2 + 0x30);
  if (local_108 != 0) {
    plVar20 = (long *)(local_108 + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = *plVar20 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  uVar13 = (ulong)local_100 >> 8;
  local_100 = CONCAT71((int7)uVar13,*(undefined1 *)(param_2 + 0x38));
  local_f8 = *(undefined8 *)(param_2 + 0x48);
  local_f0 = *(ulong *)(param_2 + 0x50);
  if (local_f0 != 0) {
    plVar20 = (long *)(local_f0 + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = *plVar20 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  if (local_68 != (long *)0x0) {
    plVar20 = local_68 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = *plVar20 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_d8 = plVar30;
  plStack_d0 = plVar14;
  if (plVar14 != (long *)0x0) {
    plVar20 = plVar14 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = *plVar20 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_c8 = plVar1;
  plStack_c0 = plVar15;
  if (plVar15 != (long *)0x0) {
    plVar20 = plVar15 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = *plVar20 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  if (plVar19 != (long *)0x0) {
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar12) {
        *plVar16 = *plVar16 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  if (local_1c8 != (long *)0x0) {
    plVar20 = local_1c8 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = *plVar20 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  plStack_138 = plVar22;
  local_b8 = lVar18;
  plStack_b0 = plVar19;
  local_98 = plVar31;
  plStack_90 = local_1c8;
  FUN_0054ba80(&local_80,&local_140,*(undefined8 *)(lVar21 + 0x240),0x10000,
               *(undefined8 *)(lVar21 + 0x4b8));
  FUN_0054b408(&local_140);
  plVar2 = local_68;
  plVar20 = local_70;
  if (local_68 != (long *)0x0) {
    plVar25 = local_68 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar12) {
        *plVar25 = *plVar25 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  lVar21 = 0;
  if (lVar18 != 0) {
    lVar21 = lVar18 + 0x10;
  }
  if (plVar19 != (long *)0x0) {
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar12) {
        *plVar16 = *plVar16 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  if (plVar15 != (long *)0x0) {
    plVar25 = plVar15 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar12) {
        *plVar25 = *plVar25 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  puVar24 = (undefined8 *)FUN_0026dfe0(param_3);
  local_140 = plVar20;
  plStack_138 = plVar2;
  if (plVar2 != (long *)0x0) {
    plVar20 = plVar2 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = *plVar20 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  if (plVar19 != (long *)0x0) {
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar12) {
        *plVar16 = *plVar16 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_120 = plVar1;
  plStack_118 = plVar15;
  if (plVar15 != (long *)0x0) {
    plVar20 = plVar15 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = *plVar20 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_108 = local_108 & 0xffffffffffffff00;
  local_100 = *(undefined8 *)(param_2 + 0x48);
  local_f8 = *(long *)(param_2 + 0x50);
  if (local_f8 != 0) {
    plVar20 = (long *)(local_f8 + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = *plVar20 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_f0 = local_f0 & 0xffffffffffffff00;
  local_130 = (long *)lVar21;
  local_128 = plVar19;
  local_110 = lVar29;
  plVar25 = (long *)FUN_01cf7e20();
  plStack_e0 = (long *)(**(code **)(*plVar25 + 0x10))(plVar25,0x28,8);
  plVar20 = local_68;
  puVar3 = PTR_DAT_047cdf08 + 0x10;
  plStack_e0[2] = 0;
  plStack_e0[3] = (long)plVar25;
  *plStack_e0 = (long)puVar3;
  plStack_e0[1] = 0;
  local_e8 = plStack_e0 + 4;
  *(undefined1 *)local_e8 = 0;
  if (local_1c8 != (long *)0x0) {
    plVar25 = local_1c8 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar12) {
        *plVar25 = *plVar25 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_c8 = (long *)*puVar24;
  if (local_68 != (long *)0x0) {
    plVar25 = local_68 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar12) {
        *plVar25 = *plVar25 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  plVar26 = *(long **)(*plVar26 + 0x238);
  local_d8 = plVar31;
  plStack_d0 = local_1c8;
  plStack_198 = (long *)(**(code **)(*plVar26 + 0x10))(plVar26,0x18,8);
  *plStack_198 = (long)(PTR_DAT_047cdf10 + 0x10);
  plStack_198[1] = lVar18;
  plStack_198[2] = (long)plVar19;
  if (plVar19 != (long *)0x0) {
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar12) {
        *plVar16 = *plVar16 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  if (plVar14 != (long *)0x0) {
    plVar31 = plVar14 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar12) {
        *plVar31 = *plVar31 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  if (plVar15 != (long *)0x0) {
    plVar31 = plVar15 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar12) {
        *plVar31 = *plVar31 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  puVar24 = (undefined8 *)FUN_0026dfc8(param_3);
  local_1b0 = local_70;
  local_1a8 = plVar20;
  if (plVar20 != (long *)0x0) {
    plVar31 = plVar20 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar12) {
        *plVar31 = *plVar31 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_190 = plVar30;
  plStack_188 = plVar14;
  if (plVar14 != (long *)0x0) {
    plVar30 = plVar14 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar12) {
        *plVar30 = *plVar30 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_180 = plVar1;
  plStack_178 = plVar15;
  if (plVar15 != (long *)0x0) {
    plVar30 = plVar15 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar12) {
        *plVar30 = *plVar30 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_168 = *puVar24;
  local_160 = puVar24[1];
  if (local_160 != 0) {
    plVar30 = (long *)(local_160 + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar12) {
        *plVar30 = *plVar30 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_158 = *(undefined8 *)(param_2 + 0x48);
  lStack_150 = *(long *)(param_2 + 0x50);
  if (lStack_150 != 0) {
    plVar30 = (long *)(lStack_150 + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar12) {
        *plVar30 = *plVar30 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  local_148 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[1] = plStack_78;
  *param_1 = local_80;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  local_80 = 0;
  plStack_78 = (long *)0x0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  local_1a0 = plVar26;
  local_170 = lVar28;
  FUN_0054d084(param_1 + 2,&local_140);
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  FUN_0054d26c(param_1 + 0x12,&local_1b0);
  FUN_00549ecc(&local_1b0);
  if (plVar15 != (long *)0x0) {
    plVar26 = plVar15 + 1;
    do {
      lVar28 = *plVar26;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar12) {
        *plVar26 = lVar28 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar14 != (long *)0x0) {
    plVar26 = plVar14 + 1;
    do {
      lVar28 = *plVar26;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar12) {
        *plVar26 = lVar28 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar20 != (long *)0x0) {
    plVar26 = plVar20 + 1;
    do {
      lVar28 = *plVar26;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar12) {
        *plVar26 = lVar28 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_0054a034(&local_140);
  if (plVar15 != (long *)0x0) {
    plVar26 = plVar15 + 1;
    do {
      lVar28 = *plVar26;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar12) {
        *plVar26 = lVar28 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar19 != (long *)0x0) {
    do {
      lVar28 = *plVar16;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar12) {
        *plVar16 = lVar28 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar2 != (long *)0x0) {
    plVar26 = plVar2 + 1;
    do {
      lVar28 = *plVar26;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar12) {
        *plVar26 = lVar28 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar26 = plStack_78 + 1;
    do {
      lVar28 = *plVar26;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar12) {
        *plVar26 = lVar28 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar22 != (long *)0x0) {
    plVar26 = plVar22 + 1;
    do {
      lVar28 = *plVar26;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar12) {
        *plVar26 = lVar28 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1c8 != (long *)0x0) {
    plVar26 = local_1c8 + 1;
    do {
      lVar28 = *plVar26;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar12) {
        *plVar26 = lVar28 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*local_1c8 + 0x10))(local_1c8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar15 != (long *)0x0) {
    plVar26 = plVar15 + 1;
    do {
      lVar28 = *plVar26;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar12) {
        *plVar26 = lVar28 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar14 != (long *)0x0) {
    plVar26 = plVar14 + 1;
    do {
      lVar28 = *plVar26;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar12) {
        *plVar26 = lVar28 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar19 != (long *)0x0) {
    do {
      lVar28 = *plVar16;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar12) {
        *plVar16 = lVar28 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_68 != (long *)0x0) {
    plVar19 = local_68 + 1;
    do {
      lVar28 = *plVar19;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar12) {
        *plVar19 = lVar28 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


