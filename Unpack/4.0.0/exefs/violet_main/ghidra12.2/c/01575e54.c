/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01575e54; name: FUN_01575e54
 */


void FUN_01575e54(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = tpidr_el0;
  plVar3 = *(long **)(lVar2 + 0x30);
  if (plVar3 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar3 = DAT_04859430;
    *(long **)(lVar2 + 0x30) = DAT_04859430;
  }
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2 << 2,8);
  *param_1 = lVar2;
  param_1[1] = lVar2;
  param_1[2] = lVar2 + param_2 * 4;
  return;
}


