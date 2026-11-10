/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001fa9b4; name: FUN_001fa9b4
 */


undefined8 FUN_001fa9b4(long *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return 0xffffffff;
    }
    if (*plVar1 == param_2) break;
    plVar1 = (long *)plVar1[2];
  }
  FUN_001cb600(param_1,plVar1,0);
  return 0;
}


