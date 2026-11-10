/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027d95a0; name: FUN_027d95a0
 */


void FUN_027d95a0(long param_1)

{
  FUN_027d95e4(param_1 + 0xf0);
  if (*(int *)(param_1 + 0x48) - 1U < 3) {
    FUN_027d8478(param_1);
    return;
  }
  return;
}


