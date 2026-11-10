/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03195f00; name: FUN_03195f00
 */


void FUN_03195f00(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  *param_1 = (long)(PTR_DAT_047e5800 + 0x10);
  puVar4 = PTR_DAT_047d1a08;
  if ((int)param_1[0x11] != 0) {
    lVar8 = param_1[0x10];
    lVar9 = (long)(int)param_1[0x11] << 4;
    do {
      uVar7 = *(ulong *)(lVar8 + -0x10 + lVar9);
      if ((uVar7 & 1) != 0) {
        (**(code **)(puVar4 + 8))(0,uVar7 - 1,0);
      }
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  puVar5 = PTR_PTR_047d1a50;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x10],(ulong)*(uint *)((long)param_1 + 0x8c) << 4);
  }
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  param_1[0x10] = 0;
  if ((int)param_1[0xf] != 0) {
    plVar10 = (long *)param_1[0xe];
    plVar11 = plVar10 + (long)(int)param_1[0xf] * 2;
    do {
      plVar11 = plVar11 + -2;
      plVar6 = (long *)*plVar11;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
    } while (plVar11 != plVar10);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[0xe],(ulong)*(uint *)((long)param_1 + 0x7c) << 4);
  }
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  param_1[0xe] = 0;
  if ((int)param_1[0xd] != 0) {
    lVar8 = param_1[0xc];
    lVar9 = (long)(int)param_1[0xd] << 3;
    do {
      uVar7 = *(ulong *)(lVar8 + -8 + lVar9);
      if ((uVar7 & 1) != 0) {
        (**(code **)(puVar4 + 8))(0,uVar7 - 1,0);
      }
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[0xc],(ulong)*(uint *)((long)param_1 + 0x6c) << 3);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[10],(ulong)*(uint *)((long)param_1 + 0x5c) << 2);
  }
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[8],(ulong)*(uint *)((long)param_1 + 0x4c) * 0x30);
  }
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  param_1[8] = 0;
  if ((int)param_1[7] != 0) {
    lVar8 = param_1[6];
    lVar9 = (long)(int)param_1[7] << 4;
    do {
      uVar7 = *(ulong *)(lVar8 + -0x10 + lVar9);
      if ((uVar7 & 1) != 0) {
        (**(code **)(puVar4 + 8))(0,uVar7 - 1,0);
      }
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[6],(ulong)*(uint *)((long)param_1 + 0x3c) << 4);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))
              (puVar5,param_1[4],(ulong)*(uint *)((long)param_1 + 0x2c) << 1);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  if ((param_1[3] & 1U) != 0) {
    (**(code **)(puVar4 + 8))(0,param_1[3] - 1,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


