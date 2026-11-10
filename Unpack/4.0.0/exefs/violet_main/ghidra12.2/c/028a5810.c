/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a5810; name: FUN_028a5810
 */


void FUN_028a5810(undefined8 param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,
                 long *param_5,undefined8 *param_6)

{
  while (param_2 != param_4) {
    if ((undefined8 *)*param_3 == param_4) {
      param_3 = param_3 + -1;
      param_4 = (undefined8 *)(*param_3 + 0x1000);
    }
    param_4 = param_4 + -1;
    if ((undefined8 *)*param_5 == param_6) {
      param_5 = param_5 + -1;
      param_6 = (undefined8 *)(*param_5 + 0x1000);
    }
    param_6 = param_6 + -1;
    *param_6 = *param_4;
  }
  return;
}


