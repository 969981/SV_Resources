/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016abf00; name: FUN_016abf00
 */


bool FUN_016abf00(void)

{
  bool bVar1;
  int iVar2;
  
  if (((DAT_04839660 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04839660), iVar2 != 0)) {
    FUN_00100190(&LAB_00b1a5bc,&DAT_04839650,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839660);
  }
  DAT_04839648 = DAT_04839650;
  if (DAT_04839650 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = 1 < *(uint *)(DAT_04839650 + 0x30);
  }
  return bVar1;
}


