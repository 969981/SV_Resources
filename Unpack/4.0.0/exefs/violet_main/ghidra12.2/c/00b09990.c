/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b09990; name: FUN_00b09990
 */


void FUN_00b09990(void)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  
  if (((DAT_04839380 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04839380), iVar3 != 0)) {
    FUN_00100190(&LAB_00b0a8ac,&DAT_04839370,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839380);
  }
  DAT_04839368 = DAT_04839370;
  if (((DAT_04839370 != 0) && (pcVar1 = (char *)(DAT_04839370 + 0xadf0), *pcVar1 != '\0')) &&
     ((uVar2 = nn::bluetooth::StopBleScanSmartDevice(), uVar2 == 0 ||
      (((uVar2 & 0x3ffe00) == 0x32400 && ((uVar2 & 0x1ff) == 0x71)))))) {
    *pcVar1 = '\0';
  }
  return;
}


