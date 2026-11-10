/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010f06cc; name: FUN_010f06cc
 */


void FUN_010f06cc(long param_1)

{
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    FUN_029ef588();
  }
  else {
    FUN_029ef68c();
  }
  return;
}


