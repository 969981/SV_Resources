/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fbfe78; name: FUN_02fbfe78
 */


void FUN_02fbfe78(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = (long)&PTR_LAB_04612010;
  puVar1 = PTR_DAT_047d1a08;
  if (param_1[9] != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1[9],0);
  }
  (**(code **)(puVar1 + 8))(0,param_1[8],0);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xf],(ulong)*(uint *)((long)param_1 + 0x84) << 2);
  }
  *(undefined4 *)((long)param_1 + 0x84) = 0x80000000;
  param_1[0xf] = 0;
  if ((int)param_1[0xe] != 0) {
    lVar2 = param_1[0xd];
    lVar3 = (long)(int)param_1[0xe] << 5;
    do {
      (**(code **)(*(long *)(lVar2 + -0x20 + lVar3) + 8))();
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xd],(ulong)*(uint *)((long)param_1 + 0x74) << 5);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xb],(ulong)*(uint *)((long)param_1 + 100) << 2);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[6],(ulong)*(uint *)((long)param_1 + 0x3c) << 3);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[4],(ulong)*(uint *)((long)param_1 + 0x2c) << 3);
  }
  param_1[4] = 0;
  puVar1 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


