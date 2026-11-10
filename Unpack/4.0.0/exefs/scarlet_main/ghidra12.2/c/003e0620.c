/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e0620; name: FUN_003e0620
 */


int FUN_003e0620(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x100;
  if (uVar1 == (*(uint *)(param_2 + 4) & 0x100)) {
    iVar2 = FUN_003df4b0();
    iVar3 = -iVar2;
    if (uVar1 == 0) {
      iVar3 = iVar2;
    }
    return iVar3;
  }
  iVar3 = -1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  return iVar3;
}


