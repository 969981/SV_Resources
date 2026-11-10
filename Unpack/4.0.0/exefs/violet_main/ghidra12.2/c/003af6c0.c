/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003af6c0; name: FUN_003af6c0
 */


undefined8 FUN_003af6c0(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int local_24;
  
  DAT_047f1648 = 0;
  FUN_003aa6d0();
  lVar4 = 0;
  do {
    if (*(int *)((long)&DAT_03cdc6b8 + lVar4) == 0) {
      *(undefined8 *)((long)&DAT_047f1728 + lVar4) = 0;
    }
    else {
      FUN_0045bce0();
      lVar3 = FUN_0043d0f0();
      *(long *)((long)&DAT_047f1728 + lVar4) = lVar3;
      if (lVar3 == 0) {
        DAT_047f1648 = DAT_047f1648 | *(uint *)((long)&DAT_03cdc6b4 + lVar4);
      }
    }
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0xb0);
  DAT_047f164c = 0;
  FUN_0045bce0(4);
  DAT_047f1668 = FUN_0043d130();
  if (DAT_047f1668 == 0) {
    DAT_047f164c = DAT_047f164c | 1;
  }
  else {
    uVar1 = FUN_0043b720();
    if ((int)uVar1 < 0) {
      return 0;
    }
    DAT_047f16c8 = (ulong)uVar1;
  }
  FUN_0045bce0(0x40);
  DAT_047f1670 = FUN_0043d130();
  if (DAT_047f1670 == 0) {
    DAT_047f164c = DAT_047f164c | 2;
  }
  else {
    uVar1 = FUN_0043b720();
    if ((int)uVar1 < 0) {
      return 0;
    }
    DAT_047f16d0 = (ulong)uVar1;
  }
  FUN_0045bce0(0x329);
  DAT_047f1678 = FUN_0043d130();
  if (DAT_047f1678 == 0) {
    DAT_047f164c = DAT_047f164c | 4;
  }
  else {
    uVar1 = FUN_0043b720();
    if ((int)uVar1 < 0) {
      return 0;
    }
    DAT_047f16d8 = (ulong)uVar1;
  }
  FUN_0045bce0(0x32f);
  DAT_047f1680 = FUN_0043d130();
  if (DAT_047f1680 == 0) {
    DAT_047f164c = DAT_047f164c | 8;
  }
  else {
    uVar1 = FUN_0043b720();
    if ((int)uVar1 < 0) {
      return 0;
    }
    DAT_047f16e0 = (ulong)uVar1;
  }
  FUN_0045bce0(0x2a0);
  DAT_047f1688 = FUN_0043d130();
  if (DAT_047f1688 == 0) {
    DAT_047f164c = DAT_047f164c | 0x10;
  }
  else {
    uVar1 = FUN_0043b720();
    if ((int)uVar1 < 0) {
      return 0;
    }
    DAT_047f16e8 = (ulong)uVar1;
  }
  FUN_0045bce0(0x2a1);
  DAT_047f1690 = FUN_0043d130();
  if (DAT_047f1690 == 0) {
    DAT_047f164c = DAT_047f164c | 0x20;
  }
  else {
    uVar1 = FUN_0043b720();
    if ((int)uVar1 < 0) {
      return 0;
    }
    DAT_047f16f0 = (ulong)uVar1;
  }
  FUN_0045bce0(0x3d6);
  DAT_047f1698 = FUN_0043d130();
  if (DAT_047f1698 == 0) {
    DAT_047f164c = DAT_047f164c | 0x80;
  }
  else {
    uVar1 = FUN_0043b720();
    if ((int)uVar1 < 0) {
      return 0;
    }
    DAT_047f16f8 = (ulong)uVar1;
  }
  FUN_0045bce0(0x3d0);
  DAT_047f16a0 = FUN_0043d130();
  if (DAT_047f16a0 == 0) {
    DAT_047f164c = DAT_047f164c | 0x100;
  }
  else {
    uVar1 = FUN_0043b720();
    if ((int)uVar1 < 0) {
      return 0;
    }
    DAT_047f1700 = (ulong)uVar1;
  }
  FUN_0045bce0(0x3d7);
  DAT_047f16a8 = FUN_0043d130();
  if (DAT_047f16a8 == 0) {
    DAT_047f164c = DAT_047f164c | 0x200;
  }
  else {
    uVar1 = FUN_0043b720();
    if ((int)uVar1 < 0) {
      return 0;
    }
    DAT_047f1708 = (ulong)uVar1;
  }
  FUN_0045bce0(0x72);
  DAT_047f16b0 = FUN_0043d130();
  if (DAT_047f16b0 != 0) {
    uVar1 = FUN_0043b720();
    if ((int)uVar1 < 0) {
      return 0;
    }
    DAT_047f1710 = (ulong)uVar1;
  }
  FUN_0045bce0(0x2a3);
  DAT_047f16b8 = FUN_0043d130();
  if (DAT_047f16b8 != 0) {
    uVar1 = FUN_0043b720();
    if ((int)uVar1 < 0) {
      return 0;
    }
    DAT_047f1718 = (ulong)uVar1;
  }
  FUN_0045bce0(0x2a2);
  DAT_047f16c0 = FUN_0043d130();
  if (DAT_047f16c0 != 0) {
    uVar1 = FUN_0043b720();
    if ((int)uVar1 < 0) {
      return 0;
    }
    DAT_047f1720 = (ulong)uVar1;
  }
  if ((DAT_047f1668 == 0) || (DAT_047f1670 == 0)) {
    return 0;
  }
  DAT_047f1650 = 0;
  local_24 = 0;
  lVar4 = FUN_003dea70(0,"gost-mac",0xffffffff);
  if ((lVar4 == 0) || (iVar2 = FUN_003deb80(&local_24,0,0,0,0,lVar4), iVar2 < 1)) {
    DAT_0449bcc0 = 0;
LAB_003afabc:
    DAT_047f164c = DAT_047f164c | 8;
  }
  else {
    DAT_0449bcc0 = local_24;
    if (local_24 == 0) goto LAB_003afabc;
    DAT_047f16e0 = 0x20;
  }
  local_24 = 0;
  lVar4 = FUN_003dea70(0,"gost-mac-12",0xffffffff);
  if ((lVar4 == 0) || (iVar2 = FUN_003deb80(&local_24,0,0,0,0,lVar4), iVar2 < 1)) {
    DAT_0449bcd0 = 0;
  }
  else {
    DAT_0449bcd0 = local_24;
    if (local_24 != 0) {
      DAT_047f1700 = 0x20;
      goto LAB_003afb3c;
    }
  }
  DAT_047f164c = DAT_047f164c | 0x100;
LAB_003afb3c:
  local_24 = 0;
  lVar4 = FUN_003dea70(0,"gost2001",0xffffffff);
  if (((lVar4 == 0) || (iVar2 = FUN_003deb80(&local_24,0,0,0,0,lVar4), iVar2 < 1)) ||
     (local_24 == 0)) {
    DAT_047f1650 = DAT_047f1650 | 0xa000000000;
  }
  local_24 = 0;
  lVar4 = FUN_003dea70(0,"gost2012_256",0xffffffff);
  if (((lVar4 == 0) || (iVar2 = FUN_003deb80(&local_24,0,0,0,0,lVar4), iVar2 < 1)) ||
     (local_24 == 0)) {
    DAT_047f1650 = DAT_047f1650 | 0x8000000000;
  }
  local_24 = 0;
  lVar4 = FUN_003dea70(0,"gost2012_512",0xffffffff);
  if (((lVar4 == 0) || (iVar2 = FUN_003deb80(&local_24,0,0,0,0,lVar4), iVar2 < 1)) ||
     (local_24 == 0)) {
    uVar1 = DAT_047f1650._4_4_ | 0x80;
    DAT_047f1650 = DAT_047f1650 | 0x8000000000;
  }
  else {
    uVar1 = DAT_047f1650._4_4_;
  }
  if (((uVar1 ^ 0xffffffff) & 0xa0) == 0) {
    DAT_047f1650 = DAT_047f1650 | 0x10;
  }
  return 1;
}


