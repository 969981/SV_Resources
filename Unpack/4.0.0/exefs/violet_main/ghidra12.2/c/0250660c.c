/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0250660c; name: FUN_0250660c
 */


void FUN_0250660c(undefined1 param_1 [16],undefined4 param_2,undefined1 param_3 [16],
                 undefined8 *param_4)

{
  *(undefined4 *)(param_4 + 4) = param_2;
  param_4[1] = param_1._8_8_;
  *param_4 = param_1._0_8_;
  param_4[3] = param_3._8_8_;
  param_4[2] = param_3._0_8_;
  return;
}


