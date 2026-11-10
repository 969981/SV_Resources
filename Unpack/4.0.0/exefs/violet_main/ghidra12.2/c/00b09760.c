/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b09760; name: FUN_00b09760
 */


undefined8 FUN_00b09760(void)

{
  GattAttributeUuid *pGVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (((DAT_04839380 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04839380), iVar4 != 0)) {
    FUN_00100190(&LAB_00b0a8ac,&DAT_04839370,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839380);
  }
  lVar2 = DAT_04839370;
  DAT_04839368 = DAT_04839370;
  if (DAT_04839370 == 0) {
LAB_00b09844:
    uVar6 = 1;
  }
  else {
    pGVar1 = (GattAttributeUuid *)(DAT_04839370 + 0xb008);
    if (*(int *)pGVar1 < 1) {
LAB_00b097c0:
      if (*(int *)(lVar2 + 0xadf4) == -1) {
        if (*(char *)(lVar2 + 0xadf0) != '\0') {
          uVar3 = nn::bluetooth::StopBleScanSmartDevice();
          if (uVar3 != 0) {
            if ((uVar3 & 0x3ffe00) != 0x32400) {
              return 0;
            }
            if ((uVar3 & 0x1ff) != 0x71) {
              return 0;
            }
          }
          *(char *)(lVar2 + 0xadf0) = '\0';
          return 0;
        }
        uVar5 = FUN_00b0a7c8(lVar2 + 0xb168);
        if ((uVar5 & 1) != 0) {
          *(undefined1 *)(lVar2 + 0xae01) = 0;
          goto LAB_00b09844;
        }
      }
    }
    else {
      uVar5 = nn::bluetooth::UnregisterGattOperationNotification(pGVar1);
      if ((uVar5 & 0x3fffff) != 0x871) {
        *(undefined4 *)(lVar2 + 0xb018) = 0;
        *(undefined8 *)pGVar1 = 0;
        *(undefined8 *)(lVar2 + 0xb010) = 0;
        goto LAB_00b097c0;
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}


