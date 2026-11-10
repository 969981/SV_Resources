/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f5e5b8; name: FUN_02f5e5b8
 */


void FUN_02f5e5b8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if (*param_1 != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,*param_1,0);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  puVar2 = PTR_PTR_047d1a50;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[1],(ulong)*(uint *)((long)param_1 + 0x14) << 2);
  }
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
  if ((int)param_1[5] != 0) {
    lVar3 = param_1[4];
    lVar4 = (long)(int)param_1[5] << 5;
    do {
      lVar1 = lVar3 + lVar4;
      *(undefined4 *)(lVar1 + -0x18) = 0;
      if ((-1 < (int)*(uint *)(lVar1 + -0x14)) && (*(long *)(lVar1 + -0x20) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(lVar1 + -0x20),(ulong)*(uint *)(lVar1 + -0x14) << 2);
      }
      lVar4 = lVar4 + -0x20;
      *(undefined8 *)(lVar1 + -0x20) = 0;
      *(undefined4 *)(lVar1 + -0x14) = 0x80000000;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x20))
              (puVar2,param_1[4],(ulong)*(uint *)((long)param_1 + 0x2c) << 5);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x20))
              (puVar2,param_1[1],(ulong)*(uint *)((long)param_1 + 0x14) << 2);
  }
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
  return;
}


