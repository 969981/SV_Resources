/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029718c4; name: FUN_029718c4
 */


int FUN_029718c4(long param_1,short param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar6 = 399;
  if (0 < (int)uVar2) {
    uVar6 = uVar2 - 1;
  }
  if (uVar6 == uVar2) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    do {
      sVar3 = *(short *)(param_1 + (ulong)uVar6 * 0xc + 0x14);
      if (sVar3 == 0) {
        return iVar5;
      }
      if ((sVar3 == param_2) && (*(int *)(param_1 + (ulong)uVar6 * 0xc + 0xc) == param_3)) {
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar6 - 1;
      bVar1 = 0 < (int)uVar6;
      uVar6 = 399;
      if (bVar1) {
        uVar6 = uVar4;
      }
    } while (uVar6 != uVar2);
  }
  return iVar5;
}


