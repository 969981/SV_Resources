/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f45be8; name: FUN_00f45be8
 */


long FUN_00f45be8(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  lVar3 = FUN_00f45c30();
  uVar2 = *(ushort *)(param_1 + 0x8c);
  uVar5 = 0xffffff80;
  if (0xff < uVar2) {
    uVar5 = 0xffffff81;
  }
  uVar1 = (uint)uVar2;
  if (0x7f < uVar2) {
    uVar1 = uVar5;
  }
  lVar4 = FUN_0111b030(uVar1);
  return lVar3 + lVar4 + 0x8e;
}


