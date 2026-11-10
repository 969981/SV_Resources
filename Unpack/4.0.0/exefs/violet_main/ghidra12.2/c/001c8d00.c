/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c8d00; name: FUN_001c8d00
 */


undefined8 FUN_001c8d00(void *param_1,size_t param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = memcmp(param_1,param_3,param_2);
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}


