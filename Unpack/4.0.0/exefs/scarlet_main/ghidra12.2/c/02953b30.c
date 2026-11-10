/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02953b30; name: FUN_02953b30
 */


undefined8 FUN_02953b30(uint param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_01dbde48();
  if (cVar1 == '\0') {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_015d9950(param_1);
    if (((uint)uVar2 & 0xff) == 1) {
      cVar1 = FUN_021fad50(param_1);
      if (cVar1 == '\t') {
        uVar2 = 0x96;
      }
      else {
        param_1 = param_1 & 0xffff;
        if (param_1 < 0x170) {
          if (param_1 == 0x44) {
            return 0x78;
          }
          if (param_1 == 0xf3) {
            return 0x78;
          }
        }
        else {
          if (param_1 == 0x170) {
            return 0x78;
          }
          if (param_1 == 0x37e) {
            return 0x78;
          }
        }
        uVar2 = 0x50;
      }
    }
  }
  return uVar2;
}


