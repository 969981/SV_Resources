/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03181f38; name: FUN_03181f38
 */


void FUN_03181f38(long *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  iVar2 = (int)param_1[0xb];
  *param_1 = (long)(PTR_DAT_047e5760 + 0x10);
  if (iVar2 != 0) {
    plVar8 = (long *)param_1[10];
    lVar9 = (long)iVar2 * 8 + -8;
    plVar6 = plVar8;
    if (((uint)lVar9 >> 3 & 1) == 0) {
      lVar10 = *plVar8;
      *(undefined8 *)(lVar10 + 0x100) = 0;
      *(undefined8 *)(lVar10 + 0x108) = 0xffffffffffffffff;
      plVar6 = plVar8 + 1;
    }
    if (lVar9 != 0) {
      do {
        lVar9 = *plVar6;
        *(undefined8 *)(lVar9 + 0x100) = 0;
        *(undefined8 *)(lVar9 + 0x108) = 0xffffffffffffffff;
        lVar9 = plVar6[1];
        plVar6 = plVar6 + 2;
        *(undefined8 *)(lVar9 + 0x100) = 0;
        *(undefined8 *)(lVar9 + 0x108) = 0xffffffffffffffff;
      } while (plVar6 != plVar8 + iVar2);
    }
  }
  plVar6 = (long *)param_1[0x10];
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
  if ((int)param_1[0xf] != 0) {
    plVar8 = (long *)param_1[0xe];
    plVar6 = plVar8 + (int)param_1[0xf];
    do {
      plVar6 = plVar6 + -1;
      plVar7 = (long *)*plVar6;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar1 = plVar7 + 2;
        do {
          lVar9 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
    } while (plVar6 != plVar8);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xe],(ulong)*(uint *)((long)param_1 + 0x7c) << 3);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xc],(ulong)*(uint *)((long)param_1 + 0x6c) << 3);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x80000000;
  if ((int)param_1[0xb] != 0) {
    plVar8 = (long *)param_1[10];
    plVar6 = plVar8 + (int)param_1[0xb];
    do {
      plVar6 = plVar6 + -1;
      plVar7 = (long *)*plVar6;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar1 = plVar7 + 2;
        do {
          lVar9 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
    } while (plVar6 != plVar8);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[10],(ulong)*(uint *)((long)param_1 + 0x5c) << 3);
  }
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  puVar5 = PTR_DAT_047e3360;
  if (*PTR_DAT_047e3360 != '\0') {
    plVar6 = (long *)(param_1[7] & 0xfffffffffffffffc);
    if (plVar6 != (long *)0x0) {
      if ((param_1[7] & 3U) == 0) {
        param_1[7] = (ulong)plVar6 | 1;
        do {
          lVar9 = *plVar6;
          plVar6 = (long *)(plVar6[1] & 0xfffffffffffffffc);
          (**(code **)(lVar9 + 8))();
        } while (plVar6 != (long *)0x0);
        param_1[7] = 0;
        if (*puVar5 == '\0') goto LAB_03182304;
      }
      else {
        do {
          plVar8 = (long *)(plVar6[1] & 0xfffffffffffffffc);
          plVar6[1] = (ulong)plVar8 | 1;
          plVar6 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar6 = (long *)(param_1[6] & 0xfffffffffffffffc);
    if (plVar6 != (long *)0x0) {
      if ((param_1[6] & 3U) == 0) {
        param_1[6] = (ulong)plVar6 | 1;
        do {
          lVar9 = *plVar6;
          plVar6 = (long *)(plVar6[1] & 0xfffffffffffffffc);
          (**(code **)(lVar9 + 8))();
        } while (plVar6 != (long *)0x0);
        param_1[6] = 0;
        if (*puVar5 == '\0') goto LAB_03182304;
      }
      else {
        do {
          plVar8 = (long *)(plVar6[1] & 0xfffffffffffffffc);
          plVar6[1] = (ulong)plVar8 | 1;
          plVar6 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar6 = (long *)(param_1[5] & 0xfffffffffffffffc);
    if (plVar6 != (long *)0x0) {
      if ((param_1[5] & 3U) == 0) {
        param_1[5] = (ulong)plVar6 | 1;
        do {
          lVar9 = *plVar6;
          plVar6 = (long *)(plVar6[1] & 0xfffffffffffffffc);
          (**(code **)(lVar9 + 8))();
        } while (plVar6 != (long *)0x0);
        param_1[5] = 0;
        if (*puVar5 == '\0') goto LAB_03182304;
      }
      else {
        do {
          plVar8 = (long *)(plVar6[1] & 0xfffffffffffffffc);
          plVar6[1] = (ulong)plVar8 | 1;
          plVar6 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar6 = (long *)(param_1[4] & 0xfffffffffffffffc);
    if (plVar6 != (long *)0x0) {
      if ((param_1[4] & 3U) == 0) {
        param_1[4] = (ulong)plVar6 | 1;
        do {
          lVar9 = *plVar6;
          plVar6 = (long *)(plVar6[1] & 0xfffffffffffffffc);
          (**(code **)(lVar9 + 8))();
        } while (plVar6 != (long *)0x0);
        param_1[4] = 0;
        if (*puVar5 == '\0') goto LAB_03182304;
      }
      else {
        do {
          plVar8 = (long *)(plVar6[1] & 0xfffffffffffffffc);
          plVar6[1] = (ulong)plVar8 | 1;
          plVar6 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    plVar6 = (long *)(param_1[3] & 0xfffffffffffffffc);
    if (plVar6 != (long *)0x0) {
      if ((param_1[3] & 3U) == 0) {
        param_1[3] = (ulong)plVar6 | 1;
        do {
          lVar9 = *plVar6;
          plVar6 = (long *)(plVar6[1] & 0xfffffffffffffffc);
          (**(code **)(lVar9 + 8))();
        } while (plVar6 != (long *)0x0);
        param_1[3] = 0;
      }
      else {
        do {
          plVar8 = (long *)(plVar6[1] & 0xfffffffffffffffc);
          plVar6[1] = (ulong)plVar8 | 1;
          plVar6 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
LAB_03182304:
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


