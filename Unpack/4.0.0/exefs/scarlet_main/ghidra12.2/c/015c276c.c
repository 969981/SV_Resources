/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015c276c; name: FUN_015c276c
 */


void FUN_015c276c(long param_1,int param_2,uint param_3,int param_4)

{
  long lVar1;
  int *piVar2;
  ulong *puVar3;
  int local_18;
  int iStack_14;
  
  if (((param_2 != 0) && ((param_3 & 0xffff) != 0)) && (param_4 != 0)) {
    param_1 = param_1 + 8;
    local_18 = param_4;
    iStack_14 = param_2;
    lVar1 = FUN_019f8534(param_1,&local_18);
    if (lVar1 != 0) {
      lVar1 = FUN_010803d0(param_1,&local_18);
      if ((uint)*(ushort *)(lVar1 + 4) == (param_3 & 0xffff)) {
        piVar2 = (int *)FUN_010803d0(param_1,&local_18);
        param_4 = *piVar2;
        FUN_019f84bc(param_1,&local_18);
        local_18 = param_4;
      }
      else {
        param_4 = local_18;
      }
    }
    puVar3 = (ulong *)FUN_010803d0(param_1,&iStack_14);
    *puVar3 = CONCAT44(param_3,param_4) & 0xffffffffffff;
  }
  return;
}


