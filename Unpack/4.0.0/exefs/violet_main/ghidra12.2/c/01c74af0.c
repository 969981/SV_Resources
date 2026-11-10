/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c74af0; name: FUN_01c74af0
 */


long FUN_01c74af0(void)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_04839928 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839928), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1ce58,&DAT_04839918,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839928);
  }
  DAT_04839910 = DAT_04839918;
  if (DAT_04839918 == 0) {
    lVar2 = 0x4a;
  }
  else {
    lVar2 = (long)*(char *)(DAT_04839918 + 0xf8);
  }
  return lVar2;
}


