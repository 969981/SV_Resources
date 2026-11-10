/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02988cf8; name: FUN_02988cf8
 */


void FUN_02988cf8(long param_1,undefined2 param_2)

{
  if (*(short *)(param_1 + 0x368) == 0) {
    *(undefined2 *)(param_1 + 0x368) = param_2;
    *(undefined1 *)(param_1 + 0x36a) = 1;
    return;
  }
  return;
}


