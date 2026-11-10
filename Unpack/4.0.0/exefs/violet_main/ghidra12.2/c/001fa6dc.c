/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001fa6dc; name: FUN_001fa6dc
 */


void FUN_001fa6dc(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  nnosDestroyThread();
  if (*(long *)(param_1 + 0x1d0) != 0) {
    FUN_001ec3a0();
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  FUN_001ec308(param_1);
  return;
}


