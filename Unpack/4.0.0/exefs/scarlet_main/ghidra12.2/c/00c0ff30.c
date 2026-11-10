/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c0ff30; name: FUN_00c0ff30
 */


void FUN_00c0ff30(ulong *param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  size_t __n;
  long *plVar4;
  undefined1 *__dest;
  char *__s;
  char *pcVar5;
  ulong uVar6;
  char local_57 [23];
  
  local_57[2] = 0;
  if (param_2 < 0) {
    if (param_2 < -9) {
      param_2 = param_2 + 10;
      local_57[1] = ((char)((ulong)((long)param_2 * 0x66666667) >> 0x22) - (char)(param_2 >> 0x1f))
                    * '\n' - (char)param_2;
      iVar3 = (int)((ulong)((long)param_2 * -0x66666667) >> 0x20);
      pcVar5 = local_57;
      iVar3 = ((iVar3 >> 2) - (iVar3 >> 0x1f)) + 1;
      do {
        __s = pcVar5 + -1;
        *pcVar5 = (char)iVar3 + (char)(iVar3 / 10) * -10 + '0';
        bVar1 = 9 < iVar3;
        pcVar5 = __s;
        iVar3 = iVar3 / 10;
      } while (bVar1);
    }
    else {
      local_57[1] = -(char)param_2;
      __s = local_57;
    }
    local_57[1] = local_57[1] + '0';
    *__s = '-';
  }
  else {
    __s = local_57 + 2;
    do {
      __s = __s + -1;
      *__s = (char)param_2 + (char)(param_2 / 10) * -10 + '0';
      bVar1 = 9 < param_2;
      param_2 = param_2 / 10;
    } while (bVar1);
  }
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00c1006c;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    lVar2 = tpidr_el0;
    plVar4 = *(long **)(lVar2 + 0x30);
    if (plVar4 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar4 = DAT_04859430;
      *(long **)(lVar2 + 0x30) = DAT_04859430;
    }
    __dest = (undefined1 *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar6,8);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar6 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_00c1006c:
  __dest[__n] = 0;
  return;
}


