/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f703a0; name: FUN_01f703a0
 */


bool FUN_01f703a0(byte *param_1,char *param_2)

{
  size_t sVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  
  sVar4 = strlen(param_2);
  sVar1 = (ulong)(*param_1 >> 1);
  if ((*param_1 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  if (sVar4 == sVar1) {
    iVar3 = FUN_01f70600(param_1,param_2,sVar4);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


