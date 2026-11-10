/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea5cec; name: FUN_01ea5cec
 */


void FUN_01ea5cec(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x1b0) = param_1;
  *(undefined1 *)(param_2 + 0x13c) = 1;
  FUN_0119c9d8(param_2,1);
  return;
}


