/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0316c6a8; name: FUN_0316c6a8
 */


void FUN_0316c6a8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  puVar4 = PTR_DAT_047d1a08;
  *param_1 = (long)(PTR_DAT_047e5720 + 0x10);
  puVar5 = PTR_PTR_047d1a50;
  if ((int)param_1[0x43] != 0) {
    lVar10 = param_1[0x42];
    lVar8 = lVar10 + (long)(int)param_1[0x43] * 0xf0;
    do {
      if ((*(ulong *)(lVar8 + -8) & 1) != 0) {
        (**(code **)(puVar4 + 8))(0,*(ulong *)(lVar8 + -8) - 1,0);
      }
      *(undefined4 *)(lVar8 + -0x18) = 0;
      if ((-1 < (int)*(uint *)(lVar8 + -0x14)) && (*(long *)(lVar8 + -0x20) != 0)) {
        (**(code **)(*(long *)puVar5 + 0x20))
                  (puVar5,*(long *)(lVar8 + -0x20),(ulong)*(uint *)(lVar8 + -0x14) << 4);
      }
      plVar6 = *(long **)(lVar8 + -0xf0);
      lVar11 = lVar8 + -0xf0;
      *(undefined8 *)(lVar8 + -0x20) = 0;
      *(undefined4 *)(lVar8 + -0x14) = 0x80000000;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar9 = plVar6 + 2;
        do {
          lVar8 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      lVar8 = lVar11;
    } while (lVar11 != lVar10);
  }
  *(undefined4 *)(param_1 + 0x43) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x21c)) && (param_1[0x42] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[0x42],(ulong)*(uint *)((long)param_1 + 0x21c) * 0xf0);
  }
  *(undefined4 *)((long)param_1 + 0x21c) = 0x80000000;
  param_1[0x42] = 0;
  if ((param_1[0x41] & 1U) != 0) {
    (**(code **)(puVar4 + 8))(0,param_1[0x41] - 1,0);
  }
  if ((param_1[0x3e] & 1U) != 0) {
    (**(code **)(puVar4 + 8))(0,param_1[0x3e] - 1,0);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1e4)) && (param_1[0x3b] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[0x3b],(ulong)*(uint *)((long)param_1 + 0x1e4) << 4);
  }
  param_1[0x3b] = 0;
  *(undefined4 *)((long)param_1 + 0x1e4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 300)) && (param_1[0x24] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[0x24],(ulong)*(uint *)((long)param_1 + 300) << 3);
  }
  param_1[0x24] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x80000000;
  if ((int)param_1[0x21] != 0) {
    plVar9 = (long *)param_1[0x20];
    plVar6 = plVar9 + (int)param_1[0x21];
    do {
      plVar6 = plVar6 + -1;
      plVar7 = (long *)*plVar6;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar1 = plVar7 + 2;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
    } while (plVar6 != plVar9);
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x10c)) && (param_1[0x20] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[0x20],(ulong)*(uint *)((long)param_1 + 0x10c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x10c) = 0x80000000;
  param_1[0x20] = 0;
  if ((int)param_1[0x1f] != 0) {
    plVar9 = (long *)param_1[0x1e];
    plVar6 = plVar9 + (int)param_1[0x1f];
    do {
      plVar6 = plVar6 + -1;
      plVar7 = (long *)*plVar6;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar1 = plVar7 + 2;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
    } while (plVar6 != plVar9);
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xfc)) && (param_1[0x1e] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[0x1e],(ulong)*(uint *)((long)param_1 + 0xfc) << 3);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xbc)) && (param_1[0x16] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[0x16],(ulong)*(uint *)((long)param_1 + 0xbc) << 5);
  }
  param_1[0x16] = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[0x14],(ulong)*(uint *)((long)param_1 + 0xac) << 4);
  }
  param_1[0x14] = 0;
  puVar4 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0xac) = 0x80000000;
  *param_1 = (long)(puVar4 + 0x10);
  return;
}


