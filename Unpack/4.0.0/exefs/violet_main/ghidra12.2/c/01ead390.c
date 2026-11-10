/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ead390; name: FUN_01ead390
 */


void FUN_01ead390(void)

{
  int iVar1;
  
  if (((DAT_04839888 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839888), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1c558,&DAT_04839878,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839888);
  }
  FUN_01768394(&DAT_04839878,0);
  return;
}


