/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030aa544; name: FUN_030aa544
 */


void FUN_030aa544(long *param_1)

{
  char *pcVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
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
  
  lVar10 = param_1[0x30];
  *param_1 = (long)(PTR_DAT_047e5060 + 0x10);
  if (lVar10 != 0) {
    local_48 = *(undefined4 *)((long)param_1 + 0x23c);
    local_50 = 0x2a08000010;
    FUN_00e08a00(lVar10 + 0x28,lVar10,&local_50);
  }
  if (param_1[0x42] != 0) {
    *(undefined1 *)(param_1[0x42] + 0x20) = 3;
  }
  lVar10 = param_1[0x45];
  if (lVar10 != 0) {
    pcVar1 = (char *)(lVar10 + 100);
    do {
      cVar4 = *pcVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar6) {
        *pcVar1 = '\x04';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (cVar4 == '\x01') {
      *(undefined1 *)(*(long *)(lVar10 + 0x68) + 0x20) = 3;
      plVar9 = *(long **)(lVar10 + 0x68);
      *(undefined8 *)(lVar10 + 0x68) = 0;
      if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
        plVar2 = plVar9 + 2;
        do {
          lVar10 = *plVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))();
        }
      }
    }
  }
  lVar10 = param_1[0x30];
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar10 + 0x438);
    *(undefined4 *)
     (*(long *)(*(long *)(lVar11 + 0x20) + (long)*(int *)(lVar11 + 0x28) * 8 + -8) + 0x23c) =
         *(undefined4 *)((long)param_1 + 0x23c);
    iVar3 = *(int *)((long)param_1 + 0x23c);
    lVar13 = (long)*(int *)(lVar11 + 0x28) + -1;
    iVar12 = (int)lVar13;
    *(int *)(lVar11 + 0x28) = iVar12;
    if (iVar12 != iVar3) {
      *(undefined8 *)(*(long *)(lVar11 + 0x20) + (long)iVar3 * 8) =
           *(undefined8 *)(*(long *)(lVar11 + 0x20) + lVar13 * 8);
    }
    FUN_031249a0(lVar10 + 0x100,lVar10,param_1);
  }
  puVar8 = PTR_DAT_047e3360;
  if (*PTR_DAT_047e3360 != '\0') {
    plVar9 = (long *)(param_1[0x51] & 0xfffffffffffffffc);
    if (plVar9 != (long *)0x0) {
      if ((param_1[0x51] & 3U) == 0) {
        param_1[0x51] = (ulong)plVar9 | 1;
        do {
          lVar10 = *plVar9;
          plVar9 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar9 != (long *)0x0);
        param_1[0x51] = 0;
        if (*puVar8 == '\0') goto LAB_030aa8f4;
      }
      else {
        do {
          plVar2 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          plVar9[1] = (ulong)plVar2 | 1;
          plVar9 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
    plVar9 = (long *)(param_1[0x50] & 0xfffffffffffffffc);
    if (plVar9 != (long *)0x0) {
      if ((param_1[0x50] & 3U) == 0) {
        param_1[0x50] = (ulong)plVar9 | 1;
        do {
          lVar10 = *plVar9;
          plVar9 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar9 != (long *)0x0);
        param_1[0x50] = 0;
        if (*puVar8 == '\0') goto LAB_030aa8f4;
      }
      else {
        do {
          plVar2 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          plVar9[1] = (ulong)plVar2 | 1;
          plVar9 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
    plVar9 = (long *)(param_1[0x4f] & 0xfffffffffffffffc);
    if (plVar9 != (long *)0x0) {
      if ((param_1[0x4f] & 3U) == 0) {
        param_1[0x4f] = (ulong)plVar9 | 1;
        do {
          lVar10 = *plVar9;
          plVar9 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar9 != (long *)0x0);
        param_1[0x4f] = 0;
        if (*puVar8 == '\0') goto LAB_030aa8f4;
      }
      else {
        do {
          plVar2 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          plVar9[1] = (ulong)plVar2 | 1;
          plVar9 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
    plVar9 = (long *)(param_1[0x4e] & 0xfffffffffffffffc);
    if (plVar9 != (long *)0x0) {
      if ((param_1[0x4e] & 3U) == 0) {
        param_1[0x4e] = (ulong)plVar9 | 1;
        do {
          lVar10 = *plVar9;
          plVar9 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar9 != (long *)0x0);
        param_1[0x4e] = 0;
        if (*puVar8 == '\0') goto LAB_030aa8f4;
      }
      else {
        do {
          plVar2 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          plVar9[1] = (ulong)plVar2 | 1;
          plVar9 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
    plVar9 = (long *)(param_1[0x4d] & 0xfffffffffffffffc);
    if (plVar9 != (long *)0x0) {
      if ((param_1[0x4d] & 3U) == 0) {
        param_1[0x4d] = (ulong)plVar9 | 1;
        do {
          lVar10 = *plVar9;
          plVar9 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar9 != (long *)0x0);
        param_1[0x4d] = 0;
        if (*puVar8 == '\0') goto LAB_030aa8f4;
      }
      else {
        do {
          plVar2 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          plVar9[1] = (ulong)plVar2 | 1;
          plVar9 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
    plVar9 = (long *)(param_1[0x4c] & 0xfffffffffffffffc);
    if (plVar9 != (long *)0x0) {
      if ((param_1[0x4c] & 3U) == 0) {
        param_1[0x4c] = (ulong)plVar9 | 1;
        do {
          lVar10 = *plVar9;
          plVar9 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar9 != (long *)0x0);
        param_1[0x4c] = 0;
        if (*puVar8 == '\0') goto LAB_030aa8f4;
      }
      else {
        do {
          plVar2 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          plVar9[1] = (ulong)plVar2 | 1;
          plVar9 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
    plVar9 = (long *)(param_1[0x4b] & 0xfffffffffffffffc);
    if (plVar9 != (long *)0x0) {
      if ((param_1[0x4b] & 3U) == 0) {
        param_1[0x4b] = (ulong)plVar9 | 1;
        do {
          lVar10 = *plVar9;
          plVar9 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar9 != (long *)0x0);
        param_1[0x4b] = 0;
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
LAB_030aa8f4:
  puVar8 = PTR_PTR_047d1a50;
  if ((int)param_1[0x4a] != 0) {
    lVar11 = param_1[0x49];
    lVar10 = (long)(int)param_1[0x4a] * 0xa0;
    do {
      lVar13 = lVar11 + lVar10;
      *(undefined4 *)(lVar13 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar13 + -4)) && (*(long *)(lVar13 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar8 + 0x20))
                  (puVar8,*(long *)(lVar13 + -0x10),(ulong)*(uint *)(lVar13 + -4) << 2);
      }
      lVar10 = lVar10 + -0xa0;
      *(undefined8 *)(lVar13 + -0x10) = 0;
      *(undefined4 *)(lVar13 + -4) = 0x80000000;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(param_1 + 0x4a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x254)) && (param_1[0x49] != 0)) {
    (**(code **)(*(long *)puVar8 + 0x20))
              (puVar8,param_1[0x49],(ulong)*(uint *)((long)param_1 + 0x254) * 0xa0);
  }
  plVar9 = (long *)param_1[0x45];
  param_1[0x49] = 0;
  *(undefined4 *)((long)param_1 + 0x254) = 0x80000000;
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar2 = plVar9 + 2;
    do {
      lVar10 = *plVar2;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  plVar9 = (long *)param_1[0x44];
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar2 = plVar9 + 2;
    do {
      lVar10 = *plVar2;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  plVar9 = (long *)param_1[0x42];
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar2 = plVar9 + 2;
    do {
      lVar10 = *plVar2;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  plVar9 = (long *)param_1[0x30];
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar2 = plVar9 + 2;
    do {
      lVar10 = *plVar2;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  plVar9 = (long *)param_1[0x2a];
  param_1[0xe] = (long)(PTR_DAT_047e5068 + 0x10);
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar2 = plVar9 + 2;
    do {
      lVar10 = *plVar2;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  plVar9 = (long *)param_1[0x29];
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar2 = plVar9 + 2;
    do {
      lVar10 = *plVar2;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  plVar9 = (long *)param_1[0x28];
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar2 = plVar9 + 2;
    do {
      lVar10 = *plVar2;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  puVar7 = PTR_DAT_047d1a00;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0xe] = (long)(puVar7 + 0x10);
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar8 + 0x20))
              (puVar8,param_1[4],(ulong)*(uint *)((long)param_1 + 0x2c) << 5);
  }
  param_1[4] = 0;
  *param_1 = (long)(puVar7 + 0x10);
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  return;
}


