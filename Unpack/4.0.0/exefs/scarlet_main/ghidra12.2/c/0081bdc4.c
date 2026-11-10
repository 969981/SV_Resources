/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0081bdc4; name: FUN_0081bdc4
 */


void FUN_0081bdc4(long *param_1,undefined2 param_2,void *param_3,size_t param_4)

{
  void *__dest;
  long lVar1;
  
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined2 *)((long)param_1 + 10) = 0;
  *param_1 = (long)(PTR_DAT_047d1928 + 0x10);
  param_1[2] = 0;
  __dest = (void *)FUN_0049e7b0(PTR_FUN_047cba38,param_4);
  memcpy(__dest,param_3,param_4);
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    FUN_0049e800(lVar1);
    FUN_0049e7e0(PTR_LAB_047cba48,lVar1);
  }
  param_1[2] = (long)__dest;
  *(short *)((long)param_1 + 10) = (short)param_4;
  return;
}


