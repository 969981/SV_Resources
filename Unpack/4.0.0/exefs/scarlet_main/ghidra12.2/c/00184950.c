/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00184950; name: FUN_00184950
 */


int FUN_00184950(long param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = 0x40000000 / param_2;
  }
  lVar4 = 0;
  iVar3 = 0;
  do {
    piVar1 = (int *)(param_1 + lVar4);
    lVar4 = lVar4 + 4;
    iVar5 = *(int *)(PTR_DAT_047cb918 + (ulong)(*piVar1 * uVar2 >> 0x11) * 4) >> 5;
    if (0xaff < iVar5) {
      iVar5 = 0xb00;
    }
    iVar3 = iVar3 + iVar5 * *piVar1;
  } while (lVar4 != 0x400);
  return iVar3;
}


