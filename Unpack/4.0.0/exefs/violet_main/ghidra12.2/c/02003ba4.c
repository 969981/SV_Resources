/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02003ba4; name: FUN_02003ba4
 */


undefined8 FUN_02003ba4(long param_1)

{
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_0200409c();
    if (*(long *)(param_1 + 0xb8) == 0) {
      FUN_02004134(param_1);
    }
  }
  return 1;
}


