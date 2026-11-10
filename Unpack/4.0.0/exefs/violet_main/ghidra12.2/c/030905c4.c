/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030905c4; name: FUN_030905c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030905c4(long *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  void *__src;
  long lVar14;
  ulong uVar15;
  undefined8 local_48;
  
  param_1[2] = 1;
  param_1[3] = 0;
  puVar5 = PTR_DAT_047e4f90;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 6) = 1;
  lVar12 = DAT_03cab628;
  lVar9 = DAT_03cab620;
  param_1[9] = 0;
  plVar8 = param_1 + 7;
  *plVar8 = 0;
  param_1[0xd] = lVar12;
  param_1[0xc] = lVar9;
  lVar12 = _UNK_03cabe68;
  lVar9 = _DAT_03cabe60;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0xf] = lVar12;
  param_1[0xe] = lVar9;
  lVar12 = _UNK_03caa5b8;
  lVar9 = _DAT_03caa5b0;
  param_1[8] = -0x8000000000000000;
  param_1[10] = -0x8000000000000000;
  param_1[0x11] = lVar12;
  param_1[0x10] = lVar9;
  lVar9 = _DAT_03cabe50;
  param_1[0x13] = _UNK_03cabe58;
  param_1[0x12] = lVar9;
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 6) = 0;
  lVar9 = param_2[4];
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + 8) == 0) {
      param_1[4] = lVar9;
    }
    else {
      plVar6 = (long *)(lVar9 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar6 = (long *)param_1[4];
      param_1[4] = param_2[4];
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar13 = plVar6 + 2;
        do {
          lVar9 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
    }
  }
  *(undefined1 *)(param_2 + 6) = 0;
  lVar9 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = lVar9;
  lVar9 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = lVar9;
  lVar9 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = lVar9;
  lVar9 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = lVar9;
  lVar9 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = lVar9;
  lVar9 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = lVar9;
  uVar1 = *(uint *)(param_2 + 8);
  lVar9 = (long)(int)uVar1;
  if ((int)(*(uint *)((long)param_1 + 0x44) & 0x7fffffff) < (int)uVar1) {
    FUN_03090b28(plVar8,lVar9);
  }
  iVar2 = (int)param_1[8];
  if (iVar2 < (int)uVar1) {
    lVar12 = param_1[7];
    puVar10 = (undefined8 *)(lVar12 + (long)iVar2 * 0x18);
    *(uint *)(param_1 + 8) = uVar1;
    do {
      *puVar10 = 0;
      puVar10[1] = 0;
      *(undefined1 *)(puVar10 + 2) = 1;
      puVar10 = puVar10 + 3;
    } while (puVar10 != (undefined8 *)(lVar12 + lVar9 * 0x18));
  }
  else if ((int)uVar1 < iVar2) {
    lVar12 = param_1[7];
    plVar6 = (long *)(lVar12 + (long)iVar2 * 0x18);
    *(uint *)(param_1 + 8) = uVar1;
    puVar5 = PTR_DAT_047d1a08;
    do {
      lVar14 = plVar6[-2];
      plVar6 = plVar6 + -3;
      if (lVar14 != 0) {
        nn::os::FinalizeMutex((MutexType *)(lVar14 + 8));
        (**(code **)(puVar5 + 8))(0,lVar14,0);
      }
      plVar13 = (long *)*plVar6;
      if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
        plVar7 = plVar13 + 2;
        do {
          lVar14 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 + -1 == 0) {
          (**(code **)(*plVar13 + 0x18))();
        }
      }
    } while (plVar6 != (long *)(lVar12 + lVar9 * 0x18));
  }
  if (0 < (int)uVar1) {
    uVar15 = 0;
    do {
      lVar9 = param_2[7];
      plVar6 = (long *)(lVar9 + uVar15 * 0x18);
      if (*plVar6 != 0) {
        plVar11 = (long *)(*plVar8 + uVar15 * 0x18);
        *(undefined1 *)(plVar11 + 2) = 0;
        plVar7 = (long *)*plVar11;
        plVar13 = (long *)*plVar6;
        if (plVar7 != plVar13) {
          if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
            plVar13 = plVar13 + 2;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar4) {
                *plVar13 = *plVar13 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            plVar7 = (long *)*plVar11;
            plVar13 = (long *)*plVar6;
          }
          *plVar11 = (long)plVar13;
          if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
            plVar6 = plVar7 + 2;
            do {
              lVar12 = *plVar6;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar4) {
                *plVar6 = lVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar12 + -1 == 0) {
              (**(code **)(*plVar7 + 0x18))();
            }
          }
        }
        *(undefined1 *)(lVar9 + uVar15 * 0x18 + 0x10) = 0;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar1);
  }
  if (param_2 != param_1) {
    iVar2 = (int)param_2[10];
    __src = (void *)param_2[9];
    if ((int)(*(uint *)((long)param_1 + 0x54) & 0x7fffffff) < iVar2) {
      FUN_02eb1edc(param_1 + 9,PTR_PTR_047d1a50,(long)iVar2);
    }
    memcpy((void *)param_1[9],__src,(long)iVar2 << 2);
    *(int *)(param_1 + 10) = iVar2;
  }
  puVar5 = PTR_DAT_047d1a08;
  lVar9 = param_2[0x18];
  if (lVar9 != 0) {
    local_48 = 0x28;
    plVar8 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
    if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
      (**(code **)(puVar5 + 0x10))(plVar8,"hkaiNavMeshInstanceQueryMediator");
    }
    plVar6 = *(long **)(lVar9 + 0x18);
    *plVar8 = (long)(PTR_DAT_047e4fd8 + 0x10);
    plVar8[1] = 0xffffffff;
    plVar8[2] = 1;
    plVar8[3] = (long)plVar6;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar6 = plVar6 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar6 = (long *)plVar8[3];
    }
    plVar8[4] = (long)param_1;
    (**(code **)(*plVar6 + 0x48))(plVar6,*(undefined8 *)(param_1[4] + 0x68));
    plVar6 = (long *)param_1[0x18];
    param_1[0x18] = (long)plVar8;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar8 = plVar6 + 2;
      do {
        lVar9 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
  }
  return;
}


