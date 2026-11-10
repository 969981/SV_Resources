/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0292cec0; name: FUN_0292cec0
 */


undefined * FUN_0292cec0(undefined4 param_1,undefined4 *param_2)

{
  switch(param_1) {
  case 0:
    *param_2 = 1;
    return &DAT_045f3f20;
  case 1:
    *param_2 = 2;
    return &DAT_045f3f30;
  case 2:
    *param_2 = 2;
    return &DAT_045f3f50;
  case 3:
    *param_2 = 1;
    return &DAT_045f3f70;
  case 4:
    *param_2 = 1;
    return &DAT_045f3f80;
  default:
    *param_2 = 0;
    return (undefined *)0x0;
  }
}


