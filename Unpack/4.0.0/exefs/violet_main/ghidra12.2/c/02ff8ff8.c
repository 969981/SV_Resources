/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ff8ff8; name: FUN_02ff8ff8
 */


void FUN_02ff8ff8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 local_40;
  undefined8 local_3c;
  undefined1 *local_30;
  long *plStack_28;
  
  *param_1 = (long)(PTR_DAT_047e49c8 + 0x10);
  local_40 = 0x2000020;
  local_3c = 0xffffffff0000004d;
  local_30 = &LAB_02ffbaf4;
  plStack_28 = param_1;
  (**(code **)(*(long *)param_1[10] + 0x270))((long *)param_1[10],&local_40);
  if (0 < (int)param_1[0x20]) {
    lVar7 = 0;
    do {
      plVar5 = *(long **)(param_1[0x1f] + lVar7 * 8);
      if (plVar5[1] != 0) {
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
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)param_1[0x20]);
  }
  if (param_1[7] != -1) {
    (**(code **)(*(long *)param_1[10] + 0x68))((long *)param_1[10],param_1 + 7,1,0);
    param_1[7] = -1;
  }
  plVar5 = (long *)param_1[5];
  if (plVar5[1] != 0) {
    plVar1 = plVar5 + 2;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 0x22) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x114)) && (param_1[0x21] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x21],(ulong)*(uint *)((long)param_1 + 0x114) * 0x30);
  }
  param_1[0x21] = 0;
  *(undefined4 *)((long)param_1 + 0x114) = 0x80000000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x104)) && (param_1[0x1f] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x1f],(ulong)*(uint *)((long)param_1 + 0x104) << 3);
  }
  param_1[0x1f] = 0;
  *(undefined4 *)((long)param_1 + 0x104) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) << 6);
  }
  param_1[3] = 0;
  puVar4 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar4 + 0x10);
  return;
}


