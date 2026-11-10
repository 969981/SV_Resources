/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f46774; name: FUN_00f46774
 */


void FUN_00f46774(int *param_1,long param_2,long *param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  int local_18 [2];
  
  *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
  param_3[2] = param_3[2] + 1;
  FUN_00f46824(local_18);
  if (local_18[0] == 0) {
    cVar1 = *(char *)(param_2 + 0x8e);
    cVar2 = cVar1;
    if (cVar1 < '\0') {
      cVar2 = -0x80;
    }
    *(char *)(*param_3 + param_3[2]) = cVar2;
    lVar3 = param_3[2];
    param_3[2] = lVar3 + 1;
    if (cVar1 < '\0') {
      *(undefined1 *)(*param_3 + lVar3 + 1) = *(undefined1 *)(param_2 + 0x8e);
      param_3[2] = param_3[2] + 1;
    }
    *param_1 = 0;
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


