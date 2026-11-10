/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


