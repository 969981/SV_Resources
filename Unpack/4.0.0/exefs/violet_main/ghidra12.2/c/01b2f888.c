/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b2f888; name: FUN_01b2f888
 */


void FUN_01b2f888(undefined8 param_1)

{
  int iVar1;
  
  if ((DAT_04840ed0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04840ed0);
    if (iVar1 != 0) {
      FUN_00100190(param_1,&LAB_02b28d28,&DAT_04840ec0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04840ed0);
    }
  }
  DAT_04840ed8 = DAT_04840ec0;
  FUN_02137498(param_1);
  return;
}


