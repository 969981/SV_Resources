/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0024736c; name: FUN_0024736c
 */


void FUN_0024736c(long param_1)

{
  if (*(char *)(param_1 + 0x60) != '\0') {
    thunk_FUN_006c5184(param_1 + 0x18,param_1);
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}


