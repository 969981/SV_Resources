/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b09a54; name: FUN_00b09a54
 */


undefined8 FUN_00b09a54(void *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_04839380 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04839380), iVar2 != 0)) {
    FUN_00100190(&LAB_00b0a8ac,&DAT_04839370,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839380);
  }
  lVar1 = DAT_04839370;
  DAT_04839368 = DAT_04839370;
  if ((DAT_04839370 == 0) || (*(char *)(DAT_04839370 + 0xae01) != '\0')) {
    uVar3 = 0;
  }
  else {
    *(undefined1 *)(DAT_04839370 + 0xadf1) = 0;
    *(undefined1 *)(lVar1 + 0xae02) = 0;
    *(undefined8 *)(lVar1 + 0xadf8) = 0;
    *(undefined4 *)(lVar1 + 0xadf4) = 0xffffffff;
    FUN_00b0a1a4(lVar1);
    iVar2 = nn::bluetooth::ConnectToGattServer((Address *)((long)param_1 + 1));
    if (iVar2 == 0) {
      memcpy((void *)(lVar1 + 0xb01c),param_1,0x148);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      *(undefined1 *)(lVar1 + 0xae01) = 1;
    }
  }
  return uVar3;
}


