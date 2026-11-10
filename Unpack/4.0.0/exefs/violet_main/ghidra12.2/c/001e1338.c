/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


