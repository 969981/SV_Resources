/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b09890; name: FUN_00b09890
 */


undefined8 FUN_00b09890(void)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  GattAttributeUuid aGStack_38 [24];
  
  if (((DAT_04839380 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04839380), iVar4 != 0)) {
    FUN_00100190(&LAB_00b0a8ac,&DAT_04839370,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839380);
  }
  lVar2 = DAT_04839370;
  DAT_04839368 = DAT_04839370;
  if (DAT_04839370 == 0) {
    uVar5 = 0;
  }
  else {
    pcVar1 = (char *)(DAT_04839370 + 0xadf0);
    if (*pcVar1 == '\0') {
      memset((void *)(DAT_04839370 + 0x944c),0,0x19a4);
      nn::bluetooth::GetBleScanParameter(aGStack_38,2);
      uVar3 = nn::bluetooth::StartBleScanSmartDevice(aGStack_38);
      if (uVar3 == 0) {
        uVar5 = 1;
        *pcVar1 = '\x01';
      }
      else {
        if ((uVar3 & 0x3fffff) == 0x32471) {
          *(undefined1 *)(lVar2 + 0xae03) = 1;
        }
        uVar5 = 0;
        *(undefined1 *)(lVar2 + 0xae01) = 1;
      }
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}


