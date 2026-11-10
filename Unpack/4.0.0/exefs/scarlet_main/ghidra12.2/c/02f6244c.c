/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f6244c; name: FUN_02f6244c
 */


void FUN_02f6244c(long param_1)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  long **pplVar16;
  long **pplVar15;
  bool bVar17;
  long lVar18;
  uint *puVar19;
  long *plVar20;
  uint uVar21;
  long lVar22;
  int *piVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  long lVar28;
  long *plVar29;
  long local_a78 [2];
  undefined8 *local_a68;
  uint *local_a60;
  uint local_a58;
  int local_a54;
  uint *local_a50;
  long lStack_a48;
  long local_a28;
  uint *local_a20;
  uint local_a18;
  undefined8 *local_a10;
  long local_9f0;
  uint *local_9e8;
  uint local_9e0;
  undefined8 *local_9d8;
  long lStack_9d0;
  long *local_9c8;
  uint local_9c0;
  uint local_9bc;
  uint local_9b8;
  uint local_9b4;
  long *aplStack_9b0 [10];
  uint local_95c;
  uint local_8c0;
  uint local_7bc;
  uint local_6b8;
  uint local_668;
  uint local_614;
  uint local_5f4;
  uint local_4d0;
  uint local_480;
  uint local_414;
  uint local_2f0;
  uint local_2a0;
  uint local_27c;
  uint local_278;
  long *local_270 [2];
  long local_260;
  undefined2 local_258;
  undefined2 local_256;
  int local_254;
  long local_250;
  undefined2 local_248;
  undefined2 local_246;
  int local_244;
  undefined8 local_240;
  undefined1 local_238;
  undefined4 local_234;
  long local_230;
  undefined2 local_228;
  undefined2 local_226;
  int local_224;
  undefined8 local_220;
  undefined1 local_218;
  undefined4 local_214;
  long local_210;
  undefined2 local_208;
  undefined2 local_206;
  int local_204;
  undefined4 local_1f4;
  undefined8 local_1f0;
  long local_1e0;
  long *local_1d0;
  long *local_1c8;
  long local_1c0;
  undefined8 *local_1b8;
  uint *local_1b0;
  uint local_1a8;
  uint local_1a4;
  long local_198;
  undefined8 *local_190;
  uint *local_188;
  uint local_180;
  uint local_17c;
  long local_170;
  undefined8 local_168;
  uint *local_160;
  uint local_158;
  uint local_154;
  long local_148;
  undefined8 local_140;
  uint *local_138;
  uint local_130;
  uint local_12c;
  long local_120;
  undefined8 local_118;
  uint *local_110;
  uint local_108;
  uint local_104;
  long local_f8;
  undefined8 local_f0;
  uint *local_e8;
  uint local_e0;
  uint local_dc;
  long local_d0;
  undefined8 local_c8;
  uint *local_c0;
  uint local_b8;
  uint local_b4;
  long local_a0;
  undefined8 local_98;
  uint *local_90;
  uint local_88;
  uint local_84;
  long *local_70;
  
  lVar18 = tpidr_el0;
  lVar9 = *(long *)(lVar18 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar18 + 0x1000b8) = lVar9;
  }
  plVar20 = *(long **)(lVar9 + 0x3e0);
  if (plVar20 != (long *)0x0) {
    lVar18 = *plVar20;
    if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
      (**(code **)(lVar18 + 0x18))("NarrowPhase",0xb,*(undefined8 *)(lVar18 + 0x28));
    }
    puVar27 = (undefined8 *)plVar20[2];
    uVar10 = (long)puVar27 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= (ulong)plVar20[3]) && (plVar20[2] = uVar10, puVar27 != (undefined8 *)0x0)) {
      *puVar27 = "TtNarrowPhase";
      uVar4 = nn::os::GetSystemTick();
      puVar27[1] = uVar4;
    }
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
      puVar27 = (undefined8 *)plVar20[2];
      uVar10 = (long)puVar27 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= (ulong)plVar20[3]) && (plVar20[2] = uVar10, puVar27 != (undefined8 *)0x0)) {
        *puVar27 = &DAT_03c4e575;
        puVar27[1] = *(undefined8 *)(plVar20[6] + 8);
      }
    }
    lVar18 = *plVar20;
    if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
      (**(code **)(lVar18 + 0x18))("PairsTask",9,*(undefined8 *)(lVar18 + 0x28));
      if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
        (**(code **)(lVar18 + 0x18))("Process",7,*(undefined8 *)(lVar18 + 0x28));
      }
    }
    puVar27 = (undefined8 *)plVar20[2];
    uVar10 = (long)puVar27 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar10 <= (ulong)plVar20[3]) && (plVar20[2] = uVar10, puVar27 != (undefined8 *)0x0)) {
      *puVar27 = "LtPairsTask";
      puVar27[2] = "StProcess";
      uVar4 = nn::os::GetSystemTick();
      puVar27[1] = uVar4;
    }
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
      puVar27 = (undefined8 *)plVar20[2];
      uVar10 = (long)puVar27 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= (ulong)plVar20[3]) && (plVar20[2] = uVar10, puVar27 != (undefined8 *)0x0)) {
        *puVar27 = &DAT_03c4e575;
        puVar27[1] = *(undefined8 *)(plVar20[6] + 8);
      }
    }
  }
  plVar29 = *(long **)(param_1 + 0x2a98);
  uVar21 = *(uint *)(plVar29 + 0x22);
  puVar1 = (uint *)(plVar29 + 0x22);
  uVar10 = (ulong)uVar21 & 0x1ff;
  DataMemoryBarrier(2,3);
  uVar6 = *puVar1;
  if (uVar6 == uVar21) {
    cVar3 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar17) {
      *puVar1 = uVar21 + 0x200 & 0xfffffe00 | puVar1[uVar10 + 1];
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_02f62630;
    bVar17 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_02f62630:
    bVar17 = false;
  }
  if (bVar17) {
    puVar19 = puVar1 + uVar10 + 1;
  }
  else {
    do {
      uVar10 = (ulong)(uVar6 & 0x1ff);
      DataMemoryBarrier(2,3);
      uVar21 = *puVar1;
      if (uVar21 == uVar6) {
        cVar3 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar17) {
          *puVar1 = uVar6 + 0x200 & 0xfffffe00 | *(uint *)((long)plVar29 + uVar10 * 4 + 0x114);
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02f62680;
        bVar17 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02f62680:
        bVar17 = false;
      }
      uVar6 = uVar21;
    } while (!bVar17);
    puVar19 = (uint *)((long)plVar29 + uVar10 * 4 + 0x114);
  }
  *puVar19 = 0x1ff;
  DataMemoryBarrier(2,3);
  puVar19 = *(uint **)(*plVar29 + uVar10 * 8);
  lVar18 = *(long *)(puVar19 + 2);
  uVar11 = *(ulong *)(lVar18 + 0x7e8);
  local_70 = plVar20;
  while (plVar5 = (long *)(uVar11 & 0xfffffffffffffffc), plVar5 != (long *)0x0) {
    uVar11 = plVar5[1];
    if ((uVar11 & 3) == 0) {
      (**(code **)(*plVar5 + 0x20))(plVar5,lVar18,uVar10);
    }
  }
  lVar18 = param_1 + 0x2a20;
  lVar24 = (long)(int)*puVar19;
  lVar22 = *(long *)(param_1 + 0x2aa8);
  lVar28 = *(long *)(*(long *)(param_1 + 0x2aa0) + 0x100);
  lVar9 = lVar22 + lVar24 * 0x610;
  if (*(char *)(lVar9 + 0x600) == '\0') {
    puVar27 = *(undefined8 **)(puVar19 + 0x138);
    FUN_02f5fee0(lVar9,puVar27,"hknpProcessNarrowPhasePairsTask::ThreadOutput::m_activeCacheStreams"
                );
    lVar25 = lVar22 + lVar24 * 0x610;
    FUN_02f5fee0(lVar25 + 0x200,puVar27,
                 "hknpProcessNarrowPhasePairsTask::ThreadOutput::m_inactiveCacheStreams");
    plVar5 = (long *)*puVar27;
    *(undefined4 *)(lVar25 + 0x408) = 0;
    *(long **)(lVar25 + 0x400) = plVar5;
    *(undefined1 *)(lVar25 + 0x40c) = 0;
    uVar21 = *(int *)(puVar27 + 0xb) - 1;
    if (*(int *)(puVar27 + 0xb) < 1) {
      lVar25 = puVar27[1];
      (**(code **)(*plVar5 + 0x20))(plVar5,lVar25,6);
      *(undefined4 *)(puVar27 + 0xb) = 5;
      puVar26 = (undefined8 *)(lVar25 + 0x28);
    }
    else {
      *(uint *)(puVar27 + 0xb) = uVar21;
      puVar26 = (undefined8 *)(puVar27[1] + (ulong)uVar21 * 8);
    }
    puVar26 = (undefined8 *)*puVar26;
    puVar26[2] = 0;
    puVar26[3] = 0;
    *puVar26 = 0;
    puVar26[1] = 0;
    lVar14 = lVar22 + lVar24 * 0x610;
    *(undefined4 *)((long)puVar26 + 4) = *(undefined4 *)(lVar14 + 0x418);
    iVar7 = *(int *)(lVar14 + 0x418);
    lVar25 = (long)iVar7;
    if ((int)(*(uint *)(lVar14 + 0x41c) & 0x7fffffff) <= iVar7) {
      FUN_031c25b4((long *)(lVar14 + 0x410),PTR_PTR_047d1a50,lVar25 + 1);
      iVar7 = *(int *)(lVar14 + 0x418);
    }
    *(undefined8 **)(*(long *)(lVar14 + 0x410) + (long)iVar7 * 8) = puVar26;
    lVar12 = lVar22 + lVar24 * 0x610;
    *(int *)(lVar14 + 0x418) = (int)(lVar25 + 1);
    *(char **)(lVar12 + 0x4f0) =
         "hknpProcessNarrowPhasePairsTask::ThreadOutput::m_deferedManifoldsOut";
    plVar5 = (long *)*puVar27;
    *(undefined4 *)(lVar12 + 0x508) = 0;
    *(long **)(lVar12 + 0x500) = plVar5;
    *(undefined1 *)(lVar12 + 0x50c) = 0;
    uVar21 = *(int *)(puVar27 + 0xb) - 1;
    if (*(int *)(puVar27 + 0xb) < 1) {
      lVar25 = puVar27[1];
      (**(code **)(*plVar5 + 0x20))(plVar5,lVar25,6);
      *(undefined4 *)(puVar27 + 0xb) = 5;
      puVar27 = (undefined8 *)(lVar25 + 0x28);
    }
    else {
      *(uint *)(puVar27 + 0xb) = uVar21;
      puVar27 = (undefined8 *)(puVar27[1] + (ulong)uVar21 * 8);
    }
    puVar27 = (undefined8 *)*puVar27;
    lVar14 = lVar22 + lVar24 * 0x610;
    puVar27[2] = 0;
    puVar27[3] = 0;
    *puVar27 = 0;
    puVar27[1] = 0;
    *(undefined4 *)((long)puVar27 + 4) = *(undefined4 *)(lVar14 + 0x518);
    iVar7 = *(int *)(lVar14 + 0x518);
    lVar25 = (long)iVar7;
    if ((int)(*(uint *)(lVar14 + 0x51c) & 0x7fffffff) <= iVar7) {
      FUN_031c25b4((long *)(lVar14 + 0x510),PTR_PTR_047d1a50,lVar25 + 1);
      iVar7 = *(int *)(lVar14 + 0x518);
    }
    *(undefined8 **)(*(long *)(lVar14 + 0x510) + (long)iVar7 * 8) = puVar27;
    *(int *)(lVar14 + 0x518) = (int)(lVar25 + 1);
    *(char **)(lVar22 + lVar24 * 0x610 + 0x5f0) =
         "hknpProcessNarrowPhasePairsTask::ThreadOutput::m_perPairOutput";
    *(undefined1 *)(lVar9 + 0x600) = 1;
  }
  lVar25 = lVar28 + lVar24 * 0x500;
  local_d0 = lVar25 + 0x100;
  *(undefined4 *)(param_1 + 0x2a48) = *(undefined4 *)(*(long *)(puVar19 + 2) + 0x51c);
  local_168 = *(undefined8 *)(puVar19 + 0x138);
  local_c0 = *(uint **)(*(long *)(lVar25 + 0x110) + (long)*(int *)(lVar25 + 0x118) * 8 + -8);
  local_b8 = *local_c0 >> 0x10;
  local_b4 = *local_c0 & 0xffff;
  *(uint *)(lVar25 + 0x108) = *(int *)(lVar25 + 0x108) - (*local_c0 & 0xffff);
  local_90 = *(uint **)(*(long *)(lVar25 + 0x210) + (long)*(int *)(lVar25 + 0x218) * 8 + -8);
  local_a0 = lVar25 + 0x200;
  local_88 = *local_90 >> 0x10;
  local_84 = *local_90 & 0xffff;
  *(uint *)(lVar25 + 0x208) = *(int *)(lVar25 + 0x208) - (*local_90 & 0xffff);
  lVar22 = lVar22 + lVar24 * 0x610;
  local_160 = *(uint **)(*(long *)(lVar22 + 0x10) + (long)*(int *)(lVar22 + 0x18) * 8 + -8);
  local_158 = *local_160 >> 0x10;
  local_154 = *local_160 & 0xffff;
  *(uint *)(lVar22 + 8) = *(int *)(lVar22 + 8) - (*local_160 & 0xffff);
  local_138 = *(uint **)(*(long *)(lVar22 + 0x110) + (long)*(int *)(lVar22 + 0x118) * 8 + -8);
  local_148 = lVar22 + 0x100;
  local_130 = *local_138 >> 0x10;
  local_12c = *local_138 & 0xffff;
  local_120 = lVar22 + 0x200;
  *(uint *)(lVar22 + 0x108) = *(int *)(lVar22 + 0x108) - (*local_138 & 0xffff);
  local_118 = *(undefined8 *)(puVar19 + 0x138);
  local_110 = *(uint **)(*(long *)(lVar22 + 0x210) + (long)*(int *)(lVar22 + 0x218) * 8 + -8);
  local_108 = *local_110 >> 0x10;
  local_104 = *local_110 & 0xffff;
  *(uint *)(lVar22 + 0x208) = *(int *)(lVar22 + 0x208) - (*local_110 & 0xffff);
  local_e8 = *(uint **)(*(long *)(lVar22 + 0x310) + (long)*(int *)(lVar22 + 0x318) * 8 + -8);
  local_f8 = lVar22 + 0x300;
  local_e0 = *local_e8 >> 0x10;
  local_dc = *local_e8 & 0xffff;
  local_198 = lVar22 + 0x400;
  *(uint *)(lVar22 + 0x308) = *(int *)(lVar22 + 0x308) - (*local_e8 & 0xffff);
  local_190 = *(undefined8 **)(puVar19 + 0x138);
  local_188 = *(uint **)(*(long *)(lVar22 + 0x410) + (long)*(int *)(lVar22 + 0x418) * 8 + -8);
  local_180 = *local_188 >> 0x10;
  local_17c = *local_188 & 0xffff;
  local_1c0 = lVar22 + 0x500;
  *(uint *)(lVar22 + 0x408) = *(int *)(lVar22 + 0x408) - (*local_188 & 0xffff);
  local_1b8 = *(undefined8 **)(puVar19 + 0x138);
  local_1b0 = *(uint **)(*(long *)(lVar22 + 0x510) + (long)*(int *)(lVar22 + 0x518) * 8 + -8);
  local_1a8 = *local_1b0 >> 0x10;
  local_1a4 = *local_1b0 & 0xffff;
  local_1d0 = &local_d0;
  local_1c8 = &local_a0;
  *(uint *)(lVar22 + 0x508) = *(int *)(lVar22 + 0x508) - (*local_1b0 & 0xffff);
  local_170 = lVar9;
  local_140 = local_168;
  local_f0 = local_118;
  local_c8 = local_168;
  local_98 = local_168;
  (**(code **)(**(long **)(*(long *)(puVar19 + 2) + 0x658) + 0x40))
            (*(long **)(*(long *)(puVar19 + 2) + 0x658),puVar19 + 0x13a,&local_1d0,2);
  local_a28 = 0;
  local_a20 = (uint *)0x0;
  local_254 = 0;
  local_244 = 0;
  local_240 = 0;
  local_238 = 0;
  local_234 = 0;
  local_224 = 0;
  local_220 = 0;
  local_218 = 0;
  local_214 = 0;
  local_204 = 0;
  local_1f4 = 0;
  local_1f0 = 0;
  local_9f0 = 0;
  local_9e8 = (uint *)0x0;
  local_a10 = *(undefined8 **)(puVar19 + 0x138);
  local_a18 = 0;
  local_9e0 = 0;
  local_270[0] = &local_1c0;
  if (plVar20 == (long *)0x0) {
    uVar21 = 0;
  }
  else {
    uVar21 = (uint)((ulong)plVar20[2] < (ulong)plVar20[4]);
  }
  local_9c0 = uVar21 ^ 1;
  local_a50 = puVar19;
  lStack_a48 = lVar18;
  local_9d8 = local_a10;
  lStack_9d0 = param_1;
  local_9c8 = &local_170;
  local_9bc = local_9c0;
  local_9b8 = local_9c0;
  local_9b4 = uVar21;
  if (local_9c0 == 0) {
    memset(aplStack_9b0,0,0x740);
  }
  else {
    pplVar15 = aplStack_9b0;
    do {
      pplVar16 = pplVar15 + 2;
      pplVar15[1] = (long *)0x100000001;
      *pplVar15 = (long *)0x100000001;
      pplVar15 = pplVar16;
    } while (pplVar16 < local_270);
  }
  local_a68 = *(undefined8 **)(puVar19 + 0x138);
  local_a78[0] = *(long *)(param_1 + 0x2a20);
  local_a54 = 0;
  local_a60 = (uint *)0x0;
  puVar13 = *(undefined4 **)(puVar19 + 300);
  *puVar13 = 0xffffff;
  *(long **)(puVar13 + 4) = local_a78;
  *(undefined2 *)(puVar13 + 1) = 0;
  puVar13[2] = 0;
  puVar13[0x1d] = 0;
  *(long ***)(puVar13 + 8) = aplStack_9b0;
  *(long **)(puVar13 + 0x12) = &local_198;
  *(long **)(puVar13 + 0xe) = &local_198;
  *(long **)(puVar13 + 0x10) = &local_198;
  iVar7 = *(int *)(local_198 + 8);
  *(uint **)(puVar13 + 0x14) = local_188;
  *(short *)(puVar13 + 0x16) = (short)local_180;
  *(short *)((long)puVar13 + 0x5a) = (short)local_17c;
  puVar13[0x17] = -(local_17c + iVar7);
  *(undefined4 *)(*(long *)(puVar19 + 300) + 8) = *(undefined4 *)(param_1 + 0x2a48);
  local_1e0 = *(long *)(puVar19 + 300);
  local_250 = local_9c8[0x16];
  local_248 = (undefined2)local_9c8[0x17];
  local_244 = -(*(int *)((long)local_9c8 + 0xbc) + *(int *)(local_9c8[0x14] + 8));
  local_246 = (undefined2)*(int *)((long)local_9c8 + 0xbc);
  *(undefined4 *)(local_9c8 + 0x19) = 0;
  local_230 = local_9c8[0x1c];
  local_228 = (undefined2)local_9c8[0x1d];
  local_226 = (undefined2)*(int *)((long)local_9c8 + 0xec);
  local_224 = -(*(int *)((long)local_9c8 + 0xec) + *(int *)(local_9c8[0x1a] + 8));
  *(undefined4 *)(local_9c8 + 0x1f) = 0;
  local_210 = local_9c8[2];
  local_208 = (undefined2)local_9c8[3];
  local_206 = (undefined2)*(int *)((long)local_9c8 + 0x1c);
  local_204 = -(*(int *)((long)local_9c8 + 0x1c) + *(int *)(*local_9c8 + 8));
  plVar5 = *(long **)(local_1e0 + 0x38);
  local_260 = plVar5[2];
  local_258 = (undefined2)plVar5[3];
  local_256 = (undefined2)*(int *)((long)plVar5 + 0x1c);
  local_254 = -(*(int *)((long)plVar5 + 0x1c) + *(int *)(*plVar5 + 8));
  local_95c = uVar21;
  local_8c0 = uVar21;
  local_7bc = uVar21;
  local_6b8 = uVar21;
  local_668 = uVar21;
  local_614 = uVar21;
  local_5f4 = uVar21;
  local_4d0 = uVar21;
  local_480 = uVar21;
  local_414 = uVar21;
  local_2f0 = uVar21;
  local_2a0 = uVar21;
  local_27c = uVar21;
  local_278 = uVar21;
  FUN_02f6703c(puVar19,lVar18,&local_a50,&local_170,&local_120,lVar28 + lVar24 * 0x500,
               *(undefined8 *)(puVar19 + 0x13a),*(undefined8 *)(puVar19 + 0x13c));
  puVar27 = local_190;
  if (local_17c == 0) {
    piVar23 = (int *)(local_198 + 0x18);
    iVar7 = *piVar23;
    if (iVar7 < 2) goto LAB_02f62e88;
    iVar2 = *(int *)(local_190 + 0xb);
    lVar9 = *(long *)(*(long *)(local_198 + 0x10) + (long)(iVar7 + -2) * 8);
    lVar18 = local_190[1];
    *(undefined8 *)(lVar18 + (long)iVar2 * 8) =
         *(undefined8 *)(*(long *)(local_198 + 0x10) + (long)(iVar7 + -1) * 8);
    *(int *)(local_190 + 0xb) = iVar2 + 1;
    if (*(int *)((long)local_190 + 0x5c) <= iVar2 + 1) {
      (**(code **)(*(long *)*local_190 + 0x28))
                ((long *)*local_190,lVar18 + (long)(iVar2 + -5) * 8,6);
      *(int *)(puVar27 + 0xb) = iVar2 + -5;
    }
    *(undefined8 *)(lVar9 + 8) = 0;
    uVar21 = 0xffffffff;
  }
  else {
LAB_02f62e88:
    piVar23 = (int *)(local_198 + 8);
    local_188[2] = 0;
    local_188[3] = 0;
    *local_188 = *local_188 & 0xffff0000 | local_17c & 0xffff;
    *local_188 = *local_188 & 0xffff | local_180 << 0x10;
    uVar21 = local_17c;
  }
  puVar27 = local_1b8;
  *piVar23 = *piVar23 + uVar21;
  local_198 = 0;
  local_188 = (uint *)0x0;
  if (local_1a4 == 0) {
    piVar23 = (int *)(local_1c0 + 0x18);
    iVar7 = *piVar23;
    if (iVar7 < 2) goto LAB_02f62f40;
    iVar2 = *(int *)(local_1b8 + 0xb);
    lVar9 = *(long *)(*(long *)(local_1c0 + 0x10) + (long)(iVar7 + -2) * 8);
    lVar18 = local_1b8[1];
    *(undefined8 *)(lVar18 + (long)iVar2 * 8) =
         *(undefined8 *)(*(long *)(local_1c0 + 0x10) + (long)(iVar7 + -1) * 8);
    *(int *)(local_1b8 + 0xb) = iVar2 + 1;
    if (*(int *)((long)local_1b8 + 0x5c) <= iVar2 + 1) {
      (**(code **)(*(long *)*local_1b8 + 0x28))
                ((long *)*local_1b8,lVar18 + (long)(iVar2 + -5) * 8,6);
      *(int *)(puVar27 + 0xb) = iVar2 + -5;
    }
    *(undefined8 *)(lVar9 + 8) = 0;
    uVar21 = 0xffffffff;
  }
  else {
LAB_02f62f40:
    piVar23 = (int *)(local_1c0 + 8);
    local_1b0[2] = 0;
    local_1b0[3] = 0;
    *local_1b0 = *local_1b0 & 0xffff0000 | local_1a4 & 0xffff;
    *local_1b0 = *local_1b0 & 0xffff | local_1a8 << 0x10;
    uVar21 = local_1a4;
  }
  *piVar23 = *piVar23 + uVar21;
  local_1c0 = 0;
  local_1b0 = (uint *)0x0;
  lVar18 = *(long *)(puVar19 + 300);
  *(undefined8 *)(lVar18 + 0x10) = 0;
  *(undefined8 *)(lVar18 + 0x20) = 0;
  *(undefined8 *)(lVar18 + 0x38) = 0;
  *(undefined8 *)(lVar18 + 0x40) = 0;
  if (local_9b4 == 0) {
    if (plVar20 != (long *)0x0) goto LAB_02f63058;
  }
  else {
    FUN_02f70d9c(aplStack_9b0,plVar20);
    if (plVar20 != (long *)0x0) {
      puVar27 = (undefined8 *)plVar20[2];
      uVar10 = plVar20[3];
      uVar11 = (ulong)((long)puVar27 + 0x17) & 0xfffffffffffffff8;
      if (uVar11 <= uVar10) {
        plVar20[2] = uVar11;
        if (puVar27 == (undefined8 *)0x0) {
          puVar27 = (undefined8 *)&DAT_00000010;
        }
        else {
          *puVar27 = "MiNumCrossLink";
          *(float *)(puVar27 + 1) = (float)(int)local_9bc;
          puVar27 = (undefined8 *)plVar20[2];
          uVar10 = plVar20[3];
        }
      }
      uVar11 = (ulong)((long)puVar27 + 0x17) & 0xfffffffffffffff8;
      if (uVar11 <= uVar10) {
        plVar20[2] = uVar11;
        if (puVar27 == (undefined8 *)0x0) {
          puVar27 = (undefined8 *)&DAT_00000010;
        }
        else {
          *puVar27 = "MiNumInterrupted";
          *(float *)(puVar27 + 1) = (float)(int)local_9c0;
          puVar27 = (undefined8 *)plVar20[2];
          uVar10 = plVar20[3];
        }
      }
      uVar11 = (ulong)((long)puVar27 + 0x17) & 0xfffffffffffffff8;
      if ((uVar11 <= uVar10) && (plVar20[2] = uVar11, puVar27 != (undefined8 *)0x0)) {
        *puVar27 = "MiNumNew";
        *(float *)(puVar27 + 1) = (float)(int)local_9b8;
      }
LAB_02f63058:
      lVar18 = *plVar20;
      if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
        puVar27 = (undefined8 *)plVar20[2];
        uVar10 = (long)puVar27 + 0x17U & 0xfffffffffffffff8;
        if ((uVar10 <= (ulong)plVar20[3]) && (plVar20[2] = uVar10, puVar27 != (undefined8 *)0x0)) {
          *puVar27 = &DAT_03c4e575;
          puVar27[1] = *(undefined8 *)(plVar20[6] + 8);
        }
      }
      puVar27 = (undefined8 *)plVar20[2];
      uVar10 = (long)puVar27 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= (ulong)plVar20[3]) && (plVar20[2] = uVar10, puVar27 != (undefined8 *)0x0)) {
        *puVar27 = &DAT_03c3697b;
        uVar4 = nn::os::GetSystemTick();
        puVar27[1] = uVar4;
      }
      if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
        (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
        if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
          (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
        }
      }
    }
  }
  puVar27 = local_a68;
  if (local_a60 != (uint *)0x0) {
    if (local_a78[0] != 0) {
      if (local_a58 == (*local_a60 & 0xffff)) {
        *(undefined8 *)(*(long *)(local_a78[0] + 0x10) + (long)(int)local_a60[1] * 8) = 0;
        *(undefined1 *)(local_a78[0] + 0xc) = 1;
        iVar7 = *(int *)(local_a68 + 0xb);
        lVar18 = local_a68[1];
        *(uint **)(lVar18 + (long)iVar7 * 8) = local_a60;
        *(int *)(local_a68 + 0xb) = iVar7 + 1;
        if (*(int *)((long)local_a68 + 0x5c) <= iVar7 + 1) {
          (**(code **)(*(long *)*local_a68 + 0x28))
                    ((long *)*local_a68,lVar18 + (long)(iVar7 + -5) * 8,6);
          *(int *)(puVar27 + 0xb) = iVar7 + -5;
        }
      }
      else {
        do {
          cVar3 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(local_a60,0x10);
          if (bVar17) {
            *local_a60 = *local_a60 - local_a58;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    local_a60 = (uint *)0x0;
  }
  puVar27 = local_a10;
  if ((local_a54 != 0) && (*(char *)(local_a78[0] + 0xc) == '\0')) {
    piVar23 = (int *)(local_a78[0] + 8);
    do {
      cVar3 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar17) {
        *piVar23 = *piVar23 - local_a54;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (local_a18 != 0) {
    if (local_a18 == (*local_a20 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_a28 + 0x10) + (long)(int)local_a20[1] * 8) = 0;
      *(undefined1 *)(local_a28 + 0xc) = 1;
      iVar7 = *(int *)(local_a10 + 0xb);
      lVar18 = local_a10[1];
      *(uint **)(lVar18 + (long)iVar7 * 8) = local_a20;
      *(int *)(local_a10 + 0xb) = iVar7 + 1;
      if (*(int *)((long)local_a10 + 0x5c) <= iVar7 + 1) {
        (**(code **)(*(long *)*local_a10 + 0x28))
                  ((long *)*local_a10,lVar18 + (long)(iVar7 + -5) * 8,6);
        *(int *)(puVar27 + 0xb) = iVar7 + -5;
      }
    }
    else {
      do {
        cVar3 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(local_a20,0x10);
        if (bVar17) {
          *local_a20 = *local_a20 - local_a18;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_a18 = 0;
    *(undefined1 *)(local_a28 + 0xc) = 1;
  }
  puVar27 = local_9d8;
  local_a28 = 0;
  local_a10 = (undefined8 *)0x0;
  if (local_9e0 != 0) {
    if (local_9e0 == (*local_9e8 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_9f0 + 0x10) + (long)(int)local_9e8[1] * 8) = 0;
      *(undefined1 *)(local_9f0 + 0xc) = 1;
      iVar7 = *(int *)(local_9d8 + 0xb);
      lVar18 = local_9d8[1];
      *(uint **)(lVar18 + (long)iVar7 * 8) = local_9e8;
      *(int *)(local_9d8 + 0xb) = iVar7 + 1;
      if (*(int *)((long)local_9d8 + 0x5c) <= iVar7 + 1) {
        (**(code **)(*(long *)*local_9d8 + 0x28))
                  ((long *)*local_9d8,lVar18 + (long)(iVar7 + -5) * 8,6);
        *(int *)(puVar27 + 0xb) = iVar7 + -5;
      }
    }
    else {
      do {
        cVar3 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(local_9e8,0x10);
        if (bVar17) {
          *local_9e8 = *local_9e8 - local_9e0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_9e0 = 0;
    *(undefined1 *)(local_9f0 + 0xc) = 1;
  }
  puVar27 = local_1b8;
  if (local_1c0 != 0) {
    if (local_1a4 == 0) {
      piVar23 = (int *)(local_1c0 + 0x18);
      iVar7 = *piVar23;
      if (iVar7 < 2) goto LAB_02f63360;
      iVar2 = *(int *)(local_1b8 + 0xb);
      lVar9 = *(long *)(*(long *)(local_1c0 + 0x10) + (long)(iVar7 + -2) * 8);
      lVar18 = local_1b8[1];
      *(undefined8 *)(lVar18 + (long)iVar2 * 8) =
           *(undefined8 *)(*(long *)(local_1c0 + 0x10) + (long)(iVar7 + -1) * 8);
      *(int *)(local_1b8 + 0xb) = iVar2 + 1;
      if (*(int *)((long)local_1b8 + 0x5c) <= iVar2 + 1) {
        (**(code **)(*(long *)*local_1b8 + 0x28))
                  ((long *)*local_1b8,lVar18 + (long)(iVar2 + -5) * 8,6);
        *(int *)(puVar27 + 0xb) = iVar2 + -5;
      }
      *(undefined8 *)(lVar9 + 8) = 0;
      uVar21 = 0xffffffff;
    }
    else {
LAB_02f63360:
      piVar23 = (int *)(local_1c0 + 8);
      local_1b0[2] = 0;
      local_1b0[3] = 0;
      *local_1b0 = *local_1b0 & 0xffff0000 | local_1a4 & 0xffff;
      *local_1b0 = *local_1b0 & 0xffff | local_1a8 << 0x10;
      uVar21 = local_1a4;
    }
    *piVar23 = *piVar23 + uVar21;
    local_1c0 = 0;
    local_1b0 = (uint *)0x0;
  }
  puVar27 = local_190;
  if (local_198 != 0) {
    if (local_17c == 0) {
      piVar23 = (int *)(local_198 + 0x18);
      iVar7 = *piVar23;
      if (iVar7 < 2) goto LAB_02f6341c;
      iVar2 = *(int *)(local_190 + 0xb);
      lVar9 = *(long *)(*(long *)(local_198 + 0x10) + (long)(iVar7 + -2) * 8);
      lVar18 = local_190[1];
      *(undefined8 *)(lVar18 + (long)iVar2 * 8) =
           *(undefined8 *)(*(long *)(local_198 + 0x10) + (long)(iVar7 + -1) * 8);
      *(int *)(local_190 + 0xb) = iVar2 + 1;
      if (*(int *)((long)local_190 + 0x5c) <= iVar2 + 1) {
        (**(code **)(*(long *)*local_190 + 0x28))
                  ((long *)*local_190,lVar18 + (long)(iVar2 + -5) * 8,6);
        *(int *)(puVar27 + 0xb) = iVar2 + -5;
      }
      *(undefined8 *)(lVar9 + 8) = 0;
      uVar21 = 0xffffffff;
    }
    else {
LAB_02f6341c:
      piVar23 = (int *)(local_198 + 8);
      local_188[2] = 0;
      local_188[3] = 0;
      *local_188 = *local_188 & 0xffff0000 | local_17c & 0xffff;
      *local_188 = *local_188 & 0xffff | local_180 << 0x10;
      uVar21 = local_17c;
    }
    *piVar23 = *piVar23 + uVar21;
    local_198 = 0;
    local_188 = (uint *)0x0;
  }
  FUN_02f640ec(&local_170);
  uVar21 = *puVar19;
  lVar18 = *(long *)(*(long *)(*plVar29 + (long)(int)uVar21 * 8) + 8);
  uVar10 = *(ulong *)(lVar18 + 0x7f0);
  while (plVar20 = (long *)(uVar10 & 0xfffffffffffffffc), plVar20 != (long *)0x0) {
    uVar10 = plVar20[1];
    if ((uVar10 & 3) == 0) {
      (**(code **)(*plVar20 + 0x20))(plVar20,lVar18,uVar21);
    }
  }
  uVar6 = *(uint *)(plVar29 + 0x22);
  lVar18 = (long)(int)uVar21 * 4;
  DataMemoryBarrier(2,3);
  *(uint *)((long)plVar29 + lVar18 + 0x114) = uVar6 & 0x1ff;
  uVar8 = *puVar1;
  if (uVar8 == uVar6) {
    cVar3 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar17) {
      *puVar1 = uVar6 & 0xfffffe00 | uVar21;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_02f63538;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    DataMemoryBarrier(2,3);
    *(uint *)((long)plVar29 + lVar18 + 0x114) = uVar8 & 0x1ff;
    uVar6 = *puVar1;
    if (uVar6 == uVar8) {
      cVar3 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar17) {
        *puVar1 = uVar8 & 0xfffffe00 | uVar21;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_02f6352c;
      bVar17 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02f6352c:
      bVar17 = false;
    }
    uVar8 = uVar6;
  } while (!bVar17);
LAB_02f63538:
  if (local_70 != (long *)0x0) {
    lVar18 = *local_70;
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (local_70[6] != 0)) {
      puVar27 = (undefined8 *)local_70[2];
      uVar10 = (long)puVar27 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= (ulong)local_70[3]) && (local_70[2] = uVar10, puVar27 != (undefined8 *)0x0)) {
        *puVar27 = &DAT_03c4e575;
        puVar27[1] = *(undefined8 *)(local_70[6] + 8);
      }
    }
    puVar27 = (undefined8 *)local_70[2];
    uVar10 = (long)puVar27 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= (ulong)local_70[3]) && (local_70[2] = uVar10, puVar27 != (undefined8 *)0x0)) {
      *puVar27 = &DAT_03c2d363;
      uVar4 = nn::os::GetSystemTick();
      puVar27[1] = uVar4;
    }
    if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
      (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
    }
  }
  return;
}


