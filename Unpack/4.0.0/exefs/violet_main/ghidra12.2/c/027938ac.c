/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027938ac; name: FUN_027938ac
 */


undefined8 FUN_027938ac(long param_1,void *param_2,size_t param_3)

{
  if (param_3 < 0xfd) {
    *(size_t *)(param_1 + 0x248) = param_3;
    memcpy((void *)(param_1 + 0x148),param_2,param_3);
    return 1;
  }
  return 0;
}


