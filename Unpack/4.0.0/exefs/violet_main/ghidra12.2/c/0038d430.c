/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


