/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f815c; name: FUN_021f815c
 */


undefined4 FUN_021f815c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar2 = FUN_00dbf838(*(undefined8 *)(param_1 + 0x70));
  uVar3 = FUN_00dbfb7c(*(undefined8 *)(param_1 + 0x70));
  iVar4 = FUN_01539950(*(undefined8 *)(param_1 + 0x70));
  uVar5 = FUN_01539c9c(*(undefined8 *)(param_1 + 0x70));
  uVar1 = uVar3 ^ uVar2;
  if ((uVar1 & 0xfff0 ^ uVar1 >> 0x10) < 0x10) {
    uVar6 = 1;
    if ((uVar1 >> 0x10 ^ uVar2 & 0xffff) == (uVar3 & 0xffff)) {
      uVar6 = 2;
    }
    if (iVar4 == 0x22 || (uVar5 & 1) != 0) {
      uVar6 = 2;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


