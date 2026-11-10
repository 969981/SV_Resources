/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019c3824; name: FUN_019c3824
 */


bool FUN_019c3824(int *param_1,long *param_2,ushort param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  if ((param_3 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar3 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_3), uVar3 != 0)) {
    iVar2 = FUN_019c387c(param_2,(long)param_1 + (uVar3 - *param_2));
    bVar1 = iVar2 != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


