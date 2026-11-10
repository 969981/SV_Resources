/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030dbab8; name: FUN_030dbab8
 */


void FUN_030dbab8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_047e51b0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if ((-1 < (int)*(uint *)((long)param_1 + 0x104)) && (param_1[0x1f] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x1f],(ulong)*(uint *)((long)param_1 + 0x104) << 5);
  }
  lVar2 = param_1[0x1d];
  param_1[0x1f] = 0;
  *(undefined4 *)((long)param_1 + 0x104) = 0x80000000;
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar2,0);
    param_1[0x1d] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x1e) = 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xe4)) && (param_1[0x1b] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x1b],(ulong)*(uint *)((long)param_1 + 0xe4) << 2);
  }
  lVar2 = param_1[0x19];
  param_1[0x1b] = 0;
  *(undefined4 *)((long)param_1 + 0xe4) = 0x80000000;
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar2,0);
    param_1[0x19] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x1a) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc4)) && (param_1[0x17] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x17],(ulong)*(uint *)((long)param_1 + 0xc4) << 2);
  }
  param_1[0x17] = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xb4)) && (param_1[0x15] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x15],(ulong)*(uint *)((long)param_1 + 0xb4) << 2);
  }
  param_1[0x15] = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xa4)) && (param_1[0x13] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x13],(ulong)*(uint *)((long)param_1 + 0xa4) << 2);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x80000000;
  FUN_030e209c(param_1 + 5);
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


