/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f6ea4c; name: FUN_00f6ea4c
 */


void FUN_00f6ea4c(undefined4 *param_1,char *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)*param_2;
  if (iVar2 < 0) {
    iVar2 = -0x80;
  }
  lVar1 = FUN_0111b030(iVar2);
  if ((ulong)param_3[1] < lVar1 + param_3[2] + 2U) {
    *param_1 = 0xd;
    return;
  }
  *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
  param_3[2] = param_3[2] + 1;
  FUN_00f6ed74(param_1,param_2,param_3);
  return;
}


