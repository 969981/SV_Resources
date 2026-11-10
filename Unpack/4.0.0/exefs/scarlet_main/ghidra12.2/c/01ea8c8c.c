/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea8c8c; name: FUN_01ea8c8c
 */


long FUN_01ea8c8c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  uVar2 = *param_1;
  uVar5 = 0xffffff81;
  if (0xffff < uVar2) {
    uVar5 = 0xffffff82;
  }
  uVar1 = 0x80;
  if (0xff < uVar2) {
    uVar1 = uVar5;
  }
  if (uVar2 < 0x80) {
    uVar1 = uVar2;
  }
  lVar3 = FUN_0111b030(uVar1);
  uVar2 = param_1[1];
  uVar5 = 0xffffff81;
  if (0xffff < uVar2) {
    uVar5 = 0xffffff82;
  }
  uVar1 = 0x80;
  if (0xff < uVar2) {
    uVar1 = uVar5;
  }
  if (uVar2 < 0x80) {
    uVar1 = uVar2;
  }
  lVar4 = FUN_0111b030(uVar1);
  return lVar4 + lVar3;
}


