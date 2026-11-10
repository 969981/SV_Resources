/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0332b49c; name: FUN_0332b49c
 */


void FUN_0332b49c(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  
  *param_1 = (long)&PTR_LAB_047ac3b0;
  if ((long *)param_1[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb] + 8))();
  }
  if ((long *)param_1[0xc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc] + 8))();
  }
  lVar10 = param_1[0x76];
  if ((lVar10 != 0) && (*(int *)(lVar10 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar10,0);
    param_1[0x76] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x77) = 0;
  }
  puVar7 = PTR_DAT_047d1a08;
  if ((int)param_1[0x75] != 0) {
    lVar12 = param_1[0x74];
    lVar10 = (long)(int)param_1[0x75] << 4;
    do {
      uVar11 = *(ulong *)(lVar12 + -0x10 + lVar10);
      if ((uVar11 & 1) != 0) {
        (**(code **)(puVar7 + 8))(0,uVar11 - 1,0);
      }
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(param_1 + 0x75) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3ac)) && (param_1[0x74] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x74],(ulong)*(uint *)((long)param_1 + 0x3ac) << 4);
  }
  *(undefined4 *)((long)param_1 + 0x3ac) = 0x80000000;
  param_1[0x74] = 0;
  if ((int)param_1[0x73] != 0) {
    lVar12 = param_1[0x72];
    lVar10 = lVar12 + (long)(int)param_1[0x73] * 0x20;
    do {
      puVar1 = (ulong *)(lVar10 + -0x10);
      lVar10 = lVar10 + -0x20;
      if ((*puVar1 & 1) != 0) {
        plVar8 = (long *)(*puVar1 & 0xfffffffffffffffe);
        plVar13 = plVar8 + 1;
        do {
          lVar6 = *plVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *(int *)plVar13 = (int)lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    } while (lVar10 != lVar12);
  }
  *(undefined4 *)(param_1 + 0x73) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x39c)) && (param_1[0x72] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x72],(ulong)*(uint *)((long)param_1 + 0x39c) << 5);
  }
  *(undefined4 *)((long)param_1 + 0x39c) = 0x80000000;
  param_1[0x72] = 0;
  if ((int)param_1[0x71] != 0) {
    lVar10 = param_1[0x70];
    lVar12 = lVar10 + (long)(int)param_1[0x71] * 0x18;
    do {
      puVar1 = (ulong *)(lVar12 + -8);
      lVar12 = lVar12 + -0x18;
      if ((*puVar1 & 1) != 0) {
        plVar8 = (long *)(*puVar1 & 0xfffffffffffffffe);
        plVar13 = plVar8 + 1;
        do {
          lVar6 = *plVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *(int *)plVar13 = (int)lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    } while (lVar12 != lVar10);
  }
  *(undefined4 *)(param_1 + 0x71) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x38c)) && (param_1[0x70] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x70],(ulong)*(uint *)((long)param_1 + 0x38c) * 0x18);
  }
  *(undefined4 *)((long)param_1 + 0x38c) = 0x80000000;
  param_1[0x70] = 0;
  if (0 < (int)*(uint *)((long)param_1 + 0x374)) {
    lVar12 = 0;
    lVar10 = (ulong)*(uint *)((long)param_1 + 0x374) + 1;
    do {
      if (*(long *)(param_1[0x6d] + lVar12) != -1) {
        *(undefined8 *)(param_1[0x6d] + lVar12) = 0xffffffffffffffff;
      }
      lVar10 = lVar10 + -1;
      lVar12 = lVar12 + 0x10;
    } while (lVar10 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x6e);
  *(uint *)(param_1 + 0x6e) = uVar3 & 0x80000000;
  if ((-1 < (int)uVar3) && (param_1[0x6d] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x6d],(long)*(int *)((long)param_1 + 0x374) * 0x10 + 0x10);
  }
  param_1[0x6d] = 0;
  param_1[0x6e] = -0x100000000;
  puVar7 = PTR_DAT_047e5b60;
  param_1[100] = (long)(PTR_DAT_047e5b60 + 0x10);
  FUN_031d98b8(param_1 + 100);
  FUN_031fa22c(param_1 + 0x57);
  if (0 < (int)*(uint *)((long)param_1 + 0x2b4)) {
    lVar12 = 0;
    lVar10 = (ulong)*(uint *)((long)param_1 + 0x2b4) + 1;
    do {
      if (*(long *)(param_1[0x55] + lVar12) != -1) {
        *(undefined8 *)(param_1[0x55] + lVar12) = 0xffffffffffffffff;
      }
      lVar10 = lVar10 + -1;
      lVar12 = lVar12 + 0x10;
    } while (lVar10 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x56);
  *(uint *)(param_1 + 0x56) = uVar3 & 0x80000000;
  if ((-1 < (int)uVar3) && (param_1[0x55] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x55],(long)*(int *)((long)param_1 + 0x2b4) * 0x10 + 0x10);
  }
  param_1[0x56] = -0x100000000;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x29c)) && (param_1[0x52] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x52],(ulong)*(uint *)((long)param_1 + 0x29c) << 2);
  }
  param_1[0x52] = 0;
  *(undefined4 *)((long)param_1 + 0x29c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x51) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x28c)) && (param_1[0x50] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x50],(ulong)*(uint *)((long)param_1 + 0x28c) << 2);
  }
  param_1[0x40] = (long)&PTR_LAB_047ac5c0;
  param_1[0x50] = 0;
  *(undefined4 *)((long)param_1 + 0x28c) = 0x80000000;
  param_1[0x47] = (long)(puVar7 + 0x10);
  FUN_031d98b8(param_1 + 0x47);
  if ((int)param_1[0x46] != 0) {
    lVar12 = param_1[0x45];
    lVar10 = lVar12 + (long)(int)param_1[0x46] * 0x20;
    do {
      puVar1 = (ulong *)(lVar10 + -0x10);
      lVar10 = lVar10 + -0x20;
      if ((*puVar1 & 1) != 0) {
        plVar8 = (long *)(*puVar1 & 0xfffffffffffffffe);
        plVar13 = plVar8 + 1;
        do {
          lVar6 = *plVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *(int *)plVar13 = (int)lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    } while (lVar10 != lVar12);
  }
  *(undefined4 *)(param_1 + 0x46) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x234)) && (param_1[0x45] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x45],(ulong)*(uint *)((long)param_1 + 0x234) << 5);
  }
  param_1[0x45] = 0;
  *(undefined4 *)((long)param_1 + 0x234) = 0x80000000;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x224)) && (param_1[0x43] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x43],(ulong)*(uint *)((long)param_1 + 0x224) * 0x18);
  }
  param_1[0x43] = 0;
  *(undefined4 *)((long)param_1 + 0x224) = 0x80000000;
  param_1[0x40] = (long)(PTR_DAT_047e66d8 + 0x10);
  *(undefined4 *)(param_1 + 0x42) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x214)) && (param_1[0x41] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x41],(ulong)*(uint *)((long)param_1 + 0x214) << 3);
  }
  param_1[0x41] = 0;
  *(undefined4 *)((long)param_1 + 0x214) = 0x80000000;
  puVar7 = PTR_PTR_047d1a50;
  if ((int)param_1[0x3d] != 0) {
    lVar12 = param_1[0x3c];
    lVar10 = (long)(int)param_1[0x3d] << 4;
    do {
      lVar6 = lVar12 + lVar10;
      *(undefined4 *)(lVar6 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar6 + -4)) && (*(long *)(lVar6 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar7 + 0x20))
                  (puVar7,*(long *)(lVar6 + -0x10),(ulong)*(uint *)(lVar6 + -4) * 0x18);
      }
      lVar10 = lVar10 + -0x10;
      *(undefined8 *)(lVar6 + -0x10) = 0;
      *(undefined4 *)(lVar6 + -4) = 0x80000000;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1ec)) && (param_1[0x3c] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x3c],(ulong)*(uint *)((long)param_1 + 0x1ec) << 4);
  }
  param_1[0x3c] = 0;
  *(undefined4 *)((long)param_1 + 0x1ec) = 0x80000000;
  FUN_0333b21c(param_1 + 0xd);
  if (0 < (int)*(uint *)((long)param_1 + 0x54)) {
    lVar12 = 0;
    lVar10 = (ulong)*(uint *)((long)param_1 + 0x54) + 1;
    do {
      if (*(long *)(param_1[9] + lVar12) != -1) {
        *(undefined8 *)(param_1[9] + lVar12) = 0xffffffffffffffff;
      }
      lVar10 = lVar10 + -1;
      lVar12 = lVar12 + 0x10;
    } while (lVar10 != 0);
  }
  uVar3 = *(uint *)(param_1 + 10);
  *(uint *)(param_1 + 10) = uVar3 & 0x80000000;
  if ((-1 < (int)uVar3) && (param_1[9] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[9],(long)*(int *)((long)param_1 + 0x54) * 0x10 + 0x10);
  }
  lVar10 = param_1[7];
  param_1[9] = 0;
  param_1[10] = -0x100000000;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar10,0);
    param_1[7] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[5],(ulong)*(uint *)((long)param_1 + 0x34) << 3);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  puVar7 = PTR_PTR_047d1a50;
  if ((int)param_1[4] != 0) {
    plVar8 = (long *)param_1[3];
    plVar13 = plVar8 + (long)(int)param_1[4] * 2;
    do {
      plVar14 = plVar13 + -2;
      lVar10 = *plVar14;
      if ((int)plVar13[-1] != 0) {
        lVar12 = lVar10 + (long)(int)plVar13[-1] * 0x30;
        do {
          if ((*(ulong *)(lVar12 + -8) & 1) != 0) {
            plVar9 = (long *)(*(ulong *)(lVar12 + -8) & 0xfffffffffffffffe);
            plVar2 = plVar9 + 1;
            do {
              lVar6 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = (int)lVar6 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((plVar9 != (long *)0x0) && ((int)lVar6 == 1)) {
              (**(code **)(*plVar9 + 8))();
            }
          }
          puVar1 = (ulong *)(lVar12 + -0x20);
          lVar12 = lVar12 + -0x30;
          if ((*puVar1 & 1) != 0) {
            plVar9 = (long *)(*puVar1 & 0xfffffffffffffffe);
            plVar2 = plVar9 + 1;
            do {
              lVar6 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = (int)lVar6 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((plVar9 != (long *)0x0) && ((int)lVar6 == 1)) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        } while (lVar12 != lVar10);
      }
      *(undefined4 *)(plVar13 + -1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar13 + -4)) && (*plVar14 != 0)) {
        (**(code **)(*(long *)puVar7 + 0x20))
                  (puVar7,*plVar14,(ulong)*(uint *)((long)plVar13 + -4) * 0x30);
      }
      plVar13[-2] = 0;
      *(undefined4 *)((long)plVar13 + -4) = 0x80000000;
      plVar13 = plVar14;
    } while (plVar14 != plVar8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) << 4);
  }
  param_1[3] = 0;
  puVar7 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar7 + 0x10);
  return;
}


