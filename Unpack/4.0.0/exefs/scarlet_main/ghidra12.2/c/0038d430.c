/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038d430; name: FUN_0038d430
 */


int FUN_0038d430(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    iVar1 = tolower((uint)*(byte *)(param_1 + lVar3));
    iVar2 = tolower((uint)*(byte *)(param_2 + lVar3));
    if (((lVar3 == -2) || (iVar2 == 0)) || (iVar1 == 0)) break;
    lVar3 = lVar3 + 1;
  } while (iVar1 == iVar2);
  return iVar1 - iVar2;
}


