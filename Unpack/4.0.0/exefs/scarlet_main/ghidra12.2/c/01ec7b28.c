/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec7b28; name: FUN_01ec7b28
 */


long FUN_01ec7b28(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  
  lVar2 = FUN_01ec7c88();
  iVar5 = (int)*(char *)(param_1 + 4);
  if (iVar5 < 0) {
    iVar5 = -0x80;
  }
  lVar3 = FUN_0111b030(iVar5);
  uVar7 = *(ulong *)(param_1 + 8);
  uVar6 = 0xffffff82;
  if (uVar7 >> 0x20 != 0) {
    uVar6 = 0xffffff83;
  }
  uVar1 = 0x81;
  if (0xffff < uVar7) {
    uVar1 = uVar6;
  }
  uVar6 = 0x80;
  if (0xff < uVar7) {
    uVar6 = uVar1;
  }
  if (uVar7 < 0x80) {
    uVar6 = (undefined4)uVar7;
  }
  lVar4 = FUN_0111b030(uVar6);
  return lVar2 + lVar3 + lVar4 + 2;
}


