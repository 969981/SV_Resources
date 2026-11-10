/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a9258; name: FUN_028a9258
 */


void FUN_028a9258(ulong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = (long)param_3 - (long)param_2;
  if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar6 < 0x17) {
    puVar4 = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar6 << 1);
  }
  else {
    uVar5 = uVar6 + 0x10 & 0xfffffffffffffff0;
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
    puVar4 = (undefined1 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,8);
    param_1[1] = uVar6;
    param_1[2] = (ulong)puVar4;
    *param_1 = uVar5 | 1;
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar4 = *param_2;
    puVar4 = puVar4 + 1;
  }
  *puVar4 = 0;
  return;
}


