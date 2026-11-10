/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e9ec50; name: FUN_00e9ec50
 */


void FUN_00e9ec50(double param_1,undefined8 param_2,long param_3)

{
  double dVar1;
  
  dVar1 = (double)FUN_00121b70();
  if (param_3 != 0x88) {
    FUN_00123a70(param_2,"core and library have incompatible numeric types");
    return;
  }
  if (dVar1 == param_1) {
    return;
  }
  FUN_00123a70(param_1,dVar1,param_2,"version mismatch: app. needs %f, Lua core provides %f");
  return;
}


