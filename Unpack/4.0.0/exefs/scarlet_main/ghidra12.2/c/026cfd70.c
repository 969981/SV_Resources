/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026cfd70; name: FUN_026cfd70
 */


undefined8 FUN_026cfd70(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_026cfdc0(param_1,1);
  plVar2 = (long *)FUN_026cfdc0(param_1,2);
  FUN_00c419e0(param_1,*plVar1 == *plVar2);
  return 1;
}


