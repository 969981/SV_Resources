/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033e244; name: FUN_0033e244
 */


long FUN_0033e244(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  size_t __n;
  char *__s;
  void *__dest;
  ulong uVar2;
  ulong local_58;
  size_t local_50;
  void *local_48;
  
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x128);
  if (lVar1 == 0) {
    return 0;
  }
  __s = (char *)*param_1;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_58 = CONCAT71(local_58._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_58 | 1);
    if (__n == 0) goto LAB_0033e2e8;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar2);
    local_58 = uVar2 | 1;
    local_50 = __n;
    local_48 = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_0033e2e8:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 0033e2f0 to 0033e2fb has its CatchHandler @ 0033e338 */
  FUN_003402b8(lVar1,&local_58,*param_2);
  if ((local_58 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_48);
  }
  return lVar1;
}


