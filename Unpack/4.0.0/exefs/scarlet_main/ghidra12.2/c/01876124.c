/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01876124; name: FUN_01876124
 */


void FUN_01876124(undefined4 *param_1,char *param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = (int)*param_2;
  if (iVar4 < 0) {
    iVar4 = -0x80;
  }
  lVar2 = FUN_0111b030(iVar4);
  if ((ulong)param_3[1] < (ulong)(param_3[2] + lVar2)) {
    *param_1 = 0xd;
    return;
  }
  cVar1 = *param_2;
  cVar3 = cVar1;
  if (cVar1 < '\0') {
    cVar3 = -0x80;
  }
  *(char *)(*param_3 + param_3[2]) = cVar3;
  lVar2 = param_3[2];
  param_3[2] = lVar2 + 1;
  if (cVar1 < '\0') {
    *(char *)(*param_3 + lVar2 + 1) = *param_2;
    param_3[2] = param_3[2] + 1;
  }
  *param_1 = 0;
  return;
}


