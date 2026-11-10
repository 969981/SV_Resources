/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


