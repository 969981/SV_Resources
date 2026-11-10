/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00be0e1c; name: FUN_00be0e1c
 */


void FUN_00be0e1c(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    do {
      puVar1 = puVar1 + 1;
      (**(code **)(*(long *)*puVar1 + 0x38))();
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    if (*(long *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) != 0) {
      FUN_00bfee44();
      return;
    }
  }
  return;
}


