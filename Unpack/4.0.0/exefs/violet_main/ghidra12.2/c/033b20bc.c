/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b20bc; name: FUN_033b20bc
 */


void FUN_033b20bc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *param_1 = (long)&PTR_LAB_047b33c0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar3 = PTR_PTR_047d1a50;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc4)) && (param_1[0x17] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x17],(ulong)*(uint *)((long)param_1 + 0xc4) << 3);
  }
  puVar2 = PTR_DAT_047e6900;
  puVar1 = PTR_DAT_047e6830;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0x80000000;
  param_1[10] = (long)(puVar1 + 0x10);
  param_1[0xd] = (long)(puVar2 + 0x10);
  if ((-1 < *(int *)((long)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
  }
  param_1[0x12] = 0;
  puVar2 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x80000000;
  *(undefined4 *)(param_1 + 9) = 0;
  puVar1 = puVar2 + 0x10;
  param_1[0xd] = (long)puVar1;
  param_1[10] = (long)puVar1;
  if ((-1 < *(int *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
  }
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x20))
              (puVar3,param_1[6],(ulong)*(uint *)((long)param_1 + 0x3c) << 3);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  (**(code **)(PTR_DAT_047d1a08 + 8))(puVar3[8],param_1[3],0);
  *param_1 = (long)(puVar2 + 0x10);
  return;
}


