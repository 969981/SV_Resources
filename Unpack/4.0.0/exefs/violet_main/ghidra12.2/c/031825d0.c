/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031825d0; name: FUN_031825d0
 */


short FUN_031825d0(long param_1,long param_2,undefined4 param_3,short param_4)

{
  short *psVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  long *plVar36;
  long *plVar37;
  long *plVar38;
  long *plVar39;
  long *plVar40;
  long *plVar41;
  long *plVar42;
  long *plVar43;
  long *plVar44;
  long *plVar45;
  long *plVar46;
  long *plVar47;
  long *plVar48;
  undefined8 local_70 [2];
  
  puVar3 = PTR_DAT_047d1a08;
  local_70[0] = 0x68;
  plVar20 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar20,"StepContext");
  }
  plVar41 = plVar20 + 2;
  *plVar41 = 1;
  *plVar20 = (long)&PTR_LAB_046958a0;
  plVar20[1] = 0xffffffff;
  plVar20[3] = param_2;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar21 = (long *)(param_2 + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *plVar21 = *plVar21 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar20[5] = 0;
  *(undefined4 *)(plVar20 + 4) = param_3;
  plVar20[6] = -0x8000000000000000;
  plVar20[7] = 0;
  plVar20[8] = -0x8000000000000000;
  plVar20[9] = 0;
  plVar20[0xb] = 0;
  plVar20[0xc] = -0x8000000000000000;
  plVar20[10] = -0x8000000000000000;
  local_70[0] = 0x30;
  plVar21 = (long *)(**(code **)puVar3)(0,local_70,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar21,"InitContextTask");
  }
  plVar21[1] = 0xffffffff;
  plVar36 = plVar21 + 2;
  *plVar36 = 1;
  puVar2 = PTR_DAT_047e5768 + 0x48;
  *plVar21 = (long)(PTR_DAT_047e5768 + 0x10);
  plVar21[4] = (long)puVar2;
  plVar21[5] = (long)plVar20;
  if (plVar20[1] != 0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar7) {
        *plVar41 = *plVar41 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  sVar8 = FUN_0323f360(param_1,plVar21,0x40);
  local_70[0] = 0x920;
  plVar22 = (long *)(**(code **)puVar3)(0,local_70,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar22,"ClearNeighborCollectorsTask");
  }
  lVar34 = plVar20[4];
  uVar5 = *(undefined4 *)(plVar20[3] + 0x68);
  plVar22[1] = 0xffffffff;
  plVar37 = plVar22 + 2;
  *plVar37 = 1;
  puVar2 = PTR_DAT_047e5770;
  *(int *)(plVar22 + 0x122) = (int)lVar34;
  *plVar22 = (long)(puVar2 + 0x10);
  plVar22[4] = (long)(puVar2 + 0x50);
  plVar22[0x99] = -0x7fffffef00000000;
  plVar22[0xe] = (long)(plVar22 + 0x10);
  plVar22[0xf] = -0x7fffffef00000000;
  plVar22[0x98] = (long)(plVar22 + 0x9a);
  FUN_03232938(plVar22 + 6,(int)lVar34,uVar5,1);
  puVar2 = PTR_DAT_047e5778;
  plVar22[0x123] = (long)plVar20;
  *plVar22 = (long)(puVar2 + 0x10);
  plVar22[4] = (long)(puVar2 + 0x50);
  if (plVar20[1] != 0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar7) {
        *plVar41 = *plVar41 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  sVar9 = FUN_0323f458(param_1,plVar22,param_3,1,0x40);
  local_70[0] = 0x920;
  plVar23 = (long *)(**(code **)puVar3)(0,local_70,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar23,"GatherCharacterAabbsTask");
  }
  lVar34 = plVar20[4];
  uVar5 = *(undefined4 *)(plVar20[3] + 0x58);
  plVar23[1] = 0xffffffff;
  plVar38 = plVar23 + 2;
  *plVar38 = 1;
  plVar23[0xe] = (long)(plVar23 + 0x10);
  *(undefined4 *)(plVar23 + 0xf) = 0;
  *(undefined4 *)((long)plVar23 + 0x7c) = 0x80000011;
  puVar2 = PTR_DAT_047e5780;
  *(undefined4 *)(plVar23 + 0x99) = 0;
  *(undefined4 *)((long)plVar23 + 0x4cc) = 0x80000011;
  *(int *)(plVar23 + 0x122) = (int)lVar34;
  plVar23[4] = (long)(puVar2 + 0x50);
  *plVar23 = (long)(puVar2 + 0x10);
  plVar23[0x98] = (long)(plVar23 + 0x9a);
  FUN_03232938(plVar23 + 6,(int)lVar34,uVar5,1);
  puVar2 = PTR_DAT_047e5788;
  plVar23[0x123] = (long)plVar20;
  *plVar23 = (long)(puVar2 + 0x10);
  plVar23[4] = (long)(puVar2 + 0x50);
  if (plVar20[1] != 0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar7) {
        *plVar41 = *plVar41 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  sVar10 = FUN_0323f458(param_1,plVar23,param_3,1,0x40);
  local_70[0] = 0x920;
  plVar24 = (long *)(**(code **)puVar3)(0,local_70,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar24,"UpdateAndGatherObstacleAabbsTask");
  }
  lVar34 = plVar20[4];
  uVar5 = *(undefined4 *)(plVar20[3] + 0x78);
  plVar24[1] = 0xffffffff;
  plVar39 = plVar24 + 2;
  *plVar39 = 1;
  plVar24[0xe] = (long)(plVar24 + 0x10);
  *(undefined4 *)(plVar24 + 0xf) = 0;
  *(undefined4 *)((long)plVar24 + 0x7c) = 0x80000011;
  puVar2 = PTR_DAT_047e5790;
  *(undefined4 *)(plVar24 + 0x99) = 0;
  *(undefined4 *)((long)plVar24 + 0x4cc) = 0x80000011;
  plVar24[4] = (long)(puVar2 + 0x50);
  *plVar24 = (long)(puVar2 + 0x10);
  plVar24[0x98] = (long)(plVar24 + 0x9a);
  *(int *)(plVar24 + 0x122) = (int)lVar34;
  FUN_03232938(plVar24 + 6,(int)lVar34,uVar5,1);
  puVar2 = PTR_DAT_047e5798;
  plVar24[0x123] = (long)plVar20;
  *plVar24 = (long)(puVar2 + 0x10);
  plVar24[4] = (long)(puVar2 + 0x50);
  if (plVar20[1] != 0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar7) {
        *plVar41 = *plVar41 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  sVar11 = FUN_0323f458(param_1,plVar24,param_3,1,0x40);
  local_70[0] = 0x40;
  plVar25 = (long *)(**(code **)puVar3)(0,local_70,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar25,"SortAabbsTask");
  }
  plVar25[1] = 0xffffffff;
  plVar40 = plVar25 + 2;
  *plVar40 = 1;
  puVar2 = PTR_DAT_047e57a0;
  *plVar25 = (long)(PTR_DAT_047e57a0 + 0x10);
  plVar25[4] = (long)(puVar2 + 0x48);
  plVar25[5] = (long)plVar20;
  if (plVar20[1] != 0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar7) {
        *plVar41 = *plVar41 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar25[6] = (long)(plVar20 + 7);
  sVar12 = FUN_0323f360(param_1,plVar25,0x40);
  local_70[0] = 0x40;
  plVar26 = (long *)(**(code **)puVar3)(0,local_70,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar26,"SortAabbsTask");
  }
  plVar42 = plVar26 + 2;
  *plVar42 = 1;
  *plVar26 = (long)(puVar2 + 0x10);
  plVar26[1] = 0xffffffff;
  plVar26[4] = (long)(puVar2 + 0x48);
  plVar26[5] = (long)plVar20;
  if (plVar20[1] != 0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar7) {
        *plVar41 = *plVar41 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar26[6] = (long)(plVar20 + 5);
  sVar13 = FUN_0323f360(param_1,plVar26,0x40);
  local_70[0] = 0x40;
  plVar27 = (long *)(**(code **)puVar3)(0,local_70,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar27,"SortAabbsTask");
  }
  plVar45 = plVar27 + 2;
  *plVar45 = 1;
  *plVar27 = (long)(puVar2 + 0x10);
  plVar27[1] = 0xffffffff;
  plVar27[4] = (long)(puVar2 + 0x48);
  plVar27[5] = (long)plVar20;
  if (plVar20[1] != 0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar7) {
        *plVar41 = *plVar41 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar27[6] = (long)(plVar20 + 9);
  sVar14 = FUN_0323f360(param_1,plVar27,0x40);
  local_70[0] = 0x30;
  plVar28 = (long *)(**(code **)puVar3)(0,local_70,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar28,"ScanCharacterAabbsTask");
  }
  plVar28[1] = 0xffffffff;
  plVar48 = plVar28 + 2;
  *plVar48 = 1;
  puVar2 = PTR_DAT_047e57a8 + 0x48;
  *plVar28 = (long)(PTR_DAT_047e57a8 + 0x10);
  plVar28[4] = (long)puVar2;
  plVar28[5] = (long)plVar20;
  if (plVar20[1] != 0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar7) {
        *plVar41 = *plVar41 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  sVar15 = FUN_0323f360(param_1,plVar28,0x40);
  local_70[0] = 0x30;
  plVar29 = (long *)(**(code **)puVar3)(0,local_70,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar29,"ScanObstacleGeneratorAabbsTask");
  }
  plVar29[1] = 0xffffffff;
  plVar46 = plVar29 + 2;
  *plVar46 = 1;
  puVar2 = PTR_DAT_047e57b0 + 0x48;
  *plVar29 = (long)(PTR_DAT_047e57b0 + 0x10);
  plVar29[4] = (long)puVar2;
  plVar29[5] = (long)plVar20;
  if (plVar20[1] != 0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar7) {
        *plVar41 = *plVar41 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  sVar16 = FUN_0323f360(param_1,plVar29,0x40);
  local_70[0] = 0x920;
  plVar30 = (long *)(**(code **)puVar3)(0,local_70,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar30,"GatherBoundariesAndSolveCharactersTask");
  }
  uVar5 = *(undefined4 *)(plVar20[3] + 0x68);
  lVar34 = plVar20[4];
  plVar30[1] = 0xffffffff;
  plVar43 = plVar30 + 2;
  *plVar43 = 1;
  plVar30[0xe] = (long)(plVar30 + 0x10);
  *(undefined4 *)(plVar30 + 0xf) = 0;
  *(undefined4 *)((long)plVar30 + 0x7c) = 0x80000011;
  puVar2 = PTR_DAT_047e57b8;
  *(undefined4 *)(plVar30 + 0x99) = 0;
  *(undefined4 *)((long)plVar30 + 0x4cc) = 0x80000011;
  *(int *)(plVar30 + 0x122) = (int)lVar34;
  plVar30[4] = (long)(puVar2 + 0x50);
  *plVar30 = (long)(puVar2 + 0x10);
  plVar30[0x98] = (long)(plVar30 + 0x9a);
  FUN_03232938(plVar30 + 6,(int)lVar34,uVar5,1);
  puVar2 = PTR_DAT_047e57c0;
  plVar30[0x123] = (long)plVar20;
  *plVar30 = (long)(puVar2 + 0x10);
  plVar30[4] = (long)(puVar2 + 0x50);
  if (plVar20[1] != 0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar7) {
        *plVar41 = *plVar41 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  sVar17 = FUN_0323f458(param_1,plVar30,param_3,1,0x40);
  local_70[0] = 0x920;
  plVar31 = (long *)(**(code **)puVar3)(0,local_70,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar31,"ApplySolverOutputTask");
  }
  uVar5 = *(undefined4 *)(plVar20[3] + 0x68);
  lVar34 = plVar20[4];
  plVar31[1] = 0xffffffff;
  plVar44 = plVar31 + 2;
  *plVar44 = 1;
  plVar31[0xe] = (long)(plVar31 + 0x10);
  *(undefined4 *)(plVar31 + 0xf) = 0;
  *(undefined4 *)((long)plVar31 + 0x7c) = 0x80000011;
  puVar2 = PTR_DAT_047e57c8;
  *(undefined4 *)(plVar31 + 0x99) = 0;
  *(undefined4 *)((long)plVar31 + 0x4cc) = 0x80000011;
  *(int *)(plVar31 + 0x122) = (int)lVar34;
  plVar31[4] = (long)(puVar2 + 0x50);
  *plVar31 = (long)(puVar2 + 0x10);
  plVar31[0x98] = (long)(plVar31 + 0x9a);
  FUN_03232938(plVar31 + 6,(int)lVar34,uVar5,1);
  puVar2 = PTR_DAT_047e57d0;
  plVar31[0x123] = (long)plVar20;
  *plVar31 = (long)(puVar2 + 0x10);
  plVar31[4] = (long)(puVar2 + 0x50);
  if (plVar20[1] != 0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar7) {
        *plVar41 = *plVar41 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  sVar18 = FUN_0323f458(param_1,plVar31,param_3,1,0x40);
  local_70[0] = 0x30;
  plVar32 = (long *)(**(code **)puVar3)(0,local_70,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar32,"FinalizeTask");
  }
  plVar32[1] = 0xffffffff;
  plVar47 = plVar32 + 2;
  *plVar47 = 1;
  puVar3 = PTR_DAT_047e57d8 + 0x48;
  *plVar32 = (long)(PTR_DAT_047e57d8 + 0x10);
  plVar32[4] = (long)puVar3;
  plVar32[5] = param_2;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar4 = (long *)(param_2 + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar7) {
        *plVar4 = *plVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  sVar19 = FUN_0323f360(param_1,plVar32,0x40);
  if ((param_4 != -1) && (sVar8 != -1)) {
    iVar33 = *(int *)(param_1 + 0x330);
    lVar34 = (long)iVar33;
    if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar33) {
      FUN_02e7f7cc(param_1 + 0x328,PTR_PTR_047d1a50,lVar34 + 1);
      iVar33 = *(int *)(param_1 + 0x330);
    }
    psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar33 * 4);
    *(int *)(param_1 + 0x330) = (int)(lVar34 + 1);
    *psVar1 = param_4;
    psVar1[1] = sVar8;
  }
  lVar34 = param_1 + 0x328;
  iVar33 = *(int *)(param_1 + 0x330);
  lVar35 = (long)iVar33;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar33) {
    FUN_02e7f7cc(lVar34,PTR_PTR_047d1a50,lVar35 + 1);
    iVar33 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar33 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = sVar8;
  psVar1[1] = sVar9;
  iVar33 = *(int *)(param_1 + 0x330);
  lVar35 = (long)iVar33;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar33) {
    FUN_02e7f7cc(lVar34,PTR_PTR_047d1a50,lVar35 + 1);
    iVar33 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar33 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = sVar8;
  psVar1[1] = sVar10;
  iVar33 = *(int *)(param_1 + 0x330);
  lVar35 = (long)iVar33;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar33) {
    FUN_02e7f7cc(lVar34,PTR_PTR_047d1a50,lVar35 + 1);
    iVar33 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar33 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = sVar8;
  psVar1[1] = sVar11;
  iVar33 = *(int *)(param_1 + 0x330);
  lVar35 = (long)iVar33;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar33) {
    FUN_02e7f7cc(lVar34,PTR_PTR_047d1a50,lVar35 + 1);
    iVar33 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar33 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = sVar9;
  psVar1[1] = sVar16;
  iVar33 = *(int *)(param_1 + 0x330);
  lVar35 = (long)iVar33;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar33) {
    FUN_02e7f7cc(lVar34,PTR_PTR_047d1a50,lVar35 + 1);
    iVar33 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar33 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = sVar9;
  psVar1[1] = sVar15;
  iVar33 = *(int *)(param_1 + 0x330);
  lVar35 = (long)iVar33;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar33) {
    FUN_02e7f7cc(lVar34,PTR_PTR_047d1a50,lVar35 + 1);
    iVar33 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar33 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = sVar10;
  psVar1[1] = sVar12;
  iVar33 = *(int *)(param_1 + 0x330);
  lVar35 = (long)iVar33;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar33) {
    FUN_02e7f7cc(lVar34,PTR_PTR_047d1a50,lVar35 + 1);
    iVar33 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar33 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = sVar10;
  psVar1[1] = sVar13;
  iVar33 = *(int *)(param_1 + 0x330);
  lVar35 = (long)iVar33;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar33) {
    FUN_02e7f7cc(lVar34,PTR_PTR_047d1a50,lVar35 + 1);
    iVar33 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar33 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = sVar11;
  psVar1[1] = sVar14;
  iVar33 = *(int *)(param_1 + 0x330);
  lVar35 = (long)iVar33;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar33) {
    FUN_02e7f7cc(lVar34,PTR_PTR_047d1a50,lVar35 + 1);
    iVar33 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar33 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = sVar12;
  psVar1[1] = sVar15;
  iVar33 = *(int *)(param_1 + 0x330);
  lVar35 = (long)iVar33;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar33) {
    FUN_02e7f7cc(lVar34,PTR_PTR_047d1a50,lVar35 + 1);
    iVar33 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar33 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = sVar13;
  psVar1[1] = sVar15;
  iVar33 = *(int *)(param_1 + 0x330);
  lVar35 = (long)iVar33;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar33) {
    FUN_02e7f7cc(lVar34,PTR_PTR_047d1a50,lVar35 + 1);
    iVar33 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar33 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = sVar14;
  psVar1[1] = sVar16;
  iVar33 = *(int *)(param_1 + 0x330);
  lVar35 = (long)iVar33;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar33) {
    FUN_02e7f7cc(lVar34,PTR_PTR_047d1a50,lVar35 + 1);
    iVar33 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar33 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = sVar13;
  psVar1[1] = sVar16;
  iVar33 = *(int *)(param_1 + 0x330);
  lVar35 = (long)iVar33;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar33) {
    FUN_02e7f7cc(lVar34,PTR_PTR_047d1a50,lVar35 + 1);
    iVar33 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar33 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = sVar15;
  psVar1[1] = sVar17;
  iVar33 = *(int *)(param_1 + 0x330);
  lVar35 = (long)iVar33;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar33) {
    FUN_02e7f7cc(lVar34,PTR_PTR_047d1a50,lVar35 + 1);
    iVar33 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar33 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = sVar16;
  psVar1[1] = sVar17;
  iVar33 = *(int *)(param_1 + 0x330);
  lVar35 = (long)iVar33;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar33) {
    FUN_02e7f7cc(lVar34,PTR_PTR_047d1a50,lVar35 + 1);
    iVar33 = *(int *)(param_1 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar33 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar35 + 1);
  *psVar1 = sVar17;
  psVar1[1] = sVar18;
  iVar33 = *(int *)(param_1 + 0x330);
  lVar35 = (long)iVar33;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar33) {
    FUN_02e7f7cc(lVar34,PTR_PTR_047d1a50,lVar35 + 1);
    iVar33 = *(int *)(param_1 + 0x330);
  }
  *(int *)(param_1 + 0x330) = (int)(lVar35 + 1);
  psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar33 * 4);
  psVar1[1] = sVar19;
  *psVar1 = sVar18;
  if (plVar32[1] != 0) {
    do {
      lVar34 = *plVar47;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar47,0x10);
      if (bVar7) {
        *plVar47 = lVar34 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar34 + -1 == 0) {
      (**(code **)(*plVar32 + 0x18))();
    }
  }
  if (plVar31[1] != 0) {
    do {
      lVar34 = *plVar44;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar44,0x10);
      if (bVar7) {
        *plVar44 = lVar34 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar34 + -1 == 0) {
      (**(code **)(*plVar31 + 0x18))();
    }
  }
  if (plVar30[1] != 0) {
    do {
      lVar34 = *plVar43;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar43,0x10);
      if (bVar7) {
        *plVar43 = lVar34 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar34 + -1 == 0) {
      (**(code **)(*plVar30 + 0x18))();
    }
  }
  if (plVar29[1] != 0) {
    do {
      lVar34 = *plVar46;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar46,0x10);
      if (bVar7) {
        *plVar46 = lVar34 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar34 + -1 == 0) {
      (**(code **)(*plVar29 + 0x18))();
    }
  }
  if (plVar28[1] != 0) {
    do {
      lVar34 = *plVar48;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar48,0x10);
      if (bVar7) {
        *plVar48 = lVar34 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar34 + -1 == 0) {
      (**(code **)(*plVar28 + 0x18))();
    }
  }
  if (plVar27[1] != 0) {
    do {
      lVar34 = *plVar45;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar45,0x10);
      if (bVar7) {
        *plVar45 = lVar34 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar34 + -1 == 0) {
      (**(code **)(*plVar27 + 0x18))();
    }
  }
  if (plVar26[1] != 0) {
    do {
      lVar34 = *plVar42;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar42,0x10);
      if (bVar7) {
        *plVar42 = lVar34 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar34 + -1 == 0) {
      (**(code **)(*plVar26 + 0x18))();
    }
  }
  if (plVar25[1] != 0) {
    do {
      lVar34 = *plVar40;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar7) {
        *plVar40 = lVar34 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar34 + -1 == 0) {
      (**(code **)(*plVar25 + 0x18))();
    }
  }
  if (plVar24[1] != 0) {
    do {
      lVar34 = *plVar39;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar39,0x10);
      if (bVar7) {
        *plVar39 = lVar34 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar34 + -1 == 0) {
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
  }
  if (plVar23[1] != 0) {
    do {
      lVar34 = *plVar38;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar7) {
        *plVar38 = lVar34 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar34 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  if (plVar22[1] != 0) {
    do {
      lVar34 = *plVar37;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar7) {
        *plVar37 = lVar34 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar34 + -1 == 0) {
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
  }
  if (plVar21[1] != 0) {
    do {
      lVar34 = *plVar36;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar7) {
        *plVar36 = lVar34 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar34 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if (plVar20[1] != 0) {
    do {
      lVar34 = *plVar41;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar7) {
        *plVar41 = lVar34 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar34 + -1 == 0) {
      (**(code **)(*plVar20 + 0x18))();
    }
  }
  return sVar19;
}


