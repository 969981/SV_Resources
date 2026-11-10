/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033791fc; name: FUN_033791fc
 */


void FUN_033791fc(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0xf];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar1,0);
    param_1[0xf] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xd],(ulong)*(uint *)((long)param_1 + 0x74) << 4);
  }
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  param_1[0xd] = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  if ((int)param_1[0xb] != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],param_1[10],0);
    *(undefined4 *)(param_1 + 0xb) = 0;
    param_1[10] = 0;
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[8],(ulong)*(uint *)((long)param_1 + 0x4c) << 3);
  }
  lVar1 = param_1[6];
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar1,0);
    param_1[6] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[4],(ulong)*(uint *)((long)param_1 + 0x2c) << 5);
  }
  lVar1 = param_1[2];
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar1,0);
    param_1[2] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}


