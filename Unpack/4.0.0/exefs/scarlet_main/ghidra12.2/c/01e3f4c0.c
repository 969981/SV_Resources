/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e3f4c0; name: FUN_01e3f4c0
 */


void FUN_01e3f4c0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar1 = (param_2 - 1U >> 6) + 1;
  lVar2 = tpidr_el0;
  plVar5 = *(long **)(lVar2 + 0x30);
  if (plVar5 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar5 = DAT_04859430;
    *(long **)(lVar2 + 0x30) = DAT_04859430;
  }
  uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,lVar1 * 8,8);
  *param_1 = uVar4;
  param_1[1] = 0;
  param_1[2] = lVar1;
  return;
}


