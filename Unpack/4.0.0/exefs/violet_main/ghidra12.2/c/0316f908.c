/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0316f908; name: FUN_0316f908
 */


void FUN_0316f908(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  *param_1 = (long)(PTR_DAT_047e55e0 + 0x10);
  if ((param_1[0x23] & 1U) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1[0x23] - 1,0);
  }
  if ((int)param_1[0x21] != 0) {
    plVar7 = (long *)param_1[0x20];
    plVar8 = plVar7 + (int)param_1[0x21];
    do {
      plVar8 = plVar8 + -1;
      plVar5 = (long *)*plVar8;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    } while (plVar8 != plVar7);
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  puVar4 = PTR_PTR_047d1a50;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x10c)) && (param_1[0x20] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x20],(ulong)*(uint *)((long)param_1 + 0x10c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x10c) = 0x80000000;
  param_1[0x20] = 0;
  if ((int)param_1[0x1f] != 0) {
    plVar7 = (long *)param_1[0x1e];
    plVar8 = plVar7 + (int)param_1[0x1f];
    do {
      plVar8 = plVar8 + -1;
      plVar5 = (long *)*plVar8;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    } while (plVar8 != plVar7);
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xfc)) && (param_1[0x1e] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[0x1e],(ulong)*(uint *)((long)param_1 + 0xfc) << 3);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xe4)) && (param_1[0x1b] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[0x1b],(ulong)*(uint *)((long)param_1 + 0xe4) * 0xc);
  }
  param_1[0x1b] = 0;
  *(undefined4 *)((long)param_1 + 0xe4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc4)) && (param_1[0x17] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[0x17],(ulong)*(uint *)((long)param_1 + 0xc4) << 4);
  }
  param_1[0x17] = 0;
  puVar4 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0xc4) = 0x80000000;
  *param_1 = (long)(puVar4 + 0x10);
  return;
}


