/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e07988; name: FUN_01e07988
 */


bool FUN_01e07988(void)

{
  bool bVar1;
  int iVar2;
  
  if (((DAT_04837608 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04837608), iVar2 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  DAT_04837610 = DAT_048375f8;
  if (*(long *)(DAT_048375f8 + 0x398) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(short *)(*(long *)(DAT_048375f8 + 0x398) + 0x1a) != 0;
  }
  return bVar1;
}


