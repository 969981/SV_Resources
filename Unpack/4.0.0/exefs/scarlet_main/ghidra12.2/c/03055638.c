/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03055638; name: FUN_03055638
 */


void FUN_03055638(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  *param_1 = (long)(PTR_DAT_047e4a70 + 0x10);
  if ((int)param_1[0x2d] != 0) {
    lVar10 = param_1[0x2c];
    lVar11 = lVar10 + (long)(int)param_1[0x2d] * 0xc0;
    do {
      plVar6 = *(long **)(lVar11 + -0x48);
      lVar11 = lVar11 + -0xc0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar12 = plVar6 + 2;
        do {
          lVar9 = *plVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
    } while (lVar11 != lVar10);
  }
  *(undefined4 *)(param_1 + 0x2d) = 0;
  puVar5 = PTR_DAT_047d1a08;
  if ((int)param_1[0x2f] != 0) {
    lVar11 = param_1[0x2e];
    lVar10 = (long)(int)param_1[0x2f] << 3;
    do {
      uVar8 = *(ulong *)(lVar11 + -8 + lVar10);
      if ((uVar8 & 1) != 0) {
        (**(code **)(puVar5 + 8))(0,uVar8 - 1,0);
      }
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  plVar6 = (long *)param_1[5];
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  if (plVar6 != (long *)0x0) {
    if (plVar6[1] != 0) {
      plVar12 = plVar6 + 2;
      do {
        lVar10 = *plVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    param_1[5] = 0;
  }
  if ((int)param_1[0x33] != 0) {
    plVar6 = (long *)param_1[0x32];
    plVar12 = plVar6 + (long)(int)param_1[0x33] * 6;
    do {
      puVar1 = (ulong *)(plVar12 + -2);
      plVar12 = plVar12 + -6;
      if ((*puVar1 & 1) != 0) {
        (**(code **)(puVar5 + 8))(0,*puVar1 - 1,0);
      }
      plVar7 = (long *)*plVar12;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar2 = plVar7 + 2;
        do {
          lVar10 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
    } while (plVar12 != plVar6);
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  if ((int)param_1[0x3a] != 0) {
    lVar11 = param_1[0x39];
    lVar10 = (long)(int)param_1[0x3a] << 6;
    do {
      FUN_030436e8(lVar11 + -0x40 + lVar10);
      lVar10 = lVar10 + -0x40;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1d4)) && (param_1[0x39] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x39],(ulong)*(uint *)((long)param_1 + 0x1d4) << 6);
  }
  *(undefined4 *)((long)param_1 + 0x1d4) = 0x80000000;
  param_1[0x39] = 0;
  if ((int)param_1[0x38] != 0) {
    lVar11 = param_1[0x37];
    lVar10 = (long)(int)param_1[0x38] * 0x118;
    do {
      FUN_03042f68(lVar11 + -0x118 + lVar10);
      lVar10 = lVar10 + -0x118;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1c4)) && (param_1[0x37] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x37],(ulong)*(uint *)((long)param_1 + 0x1c4) * 0x118);
  }
  param_1[0x37] = 0;
  *(undefined4 *)((long)param_1 + 0x1c4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x36) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1b4)) && (param_1[0x35] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x35],(ulong)*(uint *)((long)param_1 + 0x1b4) * 0x28);
  }
  param_1[0x35] = 0;
  *(undefined4 *)((long)param_1 + 0x1b4) = 0x80000000;
  if ((int)param_1[0x33] != 0) {
    plVar6 = (long *)param_1[0x32];
    plVar12 = plVar6 + (long)(int)param_1[0x33] * 6;
    do {
      puVar1 = (ulong *)(plVar12 + -2);
      plVar12 = plVar12 + -6;
      if ((*puVar1 & 1) != 0) {
        (**(code **)(puVar5 + 8))(0,*puVar1 - 1,0);
      }
      plVar7 = (long *)*plVar12;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar2 = plVar7 + 2;
        do {
          lVar10 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
    } while (plVar12 != plVar6);
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x19c)) && (param_1[0x32] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x32],(ulong)*(uint *)((long)param_1 + 0x19c) * 0x30);
  }
  param_1[0x32] = 0;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x31) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x18c)) && (param_1[0x30] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x30],(ulong)*(uint *)((long)param_1 + 0x18c) << 7);
  }
  param_1[0x30] = 0;
  *(undefined4 *)((long)param_1 + 0x18c) = 0x80000000;
  if ((int)param_1[0x2f] != 0) {
    lVar11 = param_1[0x2e];
    lVar10 = (long)(int)param_1[0x2f] << 3;
    do {
      uVar8 = *(ulong *)(lVar11 + -8 + lVar10);
      if ((uVar8 & 1) != 0) {
        (**(code **)(puVar5 + 8))(0,uVar8 - 1,0);
      }
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x17c)) && (param_1[0x2e] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x2e],(ulong)*(uint *)((long)param_1 + 0x17c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x17c) = 0x80000000;
  param_1[0x2e] = 0;
  if ((int)param_1[0x2d] != 0) {
    lVar10 = param_1[0x2c];
    lVar11 = lVar10 + (long)(int)param_1[0x2d] * 0xc0;
    do {
      plVar6 = *(long **)(lVar11 + -0x48);
      lVar11 = lVar11 + -0xc0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar12 = plVar6 + 2;
        do {
          lVar9 = *plVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
    } while (lVar11 != lVar10);
  }
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x16c)) && (param_1[0x2c] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x2c],(ulong)*(uint *)((long)param_1 + 0x16c) * 0xc0);
  }
  param_1[0x2c] = 0;
  *(undefined4 *)((long)param_1 + 0x16c) = 0x80000000;
  FUN_01330f00(param_1 + 4);
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


