/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0012d860; name: FUN_0012d860
 */


int FUN_0012d860(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = param_1 - 1;
  if (uVar2 < 0x100) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    uVar4 = uVar2;
    do {
      uVar2 = uVar4 >> 8;
      iVar3 = iVar3 + 8;
      uVar1 = uVar4 >> 0x10;
      uVar4 = uVar2;
    } while (uVar1 != 0);
  }
  return iVar3 + (uint)(byte)(&DAT_03cb5e2a)[uVar2];
}


