/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b485e8; name: FUN_01b485e8
 */


void FUN_01b485e8(void)

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
  UNRECOVERED_JUMPTABLE = *(code **)(DAT_04840848 + 0x38);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  *(undefined8 *)(DAT_04840848 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x01b48630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar1 + 0x50);
  return;
}


