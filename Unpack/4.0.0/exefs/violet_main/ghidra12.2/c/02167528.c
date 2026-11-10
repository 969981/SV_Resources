/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02167528; name: FUN_02167528
 */


undefined8 FUN_02167528(undefined8 param_1,float *param_2,float *param_3,int *param_4)

{
  if (((((*param_2 * 1280.0) / 1920.0 <= (float)*param_4) &&
       ((float)*param_4 <= (*param_3 * 1280.0) / 1920.0)) &&
      ((param_3[1] * 720.0) / 1080.0 <= (float)param_4[1])) &&
     ((float)param_4[1] <= (param_2[1] * 720.0) / 1080.0)) {
    return 1;
  }
  return 0;
}


