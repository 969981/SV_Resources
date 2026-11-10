/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d7f254; name: FUN_01d7f254
 */


void FUN_01d7f254(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (((*param_2 == 0) || (*(long *)(*param_2 + 8) == 0)) ||
     (uVar1 = FUN_01d7f2a4(), (uVar1 & 1) == 0)) {
    return;
  }
  FUN_00e92f1c(param_1,param_2);
  return;
}


