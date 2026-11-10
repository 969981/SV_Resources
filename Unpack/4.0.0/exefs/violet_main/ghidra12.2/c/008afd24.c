/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008afd24; name: FUN_008afd24
 */


void FUN_008afd24(undefined1 *param_1,long param_2)

{
  if (param_2 != 0) {
    *(long *)(param_1 + 8) = param_2;
    *param_1 = 0x90;
  }
  return;
}


