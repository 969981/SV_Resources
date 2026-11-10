/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01698418; name: FUN_01698418
 */


void FUN_01698418(void)

{
  int iVar1;
  
  if (((DAT_04840ad8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04840ad8), iVar1 != 0)) {
    FUN_00100190(&LAB_02b0d008,&DAT_04840ac8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840ad8);
  }
  DAT_04840ae0 = DAT_04840ac8;
                    /* WARNING: Could not recover jumptable at 0x01698450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(DAT_04840ac8 + 0x30) + 0xb0))();
  return;
}


