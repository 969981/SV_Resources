/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dcd22c; name: FUN_01dcd22c
 */


undefined8 FUN_01dcd22c(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *(long *)(param_1 + 0x4a8);
  iVar1 = *(int *)(lVar3 + 8);
  if (*(int *)(lVar3 + 0x1c) == 0) {
    iVar4 = *(int *)(lVar3 + 0xc);
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = iVar1 / iVar4;
    }
    iVar4 = iVar1 - iVar2 * iVar4;
  }
  else {
    iVar2 = *(int *)(lVar3 + 0x10);
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = iVar1 / iVar2;
    }
    iVar2 = iVar1 - iVar4 * iVar2;
  }
  return CONCAT44(iVar2,iVar4);
}


