/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001cc214; name: FUN_001cc214
 */


void FUN_001cc214(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_001ed3c8();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  FUN_001ec308(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


