/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b0d038; name: FUN_00b0d038
 */


bool FUN_00b0d038(void)

{
  bool bVar1;
  int iVar2;
  long local_38 [3];
  
  if (((DAT_04839420 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04839420), iVar2 != 0)) {
    FUN_00100190(&LAB_00b12850,&DAT_04839410,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839420);
  }
  DAT_04839408 = DAT_04839410;
  if (DAT_04839410 == 0) {
    bVar1 = false;
  }
  else {
    FUN_01e999f4(local_38,0xc);
    if (local_38[0] == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(short *)(local_38[0] + 0x1a) != 0;
    }
    FUN_00d8e444(local_38);
  }
  return bVar1;
}


