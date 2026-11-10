/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e0d818; name: FUN_00e0d818
 */


void FUN_00e0d818(undefined4 *param_1,long param_2,long param_3,undefined8 *param_4,long param_5,
                 long param_6,undefined8 *param_7,long param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ushort uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  int iVar18;
  long *plVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 local_2d8 [2];
  undefined4 local_2d0 [2];
  undefined4 local_2c8 [2];
  undefined4 local_2c0 [2];
  undefined4 local_2b8 [2];
  undefined8 local_2b0;
  undefined8 local_2a8;
  long *local_2a0;
  long local_298;
  long *local_290;
  undefined4 local_288;
  undefined2 local_274 [2];
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70 [2];
  
  uVar35 = 5;
  if (param_6 == 0) {
    uVar35 = 1;
  }
  FUN_03079d24(param_1,*(undefined8 *)(param_2 + 0x130),
               *(undefined4 *)(*(long *)(param_3 + 0x20) + 0x178),uVar35);
  puVar6 = PTR_DAT_047d1a08;
  if ((*(ulong *)(param_2 + 0x28) < 4) && (*(long *)(param_2 + 0x4d8) == 0)) {
    plVar12 = (long *)0x0;
    plVar9 = (long *)0x0;
  }
  else {
    local_270 = 0x28;
    plVar9 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_270,0);
    if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
      (**(code **)(puVar6 + 0x10))(plVar9,"hkaiReferencedArray");
    }
    *plVar9 = (long)&PTR_LAB_0464d9c0;
    plVar9[1] = 0xffffffff;
    plVar9[4] = -0x8000000000000000;
    plVar9[2] = 1;
    plVar9[3] = 0;
    puVar6 = PTR_PTR_047d1a50;
    uVar22 = (ulong)(param_5 - (long)param_4) >> 3;
    uVar21 = (uint)uVar22;
    if ((int)uVar21 < 1) {
      plVar9[3] = 0;
      plVar9[4] = -0x8000000000000000;
    }
    else {
      puVar10 = (undefined8 *)
                (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                          (PTR_PTR_047d1a50,param_5 - (long)param_4 & 0x7fffffff8);
      uVar16 = uVar21 & 3;
      plVar9[3] = (long)puVar10;
      *(uint *)(plVar9 + 4) = uVar21;
      *(uint *)((long)plVar9 + 0x24) = uVar21;
      puVar13 = param_4;
      if (2 < uVar21 - 1) {
        iVar18 = -(uVar21 & 0xfffffffc);
        puVar11 = puVar10;
        puVar17 = param_4;
        do {
          *puVar11 = *puVar17;
          puVar11[1] = puVar17[1];
          puVar11[2] = puVar17[2];
          puVar13 = puVar17 + 4;
          puVar10 = puVar11 + 4;
          iVar18 = iVar18 + 4;
          puVar11[3] = puVar17[3];
          puVar11 = puVar10;
          puVar17 = puVar13;
        } while (iVar18 != 0);
      }
      if ((uVar22 & 3) != 0) {
        do {
          uVar16 = uVar16 - 1;
          *puVar10 = *puVar13;
          puVar10 = puVar10 + 1;
          puVar13 = puVar13 + 1;
        } while (uVar16 != 0);
      }
    }
    puVar7 = PTR_DAT_047d1a08;
    local_270 = 0x28;
    plVar12 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_270,0);
    if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
      (**(code **)(puVar7 + 0x10))(plVar12,"hkaiReferencedArray");
    }
    *plVar12 = (long)&PTR_LAB_0464d9c0;
    plVar12[1] = 0xffffffff;
    plVar12[2] = 1;
    plVar12[3] = 0;
    uVar22 = (ulong)(param_8 - (long)param_7) >> 3;
    uVar21 = (uint)uVar22;
    plVar12[4] = -0x8000000000000000;
    if ((int)uVar21 < 1) {
      plVar12[3] = 0;
      plVar12[4] = -0x8000000000000000;
    }
    else {
      puVar13 = (undefined8 *)
                (**(code **)(*(long *)puVar6 + 0x18))(puVar6,param_8 - (long)param_7 & 0x7fffffff8);
      uVar16 = uVar21 & 3;
      plVar12[3] = (long)puVar13;
      *(uint *)(plVar12 + 4) = uVar21;
      *(uint *)((long)plVar12 + 0x24) = uVar21;
      if (uVar21 - 1 < 3) {
        puVar17 = param_7;
      }
      else {
        iVar18 = -(uVar21 & 0xfffffffc);
        puVar10 = puVar13;
        puVar11 = param_7;
        do {
          *puVar10 = *puVar11;
          puVar10[1] = puVar11[1];
          puVar10[2] = puVar11[2];
          puVar17 = puVar11 + 4;
          puVar13 = puVar10 + 4;
          iVar18 = iVar18 + 4;
          puVar10[3] = puVar11[3];
          puVar10 = puVar13;
          puVar11 = puVar17;
        } while (iVar18 != 0);
      }
      if ((uVar22 & 3) != 0) {
        do {
          uVar16 = uVar16 - 1;
          *puVar13 = *puVar17;
          puVar13 = puVar13 + 1;
          puVar17 = puVar17 + 1;
        } while (uVar16 != 0);
      }
    }
  }
  local_288 = *param_1;
  local_2b0 = 0x8000030;
  local_2a8 = param_3;
  local_2a0 = plVar9;
  local_298 = param_6;
  local_290 = plVar12;
  FUN_00e08a00(param_2 + 0x28,param_2,&local_2b0);
  if (*(char *)(param_3 + 200) != '\0') {
    local_a0 = 1;
    local_98 = 0;
    local_90 = &local_270;
    local_b0 = PTR_DAT_047e34b8 + 0x10;
    local_a8 = 0xffffffff;
    local_78 = 0;
    local_88 = 0;
    local_80 = 0x1bf;
    memset(&local_270,0,0x1c0);
    FUN_0322bd4c(&local_b0,
                 "An particular hkaiNavMeshInstance must not be added to a world more than once. To reload a section into the world after unloading it, create a new instance for the navmesh."
                 ,0xac);
    FUN_03226c50(0x6dfa275c,&local_270,
                 "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Ai/Pathfinding/NavMesh/hkaiNavMeshInstance.cpp"
                 ,0xe0);
  }
  *(undefined1 *)(param_3 + 200) = 1;
  if (*(long *)(param_2 + 0x4d8) == 0) {
    FUN_03079fe8(*(undefined8 *)(param_2 + 0x130),param_3,param_4,param_5,param_6,param_7,param_8,1)
    ;
    puVar6 = PTR_DAT_047d1a08;
    fVar28 = (float)((ulong)*(undefined8 *)(param_3 + 0x70) >> 0x20);
    fVar26 = (float)*(undefined8 *)(param_3 + 0x70);
    fVar38 = (float)*(undefined8 *)(param_3 + 0x78);
    fVar25 = (float)*(undefined8 *)(param_3 + 0x60);
    fVar31 = (float)((ulong)*(undefined8 *)(param_3 + 0x60) >> 0x20);
    fVar32 = (float)*(undefined8 *)(param_3 + 0x68);
    fVar30 = (float)*(undefined8 *)(param_3 + 0x88);
    uVar35 = NEON_fmov(0x3f800000,4);
    fVar36 = fVar30 + (float)uVar35;
    fVar33 = (float)*(undefined8 *)(param_3 + 0x80);
    fVar29 = (float)((ulong)*(undefined8 *)(param_3 + 0x80) >> 0x20);
    fVar37 = fVar31 - fVar26;
    fVar39 = fVar33 - fVar32;
    fVar32 = fVar32 + fVar33;
    fVar33 = fVar38 + fVar29;
    fVar31 = fVar31 + fVar26;
    fVar26 = (float)uVar35 - fVar30;
    fVar38 = fVar38 - fVar29;
    uVar35 = CONCAT44(fVar39,fVar38);
    if (fVar25 < -fVar28) {
      uVar35 = CONCAT44(fVar33,fVar32);
    }
    uVar34 = CONCAT44(fVar25 + fVar28 + fVar36,fVar37);
    if (fVar25 < -fVar28) {
      uVar34 = CONCAT44(fVar37,fVar36 - (fVar25 + fVar28));
    }
    uVar27 = CONCAT44(fVar26 - (fVar25 - fVar28),fVar31);
    uVar5 = CONCAT44(fVar39,fVar33);
    if (fVar28 < fVar25) {
      uVar27 = CONCAT44(fVar31,(fVar25 - fVar28) + fVar26);
      uVar5 = CONCAT44(fVar38,fVar32);
    }
    if (fVar30 < 0.0) {
      uVar35 = uVar27;
      uVar34 = uVar5;
    }
    fVar31 = (float)uVar35;
    fVar32 = (float)((ulong)uVar35 >> 0x20);
    fVar28 = (float)uVar34;
    fVar33 = (float)((ulong)uVar34 >> 0x20);
    fVar38 = fVar31 * fVar31 + fVar32 * fVar32;
    fVar26 = fVar28 * fVar28 + fVar33 * fVar33;
    fVar25 = fVar38 + fVar26;
    if (fVar25 == 0.0) {
      local_270 = 0;
      uStack_268 = 0;
    }
    else {
      fVar25 = SQRT(fVar25);
      fVar38 = SQRT(fVar38 + fVar26);
      local_270 = CONCAT44(fVar32 / fVar38,fVar31 / fVar25);
      uStack_268 = CONCAT44(fVar33 / fVar38,fVar28 / fVar25);
    }
    uStack_258 = *(undefined8 *)(param_3 + 0x98);
    local_260 = *(undefined8 *)(param_3 + 0x90);
    lVar23 = *(long *)(param_3 + 0xc0);
    if (lVar23 == 0) {
      plVar19 = (long *)0x0;
    }
    else {
      lVar24 = *(long *)(*(long *)(*(long *)(lVar23 + 0x20) + 0x20) + 0x68);
      local_70[0] = 0x28;
      plVar19 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
      if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
        (**(code **)(puVar6 + 0x10))(plVar19,"hkaiNavMeshQueryMediator");
      }
      plVar14 = *(long **)(lVar23 + 0x18);
      *plVar19 = (long)(PTR_DAT_047e4fd0 + 0x10);
      plVar19[1] = 0xffffffff;
      plVar19[2] = 1;
      plVar19[3] = (long)plVar14;
      if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
        plVar14 = plVar14 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = *plVar14 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar14 = (long *)plVar19[3];
      }
      plVar19[4] = lVar24;
      (**(code **)(*plVar14 + 0x48))(plVar14,lVar24);
    }
    lVar23 = *(long *)(param_3 + 0x20);
    local_2c0[0] = *(undefined4 *)(lVar23 + 0x17c);
    FUN_030f7594(*(undefined8 *)(param_2 + 0x170),local_2c0,*(undefined8 *)(lVar23 + 0x68),plVar19,
                 &local_270,*(undefined4 *)(lVar23 + 0x180));
    local_2c8[0] = *(undefined4 *)(*(long *)(param_3 + 0x20) + 0x17c);
    FUN_030d5d90(*(undefined8 *)(param_2 + 0x138),local_2c8,param_3);
    lVar24 = *(long *)(*(long *)(param_2 + 0x138) + 0xf0);
    local_70[0] = CONCAT44(local_70[0]._4_4_,*param_1);
    local_274[0] = 0;
    lVar23 = FUN_030d4c28(lVar24 + 0x18,local_70,local_274);
    lVar23 = *(long *)(lVar24 + 0x18) + ((lVar23 << 0x20) >> 0x1d);
    *(byte *)(lVar23 + 4) = *(byte *)(lVar23 + 4) | 1;
    *(undefined1 *)(lVar23 + 5) = 0;
    if (param_6 == 0) {
      local_2d0[0] = *param_1;
      lVar23 = param_2 + 0x40;
      puVar15 = local_2d0;
    }
    else {
      lVar24 = *(long *)(*(long *)(param_2 + 0x138) + 0xf0);
      local_70[0] = CONCAT44(local_70[0]._4_4_,*param_1);
      local_274[0] = 0;
      lVar23 = FUN_030d4c28(lVar24 + 0x18,local_70,local_274);
      lVar23 = *(long *)(lVar24 + 0x18) + ((lVar23 << 0x20) >> 0x1d);
      *(byte *)(lVar23 + 4) = *(byte *)(lVar23 + 4) | 4;
      *(undefined1 *)(lVar23 + 5) = 0;
      local_2d0[0] = *param_1;
      FUN_030d4684(param_2 + 0x40,param_2,local_2d0);
      local_2d8[0] = *param_1;
      lVar23 = param_2 + 0x60;
      puVar15 = local_2d8;
    }
    FUN_030d4684(lVar23,param_2,puVar15);
    if ((plVar19 != (long *)0x0) && (plVar19[1] != 0)) {
      plVar14 = plVar19 + 2;
      do {
        lVar23 = *plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = lVar23 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar23 + -1 == 0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
    }
  }
  else {
    lVar23 = *(long *)(param_2 + 0x4e0);
    if (*(long *)(local_2a8 + 8) != 0) {
      plVar19 = (long *)(local_2a8 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *plVar19 = *plVar19 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (local_2a0[1] != 0) {
      plVar19 = local_2a0 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *plVar19 = *plVar19 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar24 = local_2a0[4];
    if (0 < (int)lVar24) {
      plVar19 = (long *)local_2a0[3];
      iVar18 = 0;
      do {
        lVar20 = *plVar19;
        if ((lVar20 != 0) && (*(long *)(lVar20 + 8) != 0)) {
          plVar14 = (long *)(lVar20 + 0x10);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = *plVar14 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        iVar18 = iVar18 + 1;
        plVar19 = plVar19 + 1;
      } while (iVar18 != (int)lVar24);
    }
    if ((local_298 != 0) && (*(long *)(local_298 + 8) != 0)) {
      plVar19 = (long *)(local_298 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *plVar19 = *plVar19 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (local_290[1] != 0) {
      plVar19 = local_290 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *plVar19 = *plVar19 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar24 = local_290[4];
    if (0 < (int)lVar24) {
      plVar19 = (long *)local_290[3];
      iVar18 = 0;
      do {
        lVar20 = *plVar19;
        if ((lVar20 != 0) && (*(long *)(lVar20 + 8) != 0)) {
          plVar14 = (long *)(lVar20 + 0x10);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = *plVar14 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        iVar18 = iVar18 + 1;
        plVar19 = plVar19 + 1;
      } while (iVar18 != (int)lVar24);
    }
    uVar8 = (ushort)local_2b0;
    if ((int)(*(int *)(lVar23 + 0x18) + (uint)(ushort)local_2b0) < 0xfa1) {
      puVar13 = (undefined8 *)(*(long *)(lVar23 + 0x10) + (long)*(int *)(lVar23 + 0x18) + 0x20);
    }
    else {
      puVar13 = (undefined8 *)FUN_031c36f4(lVar23);
    }
    puVar10 = &local_2b0;
    iVar18 = (uVar8 >> 4) + 1;
    do {
      iVar18 = iVar18 + -1;
      uVar1 = *(undefined4 *)(puVar10 + 1);
      uVar2 = *(undefined4 *)((long)puVar10 + 0xc);
      *puVar13 = *puVar10;
      *(undefined4 *)(puVar13 + 1) = uVar1;
      *(undefined4 *)((long)puVar13 + 0xc) = uVar2;
      puVar10 = puVar10 + 2;
      puVar13 = puVar13 + 2;
    } while (1 < iVar18);
    *(uint *)(lVar23 + 0x18) = *(int *)(lVar23 + 0x18) + (uint)uVar8;
    *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
    local_2b8[0] = local_288;
    FUN_0307d05c(*(undefined8 *)(param_2 + 0x130),local_2b8,param_3 + 0x60);
  }
  if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
    plVar19 = plVar12 + 2;
    do {
      lVar23 = *plVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = lVar23 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar23 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar12 = plVar9 + 2;
    do {
      lVar23 = *plVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar23 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar23 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  return;
}


