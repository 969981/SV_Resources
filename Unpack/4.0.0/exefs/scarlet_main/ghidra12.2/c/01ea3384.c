/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea3384; name: FUN_01ea3384
 */


void FUN_01ea3384(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (((DAT_04839790 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04839790), iVar2 != 0)) {
    FUN_00100190(&LAB_00b1baa8,&DAT_04839780,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839790);
  }
  DAT_04839778 = DAT_04839780;
  if (DAT_04839780 == 0) {
    return;
  }
  lVar3 = *(long *)(DAT_04839780 + 0x4090);
  lVar4 = *(long *)(DAT_04839780 + 0x4098);
  if (lVar3 != lVar4) {
    if (*(long *)(lVar3 + 8) != *param_1) {
      do {
        lVar5 = lVar3 + 0x1c8;
        if (lVar4 == lVar5) {
          lVar3 = lVar4;
          break;
        }
        plVar1 = (long *)(lVar3 + 0x1d0);
        lVar3 = lVar5;
      } while (*plVar1 != *param_1);
    }
  }
  if (lVar4 == lVar3) {
    return;
  }
  FUN_01ea347c(DAT_04839780 + 0x4090);
  return;
}


