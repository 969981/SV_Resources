/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049b080; name: FUN_0049b080
 */


undefined8 FUN_0049b080(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = FUN_0049aca0(param_1,param_1[2]);
  if (lVar1 == 0) {
    FUN_00481380(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
    return 0;
  }
  *param_2 = lVar1;
  return 1;
}


