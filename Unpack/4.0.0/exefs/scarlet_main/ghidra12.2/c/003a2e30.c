/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a2e30; name: FUN_003a2e30
 */


long * FUN_003a2e30(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if ((long *)*param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  do {
    plVar1 = plVar2;
    plVar2 = (long *)plVar1[2];
    if (plVar2 == (long *)0x0) goto LAB_003a2e58;
  } while (*plVar1 != *param_2);
  plVar2 = plVar1;
LAB_003a2e58:
  if (*plVar1 != *param_2) {
    plVar1 = plVar2;
  }
  return plVar1;
}


