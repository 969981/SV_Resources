/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b2b640; name: FUN_01b2b640
 */


void FUN_01b2b640(undefined4 param_1)

{
  int iVar1;
  
  if ((DAT_04840e50 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04840e50);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_02b28708,&DAT_04840e40,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04840e50);
    }
  }
  DAT_04840e88 = DAT_04840e40;
  FUN_02135b4c(DAT_04840e40,param_1);
  return;
}


