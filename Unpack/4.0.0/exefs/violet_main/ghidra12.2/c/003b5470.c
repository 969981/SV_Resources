/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b5470; name: FUN_003b5470
 */


undefined8 FUN_003b5470(long param_1,void *param_2,size_t param_3)

{
  if (param_3 < 0x101) {
    memcpy((void *)(param_1 + 0x50),param_2,param_3);
    *(size_t *)(param_1 + 8) = param_3;
    return 1;
  }
  return 0;
}


