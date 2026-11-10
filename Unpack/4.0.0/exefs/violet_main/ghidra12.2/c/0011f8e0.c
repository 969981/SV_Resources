/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0011f8e0; name: FUN_0011f8e0
 */


void FUN_0011f8e0(long param_1)

{
  if (*(int *)(param_1 + 400) != 0) {
    FUN_00120aa0();
    FUN_00120aa0(param_1 + 0x80);
    FUN_00120720(param_1 + 0x100);
    *(undefined4 *)(param_1 + 400) = 0;
  }
  return;
}


