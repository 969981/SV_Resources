/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01320390; name: FUN_01320390
 */


bool FUN_01320390(long param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  if (5 < *(ulong *)(param_1 + 0x10)) {
    pbVar3 = *(byte **)(param_1 + 8);
    iVar1 = toupper(0x50);
    iVar2 = toupper((uint)*pbVar3);
    if (iVar1 == iVar2) {
      iVar1 = toupper(0x4c);
      iVar2 = toupper((uint)pbVar3[1]);
      if (iVar1 == iVar2) {
        iVar1 = toupper(0x41);
        iVar2 = toupper((uint)pbVar3[2]);
        if (iVar1 == iVar2) {
          iVar1 = toupper(0x59);
          iVar2 = toupper((uint)pbVar3[3]);
          if (iVar1 == iVar2) {
            iVar1 = toupper(0x5f);
            iVar2 = toupper((uint)pbVar3[4]);
            return iVar1 == iVar2;
          }
        }
      }
    }
  }
  return false;
}


