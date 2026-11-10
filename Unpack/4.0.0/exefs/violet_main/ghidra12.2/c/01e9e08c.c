/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e9e08c; name: FUN_01e9e08c
 */


void FUN_01e9e08c(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  if (*(char *)(param_2 + 0xf8) == '\0') {
    return;
  }
  FUN_01e9ecf4(param_1,param_2 + 0x100);
  return;
}


