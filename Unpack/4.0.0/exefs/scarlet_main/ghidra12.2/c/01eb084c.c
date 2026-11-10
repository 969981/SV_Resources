/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eb084c; name: FUN_01eb084c
 */


void FUN_01eb084c(char *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  
  cVar2 = *param_1;
  if (cVar2 < -0x40) {
    cVar2 = -0x7c;
  }
  *(char *)(*param_2 + param_2[2]) = cVar2;
  lVar1 = param_2[2] + 1;
  param_2[2] = lVar1;
  if (cVar2 == -0x7c) {
    *(char *)(*param_2 + lVar1) = *param_1;
    lVar1 = param_2[2] + 1;
    param_2[2] = lVar1;
  }
  *(undefined1 *)(*param_2 + lVar1) = 0xb9;
  param_2[2] = param_2[2] + 1;
  FUN_00f46670(0xb9,param_1 + 8);
  return;
}


