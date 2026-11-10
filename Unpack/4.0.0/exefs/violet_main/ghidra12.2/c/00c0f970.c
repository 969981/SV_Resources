/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c0f970; name: FUN_00c0f970
 */


void FUN_00c0f970(ulong *param_1,byte *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  void *__src;
  long *plVar4;
  undefined1 *__dest;
  size_t __n;
  ulong uVar5;
  
  if ((*param_2 & 1) == 0) {
    __src = operator_new__((ulong)(*param_2 >> 1) + 1);
    param_2 = param_2 + 1;
  }
  else {
    __src = operator_new__(*(long *)(param_2 + 8) + 1);
    param_2 = *(byte **)(param_2 + 0x10);
  }
  uVar2 = FUN_00c0f710(param_2,__src);
  if (0xffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __n = (size_t)(int)uVar2;
  if (uVar2 < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)(uVar2 << 1);
    if (uVar2 == 0) goto LAB_00c0f9f8;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    lVar1 = tpidr_el0;
    plVar4 = *(long **)(lVar1 + 0x30);
    if (plVar4 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar4 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    __dest = (undefined1 *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar5,8);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar5 | 1;
  }
  memcpy(__dest,__src,__n);
LAB_00c0f9f8:
  __dest[__n] = 0;
  operator_delete__(__src);
  return;
}


