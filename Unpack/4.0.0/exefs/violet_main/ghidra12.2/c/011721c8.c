/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011721c8; name: FUN_011721c8
 */


void FUN_011721c8(long param_1)

{
  FUN_01173048();
  FUN_01172cf0(param_1);
  if (*(long *)(param_1 + 0x50) == 0) {
    return;
  }
  FUN_01172210(param_1);
  FUN_01172ab0(param_1);
  return;
}


