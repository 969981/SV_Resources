/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0305fa5c; name: FUN_0305fa5c
 */


void FUN_0305fa5c(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = (long)(PTR_DAT_047e4f28 + 0x10);
  puVar5 = PTR_PTR_047d1a50;
  if ((int)param_1[0x19] != 0) {
    lVar7 = param_1[0x18];
    lVar8 = (long)(int)param_1[0x19] << 4;
    do {
      lVar2 = lVar7 + lVar8;
      *(undefined4 *)(lVar2 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar2 + -4)) && (*(long *)(lVar2 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar5 + 0x20))
                  (puVar5,*(long *)(lVar2 + -0x10),(ulong)*(uint *)(lVar2 + -4) << 2);
      }
      lVar8 = lVar8 + -0x10;
      *(undefined8 *)(lVar2 + -0x10) = 0;
      *(undefined4 *)(lVar2 + -4) = 0x80000000;
    } while (lVar8 != 0);
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xcc)) && (param_1[0x18] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[0x18],(ulong)*(uint *)((long)param_1 + 0xcc) << 4);
  }
  param_1[0x18] = 0;
  *(undefined4 *)((long)param_1 + 0xcc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xbc)) && (param_1[0x16] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[0x16],(ulong)*(uint *)((long)param_1 + 0xbc) << 2);
  }
  param_1[0x16] = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[0x14],(ulong)*(uint *)((long)param_1 + 0xac) << 2);
  }
  param_1[0x14] = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0x80000000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[0x12],(ulong)*(uint *)((long)param_1 + 0x9c) << 3);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[0x10],(ulong)*(uint *)((long)param_1 + 0x8c) << 3);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[0xe],(ulong)*(uint *)((long)param_1 + 0x7c) << 2);
  }
  plVar6 = (long *)param_1[0xd];
  param_1[0xe] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


