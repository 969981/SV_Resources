/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01982b14; name: FUN_01982b14
 */


undefined4 FUN_01982b14(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  FUN_01497d84();
  uVar1 = FUN_0176882c();
  FUN_01497d84(param_1);
  uVar2 = FUN_0154b6c8();
  switch(uVar2) {
  case 0:
    if (uVar1 == 1) {
      uVar2 = 0x29;
    }
    else if ((uVar1 & 0xfffffffd) == 0) {
      uVar2 = 0x2b;
    }
    else {
      uVar2 = 0x2d;
      if (uVar1 != 6) {
        uVar2 = 0;
      }
    }
    break;
  case 1:
    uVar2 = 0x31;
    break;
  case 2:
    uVar2 = 0x33;
    break;
  case 3:
    uVar2 = 0x2f;
    break;
  default:
    uVar2 = 0;
  }
  return uVar2;
}


