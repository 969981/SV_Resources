/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322ed40; name: FUN_0322ed40
 */


void FUN_0322ed40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[4] = 0;
  param_1[2] = param_4;
  param_1[3] = param_5;
  if ((param_6 & 1) != 0) {
    param_1[4] = DAT_048855b0;
    DAT_048855b0 = param_1;
  }
  return;
}


