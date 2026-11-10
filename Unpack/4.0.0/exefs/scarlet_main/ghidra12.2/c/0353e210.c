/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353e210; name: sched_yield
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sched_yield(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sched_yield_047caa00)();
  return iVar1;
}


