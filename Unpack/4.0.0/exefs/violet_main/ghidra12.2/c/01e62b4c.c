/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e62b4c; name: FUN_01e62b4c
 */


void FUN_01e62b4c(long param_1,undefined8 *param_2,byte param_3)

{
  if (param_3 < 4) {
    *(undefined8 *)(param_1 + (ulong)param_3 * 8 + 0x130) = *param_2;
  }
  return;
}


