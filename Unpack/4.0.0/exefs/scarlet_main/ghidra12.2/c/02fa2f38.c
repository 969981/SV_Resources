/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fa2f38; name: FUN_02fa2f38
 */


void FUN_02fa2f38(long param_1,long param_2,long param_3)

{
  short *psVar1;
  undefined2 *puVar2;
  int *piVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  short sVar8;
  undefined *puVar9;
  undefined *puVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long lVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  long *plVar36;
  long *plVar37;
  uint uVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  long *plVar41;
  long lVar42;
  long lVar43;
  long *plVar44;
  undefined8 local_70 [2];
  
  puVar9 = PTR_DAT_047d1a08;
  lVar43 = *(long *)(param_2 + 8);
  lVar42 = *(long *)(lVar43 + 0x920);
  uVar38 = *(uint *)(lVar42 + 8);
  local_70[0] = 0x40;
  plVar19 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
  if (*(code **)(puVar9 + 0x10) != (code *)0x0) {
    (**(code **)(puVar9 + 0x10))(plVar19,"hknpPrepareNarrowPhaseTask");
  }
  plVar19[1] = 0xffffffff;
  plVar20 = plVar19 + 2;
  *plVar20 = 1;
  puVar9 = PTR_DAT_047e4940;
  plVar19[6] = param_1;
  *plVar19 = (long)(puVar9 + 0x10);
  plVar19[4] = (long)(puVar9 + 0x50);
  plVar19[5] = lVar42;
  sVar11 = FUN_0323f360(param_3,plVar19,0x40);
  sVar12 = *(short *)(param_3 + 0x4c8);
  if ((sVar12 != -1) && (sVar11 != -1)) {
    iVar29 = *(int *)(param_3 + 0x330);
    lVar34 = (long)iVar29;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
      FUN_02e7f7cc(param_3 + 0x328,PTR_PTR_047d1a50,lVar34 + 1);
      iVar29 = *(int *)(param_3 + 0x330);
    }
    psVar1 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar29 * 4);
    *(int *)(param_3 + 0x330) = (int)(lVar34 + 1);
    *psVar1 = sVar12;
    psVar1[1] = sVar11;
  }
  if (plVar19[1] != 0) {
    do {
      lVar34 = *plVar20;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *plVar20 = lVar34 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar34 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  puVar40 = *(undefined8 **)(param_2 + 0x4e0);
  plVar19 = (long *)*puVar40;
  puVar39 = (undefined8 *)(param_1 + 0x40);
  *puVar39 = plVar19;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  uVar33 = *(int *)(puVar40 + 0xb) - 1;
  if (*(int *)(puVar40 + 0xb) < 1) {
    lVar34 = puVar40[1];
    (**(code **)(*plVar19 + 0x20))(plVar19,lVar34,6);
    *(undefined4 *)(puVar40 + 0xb) = 5;
    puVar40 = (undefined8 *)(lVar34 + 0x28);
  }
  else {
    *(uint *)(puVar40 + 0xb) = uVar33;
    puVar40 = (undefined8 *)(puVar40[1] + (ulong)uVar33 * 8);
  }
  puVar40 = (undefined8 *)*puVar40;
  puVar40[2] = 0;
  puVar40[3] = 0;
  *puVar40 = 0;
  puVar40[1] = 0;
  *(undefined4 *)((long)puVar40 + 4) = *(undefined4 *)(param_1 + 0x58);
  iVar29 = *(int *)(param_1 + 0x58);
  lVar34 = (long)iVar29;
  if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) <= iVar29) {
    FUN_031c25b4(param_1 + 0x50,PTR_PTR_047d1a50,lVar34 + 1);
    iVar29 = *(int *)(param_1 + 0x58);
  }
  *(undefined8 **)(*(long *)(param_1 + 0x50) + (long)iVar29 * 8) = puVar40;
  *(int *)(param_1 + 0x58) = (int)(lVar34 + 1);
  *(char **)(param_1 + 0x130) = "hknpMultithreadedSimulation::m_newBroadPhasePairs";
  (**(code **)(**(long **)(lVar43 + 0x4c0) + 0x58))
            (*(long **)(lVar43 + 0x4c0),lVar43,lVar42,0xfb,puVar39,param_3);
  puVar9 = PTR_DAT_047d1a08;
  uVar4 = *(undefined2 *)(param_3 + 0x4cc);
  sVar12 = *(short *)(param_3 + 0x4c8);
  if (*(int *)(*(long *)(lVar43 + 0x488) + 0x28) != 0) {
    local_70[0] = 0x40;
    plVar19 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
    if (*(code **)(puVar9 + 0x10) != (code *)0x0) {
      (**(code **)(puVar9 + 0x10))(plVar19,"hknpPrepareConstraintsTask");
    }
    plVar19[1] = 0xffffffff;
    plVar20 = plVar19 + 2;
    *plVar20 = 1;
    puVar9 = PTR_DAT_047e4948;
    plVar19[6] = param_1 + 0x140;
    plVar19[7] = param_1 + 0x158;
    *plVar19 = (long)(puVar9 + 0x10);
    plVar19[4] = (long)(puVar9 + 0x50);
    plVar19[5] = lVar43;
    sVar12 = FUN_0323f360(param_3,plVar19,0x40);
    sVar7 = *(short *)(param_3 + 0x4c8);
    if (*(int *)(*(long *)(lVar43 + 0x488) + 0x58) != 0) {
      sVar7 = sVar11;
    }
    if ((sVar12 != -1) && (sVar7 != -1)) {
      iVar29 = *(int *)(param_3 + 0x330);
      lVar34 = (long)iVar29;
      if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
        FUN_02e7f7cc(param_3 + 0x328,PTR_PTR_047d1a50,lVar34 + 1);
        iVar29 = *(int *)(param_3 + 0x330);
      }
      psVar1 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar29 * 4);
      *(int *)(param_3 + 0x330) = (int)(lVar34 + 1);
      *psVar1 = sVar7;
      psVar1[1] = sVar12;
    }
    if (plVar19[1] != 0) {
      do {
        lVar34 = *plVar20;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar6) {
          *plVar20 = lVar34 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar34 + -1 == 0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
    }
  }
  puVar9 = PTR_DAT_047d1a08;
  local_70[0] = 0x180;
  plVar19 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
  if (*(code **)(puVar9 + 0x10) != (code *)0x0) {
    (**(code **)(puVar9 + 0x10))(plVar19,"hknpPrepareNarrowPhasePairsTask");
  }
  plVar19[2] = 1;
  puVar9 = PTR_DAT_047e4950;
  *(undefined4 *)((long)plVar19 + 0x5c) = 0;
  plVar19[6] = lVar42;
  plVar19[7] = (long)puVar39;
  *plVar19 = (long)(puVar9 + 0x10);
  plVar19[1] = 0xffffffff;
  plVar19[4] = (long)(puVar9 + 0x58);
  plVar19[5] = param_1;
  plVar19[0xe] = param_1 + 0x168;
  plVar19[8] = param_1 + 0x140;
  plVar19[0xc] = 0;
  plVar19[0x10] = 0;
  plVar19[0x12] = (long)(plVar19 + 0x16);
  plVar19[0x13] = -0x7fffffe800000000;
  plVar20 = *(long **)(param_1 + 0x670);
  *(long **)(param_1 + 0x670) = plVar19;
  if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
    plVar19 = plVar20 + 2;
    do {
      lVar34 = *plVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *plVar19 = lVar34 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar34 + -1 == 0) {
      (**(code **)(*plVar20 + 0x18))();
    }
  }
  puVar9 = PTR_DAT_047d1a08;
  local_70[0] = 0x2ad0;
  plVar19 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
  if (*(code **)(puVar9 + 0x10) != (code *)0x0) {
    (**(code **)(puVar9 + 0x10))(plVar19,"hknpProcessNarrowPhasePairsTask");
  }
  plVar19[9] = 0;
  plVar19[0xb] = 0;
  puVar9 = PTR_DAT_047e4958;
  plVar19[1] = 0xffffffff;
  plVar19[2] = 1;
  plVar19[0x2e] = (long)(plVar19 + 0x30);
  plVar19[0xb8] = (long)(plVar19 + 0xba);
  *(undefined4 *)((long)plVar19 + 0x17c) = 0x80000011;
  *(undefined4 *)((long)plVar19 + 0x5cc) = 0x80000011;
  plVar19[0x556] = -0x8000000000000000;
  plVar19[0x558] = -0x8000000000000000;
  plVar19[0xd] = 0;
  plVar19[0xf] = 0;
  *plVar19 = (long)(puVar9 + 0x10);
  plVar19[0x11] = 0;
  plVar19[0x13] = 0;
  plVar19[0x15] = 0;
  plVar19[0x17] = 0;
  plVar19[0x19] = 0;
  plVar19[0x1b] = 0;
  plVar19[0x1d] = 0;
  plVar19[0x1f] = 0;
  plVar19[0x21] = 0;
  plVar19[0x23] = 0;
  *(undefined4 *)(plVar19 + 0x2f) = 0;
  *(undefined4 *)(plVar19 + 0xb9) = 0;
  *(undefined4 *)(plVar19 + 0x549) = 0;
  plVar19[0x551] = 0;
  plVar19[0x550] = 0;
  plVar19[0x54f] = 0;
  plVar19[0x54e] = 0;
  plVar19[0x555] = 0;
  plVar19[0x557] = 0;
  plVar19[0x542] = param_1 + 0x20;
  *(undefined4 *)(plVar19 + 0x25) = 0;
  plVar19[4] = (long)(puVar9 + 0x50);
  plVar19[5] = (long)(plVar19 + 0x142);
  plVar19[6] = 0x20000000000;
  plVar19[7] = 0;
  plVar20 = *(long **)(param_1 + 0x678);
  *(long **)(param_1 + 0x678) = plVar19;
  if (plVar20 != (long *)0x0) {
    if (plVar20[1] != 0) {
      plVar19 = plVar20 + 2;
      do {
        lVar34 = *plVar19;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar6) {
          *plVar19 = lVar34 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar34 + -1 == 0) {
        (**(code **)(*plVar20 + 0x18))();
      }
    }
    plVar19 = *(long **)(param_1 + 0x678);
  }
  *(long **)(*(long *)(param_1 + 0x670) + 0x48) = plVar19;
  lVar34 = param_3 + 0x18;
  uVar33 = *(uint *)(param_3 + 0x20);
  lVar35 = 0;
  if (*(long *)(param_1 + 0x670) != 0) {
    lVar35 = *(long *)(param_1 + 0x670) + 0x20;
  }
  uVar30 = uVar33;
  if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) <= (int)uVar33) {
    FUN_0323ff70(lVar34,PTR_PTR_047d1a50,(long)(int)uVar33 + 1);
    uVar30 = *(uint *)(param_3 + 0x20);
  }
  plVar19 = (long *)(*(long *)(param_3 + 0x18) + (long)(int)uVar30 * 0x18);
  *(int *)(param_3 + 0x20) = (int)((long)(int)uVar33 + 1);
  *(undefined2 *)(plVar19 + 1) = 1;
  *plVar19 = lVar35;
  *(undefined1 *)((long)plVar19 + 10) = 0x40;
  plVar19[2] = 0;
  plVar19 = (long *)(param_3 + 0x328);
  piVar3 = (int *)(param_3 + 0x330);
  iVar29 = *(int *)(param_3 + 0x330);
  lVar35 = (long)iVar29;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
    FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
    iVar29 = *piVar3;
  }
  puVar2 = (undefined2 *)(*(long *)(param_3 + 0x328) + (long)iVar29 * 4);
  *(int *)(param_3 + 0x330) = (int)(lVar35 + 1);
  *puVar2 = uVar4;
  sVar7 = (short)uVar33;
  puVar2[1] = sVar7;
  iVar29 = *(int *)(param_3 + 0x330);
  lVar35 = (long)iVar29;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
    FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
    iVar29 = *piVar3;
  }
  *piVar3 = (int)(lVar35 + 1);
  psVar1 = (short *)(*plVar19 + (long)iVar29 * 4);
  *psVar1 = sVar11;
  psVar1[1] = sVar7;
  if ((sVar12 != -1) && ((~uVar33 & 0xffff) != 0)) {
    iVar29 = *(int *)(param_3 + 0x330);
    lVar35 = (long)iVar29;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
      FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
      iVar29 = *piVar3;
    }
    *piVar3 = (int)(lVar35 + 1);
    psVar1 = (short *)(*plVar19 + (long)iVar29 * 4);
    *psVar1 = sVar12;
    psVar1[1] = sVar7;
  }
  *(short *)(param_3 + 0x4ce) = sVar7;
  puVar9 = PTR_DAT_047d1a08;
  local_70[0] = 0x40;
  plVar20 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
  if (*(code **)(puVar9 + 0x10) != (code *)0x0) {
    (**(code **)(puVar9 + 0x10))(plVar20,"hkReferencedTask");
  }
  plVar21 = plVar20 + 2;
  *plVar21 = 1;
  plVar20[6] = lVar42;
  *plVar20 = (long)&PTR_LAB_04611708;
  plVar20[1] = 0xffffffff;
  plVar20[4] = (long)&PTR_LAB_04611750;
  plVar20[5] = param_1;
  sVar13 = FUN_0323f360(param_3,plVar20,0x40);
  if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
    do {
      lVar35 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar35 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar35 + -1 == 0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
  }
  puVar9 = PTR_DAT_047d1a08;
  local_70[0] = 0x110;
  plVar20 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
  if (*(code **)(puVar9 + 0x10) != (code *)0x0) {
    (**(code **)(puVar9 + 0x10))(plVar20,"hknpProcessNarrowPhaseGridTask");
  }
  plVar20[2] = 1;
  puVar9 = PTR_DAT_047e4960;
  *(undefined4 *)(plVar20 + 0xb) = 0;
  plVar20[0x1f] = 0;
  plVar20[0x10] = 0;
  plVar20[0x11] = 0;
  plVar20[4] = (long)(puVar9 + 0x50);
  *plVar20 = (long)(puVar9 + 0x10);
  plVar20[1] = 0xffffffff;
  plVar20[0x12] = 0;
  plVar20[0x13] = 0;
  plVar20[0x1d] = 0;
  plVar20[0x1e] = 0;
  plVar20[0x16] = 0;
  plVar20[0x17] = -0x8000000000000000;
  plVar20[0x19] = 0;
  plVar20[0x1a] = -0x8000000000000000;
  plVar21 = *(long **)(param_1 + 0x668);
  *(long **)(param_1 + 0x668) = plVar20;
  if (plVar21 != (long *)0x0) {
    if (plVar21[1] != 0) {
      plVar20 = plVar21 + 2;
      do {
        lVar35 = *plVar20;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar6) {
          *plVar20 = lVar35 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar35 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))();
      }
    }
    plVar20 = *(long **)(param_1 + 0x668);
  }
  plVar21 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 4;
  }
  iVar29 = *(int *)(param_3 + 0x20);
  iVar31 = iVar29;
  if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) <= iVar29) {
    FUN_0323ff70(lVar34,PTR_PTR_047d1a50,(long)iVar29 + 1);
    iVar31 = *(int *)(param_3 + 0x20);
  }
  puVar39 = (undefined8 *)(*(long *)(param_3 + 0x18) + (long)iVar31 * 0x18);
  *(int *)(param_3 + 0x20) = (int)((long)iVar29 + 1);
  *puVar39 = plVar21;
  uVar4 = (undefined2)uVar38;
  *(undefined2 *)(puVar39 + 1) = uVar4;
  *(undefined2 *)((long)puVar39 + 10) = 0x140;
  puVar39[2] = 0;
  iVar31 = *(int *)(param_3 + 0x330);
  lVar35 = (long)iVar31;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar31) {
    FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
    iVar31 = *piVar3;
  }
  psVar1 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar31 * 4);
  *(int *)(param_3 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = sVar11;
  psVar1[1] = (short)iVar29;
  iVar31 = *(int *)(param_3 + 0x330);
  lVar35 = (long)iVar31;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar31) {
    FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
    iVar31 = *piVar3;
  }
  psVar1 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar31 * 4);
  *(int *)(param_3 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = (short)iVar29;
  psVar1[1] = sVar13;
  lVar35 = 0;
  if (*(long *)(param_1 + 0x678) != 0) {
    lVar35 = *(long *)(param_1 + 0x678) + 0x20;
  }
  iVar29 = *(int *)(param_3 + 0x20);
  iVar31 = iVar29;
  if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) <= iVar29) {
    FUN_0323ff70(lVar34,PTR_PTR_047d1a50,(long)iVar29 + 1);
    iVar31 = *(int *)(param_3 + 0x20);
  }
  plVar20 = (long *)(*(long *)(param_3 + 0x18) + (long)iVar31 * 0x18);
  *(int *)(param_3 + 0x20) = (int)((long)iVar29 + 1);
  *plVar20 = lVar35;
  *(undefined2 *)(plVar20 + 1) = uVar4;
  *(undefined2 *)((long)plVar20 + 10) = 0x140;
  plVar20[2] = 0;
  lVar35 = 0;
  if (*(long *)(param_1 + 0x678) != 0) {
    lVar35 = *(long *)(param_1 + 0x678) + 0x20;
  }
  iVar31 = *(int *)(param_3 + 0x20);
  iVar32 = iVar31;
  if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) <= iVar31) {
    FUN_0323ff70(lVar34,PTR_PTR_047d1a50,(long)iVar31 + 1);
    iVar32 = *(int *)(param_3 + 0x20);
  }
  plVar20 = (long *)(*(long *)(param_3 + 0x18) + (long)iVar32 * 0x18);
  *(int *)(param_3 + 0x20) = (int)((long)iVar31 + 1);
  *plVar20 = lVar35;
  *(undefined2 *)(plVar20 + 1) = uVar4;
  *(undefined2 *)((long)plVar20 + 10) = 0x140;
  plVar20[2] = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x668) + 0x100) = *(undefined8 *)(param_1 + 0x678);
  iVar32 = *(int *)(param_3 + 0x330);
  lVar35 = (long)iVar32;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar32) {
    FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
    iVar32 = *piVar3;
  }
  psVar1 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar32 * 4);
  *(int *)(param_3 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = sVar7;
  sVar18 = (short)iVar29;
  psVar1[1] = sVar18;
  iVar29 = *(int *)(param_3 + 0x330);
  lVar35 = (long)iVar29;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
    FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
    iVar29 = *piVar3;
  }
  psVar1 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar29 * 4);
  *(int *)(param_3 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = sVar7;
  sVar8 = (short)iVar31;
  psVar1[1] = sVar8;
  iVar29 = *(int *)(param_3 + 0x330);
  lVar35 = (long)iVar29;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
    FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
    iVar29 = *piVar3;
  }
  *piVar3 = (int)(lVar35 + 1);
  psVar1 = (short *)(*plVar19 + (long)iVar29 * 4);
  *psVar1 = sVar13;
  psVar1[1] = sVar18;
  puVar9 = PTR_DAT_047d1a08;
  local_70[0] = 0x70;
  plVar20 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
  if (*(code **)(puVar9 + 0x10) != (code *)0x0) {
    (**(code **)(puVar9 + 0x10))(plVar20,"hkReferencedTask");
  }
  plVar20[1] = 0xffffffff;
  plVar21 = plVar20 + 2;
  *plVar21 = 1;
  puVar9 = PTR_DAT_047e4968;
  plVar20[6] = lVar42;
  *plVar20 = (long)(puVar9 + 0x10);
  plVar20[4] = (long)(puVar9 + 0x50);
  plVar20[5] = param_1;
  plVar20[7] = 0;
  plVar20[8] = -0x8000000000000000;
  plVar20[9] = 0;
  plVar20[0xc] = -0x8000000000000000;
  *(undefined4 *)(plVar20 + 0xd) = 0;
  plVar20[10] = -0x8000000000000000;
  plVar20[0xb] = 0;
  iVar29 = *(int *)(lVar42 + 8);
  if (iVar29 < 1) {
    iVar31 = 0;
  }
  else {
    FUN_02fa9080(plVar20 + 7,iVar29);
    iVar31 = (int)plVar20[8];
  }
  if (iVar31 < iVar29) {
    lVar35 = plVar20[7];
    puVar39 = (undefined8 *)(lVar35 + (long)iVar31 * 0x210);
    *(int *)(plVar20 + 8) = iVar29;
    do {
      *puVar39 = 0;
      puVar39[2] = puVar39 + 6;
      *(undefined4 *)(puVar39 + 3) = 0;
      *(undefined4 *)((long)puVar39 + 0x1c) = 0x80000018;
      puVar39[0x20] = 0;
      puVar39[0x22] = puVar39 + 0x26;
      *(undefined4 *)(puVar39 + 0x23) = 0;
      *(undefined4 *)((long)puVar39 + 0x11c) = 0x80000018;
      *(undefined1 *)(puVar39 + 0x40) = 0;
      puVar39 = puVar39 + 0x42;
    } while (puVar39 != (undefined8 *)(lVar35 + (long)iVar29 * 0x210));
  }
  else if (iVar29 < iVar31) {
    *(int *)(plVar20 + 8) = iVar29;
    puVar9 = PTR_PTR_047d1a50;
    lVar35 = plVar20[7];
    plVar22 = (long *)(lVar35 + (long)iVar31 * 0x210);
    do {
      plVar24 = plVar22 + -0x42;
      if (plVar22[-0x22] != 0) {
        uVar33 = *(uint *)(plVar22 + -0x1f);
        if (*(char *)((long)plVar22 + -0x104) != '\0') {
          plVar36 = (long *)plVar22[-0x20];
          if ((int)uVar33 < 1) {
            plVar23 = plVar36;
          }
          else {
            uVar30 = uVar33 & 3;
            plVar23 = plVar36;
            if (2 < uVar33 - 1) {
              iVar31 = -(uVar33 & 0xfffffffc);
              do {
                plVar37 = plVar36;
                if (*plVar23 != 0) {
                  plVar37 = plVar36 + 1;
                  *plVar36 = *plVar23;
                }
                plVar36 = plVar37;
                if (plVar23[1] != 0) {
                  plVar36 = plVar37 + 1;
                  *plVar37 = plVar23[1];
                }
                plVar37 = plVar36;
                if (plVar23[2] != 0) {
                  plVar37 = plVar36 + 1;
                  *plVar36 = plVar23[2];
                }
                plVar36 = plVar37;
                if (plVar23[3] != 0) {
                  plVar36 = plVar37 + 1;
                  *plVar37 = plVar23[3];
                }
                plVar23 = plVar23 + 4;
                iVar31 = iVar31 + 4;
              } while (iVar31 != 0);
            }
            for (; uVar30 != 0; uVar30 = uVar30 - 1) {
              plVar37 = plVar36;
              if (*plVar23 != 0) {
                plVar37 = plVar36 + 1;
                *plVar36 = *plVar23;
              }
              plVar36 = plVar37;
              plVar23 = plVar23 + 1;
            }
            plVar23 = (long *)plVar22[-0x20];
          }
          uVar33 = (uint)((ulong)((long)plVar36 - (long)plVar23) >> 3);
          *(char *)((long)plVar22 + -0x104) = '\0';
        }
        if (uVar33 != 0) {
          plVar36 = (long *)plVar22[-0x22];
          (**(code **)(*plVar36 + 0x28))(plVar36,plVar22[-0x20]);
        }
        *(undefined4 *)(plVar22 + -0x1f) = 0;
        *(undefined4 *)(plVar22 + -0x21) = 0;
      }
      *(undefined4 *)(plVar22 + -0x1f) = 0;
      if ((-1 < (int)*(uint *)((long)plVar22 + -0xf4)) && (plVar22[-0x20] != 0)) {
        (**(code **)(*(long *)puVar9 + 0x20))
                  (puVar9,plVar22[-0x20],(ulong)*(uint *)((long)plVar22 + -0xf4) << 3);
      }
      plVar22[-0x20] = 0;
      *(undefined4 *)((long)plVar22 + -0xf4) = 0x80000000;
      if (*plVar24 != 0) {
        uVar33 = *(uint *)(plVar22 + -0x3f);
        plVar36 = plVar22 + -0x40;
        if (*(char *)((long)plVar22 + -0x204) != '\0') {
          plVar23 = (long *)*plVar36;
          if ((int)uVar33 < 1) {
            plVar37 = plVar23;
          }
          else {
            uVar30 = uVar33 & 3;
            plVar37 = plVar23;
            if (2 < uVar33 - 1) {
              iVar31 = -(uVar33 & 0xfffffffc);
              do {
                plVar25 = plVar23;
                if (*plVar37 != 0) {
                  plVar25 = plVar23 + 1;
                  *plVar23 = *plVar37;
                }
                plVar23 = plVar25;
                if (plVar37[1] != 0) {
                  plVar23 = plVar25 + 1;
                  *plVar25 = plVar37[1];
                }
                plVar25 = plVar23;
                if (plVar37[2] != 0) {
                  plVar25 = plVar23 + 1;
                  *plVar23 = plVar37[2];
                }
                plVar23 = plVar25;
                if (plVar37[3] != 0) {
                  plVar23 = plVar25 + 1;
                  *plVar25 = plVar37[3];
                }
                plVar37 = plVar37 + 4;
                iVar31 = iVar31 + 4;
              } while (iVar31 != 0);
            }
            for (; uVar30 != 0; uVar30 = uVar30 - 1) {
              plVar25 = plVar23;
              if (*plVar37 != 0) {
                plVar25 = plVar23 + 1;
                *plVar23 = *plVar37;
              }
              plVar23 = plVar25;
              plVar37 = plVar37 + 1;
            }
            plVar37 = (long *)*plVar36;
          }
          uVar33 = (uint)((ulong)((long)plVar23 - (long)plVar37) >> 3);
          *(char *)((long)plVar22 + -0x204) = '\0';
        }
        if (uVar33 != 0) {
          (**(code **)(*(long *)*plVar24 + 0x28))((long *)*plVar24,*plVar36);
        }
        *(uint *)(plVar22 + -0x3f) = 0;
        *(undefined4 *)(plVar22 + -0x41) = 0;
      }
      *(undefined4 *)(plVar22 + -0x3f) = 0;
      uVar33 = *(uint *)((long)plVar22 + -500);
      if ((-1 < (int)uVar33) && (lVar28 = plVar22[-0x40], lVar28 != 0)) {
        (**(code **)(*(long *)puVar9 + 0x20))(puVar9,lVar28,(ulong)uVar33 << 3);
      }
      plVar22[-0x40] = 0;
      *(uint *)((long)plVar22 + -500) = 0x80000000;
      plVar22 = plVar24;
    } while (plVar24 != (long *)(lVar35 + (long)iVar29 * 0x210));
  }
  puVar9 = PTR_DAT_047d1a08;
  local_70[0] = 0x50;
  plVar22 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
  if (*(code **)(puVar9 + 0x10) != (code *)0x0) {
    (**(code **)(puVar9 + 0x10))(plVar22,"hkReferencedTask");
  }
  plVar22[1] = 0xffffffff;
  plVar36 = plVar22 + 2;
  *plVar36 = 1;
  puVar9 = PTR_DAT_047e4970;
  plVar22[9] = 0;
  *plVar22 = (long)(puVar9 + 0x10);
  plVar22[4] = (long)(puVar9 + 0x58);
  plVar22[5] = param_1;
  plVar24 = plVar22 + 8;
  *plVar24 = 0;
  plVar22[6] = lVar42;
  if ((plVar20 == (long *)0x0) || (plVar20[1] == 0)) {
    *plVar24 = (long)plVar20;
  }
  else {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = *plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar23 = (long *)*plVar24;
    *plVar24 = (long)plVar20;
    if ((plVar23 != (long *)0x0) && (plVar23[1] != 0)) {
      plVar24 = plVar23 + 2;
      do {
        lVar35 = *plVar24;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar6) {
          *plVar24 = lVar35 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar35 + -1 == 0) {
        (**(code **)(*plVar23 + 0x18))();
      }
    }
  }
  *(undefined4 *)(plVar22 + 7) = 0;
  puVar10 = PTR_DAT_047d1a08;
  local_70[0] = 0x50;
  plVar24 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(plVar24,"hkReferencedTask");
  }
  plVar37 = plVar24 + 2;
  *plVar37 = 1;
  *plVar24 = (long)(puVar9 + 0x10);
  plVar24[1] = 0xffffffff;
  plVar24[4] = (long)(puVar9 + 0x58);
  plVar24[5] = param_1;
  plVar24[9] = 0;
  plVar23 = plVar24 + 8;
  *plVar23 = 0;
  plVar24[6] = lVar42;
  if ((plVar20 == (long *)0x0) || (plVar20[1] == 0)) {
    *plVar23 = (long)plVar20;
  }
  else {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = *plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar25 = (long *)*plVar23;
    *plVar23 = (long)plVar20;
    if ((plVar25 != (long *)0x0) && (plVar25[1] != 0)) {
      plVar23 = plVar25 + 2;
      do {
        lVar35 = *plVar23;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *plVar23 = lVar35 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar35 + -1 == 0) {
        (**(code **)(*plVar25 + 0x18))();
      }
    }
  }
  *(undefined4 *)(plVar24 + 7) = 1;
  puVar10 = PTR_DAT_047d1a08;
  local_70[0] = 0x50;
  plVar23 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(plVar23,"hkReferencedTask");
  }
  plVar41 = plVar23 + 2;
  *plVar41 = 1;
  *plVar23 = (long)(puVar9 + 0x10);
  plVar23[1] = 0xffffffff;
  plVar23[4] = (long)(puVar9 + 0x58);
  plVar23[5] = param_1;
  plVar23[9] = 0;
  plVar25 = plVar23 + 8;
  *plVar25 = 0;
  plVar23[6] = lVar42;
  if ((plVar20 == (long *)0x0) || (plVar20[1] == 0)) {
    *plVar25 = (long)plVar20;
  }
  else {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = *plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar26 = (long *)*plVar25;
    *plVar25 = (long)plVar20;
    if ((plVar26 != (long *)0x0) && (plVar26[1] != 0)) {
      plVar25 = plVar26 + 2;
      do {
        lVar35 = *plVar25;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar6) {
          *plVar25 = lVar35 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar35 + -1 == 0) {
        (**(code **)(*plVar26 + 0x18))();
      }
    }
  }
  *(undefined4 *)(plVar23 + 7) = 2;
  puVar10 = PTR_DAT_047d1a08;
  local_70[0] = 0x50;
  plVar25 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(plVar25,"hkReferencedTask");
  }
  plVar44 = plVar25 + 2;
  *plVar44 = 1;
  *plVar25 = (long)(puVar9 + 0x10);
  plVar25[1] = 0xffffffff;
  plVar26 = plVar25 + 8;
  *plVar26 = 0;
  plVar25[4] = (long)(puVar9 + 0x58);
  plVar25[5] = param_1;
  plVar25[9] = 0;
  plVar25[6] = lVar42;
  if ((plVar20 == (long *)0x0) || (plVar20[1] == 0)) {
    *plVar26 = (long)plVar20;
  }
  else {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = *plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar27 = (long *)*plVar26;
    *plVar26 = (long)plVar20;
    if ((plVar27 != (long *)0x0) && (plVar27[1] != 0)) {
      plVar26 = plVar27 + 2;
      do {
        lVar35 = *plVar26;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar6) {
          *plVar26 = lVar35 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar35 + -1 == 0) {
        (**(code **)(*plVar27 + 0x18))();
      }
    }
  }
  *(undefined4 *)(plVar25 + 7) = 3;
  sVar13 = FUN_0323f360(param_3,plVar22,0x40);
  sVar14 = FUN_0323f458(param_3,plVar20,uVar38,1,0x40);
  sVar15 = FUN_0323f458(param_3,plVar24,uVar38,1,0x40);
  sVar16 = FUN_0323f458(param_3,plVar23,uVar38,1,0x40);
  sVar17 = FUN_0323f360(param_3,plVar25,0x40);
  iVar29 = *(int *)(param_3 + 0x330);
  lVar35 = (long)iVar29;
  *(short *)(param_3 + 0x4d0) = sVar14;
  *(short *)(param_3 + 0x4d2) = sVar15;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
    FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
    iVar29 = *piVar3;
  }
  psVar1 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar29 * 4);
  *(int *)(param_3 + 0x330) = (int)(lVar35 + 1);
  psVar1[1] = sVar13;
  *psVar1 = sVar18;
  iVar29 = *(int *)(param_3 + 0x330);
  lVar35 = (long)iVar29;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
    FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
    iVar29 = *piVar3;
  }
  psVar1 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar29 * 4);
  *(int *)(param_3 + 0x330) = (int)(lVar35 + 1);
  psVar1[1] = sVar13;
  *psVar1 = sVar8;
  iVar29 = *(int *)(param_3 + 0x330);
  lVar35 = (long)iVar29;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
    FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
    iVar29 = *piVar3;
  }
  *(int *)(param_3 + 0x330) = (int)(lVar35 + 1);
  psVar1 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar29 * 4);
  *psVar1 = sVar13;
  psVar1[1] = sVar14;
  iVar29 = *(int *)(param_3 + 0x330);
  lVar35 = (long)iVar29;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
    FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
    iVar29 = *piVar3;
  }
  psVar1 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar29 * 4);
  *(int *)(param_3 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = sVar14;
  psVar1[1] = sVar15;
  iVar29 = *(int *)(param_3 + 0x330);
  lVar35 = (long)iVar29;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
    FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
    iVar29 = *piVar3;
  }
  psVar1 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar29 * 4);
  *(int *)(param_3 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = sVar15;
  psVar1[1] = sVar16;
  iVar29 = *(int *)(param_3 + 0x330);
  lVar35 = (long)iVar29;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
    FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
    iVar29 = *piVar3;
  }
  *piVar3 = (int)(lVar35 + 1);
  psVar1 = (short *)(*plVar19 + (long)iVar29 * 4);
  *psVar1 = sVar16;
  psVar1[1] = sVar17;
  if (plVar25[1] != 0) {
    do {
      lVar35 = *plVar44;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar44,0x10);
      if (bVar6) {
        *plVar44 = lVar35 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar35 + -1 == 0) {
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
  }
  if (plVar23[1] != 0) {
    do {
      lVar35 = *plVar41;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar6) {
        *plVar41 = lVar35 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar35 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))();
    }
  }
  if (plVar24[1] != 0) {
    do {
      lVar35 = *plVar37;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar6) {
        *plVar37 = lVar35 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar35 + -1 == 0) {
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
  }
  if (plVar22[1] != 0) {
    do {
      lVar35 = *plVar36;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar6) {
        *plVar36 = lVar35 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar35 + -1 == 0) {
      (**(code **)(*plVar22 + 0x18))();
    }
  }
  if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
    do {
      lVar35 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar35 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar35 + -1 == 0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
  }
  puVar9 = PTR_DAT_047d1a08;
  local_70[0] = 0x70;
  puVar39 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
  if (*(code **)(puVar9 + 0x10) != (code *)0x0) {
    (**(code **)(puVar9 + 0x10))(puVar39,"hkReferencedTask");
  }
  puVar39[8] = 0;
  puVar39[9] = 0x8000000000000000;
  puVar39[6] = lVar42;
  *(undefined4 *)(puVar39 + 0xc) = 0xffffffff;
  puVar39[10] = 0;
  puVar39[0xb] = 0x8000000000000000;
  *puVar39 = &PTR_LAB_046117d0;
  puVar39[1] = 0xffffffff;
  puVar39[2] = 1;
  puVar39[4] = &PTR_LAB_04611810;
  puVar39[5] = param_1;
  plVar20 = *(long **)(param_1 + 0x6a0);
  *(undefined8 **)(param_1 + 0x6a0) = puVar39;
  if (plVar20 != (long *)0x0) {
    if (plVar20[1] != 0) {
      plVar21 = plVar20 + 2;
      do {
        lVar35 = *plVar21;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *plVar21 = lVar35 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar35 + -1 == 0) {
        (**(code **)(*plVar20 + 0x18))();
      }
    }
    puVar39 = *(undefined8 **)(param_1 + 0x6a0);
  }
  puVar40 = (undefined8 *)0x0;
  if (puVar39 != (undefined8 *)0x0) {
    puVar40 = puVar39 + 4;
  }
  iVar29 = *(int *)(param_3 + 0x20);
  iVar31 = iVar29;
  if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) <= iVar29) {
    FUN_0323ff70(lVar34,PTR_PTR_047d1a50,(long)iVar29 + 1);
    iVar31 = *(int *)(param_3 + 0x20);
  }
  plVar20 = (long *)(*(long *)(param_3 + 0x18) + (long)iVar31 * 0x18);
  *(int *)(param_3 + 0x20) = (int)((long)iVar29 + 1);
  *(undefined2 *)(plVar20 + 1) = 1;
  *plVar20 = (long)puVar40;
  *(undefined1 *)((long)plVar20 + 10) = 0x40;
  plVar20[2] = 0;
  iVar31 = *(int *)(param_3 + 0x330);
  lVar35 = (long)iVar31;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar31) {
    FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
    iVar31 = *piVar3;
  }
  psVar1 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar31 * 4);
  *(int *)(param_3 + 0x330) = (int)(lVar35 + 1);
  sVar13 = (short)iVar29;
  psVar1[1] = sVar13;
  *psVar1 = sVar18;
  iVar29 = *(int *)(param_3 + 0x330);
  lVar35 = (long)iVar29;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
    FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
    iVar29 = *piVar3;
  }
  *piVar3 = (int)(lVar35 + 1);
  psVar1 = (short *)(*plVar19 + (long)iVar29 * 4);
  psVar1[1] = sVar13;
  *psVar1 = sVar8;
  puVar9 = PTR_DAT_047d1a08;
  if ((0.0 < *(float *)(lVar43 + 0x898)) || (*(int *)(*(long *)(lVar43 + 0x490) + 0xc60) != 0)) {
    local_70[0] = 0x40;
    plVar20 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
    if (*(code **)(puVar9 + 0x10) != (code *)0x0) {
      (**(code **)(puVar9 + 0x10))(plVar20,"hkReferencedTask");
    }
    plVar20[1] = 0xffffffff;
    plVar21 = plVar20 + 2;
    *plVar21 = 1;
    puVar9 = PTR_DAT_047e4978;
    *plVar20 = (long)(PTR_DAT_047e4978 + 0x10);
    plVar20[4] = (long)(puVar9 + 0x50);
    plVar20[5] = lVar42;
    *(undefined4 *)(plVar20 + 6) = *(undefined4 *)(*(long *)(lVar43 + 0x4b0) + 0x1c);
    *(undefined4 *)((long)plVar20 + 0x34) = 0;
    sVar14 = FUN_0323f458(param_3,plVar20,uVar38,1,0x40);
    iVar29 = *(int *)(param_3 + 0x330);
    lVar35 = (long)iVar29;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
      FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
      iVar29 = *piVar3;
    }
    psVar1 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar29 * 4);
    *(int *)(param_3 + 0x330) = (int)(lVar35 + 1);
    psVar1[1] = sVar14;
    *psVar1 = sVar18;
    iVar29 = *(int *)(param_3 + 0x330);
    lVar35 = (long)iVar29;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
      FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
      iVar29 = *piVar3;
    }
    psVar1 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar29 * 4);
    *(int *)(param_3 + 0x330) = (int)(lVar35 + 1);
    psVar1[1] = sVar14;
    *psVar1 = sVar8;
    iVar29 = *(int *)(param_3 + 0x330);
    lVar35 = (long)iVar29;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
      FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
      iVar29 = *piVar3;
    }
    *piVar3 = (int)(lVar35 + 1);
    psVar1 = (short *)(*plVar19 + (long)iVar29 * 4);
    *psVar1 = sVar14;
    psVar1[1] = sVar15;
    if (plVar20[1] != 0) {
      do {
        lVar35 = *plVar21;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *plVar21 = lVar35 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar35 + -1 == 0) {
        (**(code **)(*plVar20 + 0x18))(plVar20);
      }
    }
  }
  puVar9 = PTR_DAT_047d1a08;
  local_70[0] = 0x40;
  plVar20 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
  if (*(code **)(puVar9 + 0x10) != (code *)0x0) {
    (**(code **)(puVar9 + 0x10))(plVar20,"hkReferencedTask");
  }
  plVar21 = plVar20 + 2;
  *plVar21 = 1;
  *plVar20 = (long)&PTR_LAB_04611918;
  plVar20[1] = 0xffffffff;
  plVar20[4] = (long)&PTR_LAB_04611960;
  plVar20[5] = param_1;
  plVar20[6] = lVar42;
  sVar18 = FUN_0323f360(param_3,plVar20,0x40);
  iVar29 = *(int *)(param_3 + 0x330);
  lVar35 = (long)iVar29;
  *(short *)(param_3 + 0x4d4) = sVar18;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
    FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
    iVar29 = *piVar3;
  }
  psVar1 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar29 * 4);
  *(int *)(param_3 + 0x330) = (int)(lVar35 + 1);
  psVar1[1] = sVar18;
  *psVar1 = sVar17;
  iVar29 = *(int *)(param_3 + 0x330);
  lVar35 = (long)iVar29;
  sVar18 = *(short *)(param_3 + 0x4d4);
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
    FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
    iVar29 = *piVar3;
  }
  *piVar3 = (int)(lVar35 + 1);
  psVar1 = (short *)(*plVar19 + (long)iVar29 * 4);
  *psVar1 = sVar13;
  psVar1[1] = sVar18;
  if (plVar20[1] != 0) {
    do {
      lVar35 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar35 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar35 + -1 == 0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
  }
  puVar9 = PTR_DAT_047d1a08;
  uVar33 = *(uint *)(*(long *)(lVar43 + 0x488) + 0x28);
  if ((int)uVar33 <= (int)uVar38) {
    uVar38 = uVar33;
  }
  uVar38 = uVar38 & 0xffff;
  if (uVar38 != 0) {
    local_70[0] = 0x50;
    plVar20 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
    if (*(code **)(puVar9 + 0x10) != (code *)0x0) {
      (**(code **)(puVar9 + 0x10))(plVar20,"hknpBuildConstraintJacobiansTask");
    }
    plVar20[1] = 0xffffffff;
    plVar21 = plVar20 + 2;
    *plVar21 = 1;
    puVar9 = PTR_DAT_047e4980;
    *(undefined4 *)(plVar20 + 5) = 0;
    plVar20[8] = param_1 + 0x158;
    *(undefined4 *)(plVar20 + 9) = 0;
    *plVar20 = (long)(puVar9 + 0x10);
    plVar20[4] = (long)(puVar9 + 0x50);
    plVar20[6] = param_1;
    plVar20[7] = lVar42;
    sVar18 = FUN_0323f458(param_3,plVar20,uVar38,1,0x40);
    iVar29 = *(int *)(param_3 + 0x330);
    lVar35 = (long)iVar29;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
      FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
      iVar29 = *piVar3;
    }
    psVar1 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar29 * 4);
    *(int *)(param_3 + 0x330) = (int)(lVar35 + 1);
    psVar1[1] = sVar18;
    *psVar1 = sVar12;
    iVar29 = *(int *)(param_3 + 0x330);
    lVar35 = (long)iVar29;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
      FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar35 + 1);
      iVar29 = *piVar3;
    }
    *piVar3 = (int)(lVar35 + 1);
    psVar1 = (short *)(*plVar19 + (long)iVar29 * 4);
    psVar1[1] = sVar18;
    *psVar1 = sVar11;
    if (plVar20[1] != 0) {
      do {
        lVar35 = *plVar21;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *plVar21 = lVar35 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar35 + -1 == 0) {
        (**(code **)(*plVar20 + 0x18))(plVar20);
      }
    }
    puVar10 = PTR_DAT_047d1a08;
    local_70[0] = 0x50;
    plVar20 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
    if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
      (**(code **)(puVar10 + 0x10))(plVar20,"hknpBuildConstraintJacobiansTask");
    }
    plVar21 = plVar20 + 2;
    *plVar21 = 1;
    *plVar20 = (long)(puVar9 + 0x10);
    plVar20[1] = 0xffffffff;
    *(undefined4 *)(plVar20 + 5) = 1;
    plVar20[4] = (long)(puVar9 + 0x50);
    plVar20[6] = param_1;
    plVar20[7] = lVar42;
    plVar20[8] = param_1 + 0x168;
    *(undefined4 *)(plVar20 + 9) = 0;
    sVar12 = FUN_0323f458(param_3,plVar20,uVar38,1,0x40);
    iVar29 = *(int *)(param_3 + 0x330);
    lVar42 = (long)iVar29;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
      FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar42 + 1);
      iVar29 = *piVar3;
    }
    *piVar3 = (int)(lVar42 + 1);
    psVar1 = (short *)(*plVar19 + (long)iVar29 * 4);
    psVar1[1] = sVar12;
    *psVar1 = sVar7;
    if (plVar20[1] != 0) {
      do {
        lVar42 = *plVar21;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *plVar21 = lVar42 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar42 + -1 == 0) {
        (**(code **)(*plVar20 + 0x18))(plVar20);
      }
    }
    iVar29 = *(int *)(param_3 + 0x330);
    lVar42 = (long)iVar29;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
      FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar42 + 1);
      iVar29 = *piVar3;
    }
    psVar1 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar29 * 4);
    *(int *)(param_3 + 0x330) = (int)(lVar42 + 1);
    *psVar1 = sVar18;
    psVar1[1] = sVar12;
    iVar29 = *(int *)(param_3 + 0x330);
    lVar42 = (long)iVar29;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
      FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar42 + 1);
      iVar29 = *piVar3;
    }
    *piVar3 = (int)(lVar42 + 1);
    psVar1 = (short *)(*plVar19 + (long)iVar29 * 4);
    *psVar1 = sVar12;
    psVar1[1] = sVar13;
  }
  *(long *)(*(long *)(param_1 + 0x680) + 0x28) = lVar43;
  *(long *)(*(long *)(param_1 + 0x680) + 0x30) = param_1;
  uVar38 = *(uint *)(param_3 + 0x20);
  lVar42 = 0;
  if (*(long *)(param_1 + 0x680) != 0) {
    lVar42 = *(long *)(param_1 + 0x680) + 0x20;
  }
  uVar33 = uVar38;
  if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) <= (int)uVar38) {
    FUN_0323ff70(lVar34,PTR_PTR_047d1a50,(long)(int)uVar38 + 1);
    uVar33 = *(uint *)(param_3 + 0x20);
  }
  plVar20 = (long *)(*(long *)(param_3 + 0x18) + (long)(int)uVar33 * 0x18);
  *(int *)(param_3 + 0x20) = (int)((long)(int)uVar38 + 1);
  *plVar20 = lVar42;
  *(undefined2 *)(plVar20 + 1) = 1;
  *(undefined1 *)((long)plVar20 + 10) = 0x40;
  plVar20[2] = 0;
  *(short *)(param_3 + 0x4d6) = (short)uVar38;
  if (((~uVar38 & 0xffff) != 0) && (sVar12 = *(short *)(param_3 + 0x4ca), sVar12 != -1)) {
    iVar29 = *(int *)(param_3 + 0x330);
    lVar42 = (long)iVar29;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
      FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar42 + 1);
      iVar29 = *piVar3;
    }
    psVar1 = (short *)(*(long *)(param_3 + 0x328) + (long)iVar29 * 4);
    *(int *)(param_3 + 0x330) = (int)(lVar42 + 1);
    *psVar1 = sVar12;
    psVar1[1] = (short)uVar38;
    uVar38 = (uint)*(ushort *)(param_3 + 0x4d6);
  }
  iVar29 = *(int *)(param_3 + 0x330);
  lVar42 = (long)iVar29;
  uVar4 = *(undefined2 *)(param_3 + 0x4d4);
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) <= iVar29) {
    FUN_02e7f7cc(plVar19,PTR_PTR_047d1a50,lVar42 + 1);
    iVar29 = *piVar3;
  }
  *piVar3 = (int)(lVar42 + 1);
  puVar2 = (undefined2 *)(*plVar19 + (long)iVar29 * 4);
  *puVar2 = uVar4;
  puVar2[1] = (short)uVar38;
  return;
}


