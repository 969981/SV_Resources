/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b48998; name: FUN_01b48998
 */


void FUN_01b48998(void)

{
  long lVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((DAT_04840858 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04840858), iVar2 != 0)) {
    FUN_00100190(&LAB_02af32dc,&DAT_04840848,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840858);
  }
  lVar1 = DAT_04840848;
  DAT_04840840 = DAT_04840848;
  UNRECOVERED_JUMPTABLE = *(code **)(DAT_04840848 + 0xb8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  *(undefined8 *)(DAT_04840848 + 0xc0) = 0;
  *(undefined8 *)(lVar1 + 200) = 0;
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  *(undefined8 *)(lVar1 + 0xb8) = 0;
                    /* WARNING: Could not recover jumptable at 0x01b489e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar1 + 0xd0);
  return;
}


