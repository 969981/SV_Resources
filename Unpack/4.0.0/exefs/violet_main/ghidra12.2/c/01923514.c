/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01923514; name: FUN_01923514
 */


void FUN_01923514(int *param_1,char *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_38;
  int local_18 [2];
  
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
  local_38 = 1;
  FUN_0111b0ac(local_18,&local_38,param_3);
  if (local_18[0] == 0) {
    FUN_01923614(param_1,param_2,param_3);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


