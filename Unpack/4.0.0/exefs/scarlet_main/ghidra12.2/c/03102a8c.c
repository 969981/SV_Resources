/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03102a8c; name: FUN_03102a8c
 */


void FUN_03102a8c(long *param_1,long *param_2)

{
  char *pcVar1;
  ulong *puVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  void *__dest;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  char cVar14;
  void *__src;
  long *plVar15;
  undefined8 local_270 [56];
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  
  puVar6 = PTR_DAT_047d1a08;
  cVar14 = *(char *)((long)param_1 + 0x5c);
  pcVar1 = (char *)((long)param_1 + 0x5c);
  if (cVar14 == '\0') {
    local_270[0] = 0x50;
    plVar8 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_270,0);
    if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
      (**(code **)(puVar6 + 0x10))(plVar8,"PathRequestInput");
    }
    memset(plVar8,0,0x50);
    plVar8[1] = 0xffffffff;
    plVar15 = plVar8 + 2;
    *plVar15 = 1;
    *plVar8 = (long)(PTR_DAT_047e5200 + 0x10);
    plVar9 = plVar8 + 6;
    *plVar9 = 0;
    plVar8[7] = -0x8000000000000000;
    plVar8[8] = 0;
    lVar13 = param_1[4];
    plVar8[5] = param_1[5];
    plVar8[4] = lVar13;
    if (param_1 == plVar8) {
      plVar9 = (long *)0x0;
    }
    else {
      iVar7 = (int)param_1[7];
      __src = (void *)param_1[6];
      if (iVar7 < 1) {
        __dest = (void *)0x0;
      }
      else {
        FUN_031024b8(plVar9,PTR_PTR_047d1a50,(long)iVar7);
        __dest = (void *)*plVar9;
      }
      memcpy(__dest,__src,(long)iVar7 << 4);
      plVar9 = (long *)plVar8[8];
      *(int *)(plVar8 + 7) = iVar7;
    }
    plVar10 = (long *)param_1[8];
    if (plVar9 != plVar10) {
      if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
        plVar10 = plVar10 + 2;
        do {
          cVar14 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        plVar9 = (long *)plVar8[8];
        plVar10 = (long *)param_1[8];
      }
      plVar8[8] = (long)plVar10;
      if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
        plVar10 = plVar9 + 2;
        do {
          lVar13 = *plVar10;
          cVar14 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar13 + -1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))();
        }
      }
    }
    uVar3 = *(undefined1 *)(param_1[3] + 0x1a8);
    local_270[0] = 0x58;
    plVar9 = (long *)(**(code **)puVar6)(0,local_270,0);
    if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
      (**(code **)(puVar6 + 0x10))(plVar9,"PathRequest");
    }
    lVar13 = param_1[3];
    plVar9[2] = 1;
    *(undefined1 *)(plVar9 + 3) = uVar3;
    *(undefined4 *)((long)plVar9 + 0x1c) = 0;
    *(undefined1 *)(plVar9 + 4) = 0;
    plVar9[5] = 0;
    plVar9[6] = 0;
    *plVar9 = (long)(PTR_DAT_047e5208 + 0x10);
    plVar9[1] = 0xffffffff;
    plVar9[7] = lVar13;
    plVar9[8] = (long)plVar8;
    if (plVar8[1] != 0) {
      do {
        cVar14 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = *plVar15 + 1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
    }
    plVar9[9] = 0;
    plVar9[10] = -0x8000000000000000;
    plVar10 = (long *)param_1[0xc];
    param_1[0xc] = (long)plVar9;
    if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
      plVar9 = plVar10 + 2;
      do {
        lVar13 = *plVar9;
        cVar14 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar13 + -1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))();
      }
    }
    if (plVar8[1] != 0) {
      do {
        lVar13 = *plVar15;
        cVar14 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar13 + -1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
    puVar2 = (ulong *)(param_2 + 4);
    do {
      uVar11 = *puVar2;
      cVar14 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar11 + 1;
        cVar14 = ExclusiveMonitorsStatus();
      }
    } while (cVar14 != '\0');
    lVar13 = *param_2;
    uVar12 = -(uVar11 >> 0x1f & 1) & 0xfffffff000000000 | (uVar11 & 0xffffffff) << 4;
    *(undefined8 *)(lVar13 + uVar12) = 0;
    plVar8 = (long *)(lVar13 + ((long)(uVar11 << 0x20) >> 0x1c) + 8);
    *plVar8 = 0;
    *(undefined4 *)(lVar13 + uVar12) = *(undefined4 *)(param_1[3] + 0x1a4);
    lVar13 = param_1[0xc];
    if (lVar13 != 0) {
      if ((lVar13 == 0) || (*(long *)(lVar13 + 8) == 0)) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = (long *)(lVar13 + 0x10);
        do {
          cVar14 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = *plVar9 + 1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        plVar9 = (long *)*plVar8;
        lVar13 = param_1[0xc];
      }
      *plVar8 = lVar13;
      if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
        plVar15 = plVar9 + 2;
        do {
          lVar13 = *plVar15;
          cVar14 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *plVar15 = lVar13 + -1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))();
        }
      }
    }
    while (cVar14 = *pcVar1, cVar14 == '\0') {
      cVar14 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar5) {
        *pcVar1 = '\x01';
        cVar14 = ExclusiveMonitorsStatus();
      }
      if (cVar14 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
    *(undefined1 *)(param_1[0xc] + 0x20) = 3;
    plVar9 = (long *)param_1[0xc];
    param_1[0xc] = 0;
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar15 = plVar9 + 2;
      do {
        lVar13 = *plVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))();
      }
    }
    plVar9 = (long *)*plVar8;
    *plVar8 = 0;
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar8 = plVar9 + 2;
      do {
        lVar13 = *plVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))();
      }
    }
  }
  if (cVar14 != '\x04') {
    if (cVar14 == '\x02') {
      do {
        if (*pcVar1 != '\x02') {
          ClearExclusiveLocal();
          if ((byte)(*pcVar1 - 3U) < 2) {
            return;
          }
          goto LAB_03102bdc;
        }
        cVar14 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar5) {
          *pcVar1 = '\x03';
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
    }
    else {
LAB_03102bdc:
      local_a0 = 1;
      uStack_98 = 0;
      uStack_88 = 0;
      local_b0 = PTR_DAT_047e34b8 + 0x10;
      uStack_a8 = 0xffffffff;
      local_80 = 0x1bf;
      local_78 = 0;
      local_90 = (undefined1 *)local_270;
      memset(local_270,0,0x1c0);
      FUN_0322bd4c(&local_b0,"Invalid state.",0xe);
      iVar7 = FUN_03226f50(0x222d3546,local_270,
                           "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Ai/Pathfinding/Navigator/hkaiVolumeNavigatorStaleness.cpp"
                           ,0x79);
      if (iVar7 != 0) {
        CallSupervisor(0x26);
      }
    }
  }
  return;
}


