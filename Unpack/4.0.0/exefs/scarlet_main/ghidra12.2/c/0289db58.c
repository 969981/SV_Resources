/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289db58; name: FUN_0289db58
 */


void FUN_0289db58(int *param_1,char *param_2,long *param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  undefined8 local_38;
  int local_18 [2];
  
  local_38 = 1;
  FUN_0111b0ac(local_18,&local_38);
  if (local_18[0] == 0) {
    cVar1 = *param_2;
    cVar2 = cVar1;
    if (cVar1 < '\0') {
      cVar2 = -0x80;
    }
    *(char *)(*param_3 + param_3[2]) = cVar2;
    lVar3 = param_3[2];
    param_3[2] = lVar3 + 1;
    if (cVar1 < '\0') {
      *(char *)(*param_3 + lVar3 + 1) = *param_2;
      param_3[2] = param_3[2] + 1;
    }
    *param_1 = 0;
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


