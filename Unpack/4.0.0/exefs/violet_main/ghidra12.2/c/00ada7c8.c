/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ada7c8; name: FUN_00ada7c8
 */


void FUN_00ada7c8(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  if (*(char *)(param_2 + 0x88) != '\0') {
    memcpy(param_1 + 4,(void *)(param_2 + 0x8c),0x11c);
    *param_1 = 1;
  }
  return;
}


