/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e944c; name: FUN_004e944c
 */


void FUN_004e944c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_004e944c(param_1,*param_2);
  FUN_004e944c(param_1,param_2[1]);
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_2[6]);
  }
  FUN_0049e790(PTR_LAB_047cba48,param_2);
  return;
}


