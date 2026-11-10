/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0353153c; name: FUN_0353153c
 */


bool FUN_0353153c(long param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return false;
  }
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_3;
  iVar1 = param_3;
  if (iVar2 <= param_3) {
    iVar1 = iVar2;
  }
  *param_4 = iVar1;
  return param_3 <= iVar2;
}


