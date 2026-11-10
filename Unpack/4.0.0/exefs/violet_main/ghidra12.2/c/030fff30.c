/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030fff30; name: FUN_030fff30
 */


void FUN_030fff30(long *param_1)

{
  char *pcVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined8 local_50;
  undefined4 local_48;
  
  lVar10 = param_1[0x23];
  *param_1 = (long)(PTR_DAT_047e51f0 + 0x10);
  if (lVar10 != 0) {
    local_48 = *(undefined4 *)((long)param_1 + 0x1a4);
    local_50 = 0x4e08000010;
    FUN_00e08a00(lVar10 + 0x28,lVar10,&local_50);
  }
  if (param_1[0x2c] != 0) {
    *(undefined1 *)(param_1[0x2c] + 0x20) = 3;
  }
  lVar10 = param_1[0x2f];
  if (lVar10 != 0) {
    pcVar1 = (char *)(lVar10 + 0x5c);
    do {
      cVar3 = *pcVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar6) {
        *pcVar1 = '\x04';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (cVar3 == '\x01') {
      *(undefined1 *)(*(long *)(lVar10 + 0x60) + 0x20) = 3;
      plVar9 = *(long **)(lVar10 + 0x60);
      *(undefined8 *)(lVar10 + 0x60) = 0;
      if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
        plVar2 = plVar9 + 2;
        do {
          lVar10 = *plVar2;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))();
        }
      }
    }
  }
  lVar10 = param_1[0x23];
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar10 + 0x478);
    *(undefined4 *)
     (*(long *)(*(long *)(lVar11 + 0x20) + (long)*(int *)(lVar11 + 0x28) * 8 + -8) + 0x1a4) =
         *(undefined4 *)((long)param_1 + 0x1a4);
    iVar4 = *(int *)((long)param_1 + 0x1a4);
    lVar13 = (long)*(int *)(lVar11 + 0x28) + -1;
    iVar12 = (int)lVar13;
    *(int *)(lVar11 + 0x28) = iVar12;
    if (iVar12 != iVar4) {
      *(undefined8 *)(*(long *)(lVar11 + 0x20) + (long)iVar4 * 8) =
           *(undefined8 *)(*(long *)(lVar11 + 0x20) + lVar13 * 8);
    }
    FUN_03124a4c(lVar10 + 0x110,lVar10,param_1);
  }
  puVar8 = PTR_DAT_047e3360;
  if (*PTR_DAT_047e3360 != '\0') {
    plVar9 = (long *)(param_1[0x3e] & 0xfffffffffffffffc);
    if (plVar9 != (long *)0x0) {
      if ((param_1[0x3e] & 3U) == 0) {
        param_1[0x3e] = (ulong)plVar9 | 1;
        do {
          lVar10 = *plVar9;
          plVar9 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar9 != (long *)0x0);
        param_1[0x3e] = 0;
        if (*puVar8 == '\0') goto LAB_031002e0;
      }
      else {
        do {
          plVar2 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          plVar9[1] = (ulong)plVar2 | 1;
          plVar9 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
    plVar9 = (long *)(param_1[0x3d] & 0xfffffffffffffffc);
    if (plVar9 != (long *)0x0) {
      if ((param_1[0x3d] & 3U) == 0) {
        param_1[0x3d] = (ulong)plVar9 | 1;
        do {
          lVar10 = *plVar9;
          plVar9 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar9 != (long *)0x0);
        param_1[0x3d] = 0;
        if (*puVar8 == '\0') goto LAB_031002e0;
      }
      else {
        do {
          plVar2 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          plVar9[1] = (ulong)plVar2 | 1;
          plVar9 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
    plVar9 = (long *)(param_1[0x3c] & 0xfffffffffffffffc);
    if (plVar9 != (long *)0x0) {
      if ((param_1[0x3c] & 3U) == 0) {
        param_1[0x3c] = (ulong)plVar9 | 1;
        do {
          lVar10 = *plVar9;
          plVar9 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar9 != (long *)0x0);
        param_1[0x3c] = 0;
        if (*puVar8 == '\0') goto LAB_031002e0;
      }
      else {
        do {
          plVar2 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          plVar9[1] = (ulong)plVar2 | 1;
          plVar9 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
    plVar9 = (long *)(param_1[0x3b] & 0xfffffffffffffffc);
    if (plVar9 != (long *)0x0) {
      if ((param_1[0x3b] & 3U) == 0) {
        param_1[0x3b] = (ulong)plVar9 | 1;
        do {
          lVar10 = *plVar9;
          plVar9 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar9 != (long *)0x0);
        param_1[0x3b] = 0;
        if (*puVar8 == '\0') goto LAB_031002e0;
      }
      else {
        do {
          plVar2 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          plVar9[1] = (ulong)plVar2 | 1;
          plVar9 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
    plVar9 = (long *)(param_1[0x3a] & 0xfffffffffffffffc);
    if (plVar9 != (long *)0x0) {
      if ((param_1[0x3a] & 3U) == 0) {
        param_1[0x3a] = (ulong)plVar9 | 1;
        do {
          lVar10 = *plVar9;
          plVar9 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar9 != (long *)0x0);
        param_1[0x3a] = 0;
        if (*puVar8 == '\0') goto LAB_031002e0;
      }
      else {
        do {
          plVar2 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          plVar9[1] = (ulong)plVar2 | 1;
          plVar9 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
    plVar9 = (long *)(param_1[0x39] & 0xfffffffffffffffc);
    if (plVar9 != (long *)0x0) {
      if ((param_1[0x39] & 3U) == 0) {
        param_1[0x39] = (ulong)plVar9 | 1;
        do {
          lVar10 = *plVar9;
          plVar9 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar9 != (long *)0x0);
        param_1[0x39] = 0;
        if (*puVar8 == '\0') goto LAB_031002e0;
      }
      else {
        do {
          plVar2 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          plVar9[1] = (ulong)plVar2 | 1;
          plVar9 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
    plVar9 = (long *)(param_1[0x38] & 0xfffffffffffffffc);
    if (plVar9 != (long *)0x0) {
      if ((param_1[0x38] & 3U) == 0) {
        param_1[0x38] = (ulong)plVar9 | 1;
        do {
          lVar10 = *plVar9;
          plVar9 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar9 != (long *)0x0);
        param_1[0x38] = 0;
      }
      else {
        do {
          plVar2 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          plVar9[1] = (ulong)plVar2 | 1;
          plVar9 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
LAB_031002e0:
  puVar8 = PTR_PTR_047d1a50;
  if ((int)param_1[0x37] != 0) {
    lVar11 = param_1[0x36];
    lVar10 = (long)(int)param_1[0x37] * 0x60;
    do {
      lVar13 = lVar11 + lVar10;
      *(undefined4 *)(lVar13 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar13 + -4)) && (*(long *)(lVar13 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar8 + 0x20))
                  (puVar8,*(long *)(lVar13 + -0x10),(ulong)*(uint *)(lVar13 + -4) << 2);
      }
      lVar10 = lVar10 + -0x60;
      *(undefined8 *)(lVar13 + -0x10) = 0;
      *(undefined4 *)(lVar13 + -4) = 0x80000000;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(param_1 + 0x37) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1bc)) && (param_1[0x36] != 0)) {
    (**(code **)(*(long *)puVar8 + 0x20))
              (puVar8,param_1[0x36],(ulong)*(uint *)((long)param_1 + 0x1bc) * 0x60);
  }
  plVar9 = (long *)param_1[0x2f];
  param_1[0x36] = 0;
  *(undefined4 *)((long)param_1 + 0x1bc) = 0x80000000;
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar2 = plVar9 + 2;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  plVar9 = (long *)param_1[0x2e];
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar2 = plVar9 + 2;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  plVar9 = (long *)param_1[0x2c];
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar2 = plVar9 + 2;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  plVar9 = (long *)param_1[0x23];
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar2 = plVar9 + 2;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  plVar9 = (long *)param_1[0x21];
  param_1[0xc] = (long)(PTR_DAT_047e51f8 + 0x10);
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar2 = plVar9 + 2;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  plVar9 = (long *)param_1[0x20];
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar2 = plVar9 + 2;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  puVar7 = PTR_DAT_047d1a00;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0xc] = (long)(puVar7 + 0x10);
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar8 + 0x20))
              (puVar8,param_1[4],(ulong)*(uint *)((long)param_1 + 0x2c) << 4);
  }
  param_1[4] = 0;
  *param_1 = (long)(puVar7 + 0x10);
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  return;
}


