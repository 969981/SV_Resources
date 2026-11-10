/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01990a18; name: FUN_01990a18
 */


void FUN_01990a18(void)

{
  int iVar1;
  
  if (((DAT_04840ed0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04840ed0), iVar1 != 0)) {
    FUN_00100190(&LAB_02b28d28,&DAT_04840ec0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840ed0);
  }
  DAT_04840ed8 = DAT_04840ec0;
  FUN_01990a84();
  return;
}


