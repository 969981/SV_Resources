/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319fbd0; name: FUN_0319fbd0
 */


void FUN_0319fbd0(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  *param_1 = (long)(PTR_DAT_047e5888 + 0x10);
  if ((param_1[9] & 1U) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1[9] - 1,0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  puVar3 = PTR_PTR_047d1a50;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[7],(ulong)*(uint *)((long)param_1 + 0x44) << 2);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x20))
              (puVar3,param_1[5],(ulong)*(uint *)((long)param_1 + 0x34) << 1);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  if ((int)param_1[4] != 0) {
    plVar7 = (long *)param_1[3];
    plVar5 = plVar7 + (long)(int)param_1[4] * 7;
    do {
      plVar8 = plVar5 + -7;
      *(undefined4 *)(plVar5 + -4) = 0;
      if ((-1 < (int)*(uint *)((long)plVar5 + -0x1c)) && (plVar5[-5] != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))
                  (puVar3,plVar5[-5],(ulong)*(uint *)((long)plVar5 + -0x1c) << 1);
      }
      plVar4 = (long *)plVar5[-6];
      plVar5[-5] = 0;
      *(undefined4 *)((long)plVar5 + -0x1c) = 0x80000000;
      if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
        plVar5 = plVar4 + 2;
        do {
          lVar6 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
      plVar5 = (long *)*plVar8;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar4 = plVar5 + 2;
        do {
          lVar6 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
      plVar5 = plVar8;
    } while (plVar8 != plVar7);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x20))
              (puVar3,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) * 0x38);
  }
  param_1[3] = 0;
  puVar3 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar3 + 0x10);
  return;
}


