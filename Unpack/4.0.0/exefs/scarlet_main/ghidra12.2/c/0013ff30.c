/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013ff30; name: FUN_0013ff30
 */


undefined4 FUN_0013ff30(double *param_1,double *param_2,int param_3)

{
  bool bVar1;
  double dVar2;
  
  if (*(char *)(param_1 + 1) == '\x03') {
    dVar2 = *param_1;
  }
  else {
    if (*(char *)(param_1 + 1) != '\x13') {
      return 0;
    }
    dVar2 = (double)(long)*param_1;
    if (dVar2 != *param_1) {
      if (param_3 == 0) {
        return 0;
      }
      if (param_3 == 2) {
        dVar2 = dVar2 + 1.0;
      }
    }
    bVar1 = false;
    if ((-9.223372036854776e+18 <= dVar2) && (bVar1 = false, !NAN(dVar2))) {
      bVar1 = dVar2 < 9.223372036854776e+18;
    }
    if (!bVar1) {
      return 0;
    }
    dVar2 = (double)(long)dVar2;
  }
  *param_2 = dVar2;
  return 1;
}


