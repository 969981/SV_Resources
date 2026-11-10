/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01844734; name: FUN_01844734
 */


void FUN_01844734(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (((DAT_04839790 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839790), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1baa8,&DAT_04839780,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839790);
  }
  DAT_04839778 = DAT_04839780;
  if (DAT_04839780 != 0) {
    lVar2 = *(long *)(DAT_04839780 + 0x4058);
    lVar3 = *(long *)(DAT_04839780 + 0x4060);
    if (lVar2 == lVar3) {
LAB_01844774:
      if (lVar2 != lVar3) {
        *(undefined2 *)(lVar2 + 0x88) = 1;
      }
    }
    else {
      do {
        if (*(long *)(lVar2 + 8) == *param_1) goto LAB_01844774;
        lVar2 = lVar2 + 0xb0;
      } while (lVar3 != lVar2);
    }
  }
  return;
}


