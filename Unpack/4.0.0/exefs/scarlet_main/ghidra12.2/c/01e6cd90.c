/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e6cd90; name: FUN_01e6cd90
 */


void FUN_01e6cd90(ulong *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar2 = *param_1;
  if (0x7f < uVar2) {
    if (0xff < uVar2) {
      uVar3 = 0xffffff82;
      if (uVar2 >> 0x20 != 0) {
        uVar3 = 0xffffff83;
      }
      uVar1 = 0x81;
      if (0xffff < uVar2) {
        uVar1 = uVar3;
      }
      FUN_0111b030(uVar1);
      return;
    }
    uVar2 = 0x80;
  }
  FUN_0111b030(uVar2);
  return;
}


