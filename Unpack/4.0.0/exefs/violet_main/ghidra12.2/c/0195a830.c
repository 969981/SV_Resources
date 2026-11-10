/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0195a830; name: FUN_0195a830
 */


void FUN_0195a830(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  if (*(char *)(param_2 + 0x50) != '\0') {
    memcpy(param_1 + 4,(void *)(param_2 + 0x54),0x28);
    *param_1 = 1;
  }
  return;
}


