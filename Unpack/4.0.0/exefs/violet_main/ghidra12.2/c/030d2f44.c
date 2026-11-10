/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030d2f44; name: FUN_030d2f44
 */


void FUN_030d2f44(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  
  *param_1 = (long)(PTR_DAT_047e5130 + 0x10);
  if (param_1[0x9b] != 0) {
    FUN_03122c64(param_1);
  }
  FUN_030d39fc(param_1 + 3,param_1);
  puVar6 = PTR_PTR_047d1a50;
  puVar5 = PTR_DAT_047d1a08;
  puVar11 = (undefined8 *)param_1[0x9a];
  if (puVar11 != (undefined8 *)0x0) {
    if (*(int *)(puVar11 + 0xb) != 0) {
      (**(code **)(*(long *)*puVar11 + 0x28))((long *)*puVar11,puVar11[1]);
      *(undefined4 *)(puVar11 + 0xb) = 0;
    }
    *(undefined4 *)(puVar11 + 2) = 0;
    if ((-1 < (int)*(uint *)((long)puVar11 + 0x14)) && (puVar11[1] != 0)) {
      (**(code **)(*(long *)puVar6 + 0x20))
                (puVar6,puVar11[1],(ulong)*(uint *)((long)puVar11 + 0x14) << 3);
    }
    puVar11[1] = 0;
    *(undefined4 *)((long)puVar11 + 0x14) = 0x80000000;
    (**(code **)(puVar5 + 8))(0,puVar11,0);
    param_1[0x9a] = 0;
  }
  plVar8 = (long *)param_1[0x99];
  param_1[0x99] = 0;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar12 = plVar8 + 2;
    do {
      lVar10 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  if ((param_1[0xa1] & 1U) != 0) {
    (**(code **)(puVar5 + 8))(0,param_1[0xa1] - 1,0);
  }
  plVar8 = (long *)param_1[0xa0];
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar12 = plVar8 + 2;
    do {
      lVar10 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  plVar8 = (long *)param_1[0x9e];
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar12 = plVar8 + 2;
    do {
      lVar10 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  plVar8 = (long *)param_1[0x9d];
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar12 = plVar8 + 2;
    do {
      lVar10 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  plVar8 = (long *)param_1[0x99];
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar12 = plVar8 + 2;
    do {
      lVar10 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  puVar4 = PTR_DAT_047e3360;
  if (*PTR_DAT_047e3360 != '\0') {
    plVar8 = (long *)(param_1[0x96] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x96] & 3U) == 0) {
        param_1[0x96] = (ulong)plVar8 | 1;
        do {
          lVar10 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x96] = 0;
        if (*puVar4 == '\0') goto LAB_030d33c0;
      }
      else {
        do {
          plVar12 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar12 | 1;
          plVar8 = plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    plVar8 = (long *)(param_1[0x95] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x95] & 3U) == 0) {
        param_1[0x95] = (ulong)plVar8 | 1;
        do {
          lVar10 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x95] = 0;
        if (*puVar4 == '\0') goto LAB_030d33c0;
      }
      else {
        do {
          plVar12 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar12 | 1;
          plVar8 = plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    plVar8 = (long *)(param_1[0x94] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x94] & 3U) == 0) {
        param_1[0x94] = (ulong)plVar8 | 1;
        do {
          lVar10 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x94] = 0;
        if (*puVar4 == '\0') goto LAB_030d33c0;
      }
      else {
        do {
          plVar12 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar12 | 1;
          plVar8 = plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    plVar8 = (long *)(param_1[0x93] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x93] & 3U) == 0) {
        param_1[0x93] = (ulong)plVar8 | 1;
        do {
          lVar10 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x93] = 0;
        if (*puVar4 == '\0') goto LAB_030d33c0;
      }
      else {
        do {
          plVar12 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar12 | 1;
          plVar8 = plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    plVar8 = (long *)(param_1[0x92] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x92] & 3U) == 0) {
        param_1[0x92] = (ulong)plVar8 | 1;
        do {
          lVar10 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x92] = 0;
        if (*puVar4 == '\0') goto LAB_030d33c0;
      }
      else {
        do {
          plVar12 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar12 | 1;
          plVar8 = plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    plVar8 = (long *)(param_1[0x91] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x91] & 3U) == 0) {
        param_1[0x91] = (ulong)plVar8 | 1;
        do {
          lVar10 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x91] = 0;
        if (*puVar4 == '\0') goto LAB_030d33c0;
      }
      else {
        do {
          plVar12 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar12 | 1;
          plVar8 = plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    plVar8 = (long *)(param_1[0x90] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x90] & 3U) == 0) {
        param_1[0x90] = (ulong)plVar8 | 1;
        do {
          lVar10 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x90] = 0;
      }
      else {
        do {
          plVar12 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar12 | 1;
          plVar8 = plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_030d33c0:
  plVar8 = (long *)param_1[0x8f];
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar12 = plVar8 + 2;
    do {
      lVar10 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  if (*puVar4 != '\0') {
    plVar8 = (long *)(param_1[0x8e] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x8e] & 3U) == 0) {
        param_1[0x8e] = (ulong)plVar8 | 1;
        do {
          lVar10 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x8e] = 0;
        if (*puVar4 == '\0') goto LAB_030d3678;
      }
      else {
        do {
          plVar12 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar12 | 1;
          plVar8 = plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    plVar8 = (long *)(param_1[0x8d] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x8d] & 3U) == 0) {
        param_1[0x8d] = (ulong)plVar8 | 1;
        do {
          lVar10 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x8d] = 0;
        if (*puVar4 == '\0') goto LAB_030d3678;
      }
      else {
        do {
          plVar12 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar12 | 1;
          plVar8 = plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    plVar8 = (long *)(param_1[0x8c] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x8c] & 3U) == 0) {
        param_1[0x8c] = (ulong)plVar8 | 1;
        do {
          lVar10 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x8c] = 0;
        if (*puVar4 == '\0') goto LAB_030d3678;
      }
      else {
        do {
          plVar12 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar12 | 1;
          plVar8 = plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    plVar8 = (long *)(param_1[0x8b] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x8b] & 3U) == 0) {
        param_1[0x8b] = (ulong)plVar8 | 1;
        do {
          lVar10 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x8b] = 0;
        if (*puVar4 == '\0') goto LAB_030d3678;
      }
      else {
        do {
          plVar12 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar12 | 1;
          plVar8 = plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    plVar8 = (long *)(param_1[0x8a] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x8a] & 3U) == 0) {
        param_1[0x8a] = (ulong)plVar8 | 1;
        do {
          lVar10 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x8a] = 0;
        if (*puVar4 == '\0') goto LAB_030d3678;
      }
      else {
        do {
          plVar12 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar12 | 1;
          plVar8 = plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    plVar8 = (long *)(param_1[0x89] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x89] & 3U) == 0) {
        param_1[0x89] = (ulong)plVar8 | 1;
        do {
          lVar10 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x89] = 0;
        if (*puVar4 == '\0') goto LAB_030d3678;
      }
      else {
        do {
          plVar12 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar12 | 1;
          plVar8 = plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    plVar8 = (long *)(param_1[0x88] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x88] & 3U) == 0) {
        param_1[0x88] = (ulong)plVar8 | 1;
        do {
          lVar10 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x88] = 0;
      }
      else {
        do {
          plVar12 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar12 | 1;
          plVar8 = plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_030d3678:
  plVar8 = (long *)param_1[0x87];
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar12 = plVar8 + 2;
    do {
      lVar10 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  puVar4 = PTR_DAT_047e5100;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x6e] = (long)(puVar4 + 0x10);
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c4)) && (param_1[0x77] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x77],(ulong)*(uint *)((long)param_1 + 0x3c4) << 2);
  }
  param_1[0x77] = 0;
  *(undefined4 *)((long)param_1 + 0x3c4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x75) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3ac)) && (param_1[0x74] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x74],(ulong)*(uint *)((long)param_1 + 0x3ac) << 4);
  }
  param_1[0x74] = 0;
  *(undefined4 *)((long)param_1 + 0x3ac) = 0x80000000;
  puVar4 = PTR_DAT_047d1a00;
  param_1[0x6e] = (long)(PTR_DAT_047d1a00 + 0x10);
  puVar7 = PTR_DAT_047e50f0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x4e] = (long)(puVar7 + 0x10);
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c4)) && (param_1[0x57] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x57],(ulong)*(uint *)((long)param_1 + 0x2c4) << 2);
  }
  param_1[0x57] = 0;
  *(undefined4 *)((long)param_1 + 0x2c4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x55) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2ac)) && (param_1[0x54] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x54],(ulong)*(uint *)((long)param_1 + 0x2ac) << 4);
  }
  plVar8 = (long *)param_1[0x4a];
  param_1[0x54] = 0;
  *(undefined4 *)((long)param_1 + 0x2ac) = 0x80000000;
  param_1[0x4e] = (long)(puVar4 + 0x10);
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar12 = plVar8 + 2;
    do {
      lVar10 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  plVar8 = (long *)param_1[0x49];
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar12 = plVar8 + 2;
    do {
      lVar10 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  if ((int)param_1[0x48] != 0) {
    plVar12 = (long *)param_1[0x47];
    plVar8 = plVar12 + (int)param_1[0x48];
    do {
      plVar8 = plVar8 + -1;
      plVar9 = (long *)*plVar8;
      if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
        plVar1 = plVar9 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))();
        }
      }
    } while (plVar8 != plVar12);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x244)) && (param_1[0x47] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x47],(ulong)*(uint *)((long)param_1 + 0x244) << 3);
  }
  plVar8 = (long *)param_1[0x2e];
  param_1[0x47] = 0;
  *(undefined4 *)((long)param_1 + 0x244) = 0x80000000;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar12 = plVar8 + 2;
    do {
      lVar10 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  lVar10 = param_1[0x2b];
  if ((lVar10 != 0) && (*(int *)(lVar10 + 4) != -2)) {
    (**(code **)(puVar5 + 8))(puVar6[8],lVar10,0);
    param_1[0x2b] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x154)) && (param_1[0x29] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x29],(ulong)*(uint *)((long)param_1 + 0x154) << 4);
  }
  plVar8 = (long *)param_1[0x28];
  param_1[0x29] = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 0x80000000;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar12 = plVar8 + 2;
    do {
      lVar10 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  plVar8 = (long *)param_1[0x27];
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar12 = plVar8 + 2;
    do {
      lVar10 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  plVar8 = (long *)param_1[0x26];
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar12 = plVar8 + 2;
    do {
      lVar10 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  FUN_030d3aa0(param_1 + 3);
  *param_1 = (long)(puVar4 + 0x10);
  return;
}


