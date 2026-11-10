/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0025cf78; name: FUN_0025cf78
 */


void FUN_0025cf78(ulong *param_1,char *param_2)

{
  long *plVar1;
  size_t __n;
  undefined1 *__dest;
  ulong uVar2;
  
  plVar1 = (long *)FUN_01cf7e20();
  param_1[3] = (ulong)plVar1;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0025d020 to 0025d027 has its CatchHandler @ 0025d028 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0025d008;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar2,1);
    *param_1 = uVar2 | 1;
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
  }
  memcpy(__dest,param_2,__n);
LAB_0025d008:
  __dest[__n] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


