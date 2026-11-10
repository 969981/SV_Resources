/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004c8f30; name: FUN_004c8f30
 */


void FUN_004c8f30(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_004c8f30(param_1,*param_2);
  FUN_004c8f30(param_1,param_2[1]);
  if (param_2[7] != 0) {
    param_2[8] = param_2[7];
    FUN_0049e790(PTR_LAB_047cba48);
  }
  if (param_2[4] != 0) {
    param_2[5] = param_2[4];
    FUN_0049e790(PTR_LAB_047cba48);
  }
  FUN_0049e790(PTR_LAB_047cba48,param_2);
  return;
}


