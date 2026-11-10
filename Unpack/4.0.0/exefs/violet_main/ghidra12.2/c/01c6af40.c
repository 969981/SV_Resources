/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c6af40; name: FUN_01c6af40
 */


bool FUN_01c6af40(void)

{
  bool bVar1;
  int iVar2;
  
  if (((DAT_048398e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_048398e8), iVar2 != 0)) {
    FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048398e8);
  }
  DAT_048398d0 = DAT_048398d8;
  if (DAT_048398d8 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(DAT_048398d8 + 0xa90) != '\0';
  }
  return bVar1;
}


