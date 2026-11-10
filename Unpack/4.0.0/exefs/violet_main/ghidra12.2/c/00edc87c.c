/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00edc87c; name: FUN_00edc87c
 */


void FUN_00edc87c(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5)

{
  if ((param_4 & 1) == 0) {
    FUN_00edeb0c(param_2 + 0x30,0,param_3);
    *param_1 = 0;
    return;
  }
  FUN_00edd1a4(param_1,param_2 + 0x30,param_3,param_5);
  return;
}


