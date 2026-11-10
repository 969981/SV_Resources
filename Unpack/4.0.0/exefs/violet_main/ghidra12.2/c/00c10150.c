/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c10150; name: FUN_00c10150
 */


void FUN_00c10150(ulong *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  size_t __n;
  long *plVar3;
  long lVar4;
  undefined1 *__dest;
  char *__s;
  char *pcVar5;
  ulong uVar6;
  char local_4d [13];
  
  local_4d[2] = 0;
  if (param_2 < 0) {
    if (param_2 < -9) {
      param_2 = param_2 + 10;
      lVar4 = SUB168(SEXT816(param_2) * SEXT816(-0x6666666666666667),8);
      local_4d[1] = ((char)(SUB164(SEXT816(param_2) * SEXT816(0x6666666666666667),8) >> 2) -
                    (SUB161(SEXT816(param_2) * SEXT816(0x6666666666666667),0xf) >> 7)) * '\n' -
                    (char)param_2;
      lVar4 = ((lVar4 >> 2) - (lVar4 >> 0x3f)) + 1;
      pcVar5 = local_4d;
      do {
        __s = pcVar5 + -1;
        *pcVar5 = (char)lVar4 + (char)(lVar4 / 10) * -10 + '0';
        bVar1 = 9 < lVar4;
        lVar4 = lVar4 / 10;
        pcVar5 = __s;
      } while (bVar1);
    }
    else {
      local_4d[1] = -(char)param_2;
      __s = local_4d;
    }
    local_4d[1] = local_4d[1] + '0';
    *__s = '-';
  }
  else {
    __s = local_4d + 2;
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
    if (__n == 0) goto LAB_00c1027c;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    lVar4 = tpidr_el0;
    plVar3 = *(long **)(lVar4 + 0x30);
    if (plVar3 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar3 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    __dest = (undefined1 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar6,8);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar6 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_00c1027c:
  __dest[__n] = 0;
  return;
}


