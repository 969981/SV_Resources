/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030da1a4; name: FUN_030da1a4
 */


void FUN_030da1a4(long param_1)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  puVar1 = PTR_PTR_047d1a50;
  if ((-1 < (int)*(uint *)(param_1 + 0x54)) && (*(long *)(param_1 + 0x48) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x48),(ulong)*(uint *)(param_1 + 0x54) << 4);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(long *)(param_1 + 0x38) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,*(long *)(param_1 + 0x38),(ulong)*(uint *)(param_1 + 0x44) << 3);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x34)) && (*(long *)(param_1 + 0x28) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,*(long *)(param_1 + 0x28),(ulong)*(uint *)(param_1 + 0x34) << 3);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(long *)(param_1 + 0x18) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,*(long *)(param_1 + 0x18),(ulong)*(uint *)(param_1 + 0x24) << 2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(long *)(param_1 + 8) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,*(long *)(param_1 + 8),(ulong)*(uint *)(param_1 + 0x14) * 6);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}


