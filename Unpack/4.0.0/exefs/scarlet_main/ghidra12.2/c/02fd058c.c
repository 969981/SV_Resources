/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fd058c; name: FUN_02fd058c
 */


void FUN_02fd058c(long param_1,long param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  ushort uVar10;
  int iVar11;
  char cVar12;
  bool bVar13;
  undefined8 uVar14;
  long *plVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined4 *puVar24;
  undefined8 *puVar25;
  long lVar26;
  uint *puVar27;
  bool bVar28;
  uint uVar29;
  uint uVar30;
  long *plVar31;
  long lVar32;
  uint *puVar33;
  int *piVar34;
  uint *puVar35;
  uint uVar36;
  long lVar37;
  undefined8 *puVar38;
  uint uVar39;
  uint uVar40;
  long lVar41;
  uint *puVar42;
  long lVar43;
  long *plVar44;
  undefined8 *puVar45;
  uint *puVar46;
  uint *puVar47;
  uint *puVar48;
  uint uVar49;
  undefined2 local_1ad4;
  undefined2 local_1ad0;
  undefined2 local_1ac4;
  uint *local_1a80;
  short local_1a74;
  long local_1a38 [2];
  undefined8 *local_1a28;
  uint *local_1a20;
  uint local_1a18;
  int local_1a14;
  long local_1a10;
  long local_1a08;
  int local_1a00;
  uint local_19fc;
  long local_19f8;
  uint local_19f0;
  undefined8 *local_19e8;
  undefined8 auStack_19e0 [10];
  undefined4 local_198c;
  undefined4 local_18f0;
  undefined4 local_17ec;
  undefined4 local_16e8;
  undefined4 local_1698;
  undefined4 local_1644;
  undefined4 local_1624;
  undefined4 local_1500;
  undefined4 local_14b0;
  undefined4 local_1444;
  undefined4 local_1320;
  undefined4 local_12d0;
  undefined4 local_12ac;
  undefined4 local_12a8;
  undefined8 uStack_12a0;
  undefined1 auStack_1298 [24];
  long local_1280;
  uint *local_1278;
  uint local_1270;
  undefined8 *local_1268;
  uint *local_1260;
  long local_1258;
  int local_1250;
  uint local_124c;
  long local_1248;
  uint *local_1240;
  uint local_1238;
  undefined8 *local_1230;
  long local_1210;
  uint *local_1208;
  uint local_1200;
  undefined8 *local_11f8;
  long local_11f0;
  undefined8 *local_11e8;
  uint *local_11e0;
  uint local_11d8;
  uint local_11d4;
  long local_11c8;
  undefined8 *local_11c0;
  uint *local_11b8;
  uint local_11b0;
  uint local_11ac;
  long local_11a0;
  undefined8 *local_1198;
  uint *local_1190;
  uint local_1188;
  uint local_1184;
  long *local_1178;
  long *local_1170;
  int local_178;
  undefined8 local_170;
  long local_168;
  undefined8 local_160;
  uint *local_158;
  uint local_150;
  uint local_14c;
  long local_140;
  undefined8 local_138;
  uint *local_130;
  uint local_128;
  uint local_124;
  long local_118;
  undefined8 local_110;
  uint *local_108;
  uint local_100;
  uint local_fc;
  long local_f0;
  undefined8 local_e8;
  uint *local_e0;
  uint local_d8;
  uint local_d4;
  long local_c8;
  undefined8 local_c0;
  uint *local_b8;
  uint local_b0;
  uint local_ac;
  int local_a0;
  long local_98;
  undefined8 local_90;
  uint *local_88;
  uint local_80;
  uint local_7c;
  int local_70;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    return;
  }
  plVar44 = *(long **)(param_2 + 8);
  if (plVar44 == (long *)0x0) {
    lVar32 = tpidr_el0;
    lVar20 = *(long *)(lVar32 + 0x1000b8);
    if (lVar20 == 0) {
      lVar20 = FUN_00e5d3b4();
      *(long *)(lVar32 + 0x1000b8) = lVar20;
    }
    plVar44 = *(long **)(lVar20 + 0x3e0);
    if (plVar44 != (long *)0x0) goto LAB_02fd05e8;
    bVar13 = true;
  }
  else {
LAB_02fd05e8:
    lVar32 = *plVar44;
    if (*(code **)(lVar32 + 0x18) != (code *)0x0) {
      (**(code **)(lVar32 + 0x18))("NarrowPhase",0xb,*(undefined8 *)(lVar32 + 0x28));
    }
    puVar45 = (undefined8 *)plVar44[2];
    uVar21 = (long)puVar45 + 0x17U & 0xfffffffffffffff8;
    if ((uVar21 <= (ulong)plVar44[3]) && (plVar44[2] = uVar21, puVar45 != (undefined8 *)0x0)) {
      *puVar45 = "TtNarrowPhase";
      uVar14 = nn::os::GetSystemTick();
      puVar45[1] = uVar14;
    }
    if (((*(byte *)(lVar32 + 0x38) & 1) != 0) && (plVar44[6] != 0)) {
      puVar45 = (undefined8 *)plVar44[2];
      uVar21 = (long)puVar45 + 0x17U & 0xfffffffffffffff8;
      if ((uVar21 <= (ulong)plVar44[3]) && (plVar44[2] = uVar21, puVar45 != (undefined8 *)0x0)) {
        *puVar45 = &DAT_03c4e575;
        puVar45[1] = *(undefined8 *)(plVar44[6] + 8);
      }
    }
    lVar32 = *plVar44;
    if (*(code **)(lVar32 + 0x18) != (code *)0x0) {
      (**(code **)(lVar32 + 0x18))("GridTask",8,*(undefined8 *)(lVar32 + 0x28));
      if (*(code **)(lVar32 + 0x18) != (code *)0x0) {
        (**(code **)(lVar32 + 0x18))("Process",7,*(undefined8 *)(lVar32 + 0x28));
      }
    }
    puVar45 = (undefined8 *)plVar44[2];
    uVar21 = (long)puVar45 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar21 <= (ulong)plVar44[3]) && (plVar44[2] = uVar21, puVar45 != (undefined8 *)0x0)) {
      *puVar45 = "LtGridTask";
      puVar45[2] = "StProcess";
      uVar14 = nn::os::GetSystemTick();
      puVar45[1] = uVar14;
    }
    if (((*(byte *)(lVar32 + 0x38) & 1) != 0) && (plVar44[6] != 0)) {
      puVar45 = (undefined8 *)plVar44[2];
      uVar21 = (long)puVar45 + 0x17U & 0xfffffffffffffff8;
      if ((uVar21 <= (ulong)plVar44[3]) && (plVar44[2] = uVar21, puVar45 != (undefined8 *)0x0)) {
        *puVar45 = &DAT_03c4e575;
        bVar13 = false;
        puVar45[1] = *(undefined8 *)(plVar44[6] + 8);
        goto LAB_02fd0744;
      }
    }
    bVar13 = false;
  }
