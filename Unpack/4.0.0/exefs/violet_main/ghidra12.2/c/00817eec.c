/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00817eec; name: FUN_00817eec
 */


ulong * FUN_00817eec(ulong *param_1,char *param_2)

{
  size_t __n;
  ulong uVar1;
  ulong uVar2;
  byte *__dest;
  
  __n = strlen(param_2);
  if (((byte)*param_1 & 1) == 0) {
    if (__n < 0x17) {
      __dest = (byte *)((long)param_1 + 1);
joined_r0x00817f70:
      if (__n != 0) {
        memmove(__dest,param_2,__n);
      }
      __dest[__n] = 0;
      if ((*param_1 & 1) == 0) {
        *(byte *)param_1 = (byte)((int)__n << 1);
        return param_1;
      }
      param_1[1] = __n;
      return param_1;
    }
    uVar2 = (ulong)(byte)((byte)*param_1 >> 1);
    uVar1 = 0x16;
  }
  else {
    uVar1 = (*param_1 & 0xfffffffffffffffe) - 1;
    if (__n <= uVar1) {
      __dest = (byte *)param_1[2];
      goto joined_r0x00817f70;
    }
    uVar2 = param_1[1];
  }
  FUN_00817fb4(param_1,uVar1,__n - uVar1,uVar2,0,uVar2,__n,param_2);
  return param_1;
}


