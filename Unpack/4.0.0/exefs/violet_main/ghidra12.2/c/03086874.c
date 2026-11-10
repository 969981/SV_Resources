/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03086874; name: FUN_03086874
 */


void FUN_03086874(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  void *pvVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined8 local_28;
  
  *param_1 = 0;
  lVar16 = param_2[1];
  param_1[1] = lVar16;
  if ((lVar16 != 0) && (*(long *)(lVar16 + 8) != 0)) {
    plVar12 = (long *)(lVar16 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar16 = param_2[2];
  param_1[2] = lVar16;
  if ((lVar16 != 0) && (*(long *)(lVar16 + 8) != 0)) {
    plVar12 = (long *)(lVar16 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
  param_1[4] = 0;
  memcpy(param_1 + 6,param_2 + 6,0x60);
  *(char *)(param_1 + 0x12) = (char)param_2[0x12];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x16] = 0;
  param_1[0x17] = -0x8000000000000000;
  puVar6 = PTR_PTR_047d1a50;
  uVar3 = *(uint *)(param_2 + 0x17);
  if ((int)uVar3 < 1) {
    param_1[0x16] = 0;
    param_1[0x17] = -0x8000000000000000;
  }
  else {
    puVar17 = (undefined4 *)param_2[0x16];
    puVar8 = (undefined4 *)
             (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar3 << 3);
    param_1[0x16] = (long)puVar8;
    *(uint *)(param_1 + 0x17) = uVar3;
    *(uint *)((long)param_1 + 0xbc) = uVar3;
    if (uVar3 != 1) {
      iVar14 = -(uVar3 & 0xfffffffe);
      puVar9 = puVar8;
      do {
        *puVar9 = *puVar17;
        puVar9[1] = puVar17[1];
        puVar9[2] = puVar17[2];
        puVar1 = puVar17 + 3;
        puVar8 = puVar9 + 4;
        puVar17 = puVar17 + 4;
        iVar14 = iVar14 + 2;
        puVar9[3] = *puVar1;
        puVar9 = puVar8;
      } while (iVar14 != 0);
    }
    if ((uVar3 & 1) != 0) {
      *puVar8 = *puVar17;
      puVar8[1] = puVar17[1];
    }
  }
  if (*(int *)(param_2[0x18] + 4) == -2) {
    param_1[0x18] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x19) = 0;
  }
  else {
    *(int *)(param_1 + 0x19) = (int)param_2[0x19];
    pvVar10 = (void *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,(long)(int)param_2[0x19] * 8 + 8)
    ;
    param_1[0x18] = (long)pvVar10;
    memcpy(pvVar10,(void *)param_2[0x18],(long)(int)param_2[0x19] * 8 + 8);
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = -0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x1b);
  if ((int)uVar3 < 1) {
    param_1[0x1a] = 0;
    param_1[0x1b] = -0x8000000000000000;
  }
  else {
    puVar17 = (undefined4 *)param_2[0x1a];
    puVar8 = (undefined4 *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,(ulong)uVar3 << 4);
    uVar15 = 0;
    param_1[0x1a] = (long)puVar8;
    *(uint *)(param_1 + 0x1b) = uVar3;
    *(uint *)((long)param_1 + 0xdc) = uVar3;
    do {
      *puVar8 = *puVar17;
      lVar16 = *(long *)(puVar17 + 2);
      *(long *)(puVar8 + 2) = lVar16;
      puVar8 = puVar8 + 4;
      puVar17 = puVar17 + 4;
      if ((lVar16 != 0) && (*(long *)(lVar16 + 8) != 0)) {
        plVar12 = (long *)(lVar16 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = *plVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar3);
  }
  if (*(int *)(param_2[0x1c] + 4) == -2) {
    param_1[0x1c] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x1d) = 0;
  }
  else {
    *(int *)(param_1 + 0x1d) = (int)param_2[0x1d];
    pvVar10 = (void *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,(long)(int)param_2[0x1d] * 8 + 8)
    ;
    param_1[0x1c] = (long)pvVar10;
    memcpy(pvVar10,(void *)param_2[0x1c],(long)(int)param_2[0x1d] * 8 + 8);
  }
  *(undefined1 *)(param_1 + 0x1e) = 0;
  puVar6 = PTR_DAT_047d1a08;
  lVar16 = *param_2;
  if (lVar16 != 0) {
    local_28 = 0xd0;
    lVar11 = (**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
    if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
      (**(code **)(puVar6 + 0x10))(lVar11,"hkaiNavMeshInstance");
    }
    FUN_030905c4(lVar11,lVar16);
    plVar12 = (long *)*param_1;
    *param_1 = lVar11;
    if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
      plVar13 = plVar12 + 2;
      do {
        lVar16 = *plVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar12 + 0x18))();
      }
    }
  }
  lVar16 = param_2[2];
  if (lVar16 != 0) {
    local_28 = 0x90;
    plVar12 = (long *)(**(code **)puVar6)(0,&local_28,0);
    if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
      (**(code **)(puVar6 + 0x10))(plVar12,"hkaiDirectedGraphInstance");
    }
    puVar7 = PTR_DAT_047e4f20;
    plVar12[2] = 1;
    plVar12[3] = 0;
    plVar12[4] = 0;
    plVar12[5] = 0;
    *plVar12 = (long)(puVar7 + 0x10);
    plVar12[1] = 0xffffffff;
    *(undefined1 *)(plVar12 + 6) = 1;
    *(undefined1 *)(plVar12 + 0x10) = 0;
    plVar12[3] = *(long *)(lVar16 + 0x18);
    *(undefined1 *)(plVar12 + 6) = 0;
    lVar11 = *(long *)(lVar16 + 0x20);
    if (lVar11 != 0) {
      if (*(long *)(lVar11 + 8) == 0) {
        plVar12[4] = lVar11;
      }
      else {
        plVar13 = (long *)(lVar11 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = *plVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar13 = (long *)plVar12[4];
        plVar12[4] = *(long *)(lVar16 + 0x20);
        if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
          plVar2 = plVar13 + 2;
          do {
            lVar11 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar13 + 0x18))();
          }
        }
      }
    }
    *(undefined1 *)(lVar16 + 0x30) = 0;
    lVar11 = *(long *)(lVar16 + 0x40);
    plVar12[9] = *(long *)(lVar16 + 0x48);
    plVar12[8] = lVar11;
    lVar11 = *(long *)(lVar16 + 0x50);
    plVar12[0xb] = *(long *)(lVar16 + 0x58);
    plVar12[10] = lVar11;
    lVar11 = *(long *)(lVar16 + 0x60);
    plVar12[0xd] = *(long *)(lVar16 + 0x68);
    plVar12[0xc] = lVar11;
    lVar11 = *(long *)(lVar16 + 0x70);
    plVar12[0xf] = *(long *)(lVar16 + 0x78);
    plVar12[0xe] = lVar11;
    plVar13 = (long *)param_1[2];
    param_1[2] = (long)plVar12;
    if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
      plVar12 = plVar13 + 2;
      do {
        lVar16 = *plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *plVar12 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))();
      }
    }
  }
  lVar16 = param_2[1];
  if (lVar16 != 0) {
    local_28 = 0x70;
    lVar11 = (**(code **)puVar6)(0,&local_28,0);
    if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
      (**(code **)(puVar6 + 0x10))(lVar11,"hkaiNavVolumeInstance");
    }
    FUN_030a8724(lVar11,lVar16);
    plVar12 = (long *)param_1[1];
    param_1[1] = lVar11;
    if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
      plVar13 = plVar12 + 2;
      do {
        lVar16 = *plVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar12 + 0x18))();
      }
    }
  }
  return;
}


