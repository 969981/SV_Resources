/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052ced0; name: FUN_0052ced0
 */


float FUN_0052ced0(double param_1)

{
  if (3.4028234663852886e+38 < param_1) {
    if (3.4028235677973366e+38 < param_1) {
      return INFINITY;
    }
    return 3.4028235e+38;
  }
  if (param_1 < -3.4028234663852886e+38) {
    if (param_1 < -3.4028235677973366e+38) {
      return -INFINITY;
    }
    return -3.4028235e+38;
  }
  return (float)param_1;
}


