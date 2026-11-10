/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0119543c; name: FUN_0119543c
 */


void FUN_0119543c(long param_1,undefined4 param_2,uint param_3)

{
  *(undefined4 *)(param_1 + 0x27c) = param_2;
  if ((param_3 & 1) == 0) {
    return;
  }
  FUN_0119544c();
  return;
}


