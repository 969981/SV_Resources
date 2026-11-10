/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b09518; name: FUN_00b09518
 */


void FUN_00b09518(undefined8 *param_1)

{
  GattAttributeUuid *pGVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  
  if (((DAT_04839380 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04839380), iVar5 != 0)) {
    FUN_00100190(&LAB_00b0a8ac,&DAT_04839370,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839380);
  }
  lVar4 = DAT_04839370;
  DAT_04839368 = DAT_04839370;
  if (DAT_04839370 != 0) {
    pGVar1 = (GattAttributeUuid *)(DAT_04839370 + 0xb008);
    puVar2 = (undefined4 *)(DAT_04839370 + 0xadf4);
    memset((void *)(DAT_04839370 + 0xb01c),0,0x148);
    *(undefined1 *)(lVar4 + 0xae03) = 0;
    memset((void *)(lVar4 + 0x944c),0,0x19a5);
    *puVar2 = 0xffffffff;
    *(undefined4 *)pGVar1 = 0x10;
    uVar3 = *param_1;
    *(undefined8 *)(lVar4 + 0xb014) = param_1[1];
    *(undefined8 *)(lVar4 + 0xb00c) = uVar3;
    uVar6 = nn::bluetooth::RegisterGattOperationNotification(pGVar1);
    while ((uVar6 & 0x3fffff) == 0x871) {
      nn::os::SleepThread(1000000);
      uVar6 = nn::bluetooth::RegisterGattOperationNotification(pGVar1);
    }
    FUN_00b0a1a4(lVar4);
    if ((*(long *)(lVar4 + 0xb438) != 0) && (*(char *)(lVar4 + 0xb440) == '\0')) {
      nn::os::ClearEvent((EventType *)(lVar4 + 0xb258));
      *(undefined1 *)(lVar4 + 0xb440) = 1;
    }
  }
  return;
}


