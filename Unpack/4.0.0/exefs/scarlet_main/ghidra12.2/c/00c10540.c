/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c10540; name: FUN_00c10540
 */


void FUN_00c10540(ulong *param_1)

{
  long lVar1;
  int iVar2;
  size_t __n;
  long *plVar3;
  undefined1 *__dest;
  ulong uVar4;
  char acStack_48 [24];
  
  FUN_00c10670(acStack_48);
  __n = strlen(acStack_48);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00c10598;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    lVar1 = tpidr_el0;
    plVar3 = *(long **)(lVar1 + 0x30);
    if (plVar3 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar3 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    __dest = (undefined1 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,8);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar4 | 1;
  }
  memcpy(__dest,acStack_48,__n);
LAB_00c10598:
  __dest[__n] = 0;
  return;
}


