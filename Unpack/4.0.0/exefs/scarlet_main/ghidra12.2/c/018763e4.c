/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018763e4; name: FUN_018763e4
 */


void FUN_018763e4(int *param_1,long param_2,long *param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  undefined8 local_38;
  int local_18 [2];
  
  local_38 = 9;
  FUN_0111b0ac(local_18,&local_38,param_3);
  if (local_18[0] == 0) {
    FUN_018764fc(&local_38,param_2,param_3);
    if ((int)local_38 == 0) {
      cVar1 = *(char *)(param_2 + 0x1e);
      cVar2 = cVar1;
      if (cVar1 < '\0') {
        cVar2 = -0x80;
      }
      *(char *)(*param_3 + param_3[2]) = cVar2;
      lVar3 = param_3[2] + 1;
      param_3[2] = lVar3;
      if (cVar1 < '\0') {
        *(undefined1 *)(*param_3 + lVar3) = *(undefined1 *)(param_2 + 0x1e);
        lVar3 = param_3[2] + 1;
        param_3[2] = lVar3;
      }
      cVar1 = *(char *)(param_2 + 0x1f);
      cVar2 = cVar1;
      if (cVar1 < '\0') {
        cVar2 = -0x80;
      }
      *(char *)(*param_3 + lVar3) = cVar2;
      lVar3 = param_3[2];
      param_3[2] = lVar3 + 1;
      if (cVar1 < '\0') {
        *(undefined1 *)(*param_3 + lVar3 + 1) = *(undefined1 *)(param_2 + 0x1f);
        param_3[2] = param_3[2] + 1;
      }
      FUN_0111b0ac(param_1,param_2 + 0x20,param_3);
    }
    else {
      *param_1 = (int)local_38;
    }
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