LAB_02fd0744:
  plVar31 = *(long **)(param_1 + 0xa8);
  puVar1 = (uint *)(plVar31 + 0x22);
  uVar40 = *(uint *)(plVar31 + 0x22);
  uVar21 = (ulong)uVar40 & 0x1ff;
  DataMemoryBarrier(2,3);
  uVar16 = *puVar1;
  if (uVar16 == uVar40) {
    cVar12 = '\x01';
    bVar28 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar28) {
      *puVar1 = uVar40 + 0x200 & 0xfffffe00 | puVar1[uVar21 + 1];
      cVar12 = ExclusiveMonitorsStatus();
    }
    if (cVar12 != '\0') goto LAB_02fd0790;
    bVar28 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_02fd0790:
    bVar28 = false;
  }
  if (bVar28) {
    puVar35 = puVar1 + uVar21 + 1;
  }
  else {
    do {
      uVar21 = (ulong)(uVar16 & 0x1ff);
      DataMemoryBarrier(2,3);
      uVar40 = *puVar1;
      if (uVar40 == uVar16) {
        cVar12 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar28) {
          *puVar1 = uVar16 + 0x200 & 0xfffffe00 | *(uint *)((long)plVar31 + uVar21 * 4 + 0x114);
          cVar12 = ExclusiveMonitorsStatus();
        }
        if (cVar12 != '\0') goto LAB_02fd07e0;
        bVar28 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02fd07e0:
        bVar28 = false;
      }
      uVar16 = uVar40;
    } while (!bVar28);
    puVar35 = (uint *)((long)plVar31 + uVar21 * 4 + 0x114);
  }
  *puVar35 = 0x1ff;
  DataMemoryBarrier(2,3);
  puVar35 = *(uint **)(*plVar31 + uVar21 * 8);
  lVar32 = *(long *)(puVar35 + 2);
  uVar22 = *(ulong *)(lVar32 + 0x7e8);
  while (plVar15 = (long *)(uVar22 & 0xfffffffffffffffc), plVar15 != (long *)0x0) {
    uVar22 = plVar15[1];
    if ((uVar22 & 3) == 0) {
      (**(code **)(*plVar15 + 0x20))(plVar15,lVar32,uVar21);
    }
  }
  lVar20 = (long)(int)*puVar35;
  lVar32 = *(long *)(param_1 + 200);
  lVar37 = *(long *)(*(long *)(param_1 + 0xd8) + 0x100);
  lVar41 = lVar32 + lVar20 * 0x710;
  if (*(char *)(lVar41 + 0x700) == '\0') {
    *(undefined1 *)(lVar41 + 0x700) = 1;
    FUN_02f5fee0(lVar41,*(undefined8 *)(puVar35 + 0x138),
                 "hknpProcessNarrowPhaseGridTask::ThreadOutput::m_activeCacheStream");
    lVar43 = lVar32 + lVar20 * 0x710;
    FUN_02f5fee0(lVar43 + 0x200,*(undefined8 *)(puVar35 + 0x138),
                 "hknpProcessNarrowPhaseGridTask::ThreadOutput::m_inactiveCacheStream");
    puVar45 = *(undefined8 **)(puVar35 + 0x138);
    plVar15 = (long *)*puVar45;
    *(long **)(lVar43 + 0x400) = plVar15;
    *(undefined4 *)(lVar43 + 0x408) = 0;
    *(undefined1 *)(lVar43 + 0x40c) = 0;
    uVar40 = *(int *)(puVar45 + 0xb) - 1;
    if (*(int *)(puVar45 + 0xb) < 1) {
      lVar43 = puVar45[1];
      (**(code **)(*plVar15 + 0x20))(plVar15,lVar43,6);
      *(undefined4 *)(puVar45 + 0xb) = 5;
      puVar45 = (undefined8 *)(lVar43 + 0x28);
    }
    else {
      *(uint *)(puVar45 + 0xb) = uVar40;
      puVar45 = (undefined8 *)(puVar45[1] + (ulong)uVar40 * 8);
    }
    puVar45 = (undefined8 *)*puVar45;
    lVar26 = lVar32 + lVar20 * 0x710;
    puVar45[2] = 0;
    puVar45[3] = 0;
    *puVar45 = 0;
    puVar45[1] = 0;
    *(undefined4 *)((long)puVar45 + 4) = *(undefined4 *)(lVar26 + 0x418);
    iVar17 = *(int *)(lVar26 + 0x418);
    lVar43 = (long)iVar17;
    if ((int)(*(uint *)(lVar26 + 0x41c) & 0x7fffffff) <= iVar17) {
      FUN_031c25b4((long *)(lVar26 + 0x410),PTR_PTR_047d1a50,lVar43 + 1);
      iVar17 = *(int *)(lVar26 + 0x418);
    }
    *(undefined8 **)(*(long *)(lVar26 + 0x410) + (long)iVar17 * 8) = puVar45;
    lVar23 = lVar32 + lVar20 * 0x710;
    *(int *)(lVar26 + 0x418) = (int)(lVar43 + 1);
    *(char **)(lVar23 + 0x4f0) = "hknpProcessNarrowPhaseGridTask::ThreadOutput::m_deferredWork";
    puVar45 = *(undefined8 **)(puVar35 + 0x138);
    plVar15 = (long *)*puVar45;
    *(undefined4 *)(lVar23 + 0x508) = 0;
    *(long **)(lVar23 + 0x500) = plVar15;
    *(undefined1 *)(lVar23 + 0x50c) = 0;
    uVar40 = *(int *)(puVar45 + 0xb) - 1;
    if (*(int *)(puVar45 + 0xb) < 1) {
      lVar43 = puVar45[1];
      (**(code **)(*plVar15 + 0x20))(plVar15,lVar43,6);
      *(undefined4 *)(puVar45 + 0xb) = 5;
      puVar45 = (undefined8 *)(lVar43 + 0x28);
    }
    else {
      *(uint *)(puVar45 + 0xb) = uVar40;
      puVar45 = (undefined8 *)(puVar45[1] + (ulong)uVar40 * 8);
    }
    puVar45 = (undefined8 *)*puVar45;
    lVar26 = lVar32 + lVar20 * 0x710;
    puVar45[2] = 0;
    puVar45[3] = 0;
    *puVar45 = 0;
    puVar45[1] = 0;
    *(undefined4 *)((long)puVar45 + 4) = *(undefined4 *)(lVar26 + 0x518);
    iVar17 = *(int *)(lVar26 + 0x518);
    lVar43 = (long)iVar17;
    if ((int)(*(uint *)(lVar26 + 0x51c) & 0x7fffffff) <= iVar17) {
      FUN_031c25b4((long *)(lVar26 + 0x510),PTR_PTR_047d1a50,lVar43 + 1);
      iVar17 = *(int *)(lVar26 + 0x518);
    }
    *(undefined8 **)(*(long *)(lVar26 + 0x510) + (long)iVar17 * 8) = puVar45;
    lVar23 = lVar32 + lVar20 * 0x710;
    *(int *)(lVar26 + 0x518) = (int)(lVar43 + 1);
    *(char **)(lVar23 + 0x5f0) =
         "hknpProcessNarrowPhaseGridTask::ThreadOutput::m_deferedFixedManifoldsOut";
    puVar45 = *(undefined8 **)(puVar35 + 0x138);
    plVar15 = (long *)*puVar45;
    *(undefined4 *)(lVar23 + 0x608) = 0;
    *(long **)(lVar23 + 0x600) = plVar15;
    *(undefined1 *)(lVar23 + 0x60c) = 0;
    uVar40 = *(int *)(puVar45 + 0xb) - 1;
    if (*(int *)(puVar45 + 0xb) < 1) {
      lVar43 = puVar45[1];
      (**(code **)(*plVar15 + 0x20))(plVar15,lVar43,6);
      *(undefined4 *)(puVar45 + 0xb) = 5;
      puVar45 = (undefined8 *)(lVar43 + 0x28);
    }
    else {
      *(uint *)(puVar45 + 0xb) = uVar40;
      puVar45 = (undefined8 *)(puVar45[1] + (ulong)uVar40 * 8);
    }
    puVar45 = (undefined8 *)*puVar45;
    lVar26 = lVar32 + lVar20 * 0x710;
    puVar45[2] = 0;
    puVar45[3] = 0;
    *puVar45 = 0;
    puVar45[1] = 0;
    *(undefined4 *)((long)puVar45 + 4) = *(undefined4 *)(lVar26 + 0x618);
    iVar17 = *(int *)(lVar26 + 0x618);
    lVar43 = (long)iVar17;
    if ((int)(*(uint *)(lVar26 + 0x61c) & 0x7fffffff) <= iVar17) {
      FUN_031c25b4((long *)(lVar26 + 0x610),PTR_PTR_047d1a50,lVar43 + 1);
      iVar17 = *(int *)(lVar26 + 0x618);
    }
    *(undefined8 **)(*(long *)(lVar26 + 0x610) + (long)iVar17 * 8) = puVar45;
    *(int *)(lVar26 + 0x618) = (int)(lVar43 + 1);
    *(char **)(lVar32 + lVar20 * 0x710 + 0x6f0) =
         "hknpProcessNarrowPhaseGridTask::ThreadOutput::m_deferedMovingManifoldsOut";
  }
  lVar43 = lVar37 + lVar20 * 0x500;
  local_160 = *(undefined8 *)(puVar35 + 0x138);
  local_b8 = *(uint **)(*(long *)(lVar43 + 0x110) + (long)*(int *)(lVar43 + 0x118) * 8 + -8);
  local_c8 = lVar43 + 0x100;
  local_b0 = *local_b8 >> 0x10;
  local_ac = *local_b8 & 0xffff;
  *(uint *)(lVar43 + 0x108) = *(int *)(lVar43 + 0x108) - (*local_b8 & 0xffff);
  local_88 = *(uint **)(*(long *)(lVar43 + 0x210) + (long)*(int *)(lVar43 + 0x218) * 8 + -8);
  local_98 = lVar43 + 0x200;
  local_80 = *local_88 >> 0x10;
  local_7c = *local_88 & 0xffff;
  *(uint *)(lVar43 + 0x208) = *(int *)(lVar43 + 0x208) - (*local_88 & 0xffff);
  lVar32 = lVar32 + lVar20 * 0x710;
  local_158 = *(uint **)(*(long *)(lVar32 + 0x10) + (long)*(int *)(lVar32 + 0x18) * 8 + -8);
  local_150 = *local_158 >> 0x10;
  local_14c = *local_158 & 0xffff;
  *(uint *)(lVar32 + 8) = *(int *)(lVar32 + 8) - (*local_158 & 0xffff);
  local_130 = *(uint **)(*(long *)(lVar32 + 0x110) + (long)*(int *)(lVar32 + 0x118) * 8 + -8);
  local_140 = lVar32 + 0x100;
  local_128 = *local_130 >> 0x10;
  local_124 = *local_130 & 0xffff;
  local_118 = lVar32 + 0x200;
  *(uint *)(lVar32 + 0x108) = *(int *)(lVar32 + 0x108) - (*local_130 & 0xffff);
  local_110 = *(undefined8 *)(puVar35 + 0x138);
  local_108 = *(uint **)(*(long *)(lVar32 + 0x210) + (long)*(int *)(lVar32 + 0x218) * 8 + -8);
  local_100 = *local_108 >> 0x10;
  local_fc = *local_108 & 0xffff;
  *(uint *)(lVar32 + 0x208) = *(int *)(lVar32 + 0x208) - (*local_108 & 0xffff);
  local_e0 = *(uint **)(*(long *)(lVar32 + 0x310) + (long)*(int *)(lVar32 + 0x318) * 8 + -8);
  local_f0 = lVar32 + 0x300;
  local_d8 = *local_e0 >> 0x10;
  local_d4 = *local_e0 & 0xffff;
  *(uint *)(lVar32 + 0x308) = *(int *)(lVar32 + 0x308) - (*local_e0 & 0xffff);
  local_1178 = &local_c8;
  local_1170 = &local_98;
  local_168 = lVar41;
  local_138 = local_160;
  local_e8 = local_110;
  local_c0 = local_160;
  local_90 = local_160;
  (**(code **)(**(long **)(*(long *)(puVar35 + 2) + 0x658) + 0x40))
            (*(long **)(*(long *)(puVar35 + 2) + 0x658),puVar35 + 0x13a,&local_1178,2);
  local_170 = *(undefined8 *)(param_1 + 0x100);
  local_178 = 0;
  lVar32 = *(long *)(param_1 + 200) + (long)(int)*puVar35 * 0x710;
  local_1198 = *(undefined8 **)(puVar35 + 0x138);
  local_11a0 = lVar32 + 0x400;
  local_1190 = *(uint **)(*(long *)(lVar32 + 0x410) + (long)*(int *)(lVar32 + 0x418) * 8 + -8);
  local_1188 = *local_1190 >> 0x10;
  local_1184 = *local_1190 & 0xffff;
  *(uint *)(lVar32 + 0x408) = *(int *)(lVar32 + 0x408) - (*local_1190 & 0xffff);
  lVar32 = *(long *)(param_1 + 200) + (long)(int)*puVar35 * 0x710;
  local_11c0 = *(undefined8 **)(puVar35 + 0x138);
  local_11c8 = lVar32 + 0x500;
  local_11b8 = *(uint **)(*(long *)(lVar32 + 0x510) + (long)*(int *)(lVar32 + 0x518) * 8 + -8);
  local_11b0 = *local_11b8 >> 0x10;
  local_11ac = *local_11b8 & 0xffff;
  *(uint *)(lVar32 + 0x508) = *(int *)(lVar32 + 0x508) - (*local_11b8 & 0xffff);
  lVar32 = *(long *)(param_1 + 200) + (long)(int)*puVar35 * 0x710;
  local_11e8 = *(undefined8 **)(puVar35 + 0x138);
  local_11f0 = lVar32 + 0x600;
  local_11e0 = *(uint **)(*(long *)(lVar32 + 0x610) + (long)*(int *)(lVar32 + 0x618) * 8 + -8);
  local_11d8 = *local_11e0 >> 0x10;
  local_11d4 = *local_11e0 & 0xffff;
  *(uint *)(lVar32 + 0x608) = *(int *)(lVar32 + 0x608) - (*local_11e0 & 0xffff);
  local_1268 = *(undefined8 **)(puVar35 + 0x138);
  local_1210 = 0;
  local_1238 = 0;
  local_1248 = 0;
  local_1240 = (uint *)0x0;
  local_1200 = 0;
  local_1208 = (uint *)0x0;
  local_1270 = 0;
  local_1278 = (uint *)0x0;
  local_1280 = *(long *)(*(long *)(puVar35 + 2) + 0x500) + 0x120;
  local_1230 = local_1268;
  local_11f8 = local_1268;
  if ((bVar13) || ((ulong)plVar44[4] <= (ulong)plVar44[2])) {
    puVar45 = auStack_19e0;
    do {
      puVar38 = puVar45 + 2;
      puVar45[1] = 0x100000001;
      *puVar45 = 0x100000001;
      puVar45 = puVar38;
    } while (puVar38 < &uStack_12a0);
    local_198c = 0;
  }
  else {
    memset(auStack_19e0,0,0x740);
    local_198c = 1;
  }
  piVar34 = (int *)(param_1 + 0xc0);
  iVar17 = *(int *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(long *)(puVar35 + 2) + 0x51c);
  do {
    iVar18 = *piVar34;
    cVar12 = '\x01';
    bVar28 = (bool)ExclusiveMonitorPass(piVar34,0x10);
    if (bVar28) {
      *piVar34 = iVar18 + 1;
      cVar12 = ExclusiveMonitorsStatus();
    }
  } while (cVar12 != '\0');
  local_18f0 = local_198c;
  local_17ec = local_198c;
  local_16e8 = local_198c;
  local_1698 = local_198c;
  local_1644 = local_198c;
  local_1624 = local_198c;
  local_1500 = local_198c;
  local_14b0 = local_198c;
  local_1444 = local_198c;
  local_1320 = local_198c;
  local_12d0 = local_198c;
  local_12ac = local_198c;
  local_12a8 = local_198c;
  if (iVar18 < iVar17) {
    do {
      uVar16 = local_7c;
      local_1a80 = local_88;
      uVar40 = local_ac;
      puVar33 = local_b8;
      puVar45 = local_1230;
      lVar32 = *(long *)(param_1 + 0xb0) + (long)iVar18 * 8;
      uVar22 = (ulong)*(ushort *)(lVar32 + 4);
      bVar9 = *(byte *)(lVar32 + 6);
      uVar21 = (ulong)bVar9;
      local_1ac4 = (undefined2)local_b0;
      iVar18 = *(int *)(local_c8 + 8);
      local_1ad4 = (undefined2)local_80;
      local_1a74 = (short)local_7c;
      local_a0 = 0;
      iVar4 = *(int *)(local_98 + 8);
      local_70 = 0;
      lVar41 = *(long *)(param_1 + 0xe8) + uVar22 * 0x10;
      lVar32 = *(long *)(*(long *)(puVar35 + 2) + 0x500);
      iVar5 = *(int *)(lVar41 + 0xc);
      if (iVar5 == 0) {
LAB_02fd10e8:
        local_1258 = 0;
      }
      else {
        puVar46 = *(uint **)(*(long *)(param_1 + 0xe8) + uVar22 * 0x10);
        if (puVar46 == local_1240) {
          uVar10 = *(ushort *)(lVar41 + 10);
          local_1238 = local_1238 + uVar10;
        }
        else {
          if (local_1238 != 0) {
            if (local_1238 == (*local_1240 & 0xffff)) {
              *(undefined8 *)(*(long *)(local_1248 + 0x10) + (long)(int)local_1240[1] * 8) = 0;
              *(undefined1 *)(local_1248 + 0xc) = 1;
              iVar11 = *(int *)(local_1230 + 0xb);
              lVar43 = local_1230[1];
              *(uint **)(lVar43 + (long)iVar11 * 8) = local_1240;
              *(int *)(local_1230 + 0xb) = iVar11 + 1;
              if (*(int *)((long)local_1230 + 0x5c) <= iVar11 + 1) {
                (**(code **)(*(long *)*local_1230 + 0x28))
                          ((long *)*local_1230,lVar43 + (long)(iVar11 + -5) * 8,6);
                *(int *)(puVar45 + 0xb) = iVar11 + -5;
              }
            }
            else {
              do {
                cVar12 = '\x01';
                bVar28 = (bool)ExclusiveMonitorPass(local_1240,0x10);
                if (bVar28) {
                  *local_1240 = *local_1240 - local_1238;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
            }
            *(undefined1 *)(local_1248 + 0xc) = 1;
          }
          uVar10 = *(ushort *)(lVar41 + 10);
          local_1238 = (uint)uVar10;
          local_1248 = lVar32 + 0x20;
          local_1240 = puVar46;
        }
        local_124c = (uint)uVar10;
        local_1258 = (long)puVar46 + (ulong)*(ushort *)(lVar41 + 8) + 0x20;
        local_1250 = iVar5 - local_124c;
        local_1260 = puVar46;
        if (uVar10 == 0) goto LAB_02fd10e8;
      }
      puVar45 = local_11f8;
      lVar32 = lVar32 + 0x120;
      if (local_1210 != lVar32) {
        if (local_1200 != 0) {
          if (local_1200 == (*local_1208 & 0xffff)) {
            *(undefined8 *)(*(long *)(local_1210 + 0x10) + (long)(int)local_1208[1] * 8) = 0;
            *(undefined1 *)(local_1210 + 0xc) = 1;
            iVar5 = *(int *)(local_11f8 + 0xb);
            lVar41 = local_11f8[1];
            *(uint **)(lVar41 + (long)iVar5 * 8) = local_1208;
            *(int *)(local_11f8 + 0xb) = iVar5 + 1;
            if (*(int *)((long)local_11f8 + 0x5c) <= iVar5 + 1) {
              (**(code **)(*(long *)*local_11f8 + 0x28))
                        ((long *)*local_11f8,lVar41 + (long)(iVar5 + -5) * 8,6);
              *(int *)(puVar45 + 0xb) = iVar5 + -5;
            }
          }
          else {
            do {
              cVar12 = '\x01';
              bVar28 = (bool)ExclusiveMonitorPass(local_1208,0x10);
              if (bVar28) {
                *local_1208 = *local_1208 - local_1200;
                cVar12 = ExclusiveMonitorsStatus();
              }
            } while (cVar12 != '\0');
          }
          local_1200 = 0;
          *(undefined1 *)(local_1210 + 0xc) = 1;
        }
        local_1210 = lVar32;
      }
      uVar49 = local_14c;
      uVar30 = local_150;
      puVar48 = local_158;
      uVar36 = local_11ac;
      puVar47 = local_11b8;
      uVar39 = local_11d4;
      uVar29 = local_11d8;
      puVar46 = local_11e0;
      local_1a28 = *(undefined8 **)(puVar35 + 0x138);
      local_1a20 = (uint *)0x0;
      local_1a14 = 0;
      local_1a38[0] = *(long *)(*(long *)(puVar35 + 2) + 0x500) + 0x20;
      if (*(long *)(param_1 + 0xf0) == 0) {
LAB_02fd1240:
        local_1a08 = 0;
      }
      else {
        plVar15 = (long *)(*(long *)(param_1 + 0xf0) + uVar22 * 0x10);
        iVar5 = *(int *)((long)plVar15 + 0xc);
        if (iVar5 == 0) goto LAB_02fd1240;
        local_19f8 = *(long *)(*(long *)(puVar35 + 2) + 0x500);
        *(undefined1 *)(local_19f8 + 0x42c) = 1;
        local_19f8 = local_19f8 + 0x420;
        local_1a10 = *plVar15;
        local_1a08 = local_1a10 + (ulong)*(ushort *)(plVar15 + 1) + 0x20;
        uVar10 = *(ushort *)((long)plVar15 + 10);
        local_19fc = (uint)uVar10;
        local_1a00 = iVar5 - local_19fc;
        if (uVar10 == 0) {
          local_1a08 = 0;
        }
        local_19f0 = 0;
        if (local_1a10 != 0) {
          local_19f0 = (uint)uVar10;
        }
        local_19e8 = local_1a28;
      }
      local_1ad0 = (undefined2)local_11b0;
      iVar5 = *(int *)(local_168 + 8);
      iVar11 = *(int *)(local_11c8 + 8);
      puVar24 = *(undefined4 **)(*(long *)(puVar35 + 0x150) + (long)(int)puVar35[0x152] * 8 + -8);
      iVar6 = *(int *)(local_11f0 + 8);
      uVar7 = *puVar24;
      uVar8 = *puVar24;
      *(undefined4 **)(puVar35 + 0x1d0) = puVar24;
      *(short *)(puVar35 + 0x1d2) = (short)((uint)uVar7 >> 0x10);
      *(short *)((long)puVar35 + 0x74a) = (short)uVar8;
      puVar35[0x1d3] = -puVar35[0x14e];
      FUN_02f641c8(puVar35,param_1 + 0x30,uVar22,0xffffffff,param_1 + 0xe1,&local_1260,&local_1a10,
                   local_1a38,auStack_1298,&local_11a0,&local_1178,&local_168,&local_118,
                   lVar37 + lVar20 * 0x500,&local_11c8,&local_11f0,*(undefined8 *)(puVar35 + 0x13a),
                   *(undefined8 *)(puVar35 + 0x13c),auStack_19e0);
      if (puVar35[0x1d3] + puVar35[0x14e] == 0) {
        puVar35[0x1d3] = 0;
      }
      else {
        puVar27 = *(uint **)(puVar35 + 0x1d0);
        if ((puVar27 != *(uint **)(*(long *)(puVar35 + 0x150) + (long)(int)puVar35[0x152] * 8 + -8))
           && ((uint)*(ushort *)((long)puVar35 + 0x74a) == (*puVar27 & 0xffff))) {
          puVar27 = *(uint **)(puVar27 + 2);
          puVar35[0x1d2] = 0;
        }
        uVar19 = *puVar27;
        *(uint **)(puVar35 + 0x1d0) = puVar27;
        puVar35[0x1d3] = puVar35[0x1d3] + puVar35[0x14e];
        lVar32 = *(long *)(puVar35 + 0x1cc);
        *(short *)((long)puVar35 + 0x74a) = (short)uVar19 - *(short *)((long)puVar35 + 0x74a);
        puVar45 = *(undefined8 **)(*(long *)(lVar32 + 0x10) + uVar22 * 8);
        if (*(int *)((long)puVar45 + 0xc) == 0) {
          puVar45[1] = *(undefined8 *)(puVar35 + 0x1d2);
          uVar14 = *(undefined8 *)(puVar35 + 0x1d0);
          puVar45[2] = *(undefined8 *)(puVar35 + 0x1d4);
          *puVar45 = uVar14;
        }
        else {
          puVar42 = *(uint **)(*(long *)(puVar35 + 0x150) + (long)(int)puVar35[0x152] * 8 + -8);
          puVar38 = *(undefined8 **)(puVar35 + 0x138);
          uVar19 = *puVar42;
          puVar27 = puVar42;
          if (0x1e < uVar19 >> 0x17) {
            do {
              uVar19 = *(int *)(puVar38 + 0xb) - 1;
              if (*(int *)(puVar38 + 0xb) < 1) {
                lVar41 = puVar38[1];
                (**(code **)(*(long *)*puVar38 + 0x20))((long *)*puVar38,lVar41,6);
                *(undefined4 *)(puVar38 + 0xb) = 5;
                puVar25 = (undefined8 *)(lVar41 + 0x28);
              }
              else {
                *(uint *)(puVar38 + 0xb) = uVar19;
                puVar25 = (undefined8 *)(puVar38[1] + (ulong)uVar19 * 8);
              }
              puVar42 = (uint *)*puVar25;
              puVar42[4] = 0;
              puVar42[5] = 0;
              puVar42[6] = 0;
              puVar42[7] = 0;
              puVar42[0] = 0;
              puVar42[1] = 0;
              puVar42[2] = 0;
              puVar42[3] = 0;
              puVar42[1] = puVar35[0x152];
              uVar19 = puVar35[0x152];
              lVar41 = (long)(int)uVar19;
              if ((int)(puVar35[0x153] & 0x7fffffff) <= (int)uVar19) {
                FUN_031c25b4(puVar35 + 0x150,PTR_PTR_047d1a50,lVar41 + 1);
                uVar19 = puVar35[0x152];
              }
              *(uint **)(*(long *)(puVar35 + 0x150) + (long)(int)uVar19 * 8) = puVar42;
              puVar35[0x152] = (uint)(lVar41 + 1);
              *(uint **)(puVar27 + 2) = puVar42;
              uVar19 = *puVar42;
              puVar27 = puVar42;
            } while (0x1e < uVar19 >> 0x17);
          }
          uVar19 = uVar19 >> 0x10;
          do {
            cVar12 = '\x01';
            bVar28 = (bool)ExclusiveMonitorPass(puVar42,0x10);
            if (bVar28) {
              *puVar42 = *puVar42 + 0x200001;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          puVar35[0x14e] = puVar35[0x14e] + 1;
          uVar14 = *(undefined8 *)(puVar35 + 0x1d2);
          uVar3 = *(undefined8 *)(puVar35 + 0x1d4);
          puVar38 = (undefined8 *)((long)puVar42 + (ulong)uVar19 + 0x20);
          *puVar38 = *(undefined8 *)(puVar35 + 0x1d0);
          *(undefined8 *)((long)puVar42 + (ulong)uVar19 + 0x28) = uVar14;
          *(undefined8 *)((long)puVar42 + (ulong)uVar19 + 0x30) = uVar3;
          if (*(int *)((long)puVar45 + 0xc) == 0) {
            puVar45[1] = *(undefined8 *)((long)puVar42 + (ulong)uVar19 + 0x28);
            uVar14 = *puVar38;
            puVar45[2] = *(undefined8 *)((long)puVar42 + (ulong)uVar19 + 0x30);
            *puVar45 = uVar14;
          }
          else {
            *(undefined8 *)((long)puVar42 + (ulong)uVar19 + 0x30) = puVar45[2];
            puVar45[2] = puVar38;
          }
          *(undefined8 **)(*(long *)(lVar32 + 0x10) + uVar22 * 8) = puVar38;
        }
      }
      puVar24 = *(undefined4 **)(*(long *)(puVar35 + 0x150) + (long)(int)puVar35[0x152] * 8 + -8);
      uVar7 = *puVar24;
      uVar8 = *puVar24;
      *(undefined4 **)(puVar35 + 0x1d0) = puVar24;
      *(short *)(puVar35 + 0x1d2) = (short)((uint)uVar7 >> 0x10);
      *(short *)((long)puVar35 + 0x74a) = (short)uVar8;
      puVar35[0x1d3] = -puVar35[0x14e];
      iVar5 = (*(int *)(local_168 + 8) - (iVar5 + uVar49)) + local_14c;
      if (iVar5 != 0) {
        uVar19 = local_14c;
        if (local_158 != puVar48) {
          if ((uVar49 & 0xffff) == (*puVar48 & 0xffff)) {
            puVar48 = *(uint **)(puVar48 + 2);
            uVar30 = 0;
            uVar49 = 0;
          }
          if (puVar48 == local_158) {
            puVar48 = local_158;
          }
          else {
            uVar19 = *puVar48;
          }
        }
        uVar49 = uVar19 - uVar49;
      }
      puVar45 = (undefined8 *)(*(long *)(param_1 + 0xf8) + uVar22 * 0x10);
      *puVar45 = puVar48;
      *(short *)(puVar45 + 1) = (short)uVar30;
      *(short *)((long)puVar45 + 10) = (short)uVar49;
      *(int *)((long)puVar45 + 0xc) = iVar5;
      iVar5 = (*(int *)(local_11c8 + 8) - (iVar11 + uVar36)) + local_11ac;
      if (iVar5 != 0) {
        uVar49 = local_11ac;
        if (local_11b8 != puVar47) {
          if ((uVar36 & 0xffff) == (*puVar47 & 0xffff)) {
            puVar47 = *(uint **)(puVar47 + 2);
            uVar36 = 0;
            local_1ad0 = 0;
          }
          if (puVar47 == local_11b8) {
            puVar47 = local_11b8;
          }
          else {
            uVar49 = *puVar47;
          }
        }
        uVar36 = uVar49 - uVar36;
      }
      iVar11 = (*(int *)(local_11f0 + 8) - (iVar6 + uVar39)) + local_11d4;
      if (iVar11 != 0) {
        uVar49 = local_11d4;
        if (local_11e0 != puVar46) {
          if ((uVar39 & 0xffff) == (*puVar46 & 0xffff)) {
            puVar46 = *(uint **)(puVar46 + 2);
            uVar29 = 0;
            uVar39 = 0;
          }
          if (puVar46 == local_11e0) {
            puVar46 = local_11e0;
          }
          else {
            uVar49 = *puVar46;
          }
        }
        uVar39 = uVar49 - uVar39;
      }
      if ((bVar9 != 0xff) && (iVar5 != 0)) {
        lVar32 = *(long *)(*(long *)(puVar35 + 2) + 0x500);
        puVar45 = *(undefined8 **)(*(long *)(lVar32 + 0x970) + uVar21 * 8);
        if (*(int *)((long)puVar45 + 0xc) == 0) {
          *puVar45 = puVar47;
          *(short *)((long)puVar45 + 10) = (short)uVar36;
          *(int *)((long)puVar45 + 0xc) = iVar5;
          puVar45[2] = 0;
          *(undefined2 *)(puVar45 + 1) = local_1ad0;
        }
        else {
          if ((int)local_11b0 < 0xf81) {
            puVar38 = (undefined8 *)((long)local_11b8 + (long)(int)local_11b0 + 0x20);
          }
          else {
            puVar38 = (undefined8 *)FUN_031c36f4(&local_11c8);
          }
          *puVar38 = puVar47;
          *(short *)((long)puVar38 + 10) = (short)uVar36;
          *(int *)((long)puVar38 + 0xc) = iVar5;
          *(undefined2 *)(puVar38 + 1) = local_1ad0;
          puVar38[2] = 0;
          if (*(int *)((long)puVar45 + 0xc) == 0) {
            puVar45[1] = puVar38[1];
            uVar14 = *puVar38;
            puVar45[2] = puVar38[2];
            *puVar45 = uVar14;
          }
          else {
            puVar38[2] = puVar45[2];
            puVar45[2] = puVar38;
          }
          local_11b0 = local_11b0 + 0x20;
          local_11ac = local_11ac + 1;
          *(undefined8 **)(*(long *)(lVar32 + 0x970) + uVar21 * 8) = puVar38;
        }
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0xd8) + 0x80) + uVar21) = 1;
      }
      if (iVar11 != 0) {
        lVar32 = *(long *)(*(long *)(puVar35 + 2) + 0x500);
        puVar45 = *(undefined8 **)(*(long *)(lVar32 + 0x990) + uVar22 * 8);
        if (*(int *)((long)puVar45 + 0xc) == 0) {
          *puVar45 = puVar46;
          *(short *)(puVar45 + 1) = (short)uVar29;
          *(short *)((long)puVar45 + 10) = (short)uVar39;
          *(int *)((long)puVar45 + 0xc) = iVar11;
          puVar45[2] = 0;
        }
        else {
          if ((int)local_11d8 < 0xf81) {
            puVar38 = (undefined8 *)((long)local_11e0 + (long)(int)local_11d8 + 0x20);
          }
          else {
            puVar38 = (undefined8 *)FUN_031c36f4(&local_11f0);
          }
          *puVar38 = puVar46;
          *(short *)(puVar38 + 1) = (short)uVar29;
          *(short *)((long)puVar38 + 10) = (short)uVar39;
          *(int *)((long)puVar38 + 0xc) = iVar11;
          puVar38[2] = 0;
          if (*(int *)((long)puVar45 + 0xc) == 0) {
            puVar45[1] = puVar38[1];
            uVar14 = *puVar38;
            puVar45[2] = puVar38[2];
            *puVar45 = uVar14;
          }
          else {
            puVar38[2] = puVar45[2];
            puVar45[2] = puVar38;
          }
          local_11d8 = local_11d8 + 0x20;
          local_11d4 = local_11d4 + 1;
          *(undefined8 **)(*(long *)(lVar32 + 0x990) + uVar22 * 8) = puVar38;
        }
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0xd8) + 0x30) + uVar22) = 1;
      }
      iVar11 = local_70;
      iVar5 = local_a0;
      iVar18 = (*(int *)(local_c8 + 8) - (iVar18 + uVar40)) + local_ac;
      if (iVar18 != 0) {
        uVar49 = local_ac;
        if (local_b8 != puVar33) {
          if ((uVar40 & 0xffff) == (*puVar33 & 0xffff)) {
            puVar33 = *(uint **)(puVar33 + 2);
            uVar40 = 0;
            local_1ac4 = 0;
          }
          if (puVar33 == local_b8) {
            puVar33 = local_b8;
          }
          else {
            uVar49 = *puVar33;
          }
        }
        uVar40 = uVar49 - uVar40;
      }
      iVar4 = (*(int *)(local_98 + 8) - (iVar4 + uVar16)) + local_7c;
      if (iVar4 != 0) {
        uVar49 = local_7c;
        if (local_88 != local_1a80) {
          if ((uVar16 & 0xffff) == (*local_1a80 & 0xffff)) {
            local_1a80 = *(uint **)(local_1a80 + 2);
            uVar16 = 0;
            local_1ad4 = 0;
          }
          if (local_1a80 == local_88) {
            local_1a80 = local_88;
          }
          else {
            uVar49 = *local_1a80;
          }
        }
        local_1a74 = (short)uVar49 - (short)uVar16;
      }
      lVar32 = *(long *)(param_1 + 0xd8);
      puVar45 = *(undefined8 **)(*(long *)(lVar32 + 0x20) + uVar22 * 8);
      iVar6 = *(int *)((long)puVar45 + 0x1c);
      if (iVar18 == 0) {
        *(int *)(*(long *)(*(long *)(lVar32 + 0x20) + uVar22 * 8) + 0x1c) = iVar6 + local_a0;
      }
      else {
        if (*(int *)((long)puVar45 + 0xc) == 0) {
          *puVar45 = puVar33;
          *(short *)((long)puVar45 + 10) = (short)uVar40;
          *(int *)((long)puVar45 + 0xc) = iVar18;
          puVar45[2] = 0;
          *(undefined1 *)(puVar45 + 3) = 0;
          *(undefined2 *)(puVar45 + 1) = local_1ac4;
          *(undefined1 *)((long)puVar45 + 0x1b) = 0;
          *(undefined2 *)((long)puVar45 + 0x19) = 0;
          *(int *)((long)puVar45 + 0x1c) = local_a0;
        }
        else {
          if ((int)local_b0 < 0xf81) {
            puVar38 = (undefined8 *)((long)local_b8 + (long)(int)local_b0 + 0x20);
          }
          else {
            puVar38 = (undefined8 *)FUN_031c36f4(&local_c8);
          }
          *puVar38 = puVar33;
          *(short *)((long)puVar38 + 10) = (short)uVar40;
          *(int *)((long)puVar38 + 0xc) = iVar18;
          puVar38[2] = 0;
          *(undefined1 *)(puVar38 + 3) = 0;
          *(undefined2 *)(puVar38 + 1) = local_1ac4;
          *(undefined1 *)((long)puVar38 + 0x1b) = 0;
          *(undefined2 *)((long)puVar38 + 0x19) = 0;
          *(int *)((long)puVar38 + 0x1c) = iVar5;
          if (*(int *)((long)puVar45 + 0xc) == 0) {
            uVar14 = puVar38[3];
            puVar45[1] = puVar38[1];
            puVar45[3] = uVar14;
            uVar14 = *puVar38;
            puVar45[2] = puVar38[2];
            *puVar45 = uVar14;
          }
          else {
            puVar38[2] = puVar45[2];
            puVar45[2] = puVar38;
          }
          local_b0 = local_b0 + 0x20;
          local_ac = local_ac + 1;
          *(undefined8 **)(*(long *)(lVar32 + 0x20) + uVar22 * 8) = puVar38;
        }
        *(int *)(*(long *)(*(long *)(lVar32 + 0x20) + uVar22 * 8) + 0x1c) = iVar6 + iVar5;
        *(undefined1 *)(*(long *)(lVar32 + 0x30) + uVar22) = 1;
      }
      if (bVar9 != 0xff) {
        puVar45 = *(undefined8 **)(*(long *)(lVar32 + 0x70) + uVar21 * 8);
        iVar18 = *(int *)((long)puVar45 + 0x1c);
        if (iVar4 == 0) {
          *(int *)(*(long *)(*(long *)(lVar32 + 0x70) + uVar21 * 8) + 0x1c) = iVar18 + iVar11;
        }
        else {
          if (*(int *)((long)puVar45 + 0xc) == 0) {
            *puVar45 = local_1a80;
            *(undefined2 *)(puVar45 + 1) = local_1ad4;
            *(short *)((long)puVar45 + 10) = local_1a74;
            *(int *)((long)puVar45 + 0xc) = iVar4;
            puVar45[2] = 0;
            *(undefined1 *)(puVar45 + 3) = 0;
            *(undefined1 *)((long)puVar45 + 0x1b) = 0;
            *(undefined2 *)((long)puVar45 + 0x19) = 0;
            *(int *)((long)puVar45 + 0x1c) = iVar11;
          }
          else {
            if ((int)local_80 < 0xf81) {
              puVar38 = (undefined8 *)((long)local_88 + (long)(int)local_80 + 0x20);
            }
            else {
              puVar38 = (undefined8 *)FUN_031c36f4(&local_98);
            }
            *puVar38 = local_1a80;
            *(undefined2 *)(puVar38 + 1) = local_1ad4;
            *(short *)((long)puVar38 + 10) = local_1a74;
            *(int *)((long)puVar38 + 0xc) = iVar4;
            puVar38[2] = 0;
            *(undefined1 *)(puVar38 + 3) = 0;
            *(undefined1 *)((long)puVar38 + 0x1b) = 0;
            *(undefined2 *)((long)puVar38 + 0x19) = 0;
            *(int *)((long)puVar38 + 0x1c) = iVar11;
            if (*(int *)((long)puVar45 + 0xc) == 0) {
              uVar14 = puVar38[3];
              puVar45[1] = puVar38[1];
              puVar45[3] = uVar14;
              uVar14 = *puVar38;
              puVar45[2] = puVar38[2];
              *puVar45 = uVar14;
            }
            else {
              puVar38[2] = puVar45[2];
              puVar45[2] = puVar38;
            }
            local_80 = local_80 + 0x20;
            local_7c = local_7c + 1;
            *(undefined8 **)(*(long *)(lVar32 + 0x70) + uVar21 * 8) = puVar38;
          }
          *(int *)(*(long *)(*(long *)(lVar32 + 0x70) + uVar21 * 8) + 0x1c) = iVar18 + iVar11;
          *(undefined1 *)(*(long *)(lVar32 + 0x80) + uVar21) = 1;
        }
      }
      puVar45 = local_1a28;
      if (local_1a20 != (uint *)0x0) {
        if (local_1a38[0] != 0) {
          if (local_1a18 == (*local_1a20 & 0xffff)) {
            *(undefined8 *)(*(long *)(local_1a38[0] + 0x10) + (long)(int)local_1a20[1] * 8) = 0;
            *(undefined1 *)(local_1a38[0] + 0xc) = 1;
            iVar18 = *(int *)(local_1a28 + 0xb);
            lVar32 = local_1a28[1];
            *(uint **)(lVar32 + (long)iVar18 * 8) = local_1a20;
            *(int *)(local_1a28 + 0xb) = iVar18 + 1;
            if (*(int *)((long)local_1a28 + 0x5c) <= iVar18 + 1) {
              (**(code **)(*(long *)*local_1a28 + 0x28))
                        ((long *)*local_1a28,lVar32 + (long)(iVar18 + -5) * 8,6);
              *(int *)(puVar45 + 0xb) = iVar18 + -5;
            }
          }
          else {
            do {
              cVar12 = '\x01';
              bVar28 = (bool)ExclusiveMonitorPass(local_1a20,0x10);
              if (bVar28) {
                *local_1a20 = *local_1a20 - local_1a18;
                cVar12 = ExclusiveMonitorsStatus();
              }
            } while (cVar12 != '\0');
          }
        }
        local_1a20 = (uint *)0x0;
      }
      if ((local_1a14 != 0) && (*(char *)(local_1a38[0] + 0xc) == '\0')) {
        piVar2 = (int *)(local_1a38[0] + 8);
        do {
          cVar12 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar28) {
            *piVar2 = *piVar2 - local_1a14;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
      }
      do {
        iVar18 = *piVar34;
        cVar12 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(piVar34,0x10);
        if (bVar28) {
          *piVar34 = iVar18 + 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
    } while (iVar18 < iVar17);
    *(bool *)(param_1 + 0xe1) = *(int *)(*(long *)(*(long *)(puVar35 + 2) + 0x4a8) + 0x1c) != 0;
    FUN_02f70d9c(auStack_19e0,plVar44);
  }
  else {
    *(bool *)(param_1 + 0xe1) = *(int *)(*(long *)(*(long *)(puVar35 + 2) + 0x4a8) + 0x1c) != 0;
  }
  puVar45 = local_1230;
  if (local_1238 != 0) {
    if (local_1238 == (*local_1240 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_1248 + 0x10) + (long)(int)local_1240[1] * 8) = 0;
      *(undefined1 *)(local_1248 + 0xc) = 1;
      iVar17 = *(int *)(local_1230 + 0xb);
      lVar32 = local_1230[1];
      *(uint **)(lVar32 + (long)iVar17 * 8) = local_1240;
      *(int *)(local_1230 + 0xb) = iVar17 + 1;
      if (*(int *)((long)local_1230 + 0x5c) <= iVar17 + 1) {
        (**(code **)(*(long *)*local_1230 + 0x28))
                  ((long *)*local_1230,lVar32 + (long)(iVar17 + -5) * 8,6);
        *(int *)(puVar45 + 0xb) = iVar17 + -5;
      }
    }
    else {
      do {
        cVar12 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(local_1240,0x10);
        if (bVar28) {
          *local_1240 = *local_1240 - local_1238;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
    }
    local_1238 = 0;
    *(undefined1 *)(local_1248 + 0xc) = 1;
  }
  puVar45 = local_11f8;
  local_1248 = 0;
  local_1230 = (undefined8 *)0x0;
  if (local_1200 != 0) {
    if (local_1200 == (*local_1208 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_1210 + 0x10) + (long)(int)local_1208[1] * 8) = 0;
      *(undefined1 *)(local_1210 + 0xc) = 1;
      iVar17 = *(int *)(local_11f8 + 0xb);
      lVar32 = local_11f8[1];
      *(uint **)(lVar32 + (long)iVar17 * 8) = local_1208;
      *(int *)(local_11f8 + 0xb) = iVar17 + 1;
      if (*(int *)((long)local_11f8 + 0x5c) <= iVar17 + 1) {
        (**(code **)(*(long *)*local_11f8 + 0x28))
                  ((long *)*local_11f8,lVar32 + (long)(iVar17 + -5) * 8,6);
        *(int *)(puVar45 + 0xb) = iVar17 + -5;
      }
    }
    else {
      do {
        cVar12 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(local_1208,0x10);
        if (bVar28) {
          *local_1208 = *local_1208 - local_1200;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
    }
    local_1200 = 0;
    *(undefined1 *)(local_1210 + 0xc) = 1;
  }
  puVar45 = local_1268;
  local_1210 = 0;
  local_11f8 = (undefined8 *)0x0;
  if (local_1270 != 0) {
    if (local_1270 == (*local_1278 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_1280 + 0x10) + (long)(int)local_1278[1] * 8) = 0;
      *(undefined1 *)(local_1280 + 0xc) = 1;
      iVar17 = *(int *)(local_1268 + 0xb);
      lVar32 = local_1268[1];
      *(uint **)(lVar32 + (long)iVar17 * 8) = local_1278;
      *(int *)(local_1268 + 0xb) = iVar17 + 1;
      if (*(int *)((long)local_1268 + 0x5c) <= iVar17 + 1) {
        (**(code **)(*(long *)*local_1268 + 0x28))
                  ((long *)*local_1268,lVar32 + (long)(iVar17 + -5) * 8,6);
        *(int *)(puVar45 + 0xb) = iVar17 + -5;
      }
    }
    else {
      do {
        cVar12 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(local_1278,0x10);
        if (bVar28) {
          *local_1278 = *local_1278 - local_1270;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
    }
    local_1270 = 0;
    *(undefined1 *)(local_1280 + 0xc) = 1;
  }
  local_1280 = 0;
  local_1268 = (undefined8 *)0x0;
  if (local_178 != 0) {
    FUN_02f63610(local_170,&local_1178);
    local_178 = 0;
  }
  puVar45 = local_1198;
  if (local_1184 == 0) {
    piVar34 = (int *)(local_11a0 + 0x18);
    iVar17 = *piVar34;
    if (iVar17 < 2) goto LAB_02fd2024;
    iVar18 = *(int *)(local_1198 + 0xb);
    lVar20 = *(long *)(*(long *)(local_11a0 + 0x10) + (long)(iVar17 + -2) * 8);
    lVar32 = local_1198[1];
    *(undefined8 *)(lVar32 + (long)iVar18 * 8) =
         *(undefined8 *)(*(long *)(local_11a0 + 0x10) + (long)(iVar17 + -1) * 8);
    *(int *)(local_1198 + 0xb) = iVar18 + 1;
    if (*(int *)((long)local_1198 + 0x5c) <= iVar18 + 1) {
      (**(code **)(*(long *)*local_1198 + 0x28))
                ((long *)*local_1198,lVar32 + (long)(iVar18 + -5) * 8,6);
      *(int *)(puVar45 + 0xb) = iVar18 + -5;
    }
    *(undefined8 *)(lVar20 + 8) = 0;
    uVar40 = 0xffffffff;
  }
  else {
LAB_02fd2024:
    piVar34 = (int *)(local_11a0 + 8);
    local_1190[2] = 0;
    local_1190[3] = 0;
    *local_1190 = *local_1190 & 0xffff0000 | local_1184 & 0xffff;
    *local_1190 = *local_1190 & 0xffff | local_1188 << 0x10;
    uVar40 = local_1184;
  }
  puVar45 = local_11c0;
  *piVar34 = *piVar34 + uVar40;
  local_11a0 = 0;
  local_1190 = (uint *)0x0;
  if (local_11ac == 0) {
    piVar34 = (int *)(local_11c8 + 0x18);
    iVar17 = *piVar34;
    if (iVar17 < 2) goto LAB_02fd20dc;
    iVar18 = *(int *)(local_11c0 + 0xb);
    lVar20 = *(long *)(*(long *)(local_11c8 + 0x10) + (long)(iVar17 + -2) * 8);
    lVar32 = local_11c0[1];
    *(undefined8 *)(lVar32 + (long)iVar18 * 8) =
         *(undefined8 *)(*(long *)(local_11c8 + 0x10) + (long)(iVar17 + -1) * 8);
    *(int *)(local_11c0 + 0xb) = iVar18 + 1;
    if (*(int *)((long)local_11c0 + 0x5c) <= iVar18 + 1) {
      (**(code **)(*(long *)*local_11c0 + 0x28))
                ((long *)*local_11c0,lVar32 + (long)(iVar18 + -5) * 8,6);
      *(int *)(puVar45 + 0xb) = iVar18 + -5;
    }
    *(undefined8 *)(lVar20 + 8) = 0;
    uVar40 = 0xffffffff;
  }
  else {
LAB_02fd20dc:
    piVar34 = (int *)(local_11c8 + 8);
    local_11b8[2] = 0;
    local_11b8[3] = 0;
    *local_11b8 = *local_11b8 & 0xffff0000 | local_11ac & 0xffff;
    *local_11b8 = *local_11b8 & 0xffff | local_11b0 << 0x10;
    uVar40 = local_11ac;
  }
  puVar45 = local_11e8;
  *piVar34 = *piVar34 + uVar40;
  local_11c8 = 0;
  local_11b8 = (uint *)0x0;
  if (local_11d4 == 0) {
    piVar34 = (int *)(local_11f0 + 0x18);
    iVar17 = *piVar34;
    if (iVar17 < 2) goto LAB_02fd2194;
    lVar32 = local_11e8[1];
    lVar20 = *(long *)(*(long *)(local_11f0 + 0x10) + (long)(iVar17 + -2) * 8);
    iVar18 = *(int *)(local_11e8 + 0xb);
    *(undefined8 *)(lVar32 + (long)iVar18 * 8) =
         *(undefined8 *)(*(long *)(local_11f0 + 0x10) + (long)(iVar17 + -1) * 8);
    *(int *)(local_11e8 + 0xb) = iVar18 + 1;
    if (*(int *)((long)local_11e8 + 0x5c) <= iVar18 + 1) {
      (**(code **)(*(long *)*local_11e8 + 0x28))
                ((long *)*local_11e8,lVar32 + (long)(iVar18 + -5) * 8,6);
      *(int *)(puVar45 + 0xb) = iVar18 + -5;
    }
    *(undefined8 *)(lVar20 + 8) = 0;
    uVar40 = 0xffffffff;
  }
  else {
LAB_02fd2194:
    piVar34 = (int *)(local_11f0 + 8);
    local_11e0[2] = 0;
    local_11e0[3] = 0;
    *local_11e0 = *local_11e0 & 0xffff0000 | local_11d4 & 0xffff;
    *local_11e0 = *local_11e0 & 0xffff | local_11d8 << 0x10;
    uVar40 = local_11d4;
  }
  *piVar34 = *piVar34 + uVar40;
  local_11f0 = 0;
  local_11e0 = (uint *)0x0;
  if (!bVar13) {
    lVar32 = *plVar44;
    if (((*(byte *)(lVar32 + 0x38) & 1) != 0) && (plVar44[6] != 0)) {
      puVar45 = (undefined8 *)plVar44[2];
      uVar21 = (long)puVar45 + 0x17U & 0xfffffffffffffff8;
      if ((uVar21 <= (ulong)plVar44[3]) && (plVar44[2] = uVar21, puVar45 != (undefined8 *)0x0)) {
        *puVar45 = &DAT_03c4e575;
        puVar45[1] = *(undefined8 *)(plVar44[6] + 8);
      }
    }
    puVar45 = (undefined8 *)plVar44[2];
    uVar21 = (long)puVar45 + 0x17U & 0xfffffffffffffff8;
    if ((uVar21 <= (ulong)plVar44[3]) && (plVar44[2] = uVar21, puVar45 != (undefined8 *)0x0)) {
      *puVar45 = &DAT_03c3697b;
      uVar14 = nn::os::GetSystemTick();
      puVar45[1] = uVar14;
    }
    if (*(code **)(lVar32 + 0x20) != (code *)0x0) {
      (**(code **)(lVar32 + 0x20))(*(undefined8 *)(lVar32 + 0x28));
      if (*(code **)(lVar32 + 0x20) != (code *)0x0) {
        (**(code **)(lVar32 + 0x20))(*(undefined8 *)(lVar32 + 0x28));
      }
    }
  }
  puVar45 = local_11e8;
  if (local_11f0 != 0) {
    if (local_11d4 == 0) {
      piVar34 = (int *)(local_11f0 + 0x18);
      iVar17 = *piVar34;
      if (iVar17 < 2) goto LAB_02fd22f4;
      lVar32 = local_11e8[1];
      lVar20 = *(long *)(*(long *)(local_11f0 + 0x10) + (long)(iVar17 + -2) * 8);
      iVar18 = *(int *)(local_11e8 + 0xb);
      *(undefined8 *)(lVar32 + (long)iVar18 * 8) =
           *(undefined8 *)(*(long *)(local_11f0 + 0x10) + (long)(iVar17 + -1) * 8);
      *(int *)(local_11e8 + 0xb) = iVar18 + 1;
      if (*(int *)((long)local_11e8 + 0x5c) <= iVar18 + 1) {
        (**(code **)(*(long *)*local_11e8 + 0x28))
                  ((long *)*local_11e8,lVar32 + (long)(iVar18 + -5) * 8,6);
        *(int *)(puVar45 + 0xb) = iVar18 + -5;
      }
      *(undefined8 *)(lVar20 + 8) = 0;
      uVar40 = 0xffffffff;
    }
    else {
LAB_02fd22f4:
      piVar34 = (int *)(local_11f0 + 8);
      local_11e0[2] = 0;
      local_11e0[3] = 0;
      *local_11e0 = *local_11e0 & 0xffff0000 | local_11d4 & 0xffff;
      *local_11e0 = *local_11e0 & 0xffff | local_11d8 << 0x10;
      uVar40 = local_11d4;
    }
    *piVar34 = *piVar34 + uVar40;
    local_11f0 = 0;
    local_11e0 = (uint *)0x0;
  }
  puVar45 = local_11c0;
  if (local_11c8 != 0) {
    if (local_11ac == 0) {
      piVar34 = (int *)(local_11c8 + 0x18);
      iVar17 = *piVar34;
      if (iVar17 < 2) goto LAB_02fd23b0;
      iVar18 = *(int *)(local_11c0 + 0xb);
      lVar20 = *(long *)(*(long *)(local_11c8 + 0x10) + (long)(iVar17 + -2) * 8);
      lVar32 = local_11c0[1];
      *(undefined8 *)(lVar32 + (long)iVar18 * 8) =
           *(undefined8 *)(*(long *)(local_11c8 + 0x10) + (long)(iVar17 + -1) * 8);
      *(int *)(local_11c0 + 0xb) = iVar18 + 1;
      if (*(int *)((long)local_11c0 + 0x5c) <= iVar18 + 1) {
        (**(code **)(*(long *)*local_11c0 + 0x28))
                  ((long *)*local_11c0,lVar32 + (long)(iVar18 + -5) * 8,6);
        *(int *)(puVar45 + 0xb) = iVar18 + -5;
      }
      *(undefined8 *)(lVar20 + 8) = 0;
      uVar40 = 0xffffffff;
    }
    else {
LAB_02fd23b0:
      piVar34 = (int *)(local_11c8 + 8);
      local_11b8[2] = 0;
      local_11b8[3] = 0;
      *local_11b8 = *local_11b8 & 0xffff0000 | local_11ac & 0xffff;
      *local_11b8 = *local_11b8 & 0xffff | local_11b0 << 0x10;
      uVar40 = local_11ac;
    }
    *piVar34 = *piVar34 + uVar40;
    local_11c8 = 0;
    local_11b8 = (uint *)0x0;
  }
  puVar45 = local_1198;
  if (local_11a0 != 0) {
    if (local_1184 == 0) {
      piVar34 = (int *)(local_11a0 + 0x18);
      iVar17 = *piVar34;
      if (iVar17 < 2) goto LAB_02fd246c;
      iVar18 = *(int *)(local_1198 + 0xb);
      lVar20 = *(long *)(*(long *)(local_11a0 + 0x10) + (long)(iVar17 + -2) * 8);
      lVar32 = local_1198[1];
      *(undefined8 *)(lVar32 + (long)iVar18 * 8) =
           *(undefined8 *)(*(long *)(local_11a0 + 0x10) + (long)(iVar17 + -1) * 8);
      *(int *)(local_1198 + 0xb) = iVar18 + 1;
      if (*(int *)((long)local_1198 + 0x5c) <= iVar18 + 1) {
        (**(code **)(*(long *)*local_1198 + 0x28))
                  ((long *)*local_1198,lVar32 + (long)(iVar18 + -5) * 8,6);
        *(int *)(puVar45 + 0xb) = iVar18 + -5;
      }
      *(undefined8 *)(lVar20 + 8) = 0;
      uVar40 = 0xffffffff;
    }
    else {
LAB_02fd246c:
      piVar34 = (int *)(local_11a0 + 8);
      local_1190[2] = 0;
      local_1190[3] = 0;
      *local_1190 = *local_1190 & 0xffff0000 | local_1184 & 0xffff;
      *local_1190 = *local_1190 & 0xffff | local_1188 << 0x10;
      uVar40 = local_1184;
    }
    *piVar34 = *piVar34 + uVar40;
    local_11a0 = 0;
    local_1190 = (uint *)0x0;
  }
  if (local_178 != 0) {
    FUN_02f63610(local_170,&local_1178);
    local_178 = 0;
  }
  FUN_02f640ec(&local_168);
  uVar40 = *puVar35;
  lVar32 = *(long *)(*(long *)(*plVar31 + (long)(int)uVar40 * 8) + 8);
  uVar21 = *(ulong *)(lVar32 + 0x7f0);
  while (plVar15 = (long *)(uVar21 & 0xfffffffffffffffc), plVar15 != (long *)0x0) {
    uVar21 = plVar15[1];
    if ((uVar21 & 3) == 0) {
      (**(code **)(*plVar15 + 0x20))(plVar15,lVar32,uVar40);
    }
  }
  uVar16 = *(uint *)(plVar31 + 0x22);
  DataMemoryBarrier(2,3);
  lVar32 = (long)(int)uVar40 * 4;
  *(uint *)((long)plVar31 + lVar32 + 0x114) = uVar16 & 0x1ff;
  uVar49 = *puVar1;
  if (uVar49 == uVar16) {
    cVar12 = '\x01';
    bVar28 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar28) {
      *puVar1 = uVar16 & 0xfffffe00 | uVar40;
      cVar12 = ExclusiveMonitorsStatus();
    }
    if (cVar12 == '\0') goto LAB_02fd25b0;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    DataMemoryBarrier(2,3);
    *(uint *)((long)plVar31 + lVar32 + 0x114) = uVar49 & 0x1ff;
    uVar16 = *puVar1;
    if (uVar16 == uVar49) {
      cVar12 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar28) {
        *puVar1 = uVar49 & 0xfffffe00 | uVar40;
        cVar12 = ExclusiveMonitorsStatus();
      }
      if (cVar12 != '\0') goto LAB_02fd25a4;
      bVar28 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02fd25a4:
      bVar28 = false;
    }
    uVar49 = uVar16;
  } while (!bVar28);
LAB_02fd25b0:
  if (!bVar13) {
    lVar32 = *plVar44;
    if (((*(byte *)(lVar32 + 0x38) & 1) != 0) && (plVar44[6] != 0)) {
      puVar45 = (undefined8 *)plVar44[2];
      uVar21 = (long)puVar45 + 0x17U & 0xfffffffffffffff8;
      if ((uVar21 <= (ulong)plVar44[3]) && (plVar44[2] = uVar21, puVar45 != (undefined8 *)0x0)) {
        *puVar45 = &DAT_03c4e575;
        puVar45[1] = *(undefined8 *)(plVar44[6] + 8);
      }
    }
    puVar45 = (undefined8 *)plVar44[2];
    uVar21 = (long)puVar45 + 0x17U & 0xfffffffffffffff8;
    if ((uVar21 <= (ulong)plVar44[3]) && (plVar44[2] = uVar21, puVar45 != (undefined8 *)0x0)) {
      *puVar45 = &DAT_03c2d363;
      uVar14 = nn::os::GetSystemTick();
      puVar45[1] = uVar14;
    }
    if (*(code **)(lVar32 + 0x20) != (code *)0x0) {
      (**(code **)(lVar32 + 0x20))(*(undefined8 *)(lVar32 + 0x28));
    }
  }
  return;
}


