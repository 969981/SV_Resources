/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078fa50; name: FUN_0078fa50
 */


undefined8 FUN_0078fa50(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    for (plVar1 = (long *)param_1[1]; plVar1 != param_1; plVar1 = (long *)plVar1[1]) {
      if (plVar1 == param_2) {
        return 1;
      }
    }
  }
  return 0;
}


