/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cd5a0; name: FUN_007cd5a0
 */


void FUN_007cd5a0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    FUN_007e510c(*(undefined8 *)(param_1 + 0x28));
  }
  FUN_007ecc70(*(long *)PTR_DAT_047d0860 + 0x10);
  return;
}


