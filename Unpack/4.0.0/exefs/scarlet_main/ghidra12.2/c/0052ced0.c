/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


