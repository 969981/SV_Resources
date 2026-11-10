/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030f0e0c; name: FUN_030f0e0c
 */


long FUN_030f0e0c(long param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  uint *puVar14;
  long lVar15;
  long *plVar16;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined4 local_68;
  
  iVar3 = *param_2;
  iVar7 = *param_3;
  plVar13 = (long *)(param_1 + 8);
  iVar8 = iVar7;
  if (iVar7 <= iVar3) {
    iVar8 = iVar3;
    iVar3 = iVar7;
  }
  memset(&local_c0,0,0x60);
  local_b4 = 0x80000000;
  local_a8 = 0;
  local_b0 = &DAT_03d7702c;
  local_a0 = 0;
  uStack_98 = 0x8000000000000000;
  local_90 = &DAT_03d7702c;
  local_88 = 0;
  local_70 = &DAT_03d7702c;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0x8000000000000000;
  iVar7 = FUN_030f0d78(plVar13,param_2,&local_c0);
  FUN_030d9a14(&local_c0);
  lVar15 = *(long *)(param_1 + 8) + (long)iVar7 * 0x68;
  local_c0 = 0;
  lVar10 = FUN_030f12b8(lVar15 + 0x48,param_3,&local_c0);
  puVar6 = PTR_DAT_047d1a08;
  plVar16 = (long *)(*(long *)(lVar15 + 0x48) + ((lVar10 << 0x20) >> 0x1c) + 8);
  if (*plVar16 == 0) {
    local_c0 = 0x60;
    plVar11 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_c0,0);
    if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
      (**(code **)(puVar6 + 0x10))(plVar11,"ExternalEdges");
    }
    plVar11[2] = 1;
    puVar6 = PTR_DAT_047e51c8;
    *(undefined4 *)(plVar11 + 7) = 0;
    plVar11[10] = (long)&DAT_03d7702c;
    *plVar11 = (long)(puVar6 + 0x10);
    plVar11[1] = 0xffffffff;
    plVar11[6] = (long)&DAT_03d7702c;
    plVar11[4] = 0;
    plVar11[5] = -0x8000000000000000;
    *(undefined4 *)(plVar11 + 0xb) = 0;
    plVar11[8] = 0;
    plVar11[9] = -0x8000000000000000;
    plVar12 = (long *)*plVar16;
    if ((plVar12 != plVar11) && (*plVar16 = (long)plVar11, plVar12 != (long *)0x0)) {
      if (plVar12[1] != 0) {
        plVar11 = plVar12 + 2;
        do {
          lVar10 = *plVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar12 + 0x18))();
        }
      }
      plVar11 = (long *)*plVar16;
    }
    *(int *)(plVar11 + 3) = iVar3;
    *(int *)((long)plVar11 + 0x1c) = iVar8;
    memset(&local_c0,0,0x60);
    local_b0 = &DAT_03d7702c;
    local_b4 = 0x80000000;
    local_a8 = 0;
    local_90 = &DAT_03d7702c;
    local_88 = 0;
    local_70 = &DAT_03d7702c;
    local_68 = 0;
    local_a0 = 0;
    uStack_98 = 0x8000000000000000;
    local_80 = 0;
    uStack_78 = 0x8000000000000000;
    iVar8 = FUN_030f0d78(plVar13,param_3,&local_c0);
    FUN_030d9a14(&local_c0);
    lVar15 = *plVar13;
    lVar10 = lVar15 + (long)iVar8 * 0x68;
    plVar13 = (long *)(lVar10 + 0x48);
    uVar9 = FUN_030f2c34(plVar13,param_2);
    puVar14 = (uint *)(lVar10 + 0x50);
    if (*puVar14 == uVar9) {
      uVar2 = uVar9 + 1;
      if ((int)(*(uint *)(lVar15 + (long)iVar8 * 0x68 + 0x54) & 0x7fffffff) <= (int)uVar9) {
        FUN_030f2d30(plVar13,(long)(int)uVar2);
        uVar9 = *puVar14;
      }
      piVar1 = (int *)(*plVar13 + (long)(int)uVar9 * 0x10);
      *piVar1 = *param_2;
      lVar10 = *plVar16;
      *(long *)(piVar1 + 2) = lVar10;
      if ((lVar10 != 0) && (*(long *)(lVar10 + 8) != 0)) {
        plVar13 = (long *)(lVar10 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = *plVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *puVar14 = uVar2;
    }
    else {
      plVar12 = (long *)(*plVar13 + ((long)((ulong)uVar9 << 0x20) >> 0x1c) + 8);
      plVar11 = (long *)*plVar12;
      plVar13 = (long *)*plVar16;
      if (plVar11 != plVar13) {
        if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
          plVar13 = plVar13 + 2;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = *plVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          plVar11 = (long *)*plVar12;
          plVar13 = (long *)*plVar16;
        }
        *plVar12 = (long)plVar13;
        if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
          plVar13 = plVar11 + 2;
          do {
            lVar10 = *plVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 + -1 == 0) {
            (**(code **)(*plVar11 + 0x18))();
          }
        }
      }
    }
  }
  return *plVar16;
}


