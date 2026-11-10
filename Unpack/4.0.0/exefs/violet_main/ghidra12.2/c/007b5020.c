/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b5020; name: FUN_007b5020
 */


void FUN_007b5020(long param_1)

{
  if (*(long *)(param_1 + 0x11d8) != 0) {
    FUN_007b5548();
    (**(code **)(**(long **)(param_1 + 0x11d8) + 0x10))(*(long **)(param_1 + 0x11d8),0);
  }
  if (*(long *)(param_1 + 0x11d0) != 0) {
    FUN_007b5c3c();
    (**(code **)(**(long **)(param_1 + 0x11d0) + 0x10))(*(long **)(param_1 + 0x11d0),0);
  }
  FUN_0079e2f8(param_1);
  return;
}


