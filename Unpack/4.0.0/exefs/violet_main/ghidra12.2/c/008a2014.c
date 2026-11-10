/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a2014; name: FUN_008a2014
 */


void FUN_008a2014(long param_1,undefined8 param_2)

{
  FUN_008a1520();
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_00896e98();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  FUN_008a1e98(param_1,param_2);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00896e98();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if ((*(byte *)(param_1 + 0x49) >> 5 & 1) != 0) {
    FUN_00896e98(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


