/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00395e38; name: FUN_00395e38
 */


long FUN_00395e38(long *param_1,uint param_2,ulong param_3)

{
  long lVar1;
  size_t __n;
  void *pvVar2;
  long lVar3;
  
  __n = param_1[1] - param_3;
  if ((ulong)param_1[1] < param_3 || __n == 0) {
    return -1;
  }
  lVar3 = *param_1;
  pvVar2 = memchr((void *)(lVar3 + param_3),param_2 & 0xff,__n);
  lVar1 = -1;
  if (pvVar2 != (void *)0x0) {
    lVar1 = (long)pvVar2 - lVar3;
  }
  return lVar1;
}


