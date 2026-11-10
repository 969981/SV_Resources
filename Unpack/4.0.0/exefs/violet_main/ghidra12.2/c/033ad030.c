/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033ad030; name: FUN_033ad030
 */


void FUN_033ad030(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_1 + 0x188) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x18c)) && (*(long *)(param_1 + 0x180) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x180),(ulong)*(uint *)(param_1 + 0x18c) << 4);
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x140) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x144)) && (*(long *)(param_1 + 0x138) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x138),(ulong)*(uint *)(param_1 + 0x144) << 2);
  }
  puVar1 = PTR_DAT_047e5b60;
  *(long *)(param_1 + 0xf0) = (long)(PTR_DAT_047e5b60 + 0x10);
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0x80000000;
  *(undefined ***)(param_1 + 0x60) = &PTR_FUN_047b3278;
  FUN_031d98b8((long *)(param_1 + 0xf0));
  *(undefined **)(param_1 + 0x60) = PTR_DAT_047e68d8 + 0x10;
  FUN_033748b0(param_1 + 0xd0);
  puVar2 = PTR_DAT_047e6778;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined **)(param_1 + 0x60) = puVar2 + 0x10;
  if ((-1 < (int)*(uint *)(param_1 + 0x84)) && (*(long *)(param_1 + 0x78) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x78),(ulong)*(uint *)(param_1 + 0x84) * 0x18);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0x80000000;
  puVar2 = PTR_DAT_047e66d8;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined **)(param_1 + 0x60) = puVar2 + 0x10;
  if ((-1 < (int)*(uint *)(param_1 + 0x74)) && (*(long *)(param_1 + 0x68) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x68),(ulong)*(uint *)(param_1 + 0x74) << 3);
  }
  *(long *)(param_1 + 0x18) = (long)(puVar1 + 0x10);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x80000000;
  FUN_031d98b8((long *)(param_1 + 0x18));
  return;
}


