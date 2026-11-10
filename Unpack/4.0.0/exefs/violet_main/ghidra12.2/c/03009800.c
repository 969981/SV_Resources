/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03009800; name: FUN_03009800
 */


void FUN_03009800(long *param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[6],(ulong)*(uint *)((long)param_1 + 0x3c) << 4);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[4],(ulong)*(uint *)((long)param_1 + 0x2c) * 6);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  if ((int)param_1[3] != 0) {
    lVar1 = param_1[2];
    lVar2 = (long)(int)param_1[3] * 0x140;
    do {
      (*(code *)**(undefined8 **)(lVar1 + -0x140 + lVar2))();
      lVar2 = lVar2 + -0x140;
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[2],(ulong)*(uint *)((long)param_1 + 0x1c) * 0x140);
  }
  *(undefined4 *)((long)param_1 + 0x1c) = 0x80000000;
  param_1[2] = 0;
  if ((int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar2 = (long)(int)param_1[1] * 0x140;
    do {
      (*(code *)**(undefined8 **)(lVar1 + -0x140 + lVar2))();
      lVar2 = lVar2 + -0x140;
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) * 0x140);
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}


