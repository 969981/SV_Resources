/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f09c0; name: FUN_002f09c0
 */


void FUN_002f09c0(ulong *param_1,long param_2)

{
  char *__s;
  size_t __n;
  undefined1 *__dest;
  ulong uVar1;
  byte local_48 [16];
  char *local_38;
  
  std::to_string(param_2);
  __s = (char *)((ulong)local_48 | 1);
  if ((local_48[0] & 1) != 0) {
    __s = local_38;
  }
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 002f0a8c to 002f0a93 has its CatchHandler @ 002f0a94 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) {
      *__dest = 0;
      goto joined_r0x002f0a84;
    }
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 | 1;
  }
  memcpy(__dest,__s,__n);
  __dest[__n] = 0;
joined_r0x002f0a84:
  if ((local_48[0] & 1) != 0) {
    operator_delete(local_38);
  }
  return;
}


