/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0310e880; name: FUN_0310e880
 */


short FUN_0310e880(long param_1,long param_2,int *param_3,short param_4,short param_5,char *param_6)

{
  undefined8 *puVar1;
  short *psVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  undefined *puVar13;
  char cVar14;
  short sVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  code *pcVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  long *plVar30;
  undefined4 *puVar31;
  long *plVar32;
  long lVar33;
  undefined8 *puVar34;
  long lVar35;
  int *piVar36;
  undefined4 local_78 [2];
  long *local_70;
  undefined8 local_68;
  
  lVar25 = tpidr_el0;
  lVar21 = *(long *)(lVar25 + 0x1000b8);
  if (lVar21 == 0) {
    lVar21 = FUN_00e5d3b4();
    *(long *)(lVar25 + 0x1000b8) = lVar21;
  }
  plVar28 = *(long **)(lVar21 + 0x3e0);
  if (plVar28 != (long *)0x0) {
    lVar21 = *plVar28;
    if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
      (**(code **)(lVar21 + 0x18))
                ("hkaiUpdateNavDataTasks::addPhase2TasksForSection",0x30,
                 *(undefined8 *)(lVar21 + 0x28));
    }
    puVar34 = (undefined8 *)plVar28[2];
    uVar22 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
    if ((uVar22 <= (ulong)plVar28[3]) && (plVar28[2] = uVar22, puVar34 != (undefined8 *)0x0)) {
      *puVar34 = "TthkaiUpdateNavDataTasks::addPhase2TasksForSection";
      uVar16 = nn::os::GetSystemTick();
      puVar34[1] = uVar16;
    }
    if (((*(byte *)(lVar21 + 0x38) & 1) != 0) && (plVar28[6] != 0)) {
      puVar34 = (undefined8 *)plVar28[2];
      uVar22 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
      if ((uVar22 <= (ulong)plVar28[3]) && (plVar28[2] = uVar22, puVar34 != (undefined8 *)0x0)) {
        *puVar34 = &DAT_03c4e575;
        puVar34[1] = *(undefined8 *)(plVar28[6] + 8);
      }
    }
  }
  lVar29 = *(long *)(*(long *)(*(long *)(param_2 + 0x90) + 0x20) + (long)*param_3 * 8);
  lVar21 = *(long *)(param_2 + 0x68) + (long)*param_3 * 0x80;
  *(long *)(lVar21 + 0x18) = lVar29;
  puVar13 = PTR_PTR_047d1a50;
  local_70 = plVar28;
  if (lVar29 == 0) {
    *param_6 = '\0';
    goto LAB_0310f620;
  }
  lVar33 = (long)*param_3;
  lVar35 = *(long *)(param_2 + 0x80);
  iVar19 = *(int *)(lVar29 + 0x100);
  plVar28 = (long *)(lVar29 + 0xf8);
  plVar30 = (long *)(lVar35 + lVar33 * 0x38 + 0x28);
  if (iVar19 == 0) {
    if (plVar30 != plVar28) {
      FUN_030da42c(plVar28,PTR_PTR_047d1a50);
      FUN_030da42c(plVar30,puVar13);
      lVar26 = *(long *)(lVar29 + 0xf8);
      *(long *)(lVar29 + 0xf8) = *plVar30;
      *plVar30 = lVar26;
      lVar35 = lVar35 + lVar33 * 0x38;
      uVar9 = *(undefined4 *)(lVar29 + 0x100);
      *(undefined4 *)(lVar29 + 0x100) = *(undefined4 *)(lVar35 + 0x30);
      *(undefined4 *)(lVar35 + 0x30) = uVar9;
      uVar9 = *(undefined4 *)(lVar29 + 0x104);
      *(undefined4 *)(lVar29 + 0x104) = *(undefined4 *)(lVar35 + 0x34);
      *(undefined4 *)(lVar35 + 0x34) = uVar9;
    }
  }
  else {
    iVar11 = *(int *)(lVar35 + lVar33 * 0x38 + 0x30);
    puVar34 = (undefined8 *)*plVar30;
    iVar20 = iVar11 + iVar19;
    if ((int)(*(uint *)(lVar29 + 0x104) & 0x7fffffff) < iVar20) {
      FUN_02ebb550(plVar28,PTR_PTR_047d1a50,(long)iVar20);
    }
    if (iVar11 != 0) {
      puVar23 = (undefined8 *)(*plVar28 + (long)iVar19 * 0x20);
      lVar35 = (long)iVar11 * 0x20 + -0x20;
      puVar18 = puVar34;
      if (((uint)lVar35 >> 5 & 1) == 0) {
        uVar16 = puVar34[3];
        puVar23[1] = puVar34[1];
        puVar23[3] = uVar16;
        uVar16 = *puVar34;
        puVar23[2] = puVar34[2];
        *puVar23 = uVar16;
        puVar18 = puVar34 + 4;
        puVar23 = puVar23 + 4;
      }
      if (lVar35 != 0) {
        do {
          uVar16 = puVar18[3];
          puVar23[1] = puVar18[1];
          puVar23[3] = uVar16;
          uVar16 = *puVar18;
          puVar23[2] = puVar18[2];
          *puVar23 = uVar16;
          uVar16 = puVar18[4];
          uVar7 = puVar18[5];
          puVar1 = puVar18 + 6;
          uVar8 = puVar18[7];
          puVar18 = puVar18 + 8;
          puVar23[6] = *puVar1;
          puVar23[7] = uVar8;
          puVar23[4] = uVar16;
          puVar23[5] = uVar7;
          puVar23 = puVar23 + 8;
        } while (puVar18 != puVar34 + (long)iVar11 * 4);
      }
    }
    *(int *)(lVar29 + 0x100) = iVar20;
    lVar35 = *(long *)(param_2 + 0x80) + (long)*param_3 * 0x38;
    uVar10 = *(uint *)(lVar35 + 0x34);
    *(undefined4 *)(lVar35 + 0x30) = 0;
    if ((-1 < (int)uVar10) && (lVar33 = *(long *)(lVar35 + 0x28), lVar33 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar33,(ulong)uVar10 << 5);
    }
    *(long *)(lVar35 + 0x28) = 0;
    *(uint *)(lVar35 + 0x34) = 0x80000000;
  }
  lVar33 = *(long *)(param_2 + 0x80);
  lVar35 = (long)*param_3;
  if (((*(int *)(lVar33 + lVar35 * 0x38 + 0x10) == 0) &&
      (*(int *)(lVar33 + lVar35 * 0x38 + 0x20) == 0)) &&
     (*(int *)(lVar33 + lVar35 * 0x38 + 0x30) == 0)) {
    if (*(int *)(lVar29 + 0xa0) == 0) {
      cVar14 = *(int *)(lVar29 + 0xb0) != 0;
    }
    else {
      cVar14 = true;
    }
  }
  else {
    cVar14 = true;
  }
  *param_6 = cVar14;
  puVar13 = PTR_DAT_047d1a08;
  if (*(char *)(*(long *)(param_2 + 0x90) + 0x98) == '\0') {
    local_68 = 0x40;
    plVar28 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    if (*(code **)(puVar13 + 0x10) != (code *)0x0) {
      (**(code **)(puVar13 + 0x10))(plVar28,"ResetClearanceAllTask");
    }
    iVar19 = *param_3;
    plVar30 = plVar28 + 2;
    *plVar30 = 1;
    *plVar28 = (long)&PTR_LAB_0464e2e8;
    plVar28[1] = 0xffffffff;
    plVar28[4] = (long)&PTR_LAB_0464e338;
    plVar28[5] = param_2;
    if (*(long *)(param_2 + 8) != 0) {
      plVar17 = (long *)(param_2 + 0x10);
      do {
        cVar14 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar12) {
          *plVar17 = *plVar17 + 1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
    }
    *(int *)(plVar28 + 6) = iVar19;
    sVar15 = FUN_0323f360(param_1,plVar28,0x40);
    if ((param_4 != -1) && (sVar15 != -1)) {
      iVar19 = *(int *)(param_1 + 0x330);
      lVar29 = (long)iVar19;
      if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar19) {
        FUN_02e7f7cc(param_1 + 0x328,PTR_PTR_047d1a50,lVar29 + 1);
        iVar19 = *(int *)(param_1 + 0x330);
      }
      psVar2 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar19 * 4);
      *(int *)(param_1 + 0x330) = (int)(lVar29 + 1);
      *psVar2 = param_4;
      psVar2[1] = sVar15;
    }
    iVar19 = *(int *)(param_1 + 0x330);
    lVar29 = (long)iVar19;
    if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar19) {
      FUN_02e7f7cc(param_1 + 0x328,PTR_PTR_047d1a50,lVar29 + 1);
      iVar19 = *(int *)(param_1 + 0x330);
    }
    psVar2 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar19 * 4);
    *(int *)(param_1 + 0x330) = (int)(lVar29 + 1);
    *psVar2 = sVar15;
    psVar2[1] = param_5;
    if (plVar28[1] != 0) {
      do {
        lVar29 = *plVar30;
        cVar14 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar12) {
          *plVar30 = lVar29 + -1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if (lVar29 + -1 == 0) {
        (**(code **)(*plVar28 + 0x18))(plVar28);
      }
    }
    cVar14 = *param_6;
  }
  puVar13 = PTR_DAT_047d1a08;
  if (cVar14 == '\0') goto LAB_0310f620;
  cVar14 = *(char *)(*(long *)(param_2 + 0x90) + 0x98);
  if (cVar14 == '\x02') {
    local_68 = 0x40;
    plVar28 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    pcVar24 = *(code **)(puVar13 + 0x10);
    if (pcVar24 != (code *)0x0) {
      (*pcVar24)(plVar28,"ResetClearanceFloodFillTask");
    }
    iVar19 = *param_3;
    plVar28[1] = 0xffffffff;
    plVar28[2] = 1;
    *plVar28 = (long)&PTR_LAB_0464e448;
    plVar28[4] = (long)&PTR_LAB_0464e498;
    plVar28[5] = param_2;
    if (*(long *)(param_2 + 8) != 0) {
      plVar30 = (long *)(param_2 + 0x10);
      do {
        cVar14 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar12) {
          *plVar30 = *plVar30 + 1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
    }
LAB_0310ee5c:
    *(int *)(plVar28 + 6) = iVar19;
    sVar15 = FUN_0323f360(param_1,plVar28,0x40);
    if ((param_4 != -1) && (sVar15 != -1)) {
      iVar19 = *(int *)(param_1 + 0x330);
      lVar29 = (long)iVar19;
      if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar19) {
        FUN_02e7f7cc(param_1 + 0x328,PTR_PTR_047d1a50,lVar29 + 1);
        iVar19 = *(int *)(param_1 + 0x330);
      }
      psVar2 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar19 * 4);
      *(int *)(param_1 + 0x330) = (int)(lVar29 + 1);
      *psVar2 = param_4;
      psVar2[1] = sVar15;
    }
    iVar19 = *(int *)(param_1 + 0x330);
    lVar29 = (long)iVar19;
    if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar19) {
      FUN_02e7f7cc(param_1 + 0x328,PTR_PTR_047d1a50,lVar29 + 1);
      iVar19 = *(int *)(param_1 + 0x330);
    }
    psVar2 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar19 * 4);
    *(int *)(param_1 + 0x330) = (int)(lVar29 + 1);
    *psVar2 = sVar15;
    psVar2[1] = param_5;
    if (plVar28[1] != 0) {
      plVar30 = plVar28 + 2;
      do {
        lVar29 = *plVar30;
        cVar14 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar12) {
          *plVar30 = lVar29 + -1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if (lVar29 + -1 == 0) {
        (**(code **)(*plVar28 + 0x18))(plVar28);
      }
    }
  }
  else if (cVar14 == '\x01') {
    local_68 = 0x40;
    plVar28 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    pcVar24 = *(code **)(puVar13 + 0x10);
    if (pcVar24 != (code *)0x0) {
      (*pcVar24)(plVar28,"ResetClearanceMediatorTask");
    }
    iVar19 = *param_3;
    plVar28[1] = 0xffffffff;
    plVar28[2] = 1;
    *plVar28 = (long)&PTR_LAB_0464e398;
    plVar28[4] = (long)&PTR_LAB_0464e3e8;
    plVar28[5] = param_2;
    if (*(long *)(param_2 + 8) != 0) {
      plVar30 = (long *)(param_2 + 0x10);
      do {
        cVar14 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar12) {
          *plVar30 = *plVar30 + 1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
    }
    goto LAB_0310ee5c;
  }
  iVar19 = *(int *)(param_1 + 0x20);
  lVar35 = (long)*param_3;
  lVar29 = *(long *)(param_2 + 0x80);
  iVar20 = iVar19;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) <= iVar19) {
    FUN_0323ff70(param_1 + 0x18,PTR_PTR_047d1a50,(long)iVar19 + 1);
    iVar20 = *(int *)(param_1 + 0x20);
  }
  puVar34 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar20 * 0x18);
  *(int *)(param_1 + 0x20) = (int)((long)iVar19 + 1);
  *(undefined2 *)(puVar34 + 1) = 1;
  *puVar34 = 0;
  *(undefined1 *)((long)puVar34 + 10) = 0x40;
  puVar34[2] = 0;
  piVar36 = (int *)(lVar29 + lVar35 * 0x38 + 0x10);
  iVar20 = *piVar36;
  if (((iVar20 != 0) || (*(int *)(lVar29 + lVar35 * 0x38 + 0x20) != 0)) ||
     (*(int *)(lVar29 + lVar35 * 0x38 + 0x30) != 0)) {
    if ((int)(*(uint *)(lVar21 + 0x2c) & 0x7fffffff) < iVar20) {
      FUN_03114c0c((long *)(lVar21 + 0x20),(long)iVar20);
    }
    puVar13 = PTR_DAT_047d1a08;
    local_68 = 0x970;
    plVar28 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    if (*(code **)(puVar13 + 0x10) != (code *)0x0) {
      (**(code **)(puVar13 + 0x10))(plVar28,"hkaiNavMeshCutFaceTask");
    }
    uVar9 = *(undefined4 *)(param_2 + 0x18);
    plVar30 = plVar28 + 2;
    *plVar30 = 1;
    *plVar28 = (long)&PTR_LAB_0464ea00;
    plVar28[1] = 0xffffffff;
    plVar28[4] = (long)&PTR_LAB_0464ea40;
    plVar28[0xe] = (long)(plVar28 + 0x10);
    plVar28[0xf] = -0x7fffffef00000000;
    plVar28[0x98] = (long)(plVar28 + 0x9a);
    plVar28[0x99] = -0x7fffffef00000000;
    *(undefined4 *)(plVar28 + 0x122) = uVar9;
    FUN_03232938(plVar28 + 6,uVar9,iVar20,1);
    puVar13 = PTR_DAT_047e5538;
    plVar28[0x124] = -0x8000000000000000;
    plVar28[0x126] = -0x8000000000000000;
    *plVar28 = (long)(puVar13 + 0x10);
    plVar28[0x123] = 0;
    plVar28[0x125] = 0;
    *(undefined4 *)(plVar28 + 0x127) = 0;
    plVar28[0x128] = 0;
    plVar28[0x12a] = 0;
    plVar28[4] = (long)(puVar13 + 0x60);
    plVar28[0x129] = 0;
    plVar28[299] = 0;
    *(undefined4 *)(plVar28 + 0x127) = *(undefined4 *)(*(long *)(param_2 + 0x90) + 0x9c);
    lVar33 = *(long *)(param_2 + 0x20);
    lVar26 = *(long *)(lVar33 + 0x180);
    plVar28[0x129] = *(long *)(lVar33 + 0x188);
    plVar28[0x128] = lVar26;
    lVar26 = *(long *)(lVar33 + 400);
    plVar28[299] = *(long *)(lVar33 + 0x198);
    plVar28[0x12a] = lVar26;
    lVar26 = *(long *)(lVar33 + 0x1a0);
    plVar28[0x12d] = *(long *)(lVar33 + 0x1a8);
    plVar28[300] = lVar26;
    if (0 < iVar20) {
      FUN_031152ac(plVar28 + 0x123,iVar20);
    }
    lVar33 = *(long *)(*(long *)(*(long *)(param_2 + 0x78) + 0x38) +
                      (long)*(int *)(lVar29 + lVar35 * 0x38) * 0x100);
    if (*(char *)(lVar33 + 0x30) != '\x01') {
      FUN_0307d71c(lVar33 + 0x20);
    }
    iVar20 = *piVar36;
    if (iVar20 != 0) {
      puVar31 = *(undefined4 **)(lVar29 + lVar35 * 0x38 + 8);
      puVar4 = puVar31 + iVar20;
      do {
        iVar20 = (int)plVar28[0x124];
        local_78[0] = *puVar31;
        *(int *)(plVar28 + 0x124) = iVar20 + 1;
        lVar29 = plVar28[0x123];
        puVar18 = (undefined8 *)(lVar29 + (long)iVar20 * 0x30);
        puVar34 = puVar18;
        do {
          *puVar34 = 0;
          puVar34[1] = 0;
          puVar34[5] = 0;
          puVar34[2] = 0xffffffffffffffff;
          puVar34[3] = 0;
          *(undefined8 *)((long)puVar34 + 0x1d) = 0;
          puVar34 = puVar34 + 6;
        } while (puVar34 != puVar18 + 6);
        iVar11 = *(int *)(lVar21 + 0x28);
        *(int *)(lVar21 + 0x28) = iVar11 + 1;
        lVar27 = (long)iVar11 * 0x58;
        lVar26 = *(long *)(lVar21 + 0x20);
        lVar5 = lVar26 + lVar27;
        lVar35 = lVar27 + 0x58;
        do {
          lVar35 = lVar35 + -0x58;
          lVar6 = lVar26 + lVar27;
          *(undefined1 *)(lVar6 + 4) = 0;
          lVar26 = lVar26 + 0x58;
          *(undefined8 *)(lVar6 + 8) = 0;
          *(undefined8 *)(lVar6 + 0x10) = 0x8000000000000000;
          *(undefined8 *)(lVar6 + 0x18) = 0;
          *(undefined8 *)(lVar6 + 0x20) = 0x8000000000000000;
          *(undefined8 *)(lVar6 + 0x28) = 0;
          *(undefined8 *)(lVar6 + 0x30) = 0x8000000000000000;
          *(undefined8 *)(lVar6 + 0x38) = 0;
          *(undefined8 *)(lVar6 + 0x40) = 0x8000000000000000;
          *(undefined8 *)(lVar6 + 0x48) = 0;
          *(undefined8 *)(lVar6 + 0x50) = 0x8000000000000000;
        } while (lVar27 != lVar35);
        *(long *)(lVar29 + (long)iVar20 * 0x30 + 0x28) = lVar5;
        *puVar18 = *(undefined8 *)(param_2 + 0x58);
        (**(code **)(**(long **)(param_2 + 0x60) + 0x28))
                  (*(long **)(param_2 + 0x60),lVar33,local_78,puVar18,plVar28 + 0x125);
        iVar20 = *(int *)PTR_DAT_047e4f38;
        lVar29 = *(long *)(lVar25 + 0x1000b8);
        if (lVar29 == 0) {
          lVar29 = FUN_00e5d3b4();
          *(long *)(lVar25 + 0x1000b8) = lVar29;
        }
        if (*(long *)(lVar29 + (long)iVar20 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        puVar31 = puVar31 + 1;
      } while (puVar31 != puVar4);
    }
    sVar15 = FUN_0323f458(param_1,plVar28,*(undefined4 *)(param_2 + 0x18),1,0x40);
    if ((param_4 != -1) && (sVar15 != -1)) {
      iVar20 = *(int *)(param_1 + 0x330);
      lVar25 = (long)iVar20;
      if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar20) {
        FUN_02e7f7cc(param_1 + 0x328,PTR_PTR_047d1a50,lVar25 + 1);
        iVar20 = *(int *)(param_1 + 0x330);
      }
      psVar2 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar20 * 4);
      *(int *)(param_1 + 0x330) = (int)(lVar25 + 1);
      *psVar2 = param_4;
      psVar2[1] = sVar15;
    }
    iVar20 = *(int *)(param_1 + 0x330);
    lVar25 = (long)iVar20;
    if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar20) {
      FUN_02e7f7cc(param_1 + 0x328,PTR_PTR_047d1a50,lVar25 + 1);
      iVar20 = *(int *)(param_1 + 0x330);
    }
    psVar2 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar20 * 4);
    *(int *)(param_1 + 0x330) = (int)(lVar25 + 1);
    *psVar2 = sVar15;
    psVar2[1] = (short)iVar19;
    if ((plVar28 != (long *)0x0) && (plVar28[1] != 0)) {
      do {
        lVar25 = *plVar30;
        cVar14 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar12) {
          *plVar30 = lVar25 + -1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if (lVar25 + -1 == 0) {
        (**(code **)(*plVar28 + 0x18))(plVar28);
      }
    }
  }
  puVar13 = PTR_DAT_047d1a08;
  local_68 = 0x40;
  plVar28 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
  if (*(code **)(puVar13 + 0x10) != (code *)0x0) {
    (**(code **)(puVar13 + 0x10))(plVar28,"UpdateCutConfigTask");
  }
  iVar20 = *param_3;
  plVar30 = plVar28 + 2;
  *plVar30 = 1;
  *plVar28 = (long)&PTR_LAB_0464e190;
  plVar28[1] = 0xffffffff;
  plVar28[4] = (long)&PTR_LAB_0464e1d8;
  plVar28[5] = param_2;
  if (*(long *)(param_2 + 8) != 0) {
    plVar17 = (long *)(param_2 + 0x10);
    do {
      cVar14 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar12) {
        *plVar17 = *plVar17 + 1;
        cVar14 = ExclusiveMonitorsStatus();
      }
    } while (cVar14 != '\0');
  }
  *(int *)(plVar28 + 6) = iVar20;
  sVar15 = FUN_0323f360(param_1,plVar28,0x40);
  iVar20 = *(int *)(param_1 + 0x330);
  lVar21 = (long)iVar20;
  lVar25 = param_1 + 0x328;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar20) {
    FUN_02e7f7cc(lVar25,PTR_PTR_047d1a50,lVar21 + 1);
    iVar20 = *(int *)(param_1 + 0x330);
  }
  psVar2 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar20 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar21 + 1);
  psVar2[1] = sVar15;
  *psVar2 = (short)iVar19;
  local_68 = 0x40;
  plVar17 = (long *)(**(code **)puVar13)(0,&local_68,0);
  if (*(code **)(puVar13 + 0x10) != (code *)0x0) {
    (**(code **)(puVar13 + 0x10))(plVar17,"ApplyCutsTask");
  }
  iVar19 = *param_3;
  plVar32 = plVar17 + 2;
  *plVar32 = 1;
  *plVar17 = (long)&PTR_LAB_0464e238;
  plVar17[1] = 0xffffffff;
  plVar17[4] = (long)&PTR_LAB_0464e288;
  plVar17[5] = param_2;
  if (*(long *)(param_2 + 8) != 0) {
    plVar3 = (long *)(param_2 + 0x10);
    do {
      cVar14 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar12) {
        *plVar3 = *plVar3 + 1;
        cVar14 = ExclusiveMonitorsStatus();
      }
    } while (cVar14 != '\0');
  }
  *(int *)(plVar17 + 6) = iVar19;
  param_4 = FUN_0323f360(param_1,plVar17,0x40);
  iVar19 = *(int *)(param_1 + 0x330);
  lVar21 = (long)iVar19;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar19) {
    FUN_02e7f7cc(lVar25,PTR_PTR_047d1a50,lVar21 + 1);
    iVar19 = *(int *)(param_1 + 0x330);
  }
  psVar2 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar19 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar21 + 1);
  *psVar2 = sVar15;
  psVar2[1] = param_4;
  iVar19 = *(int *)(param_1 + 0x330);
  lVar21 = (long)iVar19;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar19) {
    FUN_02e7f7cc(lVar25,PTR_PTR_047d1a50,lVar21 + 1);
    iVar19 = *(int *)(param_1 + 0x330);
  }
  psVar2 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar19 * 4);
  *(int *)(param_1 + 0x330) = (int)(lVar21 + 1);
  *psVar2 = param_5;
  psVar2[1] = param_4;
  if (plVar17[1] != 0) {
    do {
      lVar25 = *plVar32;
      cVar14 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar12) {
        *plVar32 = lVar25 + -1;
        cVar14 = ExclusiveMonitorsStatus();
      }
    } while (cVar14 != '\0');
    if (lVar25 + -1 == 0) {
      (**(code **)(*plVar17 + 0x18))(plVar17);
    }
  }
  if (plVar28[1] != 0) {
    do {
      lVar25 = *plVar30;
      cVar14 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar12) {
        *plVar30 = lVar25 + -1;
        cVar14 = ExclusiveMonitorsStatus();
      }
    } while (cVar14 != '\0');
    if (lVar25 + -1 == 0) {
      (**(code **)(*plVar28 + 0x18))(plVar28);
    }
  }
LAB_0310f620:
  if (local_70 != (long *)0x0) {
    lVar25 = *local_70;
    if (((*(byte *)(lVar25 + 0x38) & 1) != 0) && (local_70[6] != 0)) {
      puVar34 = (undefined8 *)local_70[2];
      uVar22 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
      if ((uVar22 <= (ulong)local_70[3]) && (local_70[2] = uVar22, puVar34 != (undefined8 *)0x0)) {
        *puVar34 = &DAT_03c4e575;
        puVar34[1] = *(undefined8 *)(local_70[6] + 8);
      }
    }
    puVar34 = (undefined8 *)local_70[2];
    uVar22 = (long)puVar34 + 0x17U & 0xfffffffffffffff8;
    if ((uVar22 <= (ulong)local_70[3]) && (local_70[2] = uVar22, puVar34 != (undefined8 *)0x0)) {
      *puVar34 = &DAT_03c2d363;
      uVar16 = nn::os::GetSystemTick();
      puVar34[1] = uVar16;
    }
    if (*(code **)(lVar25 + 0x20) != (code *)0x0) {
      (**(code **)(lVar25 + 0x20))(*(undefined8 *)(lVar25 + 0x28));
    }
  }
  return param_4;
}


