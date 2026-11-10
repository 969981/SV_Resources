/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019236f4; name: FUN_019236f4
 */


void FUN_019236f4(undefined4 *param_1,char *param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  
  iVar3 = (int)*param_2;
  if (iVar3 < 0) {
    iVar3 = -0x80;
  }
  lVar2 = FUN_0111b030(iVar3);
  if ((ulong)param_3[1] < (ulong)(param_3[2] + lVar2)) {
    uVar4 = 0xd;
  }
  else {
    cVar1 = *param_2;
    cVar5 = cVar1;
    if (cVar1 < '\0') {
      cVar5 = -0x80;
    }
    *(char *)(*param_3 + param_3[2]) = cVar5;
    lVar2 = param_3[2];
    uVar4 = 0;
    param_3[2] = lVar2 + 1;
    if (cVar1 < '\0') {
      *(char *)(*param_3 + lVar2 + 1) = *param_2;
      param_3[2] = param_3[2] + 1;
    }
  }
  *param_1 = uVar4;
  return;
}


