/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0187b2bc; name: FUN_0187b2bc
 */


void FUN_0187b2bc(long *param_1,undefined1 *param_2)

{
  void *__src;
  ulong uVar1;
  void *__dest;
  size_t __n;
  
  uVar1 = FUN_0298e350(param_1,(param_1[1] - *param_1) + 1);
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  if (uVar1 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = operator_new(uVar1);
  }
  *(undefined1 *)((long)__dest + __n) = *param_2;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *param_1 = (long)__dest;
  param_1[1] = (long)((undefined1 *)((long)__dest + __n) + 1);
  param_1[2] = (long)__dest + uVar1;
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}


