/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0335eda4; name: FUN_0335eda4
 */


void FUN_0335eda4(long param_1)

{
  long lVar1;
  
  FUN_031d98b8(param_1 + 200);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xac)) && (*(long *)(param_1 + 0xa0) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0xa0),(ulong)*(uint *)(param_1 + 0xac) << 4);
  }
  lVar1 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x80000000;
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar1,0);
    *(undefined **)(param_1 + 0xb0) = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((-1 < *(int *)(param_1 + 0x9c)) && (*(long *)(param_1 + 0x90) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x80000000;
  (**(code **)(**(long **)(*(long *)(param_1 + 0xc0) + 0x2b0) + 0x28))();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(long *)(param_1 + 0x18) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x18),(ulong)*(uint *)(param_1 + 0x24) * 0x18);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  return;
}


