/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021360b8; name: FUN_021360b8
 */


void FUN_021360b8(undefined8 *param_1,long param_2)

{
  if ((*(long *)(param_2 + 0x78) == 0) || (*(short *)(*(long *)(param_2 + 0x78) + 0x1a) == 0)) {
    FUN_00ef8710(param_1,0);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00ca1a48(param_1);
  return;
}


