/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ec248; name: FUN_001ec248
 */


void FUN_001ec248(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_001ec308(*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_001ec308(param_1);
  return;
}


