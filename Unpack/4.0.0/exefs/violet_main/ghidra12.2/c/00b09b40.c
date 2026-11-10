/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b09b40; name: FUN_00b09b40
 */


undefined8 FUN_00b09b40(long *param_1)

{
  char *pcVar1;
  ushort *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  GattCharacteristic *pGVar6;
  ulong uVar7;
  undefined1 auStack_58 [4];
  long local_54;
  long local_4c;
  
  if (((DAT_04839380 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04839380), iVar5 != 0)) {
    FUN_00100190(&LAB_00b0a8ac,&DAT_04839370,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839380);
  }
  lVar3 = DAT_04839370;
  DAT_04839368 = DAT_04839370;
  if ((DAT_04839370 != 0) && (pcVar1 = (char *)(DAT_04839370 + 0xae01), *pcVar1 == '\0')) {
    puVar2 = (ushort *)(DAT_04839370 + 0x4d38);
    memset((void *)(DAT_04839370 + 0xae04),0,0x202);
    if (*puVar2 != 0) {
      uVar7 = 0;
      pGVar6 = (GattCharacteristic *)(lVar3 + 0x638);
      do {
        (**(code **)(*(long *)pGVar6 + 0x18))(auStack_58,pGVar6);
        if (local_54 == *param_1 && local_4c == param_1[1]) goto LAB_00b09c28;
        uVar7 = uVar7 + 1;
        pGVar6 = pGVar6 + 0x238;
      } while (uVar7 < *puVar2);
    }
    pGVar6 = (GattCharacteristic *)(lVar3 + 0x638);
    *pcVar1 = '\x01';
LAB_00b09c28:
    uVar4 = nn::bluetooth::ReadGattCharacteristic(pGVar6);
    if (uVar4 == 0) {
      return 1;
    }
    if ((((uVar4 & 0x3ffe00) != 0x400) || ((uVar4 & 0x3ffa00) == 0x41200)) ||
       ((uVar4 & 0x1ff) != 0x71)) {
      *pcVar1 = '\x01';
      return 0;
    }
  }
  return 0;
}


