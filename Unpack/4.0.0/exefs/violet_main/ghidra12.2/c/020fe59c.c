/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020fe59c; name: FUN_020fe59c
 */


undefined8 FUN_020fe59c(long param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *param_2;
  if (iVar1 == 2) {
    FUN_0132746c(param_1,0,0);
    return 1;
  }
  if (iVar1 == 1) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x218) + 0x730))();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (**(code **)(**(long **)(param_1 + 0x218) + 0x728))();
  }
  *param_2 = *param_2 + 1;
  return 0;
}


