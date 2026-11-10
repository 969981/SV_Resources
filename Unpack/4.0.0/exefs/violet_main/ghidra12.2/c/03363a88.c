/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03363a88; name: FUN_03363a88
 */


void FUN_03363a88(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = (long)&PTR_LAB_047ad418;
  param_1[3] = (long)&PTR_LAB_047ad4d8;
  puVar1 = PTR_DAT_047d1a08;
  if ((int)param_1[0xe] != 0) {
    plVar4 = (long *)param_1[0xd];
    lVar5 = (long)(int)param_1[0xe] << 3;
    do {
      lVar3 = *plVar4;
      if (lVar3 != 0) {
        FUN_0336a904(lVar3);
        (**(code **)(puVar1 + 8))(0,lVar3,0);
      }
      plVar4 = plVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  FUN_0335f204(param_1 + 0x13);
  lVar5 = param_1[0x11];
  if ((lVar5 != 0) && (*(int *)(lVar5 + 4) != -2)) {
    (**(code **)(puVar1 + 8))(PTR_PTR_047d1a50[8],lVar5,0);
    param_1[0x11] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  if ((int)param_1[0x10] != 0) {
    lVar3 = param_1[0xf];
    lVar5 = (long)(int)param_1[0x10] << 4;
    do {
      uVar2 = *(ulong *)(lVar3 + -0x10 + lVar5);
      if ((uVar2 & 1) != 0) {
        (**(code **)(puVar1 + 8))(0,uVar2 - 1,0);
      }
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xf],(ulong)*(uint *)((long)param_1 + 0x84) << 4);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xd],(ulong)*(uint *)((long)param_1 + 0x74) << 3);
  }
  lVar5 = param_1[0xb];
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  if ((lVar5 != 0) && (*(int *)(lVar5 + 4) != -2)) {
    (**(code **)(puVar1 + 8))(PTR_PTR_047d1a50[8],lVar5,0);
    param_1[0xb] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[9],(ulong)*(uint *)((long)param_1 + 0x54) << 4);
  }
  lVar5 = param_1[7];
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  if ((lVar5 != 0) && (*(int *)(lVar5 + 4) != -2)) {
    (**(code **)(puVar1 + 8))(PTR_PTR_047d1a50[8],lVar5,0);
    param_1[7] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if ((int)param_1[6] != 0) {
    lVar3 = param_1[5];
    lVar5 = (long)(int)param_1[6] << 4;
    do {
      uVar2 = *(ulong *)(lVar3 + -0x10 + lVar5);
      if ((uVar2 & 1) != 0) {
        (**(code **)(puVar1 + 8))(0,uVar2 - 1,0);
      }
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[5],(ulong)*(uint *)((long)param_1 + 0x34) << 4);
  }
  param_1[5] = 0;
  puVar1 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


