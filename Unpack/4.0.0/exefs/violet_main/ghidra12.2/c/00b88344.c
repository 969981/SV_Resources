/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b88344; name: FUN_00b88344
 */


void FUN_00b88344(ulong *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  size_t __n;
  long lVar3;
  long *plVar4;
  undefined1 *__dest;
  char *__s;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_2 + 0x3c);
  if (uVar1 == 0xe) {
    lVar3 = *(long *)(param_2 + 0x70);
LAB_00b8837c:
    std::operator+(".",*(string **)(lVar3 + 8));
    return;
  }
  if (uVar1 == 0xb) {
    lVar3 = *(long *)(param_2 + 0x68);
    goto LAB_00b8837c;
  }
  __s = (&PTR_s_ERROR_0455a270)[uVar1];
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00b883e4;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    lVar3 = tpidr_el0;
    plVar4 = *(long **)(lVar3 + 0x30);
    if (plVar4 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar4 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    __dest = (undefined1 *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar5,8);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar5 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_00b883e4:
  __dest[__n] = 0;
  return;
}


