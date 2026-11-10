/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021368ec; name: FUN_021368ec
 */


void FUN_021368ec(void)

{
  int iVar1;
  
  if (((DAT_04840e50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04840e50), iVar1 != 0)) {
    FUN_00100190(&LAB_02b28708,&DAT_04840e40,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840e50);
  }
  FUN_01823a60(&DAT_04840e40,0);
  return;
}


