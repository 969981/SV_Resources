/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0334cc6c; name: FUN_0334cc6c
 */


void FUN_0334cc6c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = &PTR_LAB_047acd50;
  param_1[1] = &PTR_LAB_047acdd8;
  FUN_0335f204(param_1 + 0x8b);
  lVar6 = param_1[0x89];
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar6,0);
    param_1[0x89] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x8a) = 0;
  }
  puVar4 = PTR_DAT_047d1a08;
  if (*(int *)(param_1 + 0x88) != 0) {
    lVar8 = param_1[0x87];
    lVar6 = (long)*(int *)(param_1 + 0x88) << 4;
    do {
      uVar7 = *(ulong *)(lVar8 + -0x10 + lVar6);
      if ((uVar7 & 1) != 0) {
        (**(code **)(puVar4 + 8))(0,uVar7 - 1,0);
      }
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x444)) && (param_1[0x87] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x87],(ulong)*(uint *)((long)param_1 + 0x444) << 4);
  }
  plVar5 = (long *)param_1[0x85];
  param_1[0x87] = 0;
  *(undefined4 *)((long)param_1 + 0x444) = 0x80000000;
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
  lVar6 = param_1[0x83];
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar6,0);
    param_1[0x83] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  *(undefined4 *)(param_1 + 0x82) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x414)) && (param_1[0x81] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x81],(ulong)*(uint *)((long)param_1 + 0x414) << 4);
  }
  lVar6 = param_1[0x7f];
  param_1[0x81] = 0;
  *(undefined4 *)((long)param_1 + 0x414) = 0x80000000;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar6,0);
    param_1[0x7f] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  *(undefined4 *)(param_1 + 0x7e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3f4)) && (param_1[0x7d] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x7d],(ulong)*(uint *)((long)param_1 + 0x3f4) << 4);
  }
  lVar6 = param_1[0x7b];
  param_1[0x7d] = 0;
  *(undefined4 *)((long)param_1 + 0x3f4) = 0x80000000;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar6,0);
    param_1[0x7b] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  *(undefined4 *)(param_1 + 0x7a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3d4)) && (param_1[0x79] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x79],(ulong)*(uint *)((long)param_1 + 0x3d4) << 4);
  }
  param_1[0x79] = 0;
  *(undefined4 *)((long)param_1 + 0x3d4) = 0x80000000;
  FUN_0335ebe0(param_1 + 0x57);
  FUN_031fa22c(param_1 + 0x49);
  lVar6 = param_1[0x3e];
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar6,0);
    param_1[0x3e] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x3f) = 0;
  }
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1ec)) && (param_1[0x3c] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x3c],(ulong)*(uint *)((long)param_1 + 0x1ec) << 4);
  }
  lVar6 = param_1[0x37];
  param_1[0x3c] = 0;
  *(undefined4 *)((long)param_1 + 0x1ec) = 0x80000000;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar6,0);
    param_1[0x37] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1b4)) && (param_1[0x35] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x35],(ulong)*(uint *)((long)param_1 + 0x1b4) << 4);
  }
  lVar6 = param_1[0x33];
  param_1[0x35] = 0;
  *(undefined4 *)((long)param_1 + 0x1b4) = 0x80000000;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar6,0);
    param_1[0x33] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  *(undefined4 *)(param_1 + 0x32) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x194)) && (param_1[0x31] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x31],(ulong)*(uint *)((long)param_1 + 0x194) << 4);
  }
  param_1[0x31] = 0;
  *(undefined4 *)((long)param_1 + 0x194) = 0x80000000;
  param_1[0x28] = PTR_DAT_047e5b60 + 0x10;
  FUN_031d98b8(param_1 + 0x28);
  puVar4 = PTR_DAT_047d1a08;
  if (*(int *)(param_1 + 0x27) != 0) {
    lVar8 = param_1[0x26];
    lVar6 = (long)*(int *)(param_1 + 0x27) << 3;
    do {
      lVar9 = *(long *)(lVar8 + -8 + lVar6);
      if (lVar9 != 0) {
        FUN_0336a904(lVar9);
        (**(code **)(puVar4 + 8))(0,lVar9,0);
      }
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x13c)) && (param_1[0x26] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x26],(ulong)*(uint *)((long)param_1 + 0x13c) << 3);
  }
  lVar6 = param_1[0x24];
  param_1[0x26] = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 0x80000000;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar6,0);
    param_1[0x24] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x25) = 0;
  }
  puVar4 = PTR_PTR_047d1a50;
  if (*(int *)(param_1 + 0x23) != 0) {
    lVar8 = param_1[0x22];
    lVar6 = (long)*(int *)(param_1 + 0x23) * 0x18;
    do {
      lVar9 = lVar8 + lVar6;
      *(undefined4 *)(lVar9 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar9 + -4)) && (*(long *)(lVar9 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar4 + 0x20))
                  (puVar4,*(long *)(lVar9 + -0x10),(ulong)*(uint *)(lVar9 + -4) << 2);
      }
      lVar6 = lVar6 + -0x18;
      *(undefined8 *)(lVar9 + -0x10) = 0;
      *(undefined4 *)(lVar9 + -4) = 0x80000000;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x11c)) && (param_1[0x22] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x22],(ulong)*(uint *)((long)param_1 + 0x11c) * 0x18);
  }
  lVar6 = param_1[0x20];
  param_1[0x22] = 0;
  *(undefined4 *)((long)param_1 + 0x11c) = 0x80000000;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar6,0);
    param_1[0x20] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x21) = 0;
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xfc)) && (param_1[0x1e] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x1e],(ulong)*(uint *)((long)param_1 + 0xfc) << 3);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xe4)) && (param_1[0x1b] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x1b],(ulong)*(uint *)((long)param_1 + 0xe4) << 3);
  }
  param_1[0x1b] = 0;
  *(undefined4 *)((long)param_1 + 0xe4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xcc)) && (param_1[0x18] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x18],(ulong)*(uint *)((long)param_1 + 0xcc) << 3);
  }
  lVar6 = param_1[0x16];
  param_1[0x18] = 0;
  *(undefined4 *)((long)param_1 + 0xcc) = 0x80000000;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar6,0);
    param_1[0x16] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x17) = 0;
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x14],(ulong)*(uint *)((long)param_1 + 0xac) << 3);
  }
  lVar6 = param_1[0x12];
  param_1[0x14] = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0x80000000;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar6,0);
    param_1[0x12] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x13) = 0;
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x10],(ulong)*(uint *)((long)param_1 + 0x8c) << 3);
  }
  lVar6 = param_1[0xe];
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar6,0);
    param_1[0xe] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0xf) = 0;
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xc],(ulong)*(uint *)((long)param_1 + 0x6c) << 4);
  }
  lVar6 = param_1[10];
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x80000000;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar6,0);
    param_1[10] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[8],(ulong)*(uint *)((long)param_1 + 0x4c) << 4);
  }
  lVar6 = param_1[6];
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar6,0);
    param_1[6] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[4],(ulong)*(uint *)((long)param_1 + 0x2c) << 4);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  return;
}


