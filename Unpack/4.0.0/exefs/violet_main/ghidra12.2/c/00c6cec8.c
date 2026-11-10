/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c6cec8; name: FUN_00c6cec8
 */


void FUN_00c6cec8(long param_1)

{
  if (*(long *)(param_1 + 200) != 0) {
    FUN_008854d0();
  }
  if (*(long *)(param_1 + 0xd0) == 0) {
    return;
  }
  FUN_008854d0();
  return;
}


