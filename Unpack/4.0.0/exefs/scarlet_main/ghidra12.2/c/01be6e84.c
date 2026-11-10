/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01be6e84; name: FUN_01be6e84
 */


void FUN_01be6e84(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if (((DAT_0483ace8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0483ace8), iVar2 != 0)) {
    FUN_00100190(&LAB_02a1f4a8,&DAT_0483acd8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483ace8);
  }
  DAT_0483acf0 = DAT_0483acd8;
  lVar3 = *(long *)(DAT_0483acd8 + 0x88);
  lVar1 = DAT_0483acd8 + 0x80;
  if (lVar3 != lVar1) {
    do {
      if ((*(long *)(lVar3 + 0x10) != 0) && (*(short *)(*(long *)(lVar3 + 0x10) + 0x1a) != 0)) {
        (*(code *)*param_1)(param_1 + 4);
      }
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != lVar1);
  }
  return;
}


