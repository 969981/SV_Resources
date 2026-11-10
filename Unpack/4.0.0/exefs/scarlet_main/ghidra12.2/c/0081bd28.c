/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0081bd28; name: FUN_0081bd28
 */


void FUN_0081bd28(long *param_1,undefined2 param_2,byte *param_3)

{
  byte *__src;
  void *__dest;
  size_t __n;
  long lVar1;
  
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined2 *)((long)param_1 + 10) = 0;
  *param_1 = (long)(PTR_DAT_047d1928 + 0x10);
  param_1[2] = 0;
  __n = (size_t)(*param_3 >> 1);
  __src = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    __src = param_3 + 1;
  }
  else {
    __n = *(size_t *)(param_3 + 8);
  }
  __dest = (void *)FUN_0049e7b0(PTR_FUN_047cba38,__n);
  memcpy(__dest,__src,__n);
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    FUN_0049e800(lVar1);
    FUN_0049e7e0(PTR_LAB_047cba48,lVar1);
  }
  param_1[2] = (long)__dest;
  *(short *)((long)param_1 + 10) = (short)__n;
  return;
}


