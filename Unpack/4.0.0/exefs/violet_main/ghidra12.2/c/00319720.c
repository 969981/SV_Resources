/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00319720; name: FUN_00319720
 */


void FUN_00319720(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0038c780(param_2 << 2);
  *param_1 = uVar1;
  uVar1 = FUN_0038c780(param_2 << 3);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  return;
}


