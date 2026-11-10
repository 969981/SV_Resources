/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03112db0; name: FUN_03112db0
 */


void FUN_03112db0(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  
  *param_1 = (long)&PTR_LAB_0464e9a0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1ac)) && (param_1[0x34] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x34],(ulong)*(uint *)((long)param_1 + 0x1ac) << 5);
  }
  param_1[0x34] = 0;
  *(undefined4 *)((long)param_1 + 0x1ac) = 0x80000000;
  *(undefined4 *)(param_1 + 0x33) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x19c)) && (param_1[0x32] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x32],(ulong)*(uint *)((long)param_1 + 0x19c) << 4);
  }
  param_1[0x32] = 0;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x31) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x18c)) && (param_1[0x30] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x30],(ulong)*(uint *)((long)param_1 + 0x18c) << 4);
  }
  param_1[0x30] = 0;
  *(undefined4 *)((long)param_1 + 0x18c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x17c)) && (param_1[0x2e] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x2e],(ulong)*(uint *)((long)param_1 + 0x17c) << 5);
  }
  param_1[0x2e] = 0;
  *(undefined4 *)((long)param_1 + 0x17c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x16c)) && (param_1[0x2c] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x2c],(ulong)*(uint *)((long)param_1 + 0x16c) << 5);
  }
  plVar4 = (long *)param_1[0x2b];
  param_1[0x2c] = 0;
  *(undefined4 *)((long)param_1 + 0x16c) = 0x80000000;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar6 = plVar4 + 2;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  lVar8 = param_1[0x26];
  if (param_1[0x2a] != 0) {
    lVar12 = lVar8 + param_1[0x2a] * 0x10;
    do {
      plVar4 = *(long **)(lVar8 + 8);
      if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
        plVar6 = plVar4 + 2;
        do {
          lVar9 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != lVar12);
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x13c)) && (param_1[0x26] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x26],(ulong)*(uint *)((long)param_1 + 0x13c) << 4);
  }
  lVar8 = param_1[0x24];
  param_1[0x26] = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 0x80000000;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar8,0);
    param_1[0x24] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x25) = 0;
  }
  if ((int)param_1[0x23] != 0) {
    lVar12 = param_1[0x22];
    lVar8 = lVar12 + (long)(int)param_1[0x23] * 0x10;
    do {
      plVar4 = *(long **)(lVar8 + -8);
      lVar8 = lVar8 + -0x10;
      if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
        plVar6 = plVar4 + 2;
        do {
          lVar9 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
    } while (lVar8 != lVar12);
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x11c)) && (param_1[0x22] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x22],(ulong)*(uint *)((long)param_1 + 0x11c) << 4);
  }
  param_1[0x22] = 0;
  lVar8 = param_1[0x1d];
  *(undefined4 *)((long)param_1 + 0x11c) = 0x80000000;
  if (param_1[0x21] != 0) {
    lVar12 = lVar8 + param_1[0x21] * 0x10;
    do {
      plVar4 = *(long **)(lVar8 + 8);
      if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
        plVar6 = plVar4 + 2;
        do {
          lVar9 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != lVar12);
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xf4)) && (param_1[0x1d] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x1d],(ulong)*(uint *)((long)param_1 + 0xf4) << 4);
  }
  lVar8 = param_1[0x1b];
  param_1[0x1d] = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0x80000000;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar8,0);
    param_1[0x1b] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if ((int)param_1[0x1a] != 0) {
    lVar12 = param_1[0x19];
    lVar8 = lVar12 + (long)(int)param_1[0x1a] * 0x10;
    do {
      plVar4 = *(long **)(lVar8 + -8);
      lVar8 = lVar8 + -0x10;
      if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
        plVar6 = plVar4 + 2;
        do {
          lVar9 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
    } while (lVar8 != lVar12);
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xd4)) && (param_1[0x19] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x19],(ulong)*(uint *)((long)param_1 + 0xd4) << 4);
  }
  plVar4 = (long *)param_1[0x18];
  param_1[0x19] = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 0x80000000;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar6 = plVar4 + 2;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  plVar4 = (long *)param_1[0x17];
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar6 = plVar4 + 2;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  plVar4 = (long *)param_1[0x16];
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar6 = plVar4 + 2;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xa4)) && (param_1[0x13] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x13],(ulong)*(uint *)((long)param_1 + 0xa4) << 2);
  }
  plVar4 = (long *)param_1[0x12];
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x80000000;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar6 = plVar4 + 2;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  puVar3 = PTR_PTR_047d1a50;
  if ((int)param_1[0x11] != 0) {
    lVar8 = (long)(int)param_1[0x11] * 0x38;
    lVar12 = param_1[0x10];
    do {
      lVar9 = lVar12 + lVar8;
      *(undefined4 *)(lVar9 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar9 + -4)) && (*(long *)(lVar9 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))
                  (puVar3,*(long *)(lVar9 + -0x10),(ulong)*(uint *)(lVar9 + -4) << 5);
      }
      *(undefined8 *)(lVar9 + -0x10) = 0;
      *(undefined4 *)(lVar9 + -4) = 0x80000000;
      *(undefined4 *)(lVar9 + -0x18) = 0;
      if ((-1 < (int)*(uint *)(lVar9 + -0x14)) && (*(long *)(lVar9 + -0x20) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))
                  (puVar3,*(long *)(lVar9 + -0x20),(ulong)*(uint *)(lVar9 + -0x14) << 2);
      }
      *(undefined8 *)(lVar9 + -0x20) = 0;
      *(undefined4 *)(lVar9 + -0x14) = 0x80000000;
      *(undefined4 *)(lVar9 + -0x28) = 0;
      if ((-1 < (int)*(uint *)(lVar9 + -0x24)) && (*(long *)(lVar9 + -0x30) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))
                  (puVar3,*(long *)(lVar9 + -0x30),(ulong)*(uint *)(lVar9 + -0x24) << 2);
      }
      lVar8 = lVar8 + -0x38;
      *(undefined8 *)(lVar9 + -0x30) = 0;
      *(undefined4 *)(lVar9 + -0x24) = 0x80000000;
    } while (lVar8 != 0);
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x10],(ulong)*(uint *)((long)param_1 + 0x8c) * 0x38);
  }
  plVar4 = (long *)param_1[0xf];
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar6 = plVar4 + 2;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if ((int)param_1[0xe] != 0) {
    lVar12 = param_1[0xd];
    lVar8 = (long)(int)param_1[0xe] << 7;
    do {
      (**(code **)(*(long *)(lVar12 + -0x80 + lVar8) + 8))();
      lVar8 = lVar8 + -0x80;
    } while (lVar8 != 0);
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047e5548 + 0x20))
              (PTR_PTR_047e5548,param_1[0xd],(ulong)*(uint *)((long)param_1 + 0x74) << 7);
  }
  plVar4 = (long *)param_1[0xc];
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar6 = plVar4 + 2;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  plVar4 = (long *)param_1[0xb];
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar6 = plVar4 + 2;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[8],(ulong)*(uint *)((long)param_1 + 0x4c) << 2);
  }
  plVar4 = (long *)param_1[6];
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  if (plVar4 != (long *)0x0) {
    if (*plVar4 != 0) {
      uVar5 = *(uint *)(plVar4 + 3);
      if (*(char *)((long)plVar4 + 0xc) != '\0') {
        plVar6 = (long *)plVar4[2];
        if ((int)uVar5 < 1) {
          plVar10 = plVar6;
        }
        else {
          plVar10 = plVar6;
          if (uVar5 != 1) {
            iVar11 = -(uVar5 & 0xfffffffe);
            do {
              plVar7 = plVar6;
              if (*plVar10 != 0) {
                plVar7 = plVar6 + 1;
                *plVar6 = *plVar10;
              }
              plVar6 = plVar7;
              if (plVar10[1] != 0) {
                plVar6 = plVar7 + 1;
                *plVar7 = plVar10[1];
              }
              plVar10 = plVar10 + 2;
              iVar11 = iVar11 + 2;
            } while (iVar11 != 0);
          }
          plVar7 = plVar6;
          if (((uVar5 & 1) != 0) && (*plVar10 != 0)) {
            plVar7 = plVar6 + 1;
            *plVar6 = *plVar10;
          }
          plVar6 = plVar7;
          plVar10 = (long *)plVar4[2];
        }
        uVar5 = (uint)((ulong)((long)plVar6 - (long)plVar10) >> 3);
        *(undefined1 *)((long)plVar4 + 0xc) = 0;
      }
      if (uVar5 != 0) {
        (**(code **)(*(long *)*plVar4 + 0x28))((long *)*plVar4,plVar4[2]);
      }
      *(undefined4 *)(plVar4 + 3) = 0;
      *(undefined4 *)(plVar4 + 1) = 0;
    }
    *(undefined4 *)(plVar4 + 3) = 0;
    if ((-1 < (int)*(uint *)((long)plVar4 + 0x1c)) && (plVar4[2] != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,plVar4[2],(ulong)*(uint *)((long)plVar4 + 0x1c) << 3);
    }
    plVar4[2] = 0;
    *(undefined4 *)((long)plVar4 + 0x1c) = 0x80000000;
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,plVar4,0);
  }
  plVar4 = (long *)param_1[5];
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar6 = plVar4 + 2;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


