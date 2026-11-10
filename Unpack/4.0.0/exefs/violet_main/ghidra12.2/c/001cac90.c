/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001cac90; name: FUN_001cac90
 */


size_t FUN_001cac90(void *param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  size_t __n;
  
  __n = param_3 * param_2;
  if (param_4[1] + __n < 0xbb9) {
    lVar1 = FUN_001e0b60(*param_4);
    *param_4 = lVar1;
    if (lVar1 != 0) {
      memcpy((void *)(lVar1 + param_4[1]),param_1,__n);
      param_4[1] = param_4[1] + __n;
      return __n;
    }
  }
  return 0;
}


