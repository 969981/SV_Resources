/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013e3b6c; name: FUN_013e3b6c
 */


void FUN_013e3b6c(undefined8 param_1,int *param_2)

{
  ulong uVar1;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar1 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar1 == 0)) {
    FUN_013e3b98(param_1,0);
    return;
  }
  FUN_013e3b98(param_1,*(undefined2 *)((long)param_2 + uVar1));
  return;
}


