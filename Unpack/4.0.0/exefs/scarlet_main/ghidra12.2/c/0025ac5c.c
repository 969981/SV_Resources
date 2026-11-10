/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0025ac5c; name: FUN_0025ac5c
 */


void FUN_0025ac5c(ulong *param_1,char *param_2,undefined8 param_3)

{
  long *plVar1;
  size_t __n;
  undefined1 *__dest;
  ulong uVar2;
  
  plVar1 = (long *)FUN_01cf7e20();
  param_1[3] = (ulong)plVar1;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0025ad14 to 0025ad1b has its CatchHandler @ 0025ad1c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0025acf4;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar2,1);
    *param_1 = uVar2 | 1;
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
  }
  memcpy(__dest,param_2,__n);
LAB_0025acf4:
  __dest[__n] = 0;
  FUN_002637d0(param_1 + 4,param_3);
  return;
}


