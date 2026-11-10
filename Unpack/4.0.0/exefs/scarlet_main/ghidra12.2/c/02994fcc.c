/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02994fcc; name: FUN_02994fcc
 */


undefined4 FUN_02994fcc(long param_1,int param_2,short param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x38);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    if ((*(int *)((long)plVar1 + 0x14) == param_2) && (*(short *)(plVar1 + 3) == param_3)) break;
    plVar1 = (long *)*plVar1;
  }
  return *(undefined4 *)(plVar1 + 2);
}


