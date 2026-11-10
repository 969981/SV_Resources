/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e1338; name: FUN_001e1338
 */


size_t FUN_001e1338(void *param_1,long param_2,long param_3,long param_4)

{
  size_t __n;
  ulong uVar1;
  
  uVar1 = (*(long **)(param_4 + 0x1598))[2] - *(long *)(param_4 + 0x1590);
  __n = param_3 * param_2;
  if (uVar1 <= (ulong)(param_3 * param_2)) {
    __n = uVar1;
  }
  if (__n != 0) {
    memcpy(param_1,(void *)(**(long **)(param_4 + 0x1598) + *(long *)(param_4 + 0x1590)),__n);
    *(size_t *)(param_4 + 0x1590) = *(long *)(param_4 + 0x1590) + __n;
  }
  return __n;
}


