/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030f1b9c; name: FUN_030f1b9c
 */


long FUN_030f1b9c(long *param_1,int *param_2,int *param_3)

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
  long lVar14;
  uint *puVar15;
  long *plVar16;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 local_68;
  
  iVar3 = *param_2;
  iVar7 = *param_3;
  local_80 = 0;
  uStack_78 = 0x8000000000000000;
  local_70 = &DAT_03d7702c;
  iVar8 = iVar7;
  if (iVar7 <= iVar3) {
    iVar8 = iVar3;
    iVar3 = iVar7;
  }
  local_68 = 0;
  iVar7 = FUN_030f20d4(param_1,param_2,&local_80);
  lVar14 = *param_1 + (long)iVar7 * 0x28;
  local_80 = 0;
  lVar10 = FUN_030f12b8(lVar14 + 8,param_3,&local_80);
  puVar6 = PTR_DAT_047d1a08;
  plVar16 = (long *)(*(long *)(lVar14 + 8) + ((lVar10 << 0x20) >> 0x1c) + 8);
  if (*plVar16 == 0) {
    local_80 = 0x60;
    plVar11 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_80,0);
    if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
      (**(code **)(puVar6 + 0x10))(plVar11,"ExternalEdges");
    }
    plVar11[2] = 1;
    puVar6 = PTR_DAT_047e51c8;
    *(undefined4 *)(plVar11 + 7) = 0;
    plVar11[10] = (long)&DAT_03d7702c;
    plVar11[6] = (long)&DAT_03d7702c;
    *plVar11 = (long)(puVar6 + 0x10);
    plVar11[1] = 0xffffffff;
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
    local_80 = 0;
    uStack_78 = 0x8000000000000000;
    local_70 = &DAT_03d7702c;
    local_68 = 0;
    iVar8 = FUN_030f20d4(param_1,param_3,&local_80);
    lVar14 = *param_1;
    lVar10 = lVar14 + (long)iVar8 * 0x28;
    plVar11 = (long *)(lVar10 + 8);
    uVar9 = FUN_030f2c34(plVar11,param_2);
    puVar15 = (uint *)(lVar10 + 0x10);
    if (*puVar15 == uVar9) {
      uVar2 = uVar9 + 1;
      if ((int)(*(uint *)(lVar14 + (long)iVar8 * 0x28 + 0x14) & 0x7fffffff) <= (int)uVar9) {
        FUN_030f2d30(plVar11,(long)(int)uVar2);
        uVar9 = *puVar15;
      }
      piVar1 = (int *)(*plVar11 + (long)(int)uVar9 * 0x10);
      *piVar1 = *param_2;
      lVar10 = *plVar16;
      *(long *)(piVar1 + 2) = lVar10;
      if ((lVar10 != 0) && (*(long *)(lVar10 + 8) != 0)) {
        plVar11 = (long *)(lVar10 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = *plVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *puVar15 = uVar2;
    }
    else {
      plVar13 = (long *)(*plVar11 + ((long)((ulong)uVar9 << 0x20) >> 0x1c) + 8);
      plVar12 = (long *)*plVar13;
      plVar11 = (long *)*plVar16;
      if (plVar12 != plVar11) {
        if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
          plVar11 = plVar11 + 2;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = *plVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          plVar12 = (long *)*plVar13;
          plVar11 = (long *)*plVar16;
        }
        *plVar13 = (long)plVar11;
        if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
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
      }
    }
  }
  return *plVar16;
}


