/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030d5684; name: FUN_030d5684
 */


void FUN_030d5684(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
  *param_1 = (long)(PTR_DAT_047e51a0 + 0x10);
  plVar6 = (long *)param_1[0x1e];
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar12 = plVar6 + 2;
    do {
      lVar9 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  lVar9 = param_1[0x1c];
  if ((lVar9 != 0) && (*(int *)(lVar9 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar9,0);
    param_1[0x1c] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x1d) = 0;
  }
  puVar5 = PTR_PTR_047d1a50;
  puVar4 = PTR_DAT_047d1a08;
  if ((int)param_1[0x1b] != 0) {
    lVar13 = param_1[0x1a];
    lVar9 = lVar13 + (long)(int)param_1[0x1b] * 0x30;
    do {
      lVar8 = *(long *)(lVar9 + -0x10);
      if ((lVar8 != 0) && (*(int *)(lVar8 + 4) != -2)) {
        (**(code **)(puVar4 + 8))(puVar5[8],lVar8,0);
        *(undefined **)(lVar9 + -0x10) = &DAT_03d7702c;
        *(undefined4 *)(lVar9 + -8) = 0;
      }
      if (*(int *)(lVar9 + -0x18) != 0) {
        lVar10 = *(long *)(lVar9 + -0x20);
        lVar8 = (long)*(int *)(lVar9 + -0x18) * 0x68;
        do {
          FUN_030d9a14(lVar10 + -0x60 + lVar8);
          lVar8 = lVar8 + -0x68;
        } while (lVar8 != 0);
      }
      lVar8 = lVar9 + -0x30;
      *(undefined4 *)(lVar9 + -0x18) = 0;
      if ((-1 < (int)*(uint *)(lVar9 + -0x14)) && (*(long *)(lVar9 + -0x20) != 0)) {
        (**(code **)(*(long *)puVar5 + 0x20))
                  (puVar5,*(long *)(lVar9 + -0x20),(ulong)*(uint *)(lVar9 + -0x14) * 0x68);
      }
      *(undefined8 *)(lVar9 + -0x20) = 0;
      *(undefined4 *)(lVar9 + -0x14) = 0x80000000;
      lVar9 = lVar8;
    } while (lVar8 != lVar13);
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xdc)) && (param_1[0x1a] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x1a],(ulong)*(uint *)((long)param_1 + 0xdc) * 0x30);
  }
  lVar9 = param_1[0x18];
  param_1[0x1a] = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 0x80000000;
  if ((lVar9 != 0) && (*(int *)(lVar9 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar9,0);
    param_1[0x18] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x19) = 0;
  }
  puVar5 = PTR_PTR_047d1a50;
  puVar4 = PTR_DAT_047d1a08;
  if ((int)param_1[0x17] != 0) {
    lVar13 = param_1[0x16];
    lVar9 = lVar13 + (long)(int)param_1[0x17] * 0x28;
    do {
      lVar8 = *(long *)(lVar9 + -0x10);
      if ((lVar8 != 0) && (*(int *)(lVar8 + 4) != -2)) {
        (**(code **)(puVar4 + 8))(puVar5[8],lVar8,0);
        *(undefined **)(lVar9 + -0x10) = &DAT_03d7702c;
        *(undefined4 *)(lVar9 + -8) = 0;
      }
      if (*(int *)(lVar9 + -0x18) != 0) {
        lVar10 = *(long *)(lVar9 + -0x20);
        lVar8 = lVar10 + (long)*(int *)(lVar9 + -0x18) * 0x10;
        do {
          plVar6 = *(long **)(lVar8 + -8);
          lVar8 = lVar8 + -0x10;
          if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
            plVar12 = plVar6 + 2;
            do {
              lVar11 = *plVar12;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *plVar12 = lVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar11 + -1 == 0) {
              (**(code **)(*plVar6 + 0x18))();
            }
          }
        } while (lVar8 != lVar10);
      }
      lVar8 = lVar9 + -0x28;
      *(undefined4 *)(lVar9 + -0x18) = 0;
      if ((-1 < (int)*(uint *)(lVar9 + -0x14)) && (*(long *)(lVar9 + -0x20) != 0)) {
        (**(code **)(*(long *)puVar5 + 0x20))
                  (puVar5,*(long *)(lVar9 + -0x20),(ulong)*(uint *)(lVar9 + -0x14) << 4);
      }
      *(undefined8 *)(lVar9 + -0x20) = 0;
      *(undefined4 *)(lVar9 + -0x14) = 0x80000000;
      lVar9 = lVar8;
    } while (lVar8 != lVar13);
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xbc)) && (param_1[0x16] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x16],(ulong)*(uint *)((long)param_1 + 0xbc) * 0x28);
  }
  plVar6 = (long *)param_1[0x11];
  param_1[0x16] = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0x80000000;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar12 = plVar6 + 2;
    do {
      lVar9 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  if ((int)param_1[5] != 0) {
    plVar12 = (long *)param_1[4];
    plVar6 = plVar12 + (int)param_1[5];
    do {
      plVar6 = plVar6 + -1;
      plVar7 = (long *)*plVar6;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar1 = plVar7 + 2;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
    } while (plVar6 != plVar12);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[4],(ulong)*(uint *)((long)param_1 + 0x2c) << 3);
  }
  plVar6 = (long *)param_1[3];
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar12 = plVar6 + 2;
    do {
      lVar9 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


