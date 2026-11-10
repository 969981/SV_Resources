/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0201e294; name: FUN_0201e294
 */


void FUN_0201e294(long param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x548) = param_2;
  }
  return;
}


