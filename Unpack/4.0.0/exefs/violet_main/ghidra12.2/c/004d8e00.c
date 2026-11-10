/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004d8e00; name: FUN_004d8e00
 */


void FUN_004d8e00(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  FUN_00523908(param_1 + 0x10);
  uVar2 = (ulong)*(uint *)(param_1 + 0x38);
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    puVar1 = *(undefined8 **)(param_1 + 0x40);
    do {
      puVar1 = puVar1 + 1;
      FUN_004e22f4(*puVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if (*(long *)(uVar2 + 8) != *(long *)(uVar2 + 0x10)) {
      FUN_00514600();
      return;
    }
  }
  return;
}


