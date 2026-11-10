/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c7140; name: FUN_007c7140
 */


void FUN_007c7140(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  
  bVar4 = param_3 != 0;
  bVar5 = param_2 != 0;
  bVar3 = param_4 != 0;
  bVar2 = param_5 != 0;
  if (((!bVar4 && !bVar5) && !bVar3) && !bVar2) {
    param_2 = 1;
  }
  iVar1 = 0x6c078967;
  if (((bVar4 || bVar5) || bVar3) || bVar2) {
    iVar1 = param_3;
  }
  *param_1 = param_2;
  param_1[1] = iVar1;
  iVar1 = 0x48077044;
  iVar6 = 0x714acb41;
  if (((bVar4 || bVar5) || bVar3) || bVar2) {
    iVar1 = param_5;
    iVar6 = param_4;
  }
  param_1[2] = iVar6;
  param_1[3] = iVar1;
  return;
}


