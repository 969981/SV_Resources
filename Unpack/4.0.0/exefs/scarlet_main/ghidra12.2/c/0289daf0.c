/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289daf0; name: FUN_0289daf0
 */


void FUN_0289daf0(char *param_1,long *param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  
  cVar1 = *param_1;
  cVar2 = cVar1;
  if (cVar1 < '\0') {
    cVar2 = -0x80;
  }
  *(char *)(*param_2 + param_2[2]) = cVar2;
  lVar3 = param_2[2] + 1;
  param_2[2] = lVar3;
  if (cVar1 < '\0') {
    *(char *)(*param_2 + lVar3) = *param_1;
    lVar3 = param_2[2] + 1;
    param_2[2] = lVar3;
  }
  *(undefined1 *)(*param_2 + lVar3) = 0xbc;
  param_2[2] = param_2[2] + 1;
  FUN_00f46bac(param_1 + 1);
  return;
}


