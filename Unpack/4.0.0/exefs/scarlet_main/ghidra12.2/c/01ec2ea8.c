/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec2ea8; name: FUN_01ec2ea8
 */


long FUN_01ec2ea8(char *param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (int)*param_1;
  if (iVar5 < 0) {
    iVar5 = -0x80;
  }
  lVar3 = FUN_0111b030(iVar5);
  uVar2 = *(ushort *)(param_1 + 2);
  uVar6 = 0xffffff80;
  if (0xff < uVar2) {
    uVar6 = 0xffffff81;
  }
  uVar1 = (uint)uVar2;
  if (0x7f < uVar2) {
    uVar1 = uVar6;
  }
  lVar4 = FUN_0111b030(uVar1);
  return lVar4 + lVar3;
}


