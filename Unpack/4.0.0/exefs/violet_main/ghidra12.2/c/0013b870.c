/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013b870; name: FUN_0013b870
 */


bool FUN_0013b870(long param_1,long param_2)

{
  int iVar1;
  
  if (param_1 == param_2) {
    return true;
  }
  if (*(size_t *)(param_1 + 0x10) == *(size_t *)(param_2 + 0x10)) {
    iVar1 = memcmp((void *)(param_1 + 0x18),(void *)(param_2 + 0x18),*(size_t *)(param_1 + 0x10));
    return iVar1 == 0;
  }
  return false;
}


