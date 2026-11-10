/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f7d920; name: FUN_00f7d920
 */


undefined8 FUN_00f7d920(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x4a4498602e51f045;
  FUN_01497d84();
  uVar1 = FUN_0176882c();
  FUN_01497d84(param_1);
  uVar2 = FUN_0154b6c8();
  switch(uVar2) {
  case 0:
    if (uVar1 == 1) {
      uVar3 = 0x9659d516b775d249;
    }
    else {
      if ((uVar1 & 0xfffffffd) != 0) {
        uVar3 = 0x5ff70ec3dc3baef4;
        if (uVar1 != 6) {
          uVar3 = 0x4a4498602e51f045;
        }
        return uVar3;
      }
      uVar3 = 0xc55a8c592d7f0348;
    }
    break;
  case 1:
    uVar3 = 0x1310df7b8f7f67d0;
    break;
  case 2:
    uVar3 = 0xe75b962fe38244cc;
    break;
  case 3:
    uVar3 = 0xc3e544cc479d7a89;
  }
  return uVar3;
}


